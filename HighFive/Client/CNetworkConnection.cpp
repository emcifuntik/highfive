#include "stdafx.h"

CNetworkConnection *CNetworkConnection::singleInstance = nullptr;

CNetworkConnection::CNetworkConnection()
{
	client = RakNet::RakPeerInterface::GetInstance();
}

CNetworkConnection::~CNetworkConnection()
{
	
}

CNetworkConnection * CNetworkConnection::Get()
{
	if (!singleInstance)
		singleInstance = new CNetworkConnection();
	return singleInstance;
}

bool CNetworkConnection::Connect(std::string host, unsigned short port)
{
	if (!host.empty() && port)
	{
		RakNet::SocketDescriptor socketDescriptor(0, 0);

		socketDescriptor.socketFamily = AF_INET;
		client->Startup(8, &socketDescriptor, 1);
		client->SetOccasionalPing(true);
		connection = client->Connect(host.c_str(), port, 0, 0);
		RakAssert(connection == RakNet::CONNECTION_ATTEMPT_STARTED);
		bConnected = true;
		CRPCPlugin::Get();
		return true;
	}
	return false;
}

void CNetworkConnection::Disconnect()
{
	bConnected = false;
	client->Shutdown(300);
	CChat::Get()->Clear();
	CChat::Get()->AddChatMessage("~b~Disconnected");
	CNetworkPlayer::Clear();
}

void CNetworkConnection::Tick()
{
	for (packet = client->Receive(); packet; client->DeallocatePacket(packet), packet = client->Receive()) {
		unsigned char packetID = packet->data[0];
		RakNet::BitStream bsIn(packet->data, packet->length, false);
		RakNet::BitStream bsOut;
		bsIn.IgnoreBytes(sizeof(unsigned char));

		switch (packetID) {
			case ID_CONNECTION_REQUEST_ACCEPTED:
			{
				CLocalPlayer::Get()->FreezePosition(false);
				CLocalPlayer::Get()->SetVisible(true);
				RakString playerName(CConfig::Get()->sNickName.c_str());
				bsOut.Write((unsigned char)ID_CONNECT_TO_SERVER);
				bsOut.Write(playerName);
				CLocalPlayer::Get()->SetMoney(0);
				CLocalPlayer::Get()->newModel = GAMEPLAY::GET_HASH_KEY((char*)(models[(GetTickCount() % 30) + 100]));
				Hash adder = Utils::Hash("voltic");
				CNetworkVehicle *veh = new CNetworkVehicle(adder, -646.889892578125, -730.2916870117188, 29.687416076660156, 0.f);

				client->Send(&bsOut, HIGH_PRIORITY, RELIABLE_ORDERED, 0, packet->systemAddress, false);
				break;
			}
			case ID_CONNECTION_ATTEMPT_FAILED:
			{
				CLocalPlayer::Get()->SetMoney(0);
				CChat::Get()->AddChatMessage("~BLIP_INFO_ICON~Not connected");
				break;
			}
			case ID_NO_FREE_INCOMING_CONNECTIONS:
			{
				CLocalPlayer::Get()->SetMoney(0);
				CChat::Get()->AddChatMessage("~BLIP_INFO_ICON~Server is full!");
				break;
			}
			case ID_DISCONNECTION_NOTIFICATION:
			{
				CLocalPlayer::Get()->SetMoney(0);

				CChat::Get()->AddChatMessage("~BLIP_INFO_ICON~Connection closed!");
				break;
			}
			case ID_CONNECTION_LOST:
			{
				CLocalPlayer::Get()->SetMoney(0);
				CChat::Get()->AddChatMessage("~BLIP_INFO_ICON~Connection Lost!");
				break;
			}
			case ID_CONNECTION_BANNED:
			{
				CLocalPlayer::Get()->SetMoney(0);
				CChat::Get()->AddChatMessage("~BLIP_INFO_ICON~You are banned!");
				break;
			}
			case ID_CONNECT_TO_SERVER:
			{
				bEstablished = true;
				break;
			}
			case ID_SEND_PLAYER_DATA:
			{
				OnFootSyncData data;
				RakNet::RakNetGUID playerGUID;
				RakNet::RakString rsName;
				bsIn.Read(playerGUID);
				bsIn.Read(rsName);
				bsIn.Read(data);
				CNetworkPlayer::hFutureModel = data.hModel;
				CNetworkPlayer *remotePlayer = CNetworkPlayer::GetByGUID(playerGUID);
				if(rsName.GetLength())
					remotePlayer->SetName(std::string(rsName.C_String()));
				remotePlayer->SetOnFootData(data, 100);
				if (data.bShooting)
					remotePlayer->Interpolate();
				break;
			}
			case ID_SEND_VEHICLE_DATA:
			{
				break;
			}
			case ID_SEND_TASKS:
			{
				RakNet::RakNetGUID playerGUID;
				bsIn.Read(playerGUID);
				CNetworkPlayer * player = CNetworkPlayer::GetByGUID(playerGUID);
				std::vector<TaskPair> ClonedTasks;
				int parentTaskID = -1;
				if (player)
				{
					int tasks;
					bsIn.Read(tasks);
					for (int i = 0; i < tasks; i++)
					{
						unsigned short taskID;
						bsIn.Read(taskID);
						unsigned int size;
						bsIn.Read(size);

						int bytesSize = (size % 8) ? (size / 8 + 1) : (size / 8);
						unsigned char* taskInfo = new unsigned char[bytesSize];
						bsIn.ReadBits(taskInfo, size);
						rageBuffer data;
						MemoryHook::call<void, rageBuffer*>((*GTA::CAddress::Get())[INIT_BUFFER], &data);
						MemoryHook::call<void, rageBuffer*, unsigned char*, int, int>((*GTA::CAddress::Get())[INIT_READ_BUFFER], &data, taskInfo, size, 0);
						CSerialisedFSMTaskInfo* serTask = MemoryHook::call<CSerialisedFSMTaskInfo*, unsigned int>((*GTA::CAddress::Get())[CREATE_TASKINFO_BY_ID], taskID);
						serTask->Read(&data);
						ClonedTasks.push_back({ serTask, taskID });
						delete[size] taskInfo;
						if (parentTaskID == -1)
							parentTaskID = taskID;
					}
					if (parentTaskID != -1)
					{
						if (!player->pedHandler->TasksPtr->PrimaryTasks->GetTaskByID(parentTaskID))
						{
							GTA::CTask *parentTask = nullptr;
							GTA::CTask *cursorTask = nullptr;
							for each (auto cloned in ClonedTasks)
							{
								if (!parentTask)
								{
									parentTask = (GTA::CTask*)cloned.task->GetTask();
									parentTask->Deserialize(cloned.task);
									cursorTask = parentTask;
								}
								else
								{
									GTA::CTask *newTask = (GTA::CTask*)cloned.task->GetTask();
									newTask->Deserialize(cloned.task);
									cursorTask->NextSubTask = newTask;
									cursorTask = newTask;
								}
							}
							player->AssignTask(parentTask);
						}
						else
						{
							for each (auto cloned in ClonedTasks)
							{
								auto task = player->pedHandler->TasksPtr->PrimaryTasks->GetTaskByID(cloned.taskID);
								if (task)
								{
									task->Deserialize(cloned.task);
								}
							}
						}
						for each (auto cloned in ClonedTasks)
							rage::sysMemAllocator::Get()->free((void*)cloned.task, rage::HEAP_TASK_CLONE);
					}
				}
				break;
			}
			case ID_PLAYER_LEFT:
			{
				RakNet::RakNetGUID guid;
				bsIn.Read(guid);
				CNetworkPlayer::DeleteByGUID(guid);
				break;
			}
			default:
			{
				std::stringstream ss;
				ss << "[RakNet] Unknown message id: " << (int)packet->data[0] << ", message: " << packet->data;
				CChat::Get()->AddChatMessage(ss.str(), { 255, 100, 100, 255 });
				break;
			}
		}
	}
}
