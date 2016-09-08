#pragma once

enum
{
	CWORLD_ADDRESS,
	LANG_CHANGE,
	COLOR_ADDRESS,
	GET_TASK_BY_ID,
	VEHICLE_FACTORY,
	PED_FACTORY,
	DISABLE_NORTH_BLIP,
	INITIALIZE_ONLINE,
	DISABLE_PAUSE_ESC,
	DISABLE_VEH_POPULATION1,
	DISABLE_VEH_POPULATION4,
	CRASH_LOAD_MODELS_TOO_QUICKLY,
	INTENTIONAL_CRASH,
	VAR_VEHICLE_DENSITY1,
	VAR_VEHICLE_DENSITY2,
	VAR_VEHICLE_DENSITY3,
	VAR_VEHICLE_DENSITY_NOP,
	PED_DENSITY1,
	PED_DENSITY2,
	PED_DENSITY3,
	PED_DENSITY4,
	PED_DENSITY_NOP,
	DISABLE_LOGO,
	SHOW_TOOL_TIPS,
	SOCIAL_CLUB_NEWS,
	LOAD_SCREENS,
	LOAD_SINGLE_PLAYER1,
	LOAD_SINGLE_PLAYER2,
	GAME_VIEWPORT,
	REPLAY_INTERFACES,
	GTAMP_NOP1,
	GTAMP_NOP2,
	GTAMP_NOP3,
	INIT_ONLINE_COMPONENTS,
	ABILITY_BAR_VISIBLITY,
	MULTIPLAYER_MENU,
	PED_CHANGE_MODEL,
	PED_TASK_MOVE_TO_COORD,
	PED_TASK_AIM_AT_COORD_AND_STAND_STILL,
	PED_TASK_AIM_AT_COORD_AND_MOVE_TO_COORD,
	RENDERING_TOGGLE_LASER_SIGHT,
	DISABLE_WANTED_GENERATION_1,
	DISABLE_WANTED_GENERATION_2,
	SOME_STRANGE_HOOK,
	CREATE_NETWORK_EVENT_BINDINGS,
	LOAD_NEW_GAME,
	OPEN_CHEAT_WINDOW,
	RESET_VEHICLE_DENSITY_LAST_FRAME,
	SET_CLOCK_FORWARD_AFTER_DEATH,
	DISABLE_LOADING_MP_DLC_CONTENT,
	CREATE_TASKINFO_BY_ID,
	INIT_BUFFER,
	INIT_READ_BUFFER,
	INIT_WRITE_BUFFER,

	ADDR_COUNT
};

namespace GTA
{
	class CAddress
	{
		CAddress();
		static CAddress* singleInstance;
		int32_t addresses[ADDR_COUNT];
	public:
		static CAddress* Get()
		{
			if (!singleInstance)
				singleInstance = new CAddress();
			return singleInstance;
		}

		int32_t operator[](int addrNr)
		{
			if (addrNr >= ADDR_COUNT)
				return 0;
			else
				return addresses[addrNr];
		}
	};
};