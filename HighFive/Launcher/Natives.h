#pragma once

namespace PLAYER
{
	static Ped GET_PLAYER_PED(_Player player) { return invoke<Ped>(0x21F191D9AFF98B5E, player); } // 0x43A66C31C68491C0 0x6E31E993
	static Ped GET_PLAYER_PED_SCRIPT_INDEX(_Player player) { return invoke<Ped>(0xF220C8EB1E04AAE8, player); } // 0x50FAC3A3E030A6E1 0x6AC64990
	static void SET_PLAYER_MODEL(_Player player, Hash model) { invoke<Void>(0x01BA4B2EF2259D85, player, model); } // 0x00A1CADD00108836 0x774A4C54
	static void CHANGE_PLAYER_PED(_Player player, Ped ped, BOOL b1, BOOL b2) { invoke<Void>(0x3A4CF7783857BC91, player, ped, b1, b2); } // 0x048189FAC643DEEE 0xBE515485
	static void GET_PLAYER_RGB_COLOUR(_Player player, int* r, int* g, int* b) { invoke<Void>(0x8C874A08F75E999C, player, r, g, b); } // 0xE902EF951DCE178F 0x6EF43BBB
	static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x0241BEC3C6B78A9A); } // 0x407C7F91DDB46C16 0x4C1B8867
	static int GET_PLAYER_TEAM(_Player player) { return invoke<int>(0x10B1B072E9514664, player); } // 0x37039302F4E0A008 0x9873E404
	static void SET_PLAYER_TEAM(_Player player, int team) { invoke<Void>(0x5333F7CD408B341F, player, team); } // 0x0299FA38396A4940 0x725ADCF2
	static char* GET_PLAYER_NAME(_Player player) { return invoke<char*>(0xCF66111B26743875, player); } // 0x6D0DE6A7B5DA71F8 0x406B4B20
	static float GET_WANTED_LEVEL_RADIUS(_Player player) { return invoke<float>(0xF116017DA5887F63, player); } // 0x085DEB493BE80812 0x1CF7D7DA
	static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(_Player player) { return invoke<Vector3>(0xDB6871B0E6B263ED, player); } // 0x0C92BA89F1AF26F8 0x821F2D2C
	static void SET_PLAYER_WANTED_CENTRE_POSITION(_Player player, float x, float y, float z) { invoke<Void>(0x17FF6B32CB930915, player, x, y, z); } // 0x520E541A97A13354 0xF261633A
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0x809129A765293863, wantedLevel); } // 0xFDD179EAF45B556C 0xD9783F6B
	static void SET_PLAYER_WANTED_LEVEL(_Player player, int wantedLevel, BOOL p2) { invoke<Void>(0x00684761770DCBF1, player, wantedLevel, p2); } // 0x39FF19C64EF7DA5B 0xB7A0914B
	static void SET_PLAYER_WANTED_LEVEL_NO_DROP(_Player player, int wantedLevel, BOOL p2) { invoke<Void>(0x4855122D864556E5, player, wantedLevel, p2); } // 0x340E61DE7F471565 0xED6F44F5
	static void SET_PLAYER_WANTED_LEVEL_NOW(_Player player, BOOL p1) { invoke<Void>(0xA3ED6851314A3DDB, player, p1); } // 0xE0A7D1E497FFCD6F 0xAF3AFD83
	static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(_Player player) { return invoke<BOOL>(0x3161812BC0339171, player); } // 0xAFAF86043E5874E9 0xE13A71C7
	static BOOL ARE_PLAYER_STARS_GREYED_OUT(_Player player) { return invoke<BOOL>(0x2D6A3B53CD360E9B, player); } // 0x0A6EB355EE14A2DB 0x5E72AB72
	static void SET_DISPATCH_COPS_FOR_PLAYER(_Player player, BOOL toggle) { invoke<Void>(0x739B59A49B3FF88C, player, toggle); } // 0xDB172424876553F4 0x48A18913
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(_Player player, int wantedLevel) { return invoke<BOOL>(0xBD7EFE00EBB42D77, player, wantedLevel); } // 0x238DB2A2C23EE9EF 0x589A2661
	static void CLEAR_PLAYER_WANTED_LEVEL(_Player player) { invoke<Void>(0x1BD6EE6C1F72D17E, player); } // 0xB302540597885499 0x54EA5BCC
	static BOOL IS_PLAYER_DEAD(_Player player) { return invoke<BOOL>(0xB9F40AFFEEE41647, player); } // 0x424D4687FA1E5652 0x140CA5A8
	static BOOL IS_PLAYER_PRESSING_HORN(_Player player) { return invoke<BOOL>(0x285D703AF51064E1, player); } // 0xFA1E2BF8B10598F9 0xED1D1662
	static void SET_PLAYER_CONTROL(_Player player, BOOL toggle, int possiblyFlags) { invoke<Void>(0xFDEC0B505BCB00C0, player, toggle, possiblyFlags); } // 0x8D32347D6D4C40A2 0xD17AFCD8
	static int GET_PLAYER_WANTED_LEVEL(_Player player) { return invoke<int>(0x7DC70BB637724B43, player); } // 0xE28E54788CE8F12D 0xBDCDD163
	static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0xCF03D9C8A7F1577C, maxWantedLevel); } // 0xAA5F02DB48D704B9 0x665A06F5
	static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0xF4F1B11D53611A2E, toggle); } // 0x43286D561B72B8BF 0x8E114B10
	static void SET_POLICE_IGNORE_PLAYER(_Player player, BOOL toggle) { invoke<Void>(0x4044446FF404F021, player, toggle); } // 0x32C62AA929C2DA6A 0xE6DE71B7
	static BOOL IS_PLAYER_PLAYING(_Player player) { return invoke<BOOL>(0xC0691D80D21C989D, player); } // 0x5E9564D8246B909A 0xE15D777F
	static void SET_EVERYONE_IGNORE_PLAYER(_Player player, BOOL toggle) { invoke<Void>(0xA28FB996DF5377EF, player, toggle); } // 0x8EEDA153AD141BA4 0xC915285E
	static void SET_ALL_RANDOM_PEDS_FLEE(_Player player, BOOL toggle) { invoke<Void>(0x1C491D82EC5FDAD5, player, toggle); } // 0x056E0FE8534C2949 0x49EAE968
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(_Player player) { invoke<Void>(0xF0B830D304A5232C, player); } // 0x471D2FF42A94B4F2 0xBF974891
	static void SET_HUD_ANIM_STOP_LEVEL(_Player player, BOOL toggle) { invoke<Void>(0xA34437D4AD022736, player, toggle); } // 0xDE45D1A1EF45EE61 0x274631FE
	static void SET_AREAS_GENERATOR_ORIENTATION(_Player player) { invoke<Void>(0xA0BAD83E937F3553, player); } // 0xC3376F42B1FACCC6 0x02DF7AF4
	static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(_Player player, BOOL toggle) { invoke<Void>(0xD41168A9555BD869, player, toggle); } // 0x596976B02B6B5700 0xA3D675ED
	static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0xACD6D334FD769B0C, multiplier); } // 0x020E5F00CDA207BA 0x1359292F
	static void SET_WANTED_LEVEL_DIFFICULTY(_Player player, float difficulty) { invoke<Void>(0x7AC8B1C2CE95AF73, player, difficulty); } // 0x9B0BB33B04405E7A 0xB552626C
	static void RESET_WANTED_LEVEL_DIFFICULTY(_Player player) { invoke<Void>(0x79B635BB52BBA4C1, player); } // 0xB9D0DD990DC141DD 0xA64C378D
	static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0x1A06F01A8F09EFC7, duration); } // 0xBF9BD71691857E48 0x5F8A22A6
	static void REPORT_CRIME(_Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0x3E81A99365C64EB8, player, crimeType, wantedLvlThresh); } // 0xE9B09589827545E7 0xD8EB3A44
	static void _0x9A987297ED8BD838(_Player player, int p1) { invoke<Void>(0x2907F140DB08C232, player, p1); } // 0x9A987297ED8BD838 0x59B5C2A2
	static void _0xBC9490CA15AEA8FB(_Player player) { invoke<Void>(0x0CF0F978CEED28C2, player); } // 0xBC9490CA15AEA8FB 0x6B34A160
	static void _0x4669B3ED80F24B4E(_Player player) { invoke<Void>(0x43CC997B616E6D6A, player); } // 0x4669B3ED80F24B4E 0xB9FB142F
	static void _0xAD73CE5A09E42D12(_Player player) { invoke<Void>(0x8BE6AF26B4A103E6, player); } // 0xAD73CE5A09E42D12 0x85725848
	static void _0x36F1B38855F2A8DF(_Player player) { invoke<Void>(0x54C82807506521AE, player); } // 0x36F1B38855F2A8DF 0x3A7E5FB6
	static void _0xDC64D2C53493ED12(_Player player) { invoke<Void>(0xC8F0870831EA73C8, player); } // 0xDC64D2C53493ED12 0xD15C4B1C
	static void _0xB45EFF719D8427A6(float p0) { invoke<Void>(0x5023FA0DA1F408E7, p0); } // 0xB45EFF719D8427A6 0xBF6993C7
	static void _0x0032A6DBA562C518() { invoke<Void>(0x7235F0B6F9618D63); } // 0x0032A6DBA562C518 0x47CAB814
	static BOOL CAN_PLAYER_START_MISSION(_Player player) { return invoke<BOOL>(0x42322F841075FF38, player); } // 0xDE7465A27D403C06 0x39E3CB3F
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(_Player player) { return invoke<BOOL>(0xB8E921FDBC0BA08C, player); } // 0x908CBECC2CAA3690 0xBB77E9CD
	static BOOL IS_PLAYER_TARGETTING_ENTITY(_Player player, Entity entity) { return invoke<BOOL>(0x352F748C85BFEDC5, player, entity); } // 0x7912F7FC4F6264B6 0xF3240B77
	static BOOL GET_PLAYER_TARGET_ENTITY(_Player player, Entity* entity) { return invoke<BOOL>(0xFFE273BD5EFA5A9A, player, entity); } // 0x13EDE1A5DBF797C9 0xF6AAA2D7
	static BOOL IS_PLAYER_FREE_AIMING(_Player player) { return invoke<BOOL>(0x033EB0D34BDA6698, player); } // 0x2E397FD2ECD37C87 0x1DEC67B7
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(_Player player, Entity entity) { return invoke<BOOL>(0x97209242946B9B9F, player, entity); } // 0x3C06B5C839B38F7B 0x7D80EEAA
	static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(_Player player, Entity* entity) { return invoke<BOOL>(0xA6804C0975090D0A, player, entity); } // 0x2975C866E6713290 0x8866D9D0
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(_Player player, float range) { invoke<Void>(0x7167D9329C2C891A, player, range); } // 0x29961D490E5814FD 0x74D42C03
	static void SET_PLAYER_CAN_DO_DRIVE_BY(_Player player, BOOL toggle) { invoke<Void>(0xDA26AC0F41ABF2D6, player, toggle); } // 0x6E8834B52EC20C77 0xF4D99685
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(_Player player, BOOL toggle) { invoke<Void>(0x9D7FFE6132F222E5, player, toggle); } // 0xD5E460AD7020A246 0x71B305BB
	static void SET_PLAYER_CAN_USE_COVER(_Player player, BOOL toggle) { invoke<Void>(0x63E2F7B34FC55D6F, player, toggle); } // 0xD465A8599DFF6814 0x13CAFAFA
	static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0x34E98013CA352B7E); } // 0x462E0DB9B137DC5F 0x457F1E44
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(_Player player) { return invoke<BOOL>(0x8EFED6AE8FE72A0D, player); } // 0x78CFE51896B6B8A4 0x456DB50D
	static void SET_PLAYER_SPRINT(_Player player, BOOL toggle) { invoke<Void>(0xC337B50C6CD4A081, player, toggle); } // 0xA01B8075D8B92DF4 0x7DD7900C
	static void RESET_PLAYER_STAMINA(_Player player) { invoke<Void>(0xD883D5D7A259483C, player); } // 0xA6F312FCCE9C1DFE 0xC0445A9C
	static void RESTORE_PLAYER_STAMINA(_Player player, float p1) { invoke<Void>(0x6288D27A2B632CBD, player, p1); } // 0xA352C1B864CAFD33 0x62A93608
	static float GET_PLAYER_SPRINT_STAMINA_REMAINING(_Player player) { return invoke<float>(0xC778148872B1AF85, player); } // 0x3F9F16F8E65A7ED7 0x47017C90
	static float GET_PLAYER_SPRINT_TIME_REMAINING(_Player player) { return invoke<float>(0xB2230BD8C5E4AA85, player); } // 0x1885BC9B108B4C99 0x40E80543
	static float GET_PLAYER_UNDERWATER_TIME_REMAINING(_Player player) { return invoke<float>(0x84B7952508B51626, player); } // 0xA1FCF8E6AF40B731 0x1317125A
	static int GET_PLAYER_GROUP(_Player player) { return invoke<int>(0x67D12A4DCB18DE93, player); } // 0x0D127585F77030AF 0xA5EDCDE8
	static int GET_PLAYER_MAX_ARMOUR(_Player player) { return invoke<int>(0x32EF11C499A679A8, player); } // 0x92659B4CE1863CB3 0x02A50657
	static BOOL IS_PLAYER_CONTROL_ON(_Player player) { return invoke<BOOL>(0xDC48E9E2CC7437D3, player); } // 0x49C32D60007AFA47 0x618857F2
	static Any _0x7C814D2FB49F40C0() { return invoke<Any>(0x24A040F4CE99ECE9); } // 0x7C814D2FB49F40C0
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(_Player player) { return invoke<BOOL>(0x7BBEF0B575C7E3B8, player); } // 0x8A876A65283DD7D7 0x61B00A84
	static BOOL IS_PLAYER_CLIMBING(_Player player) { return invoke<BOOL>(0x2FFAB3D2307F1BA7, player); } // 0x95E8F73DC65EFB9C 0x4A9E9AE0
	static BOOL IS_PLAYER_BEING_ARRESTED(_Player player, BOOL atArresting) { return invoke<BOOL>(0xE7B06BF48958E63C, player, atArresting); } // 0x388A47C51ABDAC8E 0x7F6A60D3
	static void RESET_PLAYER_ARREST_STATE(_Player player) { invoke<Void>(0xBDC72A806C47DB74, player); } // 0x2D03E13C460760D6 0x453C7CAB
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0x525584039F375488); } // 0xB6997A7EB3F5C8C0 0xE2757AC1
	static _Player GET_PLAYER_INDEX() { return invoke<_Player>(0x4A0FB18E33FE5805); } // 0xA5EDC40EF369B48D 0x309BBDC1
	static _Player INT_TO_PLAYERINDEX(int value) { return invoke<_Player>(0x81C85E54237F8A2E, value); } // 0x41BD2A6B006AF756 0x98DD98F1
	static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0x81C7A2950EF11C8A, value); } // 0x9EC6603812C24710 0x98F3B274
	static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(_Player player) { return invoke<int>(0x9D47ED43BFAD7442, player); } // 0x5D35ECF3A81A0EE0 0x6E9B8B9E
	static int GET_TIME_SINCE_PLAYER_HIT_PED(_Player player) { return invoke<int>(0x07F2A92417083C8A, player); } // 0xE36A25322DC35F42 0xB6209195
	static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(_Player player) { return invoke<int>(0xF5218EAD07DB43AF, player); } // 0xD559D2BE9E37853B 0x8836E732
	static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(_Player player) { return invoke<int>(0x8966AED81E270DF5, player); } // 0xDB89591E290D9182 0x9F27D00E
	static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(_Player player) { return invoke<BOOL>(0x0F37CAD8C9CFEA64, player); } // 0xDCCFD3F106C36AB4 0x85C7E232
	static _Player PLAYER_ID() { return invoke<_Player>(0x0C1D3C552325765B); } // 0x4F8644AF03D0E0D6 0x8AEA886C
	static Ped PLAYER_PED_ID() { return invoke<Ped>(0xA0081090911D13E5); } // 0xD80958FC74E988A6 0xFA92E226
	static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0x1A9CF4D5D4E2F266); } // 0xEE68096F9F37341E 0x8DD5B838
	static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0x2EC83C7ACA23E8A4, cleanupFlags); } // 0xC968670BFACE42D9 0x4B37333C
	static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xD74A648A7073D681, cleanupFlags); } // 0xBC8983F38F78ED51 0xFDAAEA2B
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(char* name, int cleanupFlags) { invoke<Void>(0x18721B284196BDB1, name, cleanupFlags); } // 0x4C68DDDDF0097317 0x04256C73
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0x0D9F7A81BAC2F752, id, cleanupFlags); } // 0xF745B37630DF176B 0x882D3EB3
	static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0xB265A20B540E1DFE); } // 0x9A41CF4674A12272 0x39AA9FC8
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(_Player player, Vehicle vehicle) { invoke<Void>(0x7BF14060944250EC, player, vehicle); } // 0x8026FF78F208978A 0xA454DD29
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(_Player player) { invoke<Void>(0xD66AE592C73A70C9, player); } // 0x1DE37BBF9E9CC14A 0xAF7AFCC4
	static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) { return invoke<BOOL>(0x2CCFD9D11EFFE8B6, achievement); } // 0xBEC7076D64130195 0x822BC992
	static BOOL _0xC2AFFFDABBDC2C5C(Any p0, Any p1) { return invoke<BOOL>(0xC77B359C84812EFE, p0, p1); } // 0xC2AFFFDABBDC2C5C
	static Cam _0x1C186837D0619335(Any p0) { return invoke<Cam>(0xC7B7B86D55D4C17E, p0); } // 0x1C186837D0619335
	static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<BOOL>(0x3C91BC99A9AE5C7D, achievement); } // 0x867365E111A3B6EB 0x136A5BE9
	static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xA264814CF83E3B89); } // 0xF25D331DC2627BBC 0x9FAB6729
	static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0x52DD1C25B6A87905); } // 0x74556E1420867ECA 0x8F72FAD0
	static void DISPLAY_SYSTEM_SIGNIN_UI(ScrHandle scrHandle) { invoke<Void>(0xA277E4B082D5CF00, scrHandle); } // 0x94DD7888C10A979E 0x4264CED2
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xCEA30682339075E8); } // 0x5D511E3867C87139 0xE495B6DA
	static void SET_PLAYER_INVINCIBLE(_Player player, BOOL toggle) { invoke<Void>(0x8F2CF88C37D4A413, player, toggle); } // 0x239528EACDC3E7DE 0xDFB9A2A2
	static BOOL GET_PLAYER_INVINCIBLE(_Player player) { return invoke<BOOL>(0xF3BFD43DA3C93B19, player); } // 0xB721981B2B939E07 0x680C90EE
	static void _0xCAC57395B151135F(_Player player, Any p1) { invoke<Void>(0xC8D21696FE9EA78D, player, p1); } // 0xCAC57395B151135F 0x00563E0D
	static void REMOVE_PLAYER_HELMET(_Player player, BOOL p2) { invoke<Void>(0xD1C1615DB1CCD8CE, player, p2); } // 0xF3AC26D3CC576528 0x6255F3B4
	static void GIVE_PLAYER_RAGDOLL_CONTROL(_Player player, BOOL toggle) { invoke<Void>(0x3B89AB15E2D8EBB0, player, toggle); } // 0x3C49C870E66F0A28 0xC7B4D7AC
	static void SET_PLAYER_LOCKON(_Player player, BOOL toggle) { invoke<Void>(0xAD462491C428F701, player, toggle); } // 0x5C8B2F450EE4328E 0x0B270E0F
	static void SET_PLAYER_TARGETING_MODE(_Player player) { invoke<Void>(0x16B83D2AEC542BC4, player); } // 0xB1906895227793F3 0x61CAE253
	static void _0x5702B917B99DB1CD(Any p0) { invoke<Void>(0xD659DCA2331AB7C0, p0); } // 0x5702B917B99DB1CD
	static Any _0xB9CF1F793A9F1BF1() { return invoke<Any>(0x9E28CC03DB61F82F); } // 0xB9CF1F793A9F1BF1
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(_Player player) { invoke<Void>(0x676893B00CB5D631, player); } // 0xF0B67A4DE6AB5F98 0x1D31CBBD
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(_Player player) { return invoke<BOOL>(0x3AE0998A8E3C90A5, player); } // 0x20CE80B0C2BF4ACC 0x14F52453
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(_Player player) { invoke<Void>(0x4447E37FE2ACB73F, player); } // 0x4AACB96203D11A31 0x7E3BFBC5
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(_Player player) { return invoke<BOOL>(0x6357E5F7F1B1122B, player); } // 0xE4B90F367BD81752 0xA3707DFC
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(_Player player, float multiplier) { invoke<Void>(0xB539824F5748FD9A, player, multiplier); } // 0xCA7DC8329F0A1E9E 0xF20F72E5
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(_Player player, float multiplier) { invoke<Void>(0x16C2341D489E0A25, player, multiplier); } // 0xA91C6F0FF7D16A13 0xB986FF47
	static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(_Player player, float multiplier) { invoke<Void>(0x613B5486B356043F, player, multiplier); } // 0x6DB47AA77FD94E09 0x825423C2
	static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0x0931A46432E0D7EB); } // 0x5063F92F07C2A316 0x62824EF4
	static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xD0283E18DAF43A5E); } // 0xC7034807558DDFCA 0x24BC5AC0
	static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0x2E44D5C5AA3A50E4); } // 0xAEBF081FFC0A0E5E 0xF23277F3
	static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xD746FAD45C75D09F); } // 0x8621390F0CDCFE1F 0xD04568B9
	static void SET_PLAYER_FORCED_AIM(_Player player, BOOL toggle) { invoke<Void>(0x0DD6A546EB99211B, player, toggle); } // 0x0FEE4F80AC44A726 0x94E42E2E
	static void SET_PLAYER_FORCED_ZOOM(_Player player, BOOL toggle) { invoke<Void>(0x2FF31CC2AFAC620E, player, toggle); } // 0x75E7D505F2B15902 0xB0C576CB
	static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(_Player player, BOOL toggle) { invoke<Void>(0xCFDE465BA43FF5A4, player, toggle); } // 0x7651BC64AE59E128 0x374F42F0
	static void DISABLE_PLAYER_FIRING(_Player player, BOOL toggle) { invoke<Void>(0x407AA37DB712B953, player, toggle); } // 0x5E6CC07646BBEAB8 0x30CB28CB
	static void _0xB885852C39CC265D() { invoke<Void>(0x38CFA02340555A29); } // 0xB885852C39CC265D
	static void SET_DISABLE_AMBIENT_MELEE_MOVE(_Player player, BOOL toggle) { invoke<Void>(0xB433C56FB4A8D89D, player, toggle); } // 0x2E8AABFA40A84F8C 0xCCD937E7
	static void SET_PLAYER_MAX_ARMOUR(_Player player, int value) { invoke<Void>(0xD7A3B60CAA82AEFF, player, value); } // 0x77DFCCF5948B8C71 0xC6C3C53B
	static void SPECIAL_ABILITY_DEACTIVATE(_Player player) { invoke<Void>(0x491EF0CEB42E41A3, player); } // 0xD6A953C6D1492057 0x80C2AB09
	static void SPECIAL_ABILITY_DEACTIVATE_FAST(_Player player) { invoke<Void>(0x864EAABAADAAA1E3, player); } // 0x9CB5CE07A3968D5A 0x0751908A
	static void SPECIAL_ABILITY_RESET(_Player player) { invoke<Void>(0x40503A422D8CA419, player); } // 0x375F0E738F861A94 0xA7D8BCD3
	static void _0xC9A763D8FE87436A(_Player player) { invoke<Void>(0xEC711E267F412949, player); } // 0xC9A763D8FE87436A 0x4136829A
	static void SPECIAL_ABILITY_CHARGE_SMALL(_Player player, BOOL p1, BOOL p2) { invoke<Void>(0x466EDE97AE81AEC2, player, p1, p2); } // 0x2E7B9B683481687D 0x6F463F56
	static void SPECIAL_ABILITY_CHARGE_MEDIUM(_Player player, BOOL p1, BOOL p2) { invoke<Void>(0x7D7AF7BCAFD8936E, player, p1, p2); } // 0xF113E3AA9BC54613 0xAB55D8F3
	static void SPECIAL_ABILITY_CHARGE_LARGE(_Player player, BOOL p1, BOOL p2) { invoke<Void>(0x62B1D96AD27C3058, player, p1, p2); } // 0xF733F45FA4497D93 0xF440C04D
	static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(_Player player, BOOL p1) { invoke<Void>(0xB6AFBA30C3219912, player, p1); } // 0xED481732DFF7E997 0x5FEE98A2
	static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(_Player player, int p1, BOOL p2) { invoke<Void>(0x9574A5748069B1DF, player, p1, p2); } // 0xB7B0870EB531D08D 0x72429998
	static void SPECIAL_ABILITY_CHARGE_NORMALIZED(_Player player, float p1, BOOL p2) { invoke<Void>(0xA894D92D6FFD7F57, player, p1, p2); } // 0xA0696A65F009EE18 0x8C7E68C1
	static void SPECIAL_ABILITY_FILL_METER(_Player player, BOOL p1) { invoke<Void>(0xC9A6E20817C1D957, player, p1); } // 0x3DACA8DDC6FD4980 0xB71589DA
	static void SPECIAL_ABILITY_DEPLETE_METER(_Player player, BOOL p1) { invoke<Void>(0x507C07E2CDE0CE09, player, p1); } // 0x1D506DBBBC51E64B 0x9F80F6DF
	static void SPECIAL_ABILITY_LOCK(Hash playerModel) { invoke<Void>(0x396F15FE88A4C33B, playerModel); } // 0x6A09D0D590A47D13 0x1B7BB388
	static void SPECIAL_ABILITY_UNLOCK(Hash playerModel) { invoke<Void>(0x729236737904BDED, playerModel); } // 0xF145F3BE2EFA9A3B 0x1FDB2919
	static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash Johnelle) { return invoke<BOOL>(0x556141FBAE639225, Johnelle); } // 0xC6017F6A6CDFA694 0xC9C75E82
	static BOOL IS_SPECIAL_ABILITY_ACTIVE(_Player player) { return invoke<BOOL>(0x7B09C8C1D3D1F427, player); } // 0x3E5F7FC85D854E15 0x1B17E334
	static BOOL IS_SPECIAL_ABILITY_METER_FULL(_Player player) { return invoke<BOOL>(0x6E51A3E8D0B871B8, player); } // 0x05A1FE504B7F2587 0x2E19D7F6
	static void ENABLE_SPECIAL_ABILITY(_Player player, BOOL toggle) { invoke<Void>(0x190FE7ECD86A6C98, player, toggle); } // 0x181EC197DAEFE121 0xC86C1B4E
	static BOOL IS_SPECIAL_ABILITY_ENABLED(_Player player) { return invoke<BOOL>(0x65B84BA97650305B, player); } // 0xB1D200FE26AEF3CB 0xC01238CC
	static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0xFBF212C33AC73209, multiplier); } // 0xA49C426ED0CA4AB7 0xFF1BC556
	static void _0xFFEE8FA29AB9A18E(_Player player) { invoke<Void>(0x5784B0853C904F31, player); } // 0xFFEE8FA29AB9A18E 0x5D0FE25B
	static BOOL _0x5FC472C501CCADB3(_Player player) { return invoke<BOOL>(0xDA80A34F487B2E00, player); } // 0x5FC472C501CCADB3 0x46E7E31D
	static BOOL _0xF10B44FD479D69F3(_Player player, int p1) { return invoke<BOOL>(0x8DC85F8251E61255, player, p1); } // 0xF10B44FD479D69F3 0x1E359CC8
	static BOOL _0xDD2620B7B9D16FF1(_Player player, float p1) { return invoke<BOOL>(0x7C32439B61ABCAF5, player, p1); } // 0xDD2620B7B9D16FF1 0x8CB53C9F
	static void START_PLAYER_TELEPORT(_Player player, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xBDD9262D515C03B5, player, x, y, z, heading, p5, p6, p7); } // 0xAD15F075A4DA0FDE 0xC552E06C
	static BOOL _HAS_PLAYER_TELEPORT_FINISHED(_Player player) { return invoke<BOOL>(0xFBAFD35D43CE96F8, player); } // 0xE23D5873C2394C61
	static void STOP_PLAYER_TELEPORT() { invoke<Void>(0x9455DC3C261571B3); } // 0xC449EDED9D73009C 0x86AB8DBB
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0x6273A79EFF10C4A9); } // 0x02B15662D7F8886F 0x3A11D118
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(_Player player) { return invoke<float>(0xE61E6E5A5F09FFA1, player); } // 0x2F395D61F3A1F877 0xC3B02362
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(_Player player, float regenRate) { invoke<Void>(0x1D571EB1926C91DA, player, regenRate); } // 0x5DB660B38DD98A31 0x45514731
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(_Player player, float damageAmount) { invoke<Void>(0x6A4608EF99465910, player, damageAmount); } // 0xCE07B9F7817AADA3 0xB02C2F39
	static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(_Player player, float modifier) { invoke<Void>(0x47F47737C497B5ED, player, modifier); } // 0x2D83BC011CA14A3C 0xAE446344
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(_Player player, float modifier) { invoke<Void>(0x7769D49396704FAA, player, modifier); } // 0x4A3DC7ECCC321032 0x362E69AD
	static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(_Player player, float modifier) { invoke<Void>(0x80BD17A7AFD11D9A, player, modifier); } // 0xAE540335B4ABC4E2 0x9F3D577F
	static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(_Player player, float damageAmount) { invoke<Void>(0xD0B338343B55A48B, player, damageAmount); } // 0xA50E117CDDF82F0C 0x823ECA63
	static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(_Player player, float modifier) { invoke<Void>(0xA7DCADD61C4CB6AD, player, modifier); } // 0x4C60E6EFDAFF2462 0xA16626C7
	static void SET_PLAYER_PARACHUTE_TINT_INDEX(_Player player, int tintIndex) { invoke<Void>(0x77F98D6F2BAFD419, player, tintIndex); } // 0xA3D0E54541D9A5E5 0x8EA12EDB
	static void GET_PLAYER_PARACHUTE_TINT_INDEX(_Player player, int* tintIndex) { invoke<Void>(0xD4B9B6B2CAF08BBE, player, tintIndex); } // 0x75D3F7A1B0D9B145 0x432B0509
	static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(_Player player, int index) { invoke<Void>(0x26EF9F1FCE5BD0F3, player, index); } // 0xAF04C87F5DC1DF38 0x70689638
	static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(_Player player, int* index) { invoke<Void>(0xFEB3F77B9CC1A697, player, index); } // 0xD5A016BC3C09CF40 0x77B8EF01
	static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(_Player player, int tintIndex) { invoke<Void>(0x9F207F50E0FBF3A7, player, tintIndex); } // 0x93B0FB27C9A04060 0xD79D5D1B
	static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(_Player player, int* tintIndex) { invoke<Void>(0x759B8E5FFA9FB44C, player, tintIndex); } // 0x6E9C742F340CE5A2 0x4E418E13
	static void SET_PLAYER_HAS_RESERVE_PARACHUTE(_Player player) { invoke<Void>(0xB0E7B22E032B3C0A, player); } // 0x7DDAB28D31FAC363 0xA3E4798E
	static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(_Player player) { return invoke<BOOL>(0xB66A47932BB33E19, player); } // 0x5DDFE2FF727F3CA3 0x30DA1DA1
	static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(_Player player, BOOL enabled) { invoke<Void>(0x62AB54EE4C809F9F, player, enabled); } // 0xF401B182DBA8AF53 0x832DEB7A
	static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(_Player player, int r, int g, int b) { invoke<Void>(0xC76332736BAB3A6B, player, r, g, b); } // 0x8217FD371A4625CF 0x14FE9264
	static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(_Player player, int* r, int* g, int* b) { invoke<Void>(0x4FB7CB39579416AF, player, r, g, b); } // 0xEF56DBABD3CD4887 0xF66E5CDD
	static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(_Player player, int flags) { invoke<Void>(0x73EF84F20E9E71BA, player, flags); } // 0x11D5F725F0E780E0 0x725C6174
	static void SET_PLAYER_NOISE_MULTIPLIER(_Player player, float multiplier) { invoke<Void>(0x61DC5AEB63B7FD62, player, multiplier); } // 0xDB89EF50FF25FCE9 0x15786DD1
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(_Player player, float multiplier) { invoke<Void>(0xC63C1E7AAA17DB75, player, multiplier); } // 0xB2C1A29588A9F47C 0x8D2D89C4
	static BOOL CAN_PED_HEAR_PLAYER(_Player player, Ped ped) { return invoke<BOOL>(0x30F71A31BC7719A9, player, ped); } // 0xF297383AA91DCA29 0x1C70B2EB
	static void SIMULATE_PLAYER_INPUT_GAIT(_Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0x9B109E7410A2CB10, player, amount, gaitType, speed, p4, p5); } // 0x477D5D63E63ECA5D 0x0D77CC34
	static void RESET_PLAYER_INPUT_GAIT(_Player player) { invoke<Void>(0x0A4016FC3909FB80, player); } // 0x19531C47A2ABD691 0x4A701EE1
	static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(_Player player, BOOL toggle) { invoke<Void>(0x05BEAAE73212CA04, player, toggle); } // 0x9F343285A00B4BB6 0xA97C2059
	static void _0xD2B315B6689D537D(_Player player, BOOL p1) { invoke<Void>(0x7904DCF80BD65744, player, p1); } // 0xD2B315B6689D537D 0xA25D767E
	static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(_Player player, float value) { invoke<Void>(0x193AF1BE07E1C410, player, value); } // 0x4E9021C1FCDD507A 0x3D26105F
	static BOOL _0x690A61A6D13583F6(Any p0) { return invoke<BOOL>(0xE844676B910CF1C8, p0); } // 0x690A61A6D13583F6 0x1D371529
	static void _0x9EDD76E87D5D51BA(_Player player) { invoke<Void>(0x3A659B26EE408064, player); } // 0x9EDD76E87D5D51BA 0xE30A64DC
	static void SET_PLAYER_SIMULATE_AIMING(_Player player, BOOL toggle) { invoke<Void>(0xD9439559189C387F, player, toggle); } // 0xC54C95DA968EC5B5 0xF1E0CAFC
	static void SET_PLAYER_CLOTH_PIN_FRAMES(_Player player, BOOL toggle) { invoke<Void>(0x14B981DB70D9A5D9, player, toggle); } // 0x749FADDF97DFE930 0xF7A0F00F
	static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0x78EFA11AA55BA0EE, index); } // 0x9F7BBA2EA6372500 0xB8209F16
	static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xEA38CD3DDA5C45D3, value); } // 0x14D913B777DFF5DA 0x8D9FD4D1
	static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0x1B73B11B48E51D2E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xED51733DC73AED51 0xECD12E60
	static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0x0D9D18EB45ED308E); } // 0x1DD5897E2FA6E7C9 0x96100EA4
	static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(_Player player) { return invoke<BOOL>(0x88194B84623977CE, player); } // 0xD705740BB0A1CF4C 0x4A01B76A
	static BOOL _0x38D28DA81E4E9BF9(_Player player) { return invoke<BOOL>(0xA63C76434BF784D5, player); } // 0x38D28DA81E4E9BF9 0x013B4F72
	static BOOL _0xBC0753C9CA14B506(Any p0, int p1, BOOL p2) { return invoke<BOOL>(0x36316C768995B4E6, p0, p1, p2); } // 0xBC0753C9CA14B506 0x9DF75B2A
	static void _0x5006D96C995A5827(Any p0, Any p1, Any p2) { invoke<Void>(0x75A5816F88FEB285, p0, p1, p2); } // 0x5006D96C995A5827
	static BOOL IS_PLAYER_RIDING_TRAIN(_Player player) { return invoke<BOOL>(0xE4F65402870534F4, player); } // 0x4EC12697209F2196 0x9765E71D
	static BOOL HAS_PLAYER_LEFT_THE_WORLD(_Player player) { return invoke<BOOL>(0x857182B1E8B769CA, player); } // 0xD55DDFB47991A294 0xFEA40B6C
	static void _0xFF300C7649724A0B(_Player player, BOOL p1) { invoke<Void>(0xF1DFCE7980E1C284, player, p1); } // 0xFF300C7649724A0B 0xAD8383FA
	static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(_Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xB684B99E13D983C3, player, p1, p2, p3, p4); } // 0xD9284A8C0D48352C 0x9254249D
	static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(_Player player) { invoke<Void>(0x601515543D4039AB, player); } // 0x0F4CC924CF8C7B21 0xFD60F5AB
	static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(_Player player, Hash model) { invoke<Void>(0x68E8E6E200A00B62, player, model); } // 0x977DB4641F6FC3DB 0x5D382498
	static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(_Player player) { invoke<Void>(0x21C536D8B451A41A, player); } // 0x8753997EB5F6EE3F 0x6FF034BB
	static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(_Player player, Hash model) { invoke<Void>(0x0A519F044FB9FF4F, player, model); } // 0xDC80A4C2F18A2B64 0xA877FF5E
	static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(_Player player) { invoke<Void>(0xEA088391B09C3682, player); } // 0x10C54E4389C12B42 0xBB62AAC5
	static void DISABLE_PLAYER_VEHICLE_REWARDS(_Player player) { invoke<Void>(0x699AA2DBBF50E431, player); } // 0xC142BE3BB9CE125F 0x8C6E611D
	static void _0x2F7CEB6520288061(BOOL p0) { invoke<Void>(0x5D9B272CFFC07916, p0); } // 0x2F7CEB6520288061 0x2849D4B2
	static void _0x5DC40A8869C22141(BOOL p0, ScrHandle p1) { invoke<Void>(0x86702723662F9490, p0, p1); } // 0x5DC40A8869C22141
	static BOOL _0x65FAEE425DE637B0(Any p0) { return invoke<BOOL>(0x7EDCF580B5A47EB0, p0); } // 0x65FAEE425DE637B0
	static void _0x5501B7A5CDB79D37(Any p0) { invoke<Void>(0x857DB2BB63A501CB, p0); } // 0x5501B7A5CDB79D37
	static Any _0x56105E599CAB0EFA(Any p0) { return invoke<Any>(0x35BD1F5D4784E963, p0); } // 0x56105E599CAB0EFA
}

namespace ENTITY
{
	static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xD3FACCDA4D66AEAD, entity); } // 0x7239B21A38F536BA 0x3AC90869
	static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0x687CB62D355FD7FD, entity, p1); } // 0xDDE6DF5AE89981D2 0xACFEB3F9
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0xA018C3329F328982, entity); } // 0x060D6E96F8B8E48D 0xA5B33300
	static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0x66F854ED6BE88667, entity); } // 0xDA95EA3317CC5064 0x9BCD2979
	static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, char* animDict, char* animName, int p3) { return invoke<BOOL>(0xC41F6945C37E358C, entity, animDict, animName, p3); } // 0x20B711662962B472 0x1D9CAB92
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xE3B7FB966D6E7F69, entity); } // 0x95EB9964FF5C5C65 0x6B74582E
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0x6F4A1CCA9E8C97C1, entity); } // 0x605F5A140F202491 0x53FD4A25
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x4493EFAB738FA349, entity); } // 0xDFD5033FDBA0A9C8 0x878C2CE0
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0x4AEC0F4FC7FE62C7, entity1, entity2, p2); } // 0xC86D67D52A707CF8 0x07FC77E0
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0x25138A378B1DA64B, entity1, entity2, traceType); } // 0xFCDFF7B72D23A1AC 0x53576FA7
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0x2F14E7FE397B72F2, entity1, entity2); } // 0x0267D00AF114F17A 0x210D87C8
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0x55D9E756AFC7AF1D, entity); } // 0x8BAD02F0368D9E14 0x662A2F41
	static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0xB8148AFE7828DD41, entity); } // 0x5C3D0A935F535C4C 0xC0E3AA47
	static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0x588F088F0E29B6B1, entity); } // 0xE465D4AB7CA6AE72 0xAB415C07
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0x0DE1739F2759B9C8, entity); } // 0x40FDEDB72F8293B2 0x58D9775F
	static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, char* animDict, char* animName) { return invoke<float>(0xAC6AEF29F754B011, entity, animDict, animName); } // 0x346D81500D088F42 0x83943F41
	static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, char* animDict, char* animName) { return invoke<float>(0x3548E11D771A25F2, entity, animDict, animName); } // 0x50BD2730B191E360 0x433A9D18
	static float _GET_ANIM_DURATION(char* animDict, char* animName) { return invoke<float>(0xA0226A420F9FA4E9, animDict, animName); } // 0xFEDDF04D62B8D790
	static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xCC275038089A4759, entity); } // 0x48C2BED9180FE123 0xFE1589F9
	static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0xC59DF10B4FC39DF8, entity, alive); } // 0x3FEF770D40960D5A 0x1647F1CB
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0xB86A69343E7FBB9A, entity); } // 0x0A794A5A57F8DF91 0x84DCECBF
	static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0x231B1925F0B1FB4A, entity); } // 0x8BB4EF4214E0E6D5 0x49FAE914
	static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0x6C491B07892359B8, entity); } // 0x866A4A5FAE349510 0x9E2F917C
	static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0x5E6FDC4F3A8C8EDE, entity); } // 0xE83D4F9BA2A38914 0x972CC383
	static float _GET_ENTITY_PHYSICS_HEADING(Entity entity) { return invoke<float>(0x669DAA273576F66B, entity); } // 0x846BF6291198A71E
	static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0xC6FE0F623405BFA8, entity); } // 0xEEF059FAD016D209 0x8E3222B7
	static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xD268E288469BAB3B, entity); } // 0x15D757606D170C3C 0xC7AE6AA1
	static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0x63F91492C8440A2E, entity, value); } // 0x166E7CF68597D8B5 0x96F84DF8
	static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0x768BA281BA6C6FC0, entity, X, Y, Z, atTop, inWorldCoords); } // 0x5A504562485944DD 0xEE443481
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xC5F055346C582286, entity); } // 0x1DD55701034110E5 0x57F56A4D
	static void GET_ENTITY_MATRIX(Entity entity, Any* p1, Any* p2, Vector3* p3, Vector3* p4) { invoke<Void>(0xB97152BDAC8DA527, entity, p1, p2, p3, p4); } // 0xECB2FC7235A7D137 0xEB9EB001
	static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0x705BC1BB91F530B5, entity); } // 0x9F47B058362C84B5 0xDAFCB3EC
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0xDDBED866B22F905C, entity, posX, posY, posZ); } // 0x2274BC1C4885E333 0x6477EC9E
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x2E01486DB8218E16, entity, offsetX, offsetY, offsetZ); } // 0x1899F328B0E12848 0xABCF043A
	static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0x6DAB1BF747F89A78, entity); } // 0xD45DC2893621E1FE 0xFCE6ECE5
	static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0xDA202542361209FC, entity, x, y, z, w); } // 0x7B3703D2D32DFA18 0x5154EC90
	static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0x7DF5816902656521, entity); } // 0x831E0242595560DF 0x36610842
	static Vector3 GET_ENTITY_ROTATION(Entity entity, int p1) { return invoke<Vector3>(0x3A02D44277FBA4BE, entity, p1); } // 0xAFBD61CC738D9EB9 0x8FF45B04
	static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0xDE8CBF96ED01C0D6, entity); } // 0x213B91045D09B983 0x9BF8A73F
	static char* GET_ENTITY_SCRIPT(Entity entity, Any* script) { return invoke<char*>(0x31A36F72D3ABDCD7, entity, script); } // 0xA6E9C38DB51D7748 0xB7F70784
	static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0x39053CCA2C4B5DA1, entity); } // 0xD5037BA82E12416F 0x9E1E4798
	static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0x93918BAD0CBC1576, entity, relative); } // 0x9A8D700A51CB7B0D 0x3ED2B997
	static float GET_ENTITY_UPRIGHT_VALUE(Any p0) { return invoke<float>(0xC00FEF88F7C3E2FB, p0); } // 0x95EED5A694951F9F 0xF4268190
	static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0x24D47569A04F80A8, entity); } // 0x4805D2B1D8CF94A9 0xC14C9B6B
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xD6F8F75E3496EEF6, entity); } // 0xD7E3B9735C0F89D6 0xBC5A9C58
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0x90897FA118314142, entity); } // 0x04A2A40C73395041 0xC46F74AC
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0x5293F3C38E4842B3, entity); } // 0x4B53F92932ADFAC0 0xC69CF43D
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0xE08BD350F8125054, entity, boneIndex); } // 0x44A8FCB8ED227738 0x7C6339DF
	static _Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<_Player>(0x9B417F30806DED21, entity); } // 0x7196842CB375CDB3 0xCE17FDEC
	static _Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<_Player>(0x78B8C4C83CA40CD1, entity, team); } // 0x4DC9A62F844D9337 0xB1808F56
	static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0xCE82CD97758F1210, entity); } // 0x8ACD366038D14505 0x0B1BD08D
	static int _GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0x4E73A948FF7E52C8, entity); } // 0xF6F5161F4534EDFF
	static BOOL IS_AN_ENTITY(Entity entity) { return invoke<BOOL>(0x928C212773994230, entity); } // 0x731EC8A916BD11A1 0xD4B9715A
	static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0x60F161681C368C4E, entity); } // 0x524AC5ECEA15343E 0x55D33EAB
	static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0x18C670321BC98FDA, entity); } // 0x0A7B270912999B3C 0x2632E124
	static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0x264883409423C6C3, entity); } // 0x6AC7003FA6E5575E 0xBE800B01
	static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0x1FFA71644D1C7C16, entity); } // 0x8D68C8FD0FACA94E 0x3F52E561
	static BOOL IS_ENTITY_AT_COORD(Entity entity, float posX, float posY, float posZ, float sizeX, float sizeY, float sizeZ, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0x6E07DBF03F3AC258, entity, posX, posY, posZ, sizeX, sizeY, sizeZ, p7, p8, p9); } // 0x20B60995556D004F 0xD749B606
	static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float sizeX, float sizeY, float sizeZ, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0x7298BA0C4D4A4C9E, entity1, entity2, sizeX, sizeY, sizeZ, p5, p6, p7); } // 0x751B70C3D034E187 0xDABDCB52
	static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0x884626CDE60D6728, entity); } // 0xB346476EF1A64897 0xEC1479D5
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xDA9FB9C8B74F0B0E, entity); } // 0xCF511840CEEDE0CC 0x0B5DE340
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0xA3FB2BC2E4EB48E2, entity); } // 0xB1632E9A5F988D11 0x9D7A609C
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x73C9408E8EF10BD3, entity); } // 0x26AA915AD89BFB4B 0xDE5C995E
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0x60BA85BF16A11204, from, to); } // 0xEFBE71898A993728 0xB0ABFEA8
	static BOOL IS_ENTITY_DEAD(Entity entity) { return invoke<BOOL>(0x912AD5A10E7633F0, entity); } // 0x5F9532F3B5CC2551 0xB6F7CBAC
	static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0x630BD2AFB0686BBA, entity); } // 0x886E37EC497200B6 0xA4157987
	static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL p8, BOOL p9, Any p10) { return invoke<BOOL>(0xFD4DDA3E1EF89C67, entity, x1, y1, z1, x2, y2, z2, angle, p8, p9, p10); } // 0x51210CED3DA1C78A 0x883622FA
	static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0xA03B358417D132FE, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0x54736AA40E271165 0x8C2DFA9D
	static BOOL IS_ENTITY_IN_ZONE(Entity entity, char* zone) { return invoke<BOOL>(0x4F812A5597A1384F, entity, zone); } // 0xB6463CF6AF527071 0x45C82B21
	static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xB46E03E529421E99, entity); } // 0xCFB0A0D8EDD145A3 0x4C3C2508
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0x2C40672AED29B6F4, entity); } // 0xE81AFC1BC4CC41CE 0x0170F68C
	static void _0x694E00132F2823ED(Entity entity, BOOL p1) { invoke<Void>(0x4FEF9F04492882C0, entity, p1); } // 0x694E00132F2823ED 0x40C84A74
	static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0x7DB334F5F834726A, entity); } // 0xE659E47AF827484B 0xC1FEC5ED
	static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, char* animDict, char* animName, int p4) { return invoke<BOOL>(0x2FB5C9A04733E5EF, entity, animDict, animName, p4); } // 0x1F0B79228E461EC9 0x0D130D34
	static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0x7B12DDF971332F14, entity); } // 0x1218E6886D3D8327 0x928E12E9
	static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0xE2205194B5B97090, entity, targetEntity); } // 0x17FFC1B2BA35A494 0x6B931477
	static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0x773DD4A7B0C311BA, entity, modelHash); } // 0x0F42323798A58C8C 0x307E7611
	static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0x23E01D155F70E890, entity, angle); } // 0x5333F526F6AB19AA 0x3BCDF4E1
	static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xB0D2E8D46D112F7F, entity); } // 0x1DBD58820FA61D71 0x5ACAA48F
	static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0x374C36A4A2089997, entity); } // 0x47D6F43D77935C75 0x120B4ED5
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0x9125ADC25E13C689, entity); } // 0xD796CB5BA8F20E32 0x5D240E9D
	static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0x460E7746DAC01E79, entity); } // 0xE31C2C72B8692B64 0x46BC5B40
	static BOOL WOULD_ENTITY_BE_OCCLUDED(Entity entity, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xBBD1FEB489E1B6DD, entity, x, y, z, p4); } // 0xEE5D2A122E09EC42 0xEA127CBC
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0x172EE816396D541D, entity); } // 0xD05BFF0C0A12C68F 0x00AB7A4A
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0xDABF51AD966EC705, entity, forceType, x, y, z, p5, p6, p7, p8); } // 0x18FF00FC7EFF559E 0x28924E98
	static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceType, float x, float y, float z, float xRot, float yRot, float zRot, int p8, BOOL isRel, BOOL ignoreUpVec, BOOL p11, BOOL p12, BOOL p13) { invoke<Void>(0xCEDEF78614936959, entity, forceType, x, y, z, xRot, yRot, zRot, p8, isRel, ignoreUpVec, p11, p12, p13); } // 0xC5F68BE9613E2D18 0xC1C0855A
	static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndexEnt2, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, BOOL p9, BOOL isRelative, BOOL collision, BOOL allowRotation, int boneIndexEnt1, BOOL fixedRot) { invoke<Void>(0xD25643FC09708802, entity1, entity2, boneIndexEnt2, posX, posY, posZ, rotX, rotY, rotZ, p9, isRelative, collision, allowRotation, boneIndexEnt1, fixedRot); } // 0x6B9BBD38AB0796DF 0xEC024237
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float rotX, float rotY, float rotZ, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0xA9E62FA09A9005F3, entity1, entity2, boneIndex1, boneIndex2, posX1, posY1, posZ1, posX2, posY2, posZ2, rotX, rotY, rotZ, breakForce, fixedRot, p15, collision, p17, p18); } // 0xC3675780C92F90F9 0x0547417F
	static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0xCB2331C3DE29F0ED, entity); } // 0xF4080490ADC51C6F 0x6909BA59
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, char* boneName) { return invoke<int>(0x72759B1F07CD05E3, entity, boneName); } // 0xFB71170B7E76ACBA 0xE4ECAC22
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0x79EC9CA36480CB01, entity); } // 0xA72CD9CA74A5ECBA 0x2B83F43B
	static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xFFB39FA225A945DB, entity); } // 0xAE3CBE5BF394C9C9 0xFAA3D236
	static void DETACH_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xFE84F1ABBFFC8840, entity, p1, p2); } // 0x961AC54BF0613F5D 0xC8EFCB41
	static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0xBB21B5C3111E5F85, entity, toggle); } // 0x428CA6DBD1094446 0x65C16D57
	static void _0x3910051CCECDB00C(Entity entity, BOOL p1) { invoke<Void>(0xB16B53F6FE1ADDB6, entity, p1); } // 0x3910051CCECDB00C 0xD3850671
	static BOOL PLAY_ENTITY_ANIM(Entity entity, char* animName, char* propName, float p3, BOOL p4, BOOL p5, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0x1C2B9D840AC2664F, entity, animName, propName, p3, p4, p5, p6, delta, bitset); } // 0x7FB218262B810701 0x878753D5
	static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, Entity syncedScene, char* animation, char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0x6101ECFE82230F9B, entity, syncedScene, animation, propName, p4, p5, p6, p7); } // 0xC77720A12FE14A86 0x012760AA
	static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, Any p5, Any* p6, Any* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0x19C3791F42F564D9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xB9C54555ED30FBC4 0xEB4CBA74
	static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, float p5) { return invoke<BOOL>(0xB815F57F844DB9DF, p0, p1, p2, p3, p4, p5); } // 0x11E79CAB7183B6F5 0x7253D5B2
	static Any STOP_ENTITY_ANIM(Entity entity, char* animation, char* animGroup, float p3) { return invoke<Any>(0xA41D8B32F1C5D284, entity, animation, animGroup, p3); } // 0x28004F88151E03E0 0xC4769830
	static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0x50DFD9BDECE0C913, entity, p1, p2); } // 0x43D3807C077261E3 0xE27D2FC1
	static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0x22A1CDF0C8EA3D61, entity, actionHash); } // 0xEAF4CD9EA3E7E922 0x66571CA0
	static BOOL FIND_ANIM_EVENT_PHASE(char* animDictionary, char* animName, char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0x492922B21ACA6CB2, animDictionary, animName, p2, p3, p4); } // 0x07F1BE2BCCAA27A7 0xC41DDA62
	static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, char* animDictionary, char* animName, float time) { invoke<Void>(0x03CA26DCD9179737, entity, animDictionary, animName, time); } // 0x4487C259F0F70977 0x99D90735
	static void SET_ENTITY_ANIM_SPEED(Entity entity, char* animDictionary, char* animName, float speedMultiplier) { invoke<Void>(0x41C0C1865FB0AFAE, entity, animDictionary, animName, speedMultiplier); } // 0x28D1A16553C51776 0x3990C90A
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL value, BOOL byThisScript) { invoke<Void>(0x7B17650F15A8876D, entity, value, byThisScript); } // 0xAD738C3085FE7E11 0x5D1F9E0F
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0x811BE251B0B13760, entity); } // 0xB736A491E64A32CF 0xADF2267C
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0x0689C659BF2D3BF7, ped); } // 0x2595DD4236549CE3 0x9A388380
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0x615DE34FC732CF11, vehicle); } // 0x629BFA74418D6239 0x9B0E10BE
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0xDABCA6C17F8B4208, object); } // 0x3AE22DEB5BA5A3E6 0x3F6B949F
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xDE0EDC55CA40EFE9, entity, toggle); } // 0x1760FFA8AB074D66 0x60B6E744
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0xB243C55E970DC491, entity, p1, p2); } // 0xE22D8FDE858B8119 0x34165B5D
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xCC8D682601F3A631, entity, toggle); } // 0xD3997889736FD899 0x3B13797C
	static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0x591413670A1EF437, entity, toggle, keepPhysics); } // 0x1A9205C1B9EE827F 0x139FD37D
	static BOOL _0xCCF1E97BEFDAE480(Any p0) { return invoke<BOOL>(0x49CF9C364156A077, p0); } // 0xCCF1E97BEFDAE480
	static void _0x9EBC85ED0FFFE51C(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x4C3627D708CAD230, p0, p1, p2); } // 0x9EBC85ED0FFFE51C
	static void SET_ENTITY_COORDS(Entity entity, float X, float Y, float Z, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p7) { invoke<Void>(0x27327EB62D93CDBA, entity, X, Y, Z, xAxis, yAxis, zAxis, p7); } // 0x06843DA7060A026B 0xDF70B41B
	static void _SET_ENTITY_COORDS_2(Entity entity, float X, float Y, float Z, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p7) { invoke<Void>(0xC2FBF144C35410ED, entity, X, Y, Z, xAxis, yAxis, zAxis, p7); } // 0x621873ECE1178967
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float X, float Y, float Z, BOOL p4, BOOL p5, BOOL p6) { invoke<Void>(0xB8EF5851A40C2867, entity, X, Y, Z, p4, p5, p6); } // 0x239A3351AC1DA385 0x4C83DE8D
	static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0x694EF7CD95D5BD27, entity, toggle); } // 0x1718DE8E3F2823CA 0x236F525B
	static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0x10BB9EA2ADBCF0F3, entity, heading); } // 0x8E2530AA8ADA980E 0xE0FF064D
	static void SET_ENTITY_HEALTH(Entity entity, int health) { invoke<Void>(0xA082D4AC00BC651A, entity, health); } // 0x6B76DC1F3AE6E6A3 0xFBCD1831
	static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0x39800A40136ECF37, entity, toggle); } // 0x3882114BDE571AD4 0xC1213A21
	static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0xB1EC0D434D45E629, entity, p1, p2); } // 0xEA02E132F5C68722 0x9729EE32
	static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0x7F198D1EDC091141, entity, toggle); } // 0x7CFBA6A80BDF3874 0xE8FC85AF
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0xEDA527A4943E849D, entity, toggle); } // 0x0DC7CABAB1E9B67E 0xC52F295B
	static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0xAE377A1A7BCC6950, entity); } // 0xE9676F61BC0B3321 0x851687F9
	static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0x6475C7DFB74768F6, entity, speed); } // 0x0E46A3FCBDE2A1B1 0x46AFFED3
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0xC5EFC3500CF4BE6F, entity, toggle); } // 0x79F020FF9EDC0748 0x4B707F50
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0xC5B26F8B749502D2, entity, p1, p2); } // 0x7022BD828FA0B082 0x202237E2
	static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL p6, BOOL p7, BOOL drownProof) { invoke<Void>(0xC2407AC016215F2D, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, drownProof); } // 0xFAEE099C6F890BB8 0x7E9EAB66
	static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xE603FC65DC1AD0FA, entity, x, y, z, w); } // 0x77B21BE7AC540F07 0x83B6046F
	static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0x99B7448B5A0FDF72, entity, toggle); } // 0x0A50A1EEDAD01E65 0x6B189A1A
	static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int p4, BOOL p5) { invoke<Void>(0x4A1ACDDF793F9777, entity, pitch, roll, yaw, p4, p5); } // 0x8524A8B0171D5E07 0x0A345EFE
	static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL unkb) { invoke<Void>(0xEDBE0CD7C81FA37E, entity, toggle, unkb); } // 0xEA1C610A04DB6BBB 0xD043E8E1
	static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0x90B7B4B3BE093A1B, entity, x, y, z); } // 0x1C99BB7B6E96D16F 0xFF5A1988
	static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0x682AF63D2E477EB2, entity, toggle); } // 0x4A4722448F18EEF5 0xE2F262BF
	static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0xB996664170D83289, entity, value); } // 0x5927F96A78577363 0xD7ACC7AD
	static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0xECFF19D11202EF0B, entity); } // 0x4159C2762B5791D6 0x4DA3D51F
	static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0x483013AA5D0368CC, entity, alphaLevel, skin); } // 0x44A0870B7E92D7C0 0xAE667CB0
	static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0x5CD6CBE3CDF76E6C, entity); } // 0x5A47B3B5E63E94C6 0x1560B017
	static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0x334404BD490B3160, entity); } // 0x9B1E824FFBB7027A 0x8A30761C
	static void _0x5C3B791D580E0BC2(Entity entity, float p1) { invoke<Void>(0x4815298759895E82, entity, p1); } // 0x5C3B791D580E0BC2
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0x1A3D669FD1E4223C, entity, toggle); } // 0xACAD101E1FB66689 0xD8FF798A
	static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0x119B03A865E38373, entity, toggle); } // 0x730F5F8D3F0F2050 0xAAC9317B
	static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0x19419943DD1DFD13, entity, state); } // 0x57C5DB656185EAC4 0xC47F5B91
	static void _0x78E8E3A640178255(Any p0) { invoke<Void>(0x0DE021F28E052007, p0); } // 0x78E8E3A640178255
	static void CREATE_MODEL_SWAP(float p0, float p1, float p2, float p3, Any p4, Any p5, BOOL p6) { invoke<Void>(0x02C959EC36DA5520, p0, p1, p2, p3, p4, p5, p6); } // 0x92C47782FDA8B2A3 0x0BC12F9E
	static void REMOVE_MODEL_SWAP(float p0, float p1, float p2, float p3, Any p4, Any p5, BOOL p6) { invoke<Void>(0xE6FCD7E2C6B3CE6F, p0, p1, p2, p3, p4, p5, p6); } // 0x033C0F9A64E229AE 0xCE0AA8BC
	static void CREATE_MODEL_HIDE(float p0, float p1, float p2, float p3, Any p4, BOOL p5) { invoke<Void>(0x9FFBF9D6DD13FE0B, p0, p1, p2, p3, p4, p5); } // 0x8A97BCA30A0CE478 0x7BD5CF2F
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float p0, float p1, float p2, float p3, Any p4, BOOL p5) { invoke<Void>(0xB53445DAD5920B6B, p0, p1, p2, p3, p4, p5); } // 0x3A52AE588830BF7F 0x07AAF22C
	static void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xAF5EF2A48AF80C3A, p0, p1, p2, p3, p4, p5); } // 0xD9E3006FB3CBD765 0x993DBC10
	static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0x938DD877E0DF4346, x, y, z, p3, modelHash, p5); } // 0x150E808B375A385A 0x335190A2
	static void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xCDB0FA50C03DFE29, p0, p1, p2, p3, p4); } // 0x61B6775E83C0DB6F 0xAED73ADD
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL toggle) { invoke<Void>(0x210CC8E03A7FC75B, entity1, entity2, toggle); } // 0xA53ED5520C07654A 0x1E11BFE9
	static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0xD857268A83D1E461, entity, toggle); } // 0x295D82A8559F9150 0xE90005B8
	static void _0xE12ABE5E3A389A6C(Entity entity, BOOL p1) { invoke<Void>(0xFB5A0264CC6B1058, entity, p1); } // 0xE12ABE5E3A389A6C 0x44767B31
	static void _0xA80AE305E0A3044F(Entity entity, BOOL p1) { invoke<Void>(0x2FF7D5617C5F4AC9, entity, p1); } // 0xA80AE305E0A3044F 0xE224A6A5
	static void _0xDC6F8601FAF2E893(Entity entity, BOOL p1) { invoke<Void>(0xCC57CF4FADF33957, entity, p1); } // 0xDC6F8601FAF2E893
	static void _0x2C2E3DC128F44309(Entity entity, BOOL p1) { invoke<Void>(0x20CF7278D378D93B, entity, p1); } // 0x2C2E3DC128F44309
	static void _0x1A092BB0C3808B96(Entity entity, BOOL p1) { invoke<Void>(0xE10677CD95F9763C, entity, p1); } // 0x1A092BB0C3808B96
}

namespace PED
{
	static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0xF8418B3B87CFCCBF, pedType, modelHash, x, y, z, heading, networkHandle, pedHandle); } // 0xD49F9B0955C367DE 0x0389EF71
	static void DELETE_PED(Ped* ped) { invoke<Void>(0x4E82D83B086B5C93, ped); } // 0x9614299DCB53E54B 0x13EFB9A0
	static Ped CLONE_PED(Ped ped, float heading, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0xAC4D1EC0795DEFC9, ped, heading, networkHandle, pedHandle); } // 0xEF29A16337FACADB 0x8C8A8D6E
	static void _ASSIGN_PLAYER_TO_PED(_Player player, Ped ped) { invoke<Void>(0x623F7031F3898C86, player, ped); } // 0xE952D6431689AD9A 0xFC70EEC7
	static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0x1FD87E888EB4FC00, ped, vehicle, atGetIn); } // 0xA3EE4A07279BB9DB 0x7DA6BC83
	static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xC34954DC7583671D, ped, modelHash); } // 0x796D90EFB19AA332 0xA6438D4B
	static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0x39FEE545B315414E, ped, atGetIn); } // 0x997ABD671D25CA0B 0x3B0171EE
	static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x271D2AB5C2992076, x1, y1, z1, x2, y2, z2); } // 0x16EC4839969F9F5E 0xB98DB96B
	static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xEB361B4BD195A4D3, ped); } // 0x84A2DD9AC37C35C1 0x2530A087
	static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0x5DBA7A8C57E01482, ped); } // 0x5983BB449D7FDB12 0x69DFA0AF
	static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0x0BFA50301B965423, ped); } // 0xD839450756ED5A80 0xBADA0093
	static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0x6EB24E8C43220A81, ped, p1); } // 0x3317DEDB88C95038 0xCBDB7739
	static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xC28DAF03761CDA23, ped); } // 0xE0A0AEC214B1FABA 0x1FA39EFE
	static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0x0EAC1ACDFE4C332D, ped); } // 0x3998B1276A3300E5 0xDEBAB2AF
	static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xD1C03D30F07ED44B, ped); } // 0x24B100C68C645951 0x961E1745
	static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0x54F0AEFB11EA090A, ped); } // 0x12534C348C6CB68B 0x404794CA
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0x667A2CFA1914073C, vehicle, pedType, modelHash, seat, networkHandle, pedHandle); } // 0x7DD959874C1FD534 0x3000F092
	static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xD29F967EE1FC6017, ped, heading); } // 0xAA5A7ECE2AA8FE70 0x961458F9
	static void _0xFF287323B0E2C69A(Any p0) { invoke<Void>(0xD17A5D00E4B72EF4, p0); } // 0xFF287323B0E2C69A 0x290421BE
	static BOOL IS_PED_FACING_PED(Ped ped1, _Player ped2, float angle) { return invoke<BOOL>(0x85F24E93D5789C43, ped1, ped2, angle); } // 0xD71649DB0A545AA3 0x0B775838
	static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0x7B5A014A9AC61FB3, ped); } // 0x4E209B2C1EAD5159 0xFD7814A5
	static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0x2F7EFFC92C1C03BE, ped); } // 0x530944F6F4B8A214 0xA0DC0B87
	static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0x34C304F99D27E19A, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x7E9DFE24AC1E58EF 0x741BF04F
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0x09E234D5C510D1BE, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA0D3D71EA1086C55 0x91833867
	static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0x4B626BBA5EE1CFF0, ped); } // 0x34616828CD07F1A1 0xE7C3405E
	static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0x76A0FFACB5B58711, ped, accuracy); } // 0x7AEFB85C1D49DEB6 0x6C17122E
	static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0x7BDA92B47871C31A, ped); } // 0x37F4AD56ECBC0CD6 0x0A2A0AA0
	static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x19AF839CB6D32B39, ped, modelHash); } // 0xC9D55B1A358A5BF7 0x5F1DDFCB
	static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0x9065025F102C62FE, ped, weaponHash); } // 0x2D05CED3A38D0F3A 0x05CC1380
	static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0x6CD75E34773BB896, ped); } // 0xAC6D445B994DF95E 0x4FFB8C6C
	static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0xDE7177B120AF7F62, ped, amount); } // 0x5BA652A0CD14DF2F 0xF686B26E
	static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0x9C5803DED463887E, ped, amount); } // 0xCEA04D83135264CC 0x4E3A0CC4
	static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0xC7E3E32FBCC0DCD6, ped, vehicle, seatIndex); } // 0xF75B0D629E1C063D 0x07500C79
	static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0x4B0409F080F82AAC, ped, toggle); } // 0x3C028C636A414ED9 0x58A80BD5
	static BOOL CAN_CREATE_RANDOM_PED(Any p0) { return invoke<BOOL>(0x3E2D5709B2B80AB8, p0); } // 0x3E8349C08E4B82E4 0xF9ABE88F
	static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xE123FA4E3D1DF258, posX, posY, posZ); } // 0xB4AC7D0CF06BFE8F 0x5A949543
	static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0x6222225CA508E41C, vehicle, returnHandle); } // 0x9B62392B474F44A0 0xB927CE9A
	static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0x1EE212CF424A139C); } // 0xB8EB95E5B4E56978 0x99861609
	static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xB7649D1F13B61AC9); } // 0xEACEEDA81751915C 0x7018BE31
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0xDED80BB7455282C1, ped); } // 0x9E8C908F41584ECD 0x20E01957
	static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0xD9AB5877E5CA2FF0, ped, toggle); } // 0xC1670E958EEE24E5 0xAA7F1131
	static void _0xF2BEBCDFAFDAA19E(BOOL p0) { invoke<Void>(0xE05DAB4C036B3D32, p0); } // 0xF2BEBCDFAFDAA19E 0x6CD58238
	static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0x1F1602FD864AA4C1, ped); } // 0x6D9F5FAA7488BA46 0x90950455
	static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0x9C7DA01E4FB11B99, ped); } // 0xB980061DA992779D 0x194BB7B0
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL getLastVehicle) { return invoke<Vehicle>(0xF8DB47D339B8B953, ped, getLastVehicle); } // 0x9A9112A0FE9A4713 0xAFE92319
	static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0x1E43230194F9A871, ped); } // 0xBB8DE8CF6A8DD8BB 0x5E3B5942
	static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xCD7C3CD13EF8298D, multiplier); } // 0x95E3D6257B166CF2 0x039C82BB
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xDF7253539526B7ED, p0, p1); } // 0x7A556143A1C03898 0x2909ABF0
	static void _0x5A7F62FDA59759BD() { invoke<Void>(0xCCBC19731FE81F7F); } // 0x5A7F62FDA59759BD 0xB48C0C04
	static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0x5820C1644ECE443C, x, y, z); } // 0x5086C7843552CF85 0x25EA2AA5
	static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0x4381D8877F2593D6, x1, y1, z1, x2, y2, z2); } // 0xEE01041D559983EA 0x7A97283F
	static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0xB7088CD974123AF3); } // 0x2E05208086BA0651 0x6F7043A3
	static void _0x4759CC730F947C81() { invoke<Void>(0x57DD47CF3EAFE720); } // 0x4759CC730F947C81 0x8C555ADD
	static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0xD9DB08A2400AAAC5, ped); } // 0x460BC76A0E10655E 0x43103006
	static Any GET_MOUNT(Any p0) { return invoke<Any>(0x6D05D8F8BD5F8B76, p0); } // 0xE7E11B8DCBED1058 0xDD31EC4E
	static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0xBE7699DE338079B3, ped); } // 0x67722AEB798E5FAB 0xA1AE7CC7
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xCC55193D3D4E3458, ped, vehicle); } // 0xEC5F66E459AF3BB2 0x63CB4603
	static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0xFB4B028F94A31239, ped, amount); } // 0xA9C8960E8684C1B5 0x40D90BF2
	static int GET_PED_MONEY(Ped ped) { return invoke<int>(0xCB1FE7E3955F6332, ped); } // 0x3F69145BBA87BAE7 0xEB3C4C7E
	static void _0xFF4803BC019852D9(float p0, Any p1) { invoke<Void>(0x1DF0E18332307A3B, p0, p1); } // 0xFF4803BC019852D9 0xD41C9AED
	static void _0x6B0E6172C9A4D902(BOOL p0) { invoke<Void>(0x78753CEEBDA0CA1F, p0); } // 0x6B0E6172C9A4D902 0x30B98369
	static void _0x9911F4A24485F653(BOOL p0) { invoke<Void>(0x4279EBDEAB2B345E, p0); } // 0x9911F4A24485F653 0x02A080C8
	static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xDD4CB05DA9FC27C9, ped, toggle); } // 0xEBD76F2359F190AC 0x6F6FC7E6
	static void _0xAFC976FD0580C7B3(Any p0, BOOL p1) { invoke<Void>(0xCB4EE94C24F77D59, p0, p1); } // 0xAFC976FD0580C7B3 0x1572022A
	static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0x72550A6F2BC0E12B, ped, vehicle); } // 0xA808AA1D79230FC2 0xDDDE26FA
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0x4745637EEB85132D, ped); } // 0x826AA586EDB9FEF8 0x0EA9CA03
	static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0xB6024B1E922B8E1A, ped); } // 0x01FEE67DB37F59B2 0xC60D0785
	static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0xD05DBB55CBEF6ACF, ped); } // 0x94495889E22C6479 0x4D885B2E
	static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0x7DF282A008F6DC55, ped); } // 0xC70B5FAE151982D8 0x0EDAC574
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Any p0, float p1, float p2) { return invoke<Vector3>(0x98C1B5DB039FB606, p0, p1, p2); } // 0xCD5003B097200F36 0x129F9DC1
	static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0x0C4D70322C5AB4B5, ped); } // 0x2E0E1C2B4F6CB339 0x1118A947
	static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xA8023042566B2548, ped); } // 0xFBFC01CCFB35D99E 0xE65F8059
	static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0x496D383FB5E4FEC8, ped); } // 0x298B91AE825E5705 0x7AB5523B
	static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xD73333C5744EC59F, ped); } // 0x5FFF4CFC74D8FB80 0x51BBCE7E
	static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0x39E8013F81E80F72, ped); } // 0x9134873537FA419C 0xCA072485
	static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0x181C1956DD1F0598, ped, toggle); } // 0x56CEF0AC79073BDE 0x604C872B
	static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x4C79AE263CECDBFE, ped, toggle); } // 0xD718A22995E2B4BC 0x8D4D9ABB
	static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0x61609F079F9721BE, ped); } // 0x9483AF821605B1D8 0x2CE311A7
	static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0xDF9016EF485A714E, ped, toggle); } // 0xEDF4079F9D54C9A1 0xB014A09C
	static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x384DB879D4C8986F, ped, toggle); } // 0xC7EF1BA83230BA07 0x5DB7B3A9
	static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, Any* outBone) { return invoke<BOOL>(0xA0C374BDC969546E, ped, outBone); } // 0xD75960F6BD9EA49C 0xAB933841
	static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0x2DEA009F66EB73A3, ped); } // 0x8EF6B7AC68E2F01B 0x56CB715E
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0x10FC9CEDDE1AFD62, value); } // 0x1B1E2A40A65B8521 0x516E30EE
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0x55BD8AB42991E21A); } // 0xEA16670E7BA4743C 0x6E965420
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0xFB9FDA1E6124D225, modifier); } // 0x66460DEDDD417254 0x0F9A401F
	static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xD047B8E6BE52EACD); } // 0x46E56A7CD1D63C3F 0x97886238
	static void _0x2F3C3D9F50681DE4(Any p0, BOOL p1) { invoke<Void>(0xFC217D0B31EEA870, p0, p1); } // 0x2F3C3D9F50681DE4 0xCC9D7F1A
	static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0xB43604F27F1EAE5F, ped, toggle); } // 0x63F58F7C80513AAD 0x75C49F74
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, Any team, BOOL toggle) { invoke<Void>(0x5254789510333C09, ped, team, toggle); } // 0xBF1CA77833E58F2C 0xB103A8E1
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, _Player player, BOOL toggle) { invoke<Void>(0x48262A314D66BAF1, ped, player, toggle); } // 0x66B57B72E0836A76 0xD050F490
	static void _0x061CB768363D6424(Any p0, BOOL p1) { invoke<Void>(0xFAF937179EF16317, p0, p1); } // 0x061CB768363D6424 0x7DA12905
	static void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(Any p0, BOOL p1) { invoke<Void>(0x68AB70B4C8A71A58, p0, p1); } // 0xFD325494792302D7 0x7F67671D
	static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0xDDBCD61F0E5D4A80, ped); } // 0x0BD04E29640C9C12 0x84FA790D
	static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0xF1FCC31718DDF6B1, ped); } // 0x16E42E800B472221 0xA819680B
	static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0xAE4B87F710B7DE76, ped); } // 0x7DCE8BDA0F1C1200 0xCD71F11B
	static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0x96E535A40E0E0B83, ped); } // 0xFB92A102F1C4DFA3 0xABF77334
	static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xED92E08D8DEBAA73, ped); } // 0xCEDABC5900A0BF97 0x07E5BC0E
	static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0x66ED05E88C842554, ped); } // 0x53E8CB4F48BFE623 0xBCE03D35
	static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0x663F0408D6608B3D, ped); } // 0x117C70D1F5730B5E 0xC3169BDA
	static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0x479E3AE8674A089A, ped); } // 0x5527B8246FEF9B11 0x7BC5BF3C
	static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0x337FF43C2B365BF6, ped); } // 0x433DDFFE2044B636 0xB19215F6
	static BOOL _0x26AF0E8E30BD2A2C(Any p0) { return invoke<BOOL>(0xC9CF03276569DEE7, p0); } // 0x26AF0E8E30BD2A2C
	static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0xC4E0C3DEFA9F32C8, ped); } // 0x79CFD9827CC979B6 0x7D4BC475
	static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xE0F3965D4F1F7BEA, ped); } // 0x8B9F1FC6AE8166C0 0x01F3B035
	static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, Any tintIndex) { invoke<Void>(0xDBB5A95FF0044B4F, ped, tintIndex); } // 0x333FC8DB079B7186 0x5AEFEC3A
	static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, Any* outTintIndex) { invoke<Void>(0xF38BCBCE2B9BAB2A, ped, outTintIndex); } // 0xEAF5F7E5AE7C6C9D 0xE9E7FAC5
	static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0x4124EB94E0A2C006, p0, p1); } // 0xE88DA0751C22A2AD 0x177EFC79
	static Any _0x8C4F3BF23B6237DB(Any p0, BOOL p1, BOOL p2) { return invoke<Any>(0x1653E9CD2AA5D6AA, p0, p1, p2); } // 0x8C4F3BF23B6237DB
	static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0x7FAA9FA519662485, ped, toggle); } // 0x030983CA930B692D 0xB90353D7
	static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xBB089326F4413ADC, ped); } // 0xD125AE748725C6BC 0x9199C77D
	static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0xF580F0607D97E33F, ped); } // 0x6E575D6A898AB852 0x16FD386C
	static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0x8001CAC2CDE17C93, ped, value); } // 0xF107E836A70DCE05 0xEF3B4ED9
	static void _0x52D59AB61DDC05DD(Ped ped, BOOL p1) { invoke<Void>(0xA951969D2E242071, ped, p1); } // 0x52D59AB61DDC05DD 0x9A2180FF
	static void _0xEC4B4B3B9908052A(Any p0, float p1) { invoke<Void>(0x7867D482F2937F21, p0, p1); } // 0xEC4B4B3B9908052A 0xF30658D2
	static void _0x733C87D4CE22BEA2(Any p0) { invoke<Void>(0x8DE315A7ED00BB64, p0); } // 0x733C87D4CE22BEA2 0x43709044
	static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0x089391A6493B0105, ped, value); } // 0xF29CF591C4BF6CEE 0x4BD72FE8
	static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0xEE385441703939AA, ped, value); } // 0x33A8F7F7D5F7F33C 0xB32087E0
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0x18975E83D9441593, ped, value); } // 0x2DB492222FB21E26 0x72E2E18B
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xD662CC0CBE4476A6, ped, value); } // 0x70793BDCA1E854D4 0x0CEA0F9A
	static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0x257820EB849FA79C, ped, angle); } // 0x7A276EB2C224D70F 0x5CC2F1B8
	static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0x2AD9942D478B80F4, ped, angle); } // 0x78D0B67629D75856 0x39D9102F
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0x115643F7E168392A, ped, range); } // 0x9C74B0BC831B753A 0xFDF2F7C2
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0x723674FD8852A255, ped, angle); } // 0x3B6405E8AB34A907 0xE57202A1
	static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, char* action) { invoke<Void>(0x645BA9420353EC0E, ped, p1, action); } // 0x88CBB5CEB96B7BD2 0x67E28E1D
	static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0x0E993EC7F4BA9325, ped); } // 0x7C2AC9CA66575FBF 0x40321B83
	static int CREATE_GROUP(int unused) { return invoke<int>(0xEF771BAD465764E2, unused); } // 0x90370EBE0FEE1A3D 0x8DC0368D
	static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0x723FFA17C201BBE1, ped, groupId); } // 0x2A7819605465FBCE 0x7265BEA2
	static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0xF6C043D83EDAD90F, ped, groupId); } // 0x9F3480FE65DB31B5 0x0EE13F92
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL p2) { invoke<Void>(0x0D8A5018724BDEFC, pedHandle, groupHandle, p2); } // 0x2E2F4240B3F24647 0xD0D8BDBC
	static void REMOVE_GROUP(int groupId) { invoke<Void>(0x68288D1086BC1B24, groupId); } // 0x8EB2F69076AF7053 0x48D72B88
	static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0x988206841442D7CE, ped); } // 0xED74007FFB146BC2 0x82697713
	static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xCD62786CA98E5AFD, ped, groupId); } // 0x9BB01E3834671191 0x876D5363
	static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0xBA27A740ED6E91CC, ped); } // 0x1C86D8AEF8254B78 0x9678D4FF
	static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0xFF241DECD8873FB3, groupHandle, separationRange); } // 0x4102C7858CFEE4E4 0x7B820CD5
	static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xF14C38FF12831E5F, ped, ms); } // 0xFA0675AB151073FA 0x2F0D0973
	static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0x21F498AB53003A3E, ped); } // 0xD6A86331A537A7B9 0x02C2A6C3
	static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0x019E78F3A1071807, ped, target); } // 0x4859F1FC66A6278E 0xFE027CB5
	static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xBAC6B17ED94940FB, ped, target); } // 0xEAD42DE3610D0721 0xCCD525E1
	static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0x9E3EA086F9F745A5, ped); } // 0xB2C086CC1BF8F2BF 0xAC3CEB9C
	static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0xE44CFAD9FA539E8A, ped); } // 0x4AE4FF911DFB61DA 0x3B321816
	static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0x12AE3D700F6A2545, ped); } // 0x9A497FE2DF198913 0xD45D605C
	static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0xA206EFFF59CEDCA5, ped, p1); } // 0x4FBACCE3B4138EE8 0x0A66CE30
	static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xEA5E391ACA923D54, ped); } // 0x9B128DC36C1E04CF 0xDE1DBB59
	static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0xC9E2B89AB7A49836, ped); } // 0x5486A79D9FBD342D 0x1D196361
	static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0x9337892D1C5EA0F0, ped); } // 0xBBCCE00B381F8482 0x85D813C6
	static BOOL IS_PED_IN_COVER(Ped ped, BOOL p1) { return invoke<BOOL>(0xFA1068B6E2F3F22A, ped, p1); } // 0x60DFD0691A170B88 0x972C5A8B
	static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0xEE07AC461C033B74, ped); } // 0x845333B3150583AB 0xB89DBB80
	static BOOL _0x6A03BF943D767C93(Any p0) { return invoke<BOOL>(0x907A742605DA3369, p0); } // 0x6A03BF943D767C93
	static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0x697C638548C4E55F, ped); } // 0x9F65DBC537E59AD5 0xA3589628
	static Any SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<Any>(0x10E492F294030109, ped, pinned, i); } // 0xAAD6D1ACF08F4612 0xCC78999D
	static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0x35947CC6F773C0CC, ped); } // 0x6F4C85ACD641BCD2 0xACF162E0
	static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xAE597D681C7F166F, ped); } // 0x814FA8BE5449445D 0x99968B37
	static Entity _GET_PED_KILLER(Ped ped) { return invoke<Entity>(0x0710BA0858DCEA2F, ped); } // 0x93C8B64DEB84728C 0x84ADF9EB
	static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0xF61B899F5A4B9788, ped); } // 0x16FFE42AB2D2DC59 0x63458C27
	static int _GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0xBD18898011E03659, ped); } // 0x1E98817B311AE98A
	static Any _0x5407B7288D0478B7(Any p0) { return invoke<Any>(0xBA41AA46A339E323, p0); } // 0x5407B7288D0478B7 0xEF0B78E6
	static Any _0x336B3D200AB007CB(Any p0, float p1, float p2, float p3, float p4) { return invoke<Any>(0x8994C956AF25DEC7, p0, p1, p2, p3, p4); } // 0x336B3D200AB007CB 0xFB18CB19
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0xC2405A938AB96442, ped, hash); } // 0xADB3F206518799E8 0x423B7BA2
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0x65889F26F311FC55, ped, hash); } // 0xC80A74AC829DDD92 0x79F8C18C
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xFDDE2C1A05E64390, relationship, group1, group2); } // 0xBF25EB89375A37AD 0xD4A215BA
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0x231C70933D0448F6, relationship, group1, group2); } // 0x5E29243FB56FC6D4 0x994B8C2D
	static Any ADD_RELATIONSHIP_GROUP(char* name, Hash* groupHash) { return invoke<Any>(0xD8C3303D0A49D05B, name, groupHash); } // 0xF372BC22FCB88606 0x8B635546
	static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0x17BC7AF21106B65E, groupHash); } // 0xB6BA2444AB393DA2 0x4A1DC59A
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xD02EB6750D2F63A8, ped1, ped2); } // 0xEBA5AD3A0EAF7121 0xE254C39C
	static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0x3DEF74A283D752C6, ped); } // 0x42FDD0F017B1E38E 0x714BD6E4
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0x0EAE41B4E693BA70, ped); } // 0x7DBDD04862D95F04 0x354F283C
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0xD28ED8D0CD006D1E, group1, group2); } // 0x9E6B70061662AE5C 0x4E372FE2
	static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0x8E3264F37A984E0D, ped, toggle); } // 0x4328652AE5769C71 0x7FDDC0A6
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, Any maxFriends) { invoke<Void>(0xE00ECCA633196276, ped, radius, maxFriends); } // 0x112942C6E708F70B 0xD78AC46C
	static BOOL IS_PED_RESPONDING_TO_EVENT(Any p0, Any p1) { return invoke<BOOL>(0xF39C1D85FD64BBCA, p0, p1); } // 0x625B774D75C87068 0x7A877554
	static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0xD38FBE9CB8D1BC3F, ped, patternHash); } // 0x9AC577F5A12AD8A9 0xB4629D66
	static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0x69C55299AED882A7, ped, shootRate); } // 0x614DA022990752DC 0xFB301746
	static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xB1F3E0B056AE92FB, ped, combatType, p2); } // 0xFF41B4B141ED981C 0xD8B7637C
	static float GET_COMBAT_FLOAT(Ped p0, int p1) { return invoke<float>(0x656DD42F779B1980, p0, p1); } // 0x52DFF8A10508090A 0x511D7EF8
	static void GET_GROUP_SIZE(int groupID, Any* unknown, int* sizeInMembers) { invoke<Void>(0x42CA0FB80432844C, groupID, unknown, sizeInMembers); } // 0x8DE69FE35CA09A45 0xF7E1A691
	static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0x7DB6845B2861FAF4, groupId); } // 0x7C6B0C22F9F40BBE 0x935C978D
	static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0x65333878E8C653BC, ped); } // 0xF162E133B4E7A675 0x134E0785
	static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0x5D586EFF7D308A80, ped); } // 0x5891CAC5D4ACFF74 0x836D9795
	static _Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<_Player>(0x42CE184CFB48784E, ped); } // 0x6A3975DEA89F9A17 0xDE7442EE
	static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xC5D277D42BC00246, groupId, formationType); } // 0xCE2F5FC3AF7E8C1E 0x08FAC739
	static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { invoke<Void>(0xF75E59310C395505, groupId, p1, p2, p3); } // 0x1D9D45004C28C916 0xB1E086FF
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0x630104BEC62CC595, groupHandle); } // 0x63DAB4CCB3273205 0x267FCEAD
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0x02056DA113641E74, ped); } // 0x6094AD011A2EA87D 0x6DE3AADA
	static Any SET_EXCLUSIVE_PHONE_RELATIONSHIPS(Any p0) { return invoke<Any>(0x3F561A9EB662F6AE, p0); } // 0xF92691AED837A5FC 0x56E0C163
	static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0x26F550B81432F690, ped, toggle); } // 0x9FF447B6B6AD960A 0x3CA16652
	static void APPLY_DAMAGE_TO_PED(Ped ped, Any damageAmount, BOOL p2) { invoke<Void>(0x455B583787D591F7, ped, damageAmount, p2); } // 0x697157CED63F18D4 0x4DC27FCF
	static Any _0x36B77BB84687C318(Any p0, Any p1) { return invoke<Any>(0x0791098320174A73, p0, p1); } // 0x36B77BB84687C318
	static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0x2C0632438409BB1F, ped, toggle); } // 0xDA1F1B7BE1A8766F 0xC4D122F8
	static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0x41E82193D5A8597A, ped, toggle); } // 0x3DBFC55D5C9BB447 0x0E038813
	static int GET_PED_TYPE(Ped ped) { return invoke<int>(0x2D802CE8E3593F5E, ped); } // 0xFF059E1E4C01E63C 0xB1460D43
	static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0xAF479A870D26F094, ped, toggle); } // 0xBB03C38DD3FB7FFD 0x84E7DE9F
	static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0x3A69823CD943D4B5, ped, value); } // 0xF5F6378C4F3419D3 0x5533F60B
	static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0xF0BA9B123B880A7E, ped); } // 0x4700A416E8324EF3 0xA45B6C8D
	static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0x3A95F1B4AADBE32F, ped, value); } // 0x43C851690662113D 0xFE0A106B
	static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0x77CEB5EAF128D34F, ped, value); } // 0x6BA428C528D9E522 0x082EF240
	static void _0x2735233A786B1BEF(Any p0, float p1) { invoke<Void>(0x3FCA269500AC35B6, p0, p1); } // 0x2735233A786B1BEF 0x373CC405
	static void _0x952F06BEECD775CC(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA6AA0FD7C4DC4108, p0, p1, p2, p3); } // 0x952F06BEECD775CC
	static void _0xE6CA85E7259CE16B(Any p0) { invoke<Void>(0x22A9AEB5ABF86D86, p0); } // 0xE6CA85E7259CE16B
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0xB77EBFE57674ED21, ped, state); } // 0x7A6535691B477C48 0x8A251612
	static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0x40AB8799FAA7282F, ped); } // 0x51AC07A44D4F5B8A 0xC9D098B3
	static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0x41322B2D7C88AFF1, ped); } // 0x45BBCBA77C29A841 0xACDD0674
	static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0x18B19DCACDEA085D, ped, posX, posY, posZ); } // 0x87052FE446E07247 0x9561AD98
	static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0x4C5CC24696B9B995, groupID, memberNumber); } // 0x51455483CF23ED97 0x9AA3CC8C
	static Ped _GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0x6DE0B4A11DC40132, groupID); } // 0x5CCE68DBD5FE93EC
	static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0x77637031DE326F70, ped, toggle); } // 0x971D38760FBC02EF 0xA7EC79CE
	static void _0x49E50BDB8BA4DAB2(Any p0, BOOL p1) { invoke<Void>(0x07B85742D144A17B, p0, p1); } // 0x49E50BDB8BA4DAB2 0x397F06E3
	static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0x019057DADA219C94, ped); } // 0x9DE327631295B4C2 0x7AB43DB8
	static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0x2CCFE2A750B8D80F, ped); } // 0xC024869A53992F34 0x0E8D524F
	static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0x8D7E73EBDF07B3B9, ped, posX, posY, posZ); } // 0x9AFEFF481A85AB2E 0xD66AE1D3
	static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x990A8166D29F60BC, ped, toggle); } // 0x2A30922C90C9B42C 0x6FE1E440
	static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xE4C0529BFE536707, toggle); } // 0x102E68B2024D536D 0x23441648
	static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0x690C845D038434A3, toggle); } // 0x8A4986851C4EF6E7 0x82E548CC
	static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xE5E6C9E2D44FA40D, toggle); } // 0x444CB7D7DBE6973D 0xEDC31475
	static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xB1F4BFF039944468); } // 0x5EE2CAFF7F17770D 0xAA73DAD9
	static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0x84B1D0A0FE1C520D, ped, toggle); } // 0x02A0C9720B854BFA 0xAE620A1B
	static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x46091D817072B57A, ped, p1, p2); } // 0x1CCE141467FF42A2 0x149C60A8
	static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0x18BDDD7BAAC039DA, ped); } // 0x6F972C1AB75A1ED0 0x759EF63A
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0x69FEFE28E1352842, ped); } // 0xBB062B2B5722478E 0x90E805AC
	static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0x1E3B8AEDFC45B44E, ped); } // 0x44D28D5DDFE5F68C 0x46828B4E
	static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0x1D2F43BCE2585EE8, ped, toggle); } // 0xDF1AF8B5D56542FA 0xAC9BBA23
	static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0xEC659B412B3038AF, ped, toggle); } // 0xC52E0F855C58FC2E 0x9208D689
	static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0x73656AAE72617724, ped, toggle); } // 0xF99F62004024D506 0x7BF61471
	static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xA58CD1D52B982AB4, ped, toggle, p2); } // 0xB3B1CB349FF9C75D 0x47C60963
	static Any GET_PED_ALERTNESS(Ped ped) { return invoke<Any>(0x6714BA7358946606, ped); } // 0xF6AA118530443FD2 0xF83E4DAF
	static void SET_PED_ALERTNESS(Ped ped, Any value) { invoke<Void>(0x57791AA9BC5E53E4, ped, value); } // 0xDBA71115ED9941A6 0x2C32D9AE
	static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x7EF0CC11828DB6AC, ped, toggle); } // 0xBC0ED94165A48BC2 0x89AD49FF
	static void SET_PED_MOVEMENT_CLIPSET(Ped ped, char* clipSet, float p2) { invoke<Void>(0x207947B723A8ADC7, ped, clipSet, p2); } // 0xAF8A94EDE7712BEF 0xA817CDEB
	static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0x046314D7B672BA6D, ped, p1); } // 0xAA74EC0CB0AAEA2C 0xB83CEE93
	static void SET_PED_STRAFE_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0x191B82291DF102D9, ped, clipSet); } // 0x29A28F3F8CF6D854 0x0BACF010
	static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0x878747E67E7C09C8, ped); } // 0x20510814175EA477 0xF1967A12
	static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0x3F821FD1E4876BD6, ped, clipSet); } // 0x2622E35B77D3ACA2 0xF8BE54DC
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0xE43D1CC2215D433D, ped); } // 0x97B0DB5B4AA74E77 0xC60C9ACD
	static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, char* clipset) { invoke<Void>(0xB89DB7F3AD92210C, ped, clipset); } // 0xED34AB6C5CB36520 0xD4C73595
	static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0x3CBE79F261616795, ped); } // 0x4AFE3690D7E0B5AC 0xAEC9163B
	static void _0x9DBA107B4937F809(Any p0, char* p1) { invoke<Void>(0x808773C6B91EFB81, p0, p1); } // 0x9DBA107B4937F809
	static void _0xC79196DCB36F6121(Any p0) { invoke<Void>(0x1DC8A1E142967E06, p0); } // 0xC79196DCB36F6121
	static void _0x80054D7FCC70EEC6(Any p0) { invoke<Void>(0xFE8E1FB2AD373804, p0); } // 0x80054D7FCC70EEC6
	static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xE13684BE0B128482, ped, context); } // 0x530071295899A8C6 0x27F25C0E
	static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0x30098A3F16A6EC83, ped); } // 0x22EF8FF8778030EB 0x3C94D88A
	static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, char* animDict, char* anim) { return invoke<BOOL>(0xD97629327A5C9664, ped, animDict, anim); } // 0x6EC47A344923E1ED 0x3C30B447
	static void SET_PED_ALTERNATE_WALK_ANIM(Any p0, Any* p1, Any* p2, float p3, BOOL p4) { invoke<Void>(0xA33207B692D70CC1, p0, p1, p2, p3, p4); } // 0x6C60394CB4F75E9A 0x895E1D67
	static void CLEAR_PED_ALTERNATE_WALK_ANIM(Any p0, float p1) { invoke<Void>(0xCC1F4558ACCA8423, p0, p1); } // 0x8844BBFCE30AA9E9 0x5736FB23
	static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, char* animDictionary, char* animationName, float p4, BOOL p5) { invoke<Void>(0xD367B3DF31E4807D, ped, stance, animDictionary, animationName, p4, p5); } // 0x90A43CC281FFAB46 0xBA84FD8C
	static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0x0C4A8435178E77F8, ped, stance, p2); } // 0xD8D19675ED5FBDCE 0x7A7F5BC3
	static void SET_PED_GESTURE_GROUP(Ped ped, Any* p1) { invoke<Void>(0x5BC732D3C56F0394, ped, p1); } // 0xDDF803377F94AAA8 0x170DA109
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(Any* p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9) { return invoke<Vector3>(0x79DFCC05138E0448, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xBE22B26DD764C040 0xC59D4268
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(Any* p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9) { return invoke<Vector3>(0xE38D21D88BA9CDB3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4B805E6046EE9E47 0x5F7789E6
	static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x0604A0F4F09283DF, ped, componentId); } // 0x67F3780DD425D4FC 0x29850FE2
	static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0x99B2D3E20FC2D3FB, ped, componentId); } // 0x27561561732A7842 0x9754C27D
	static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xE2E31A57FC3F8410, ped, componentId); } // 0x04A355E041E004E6 0xC0A8590A
	static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0xBCB19B7F5F521F7C, ped, componentId, drawableId); } // 0x8F7156A3142A6BAD 0x83D9FBE7
	static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0x31113E7E0A7E5A6A, ped, propId); } // 0x5FAF9754E789FB47 0xC9780B95
	static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0x61C779B1C73DF4E4, ped, propId, drawableId); } // 0xA6E7F1CEB523E171 0x4892B882
	static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x15FD1DF1051C30CE, ped, componentId); } // 0xE3DD5F2A84B42281 0xEF1BC082
	static BOOL _0x9E30E91FB03A2CAF(Any* p0, Any* p1) { return invoke<BOOL>(0x240B463623BD5C84, p0, p1); } // 0x9E30E91FB03A2CAF
	static Any _0x1E77FA7A62EE6C4C(Any p0) { return invoke<Any>(0xB3E0474E333CDFAD, p0); } // 0x1E77FA7A62EE6C4C
	static Any _0xF033419D1B81FAE8(Any p0) { return invoke<Any>(0xDE07279527224BD8, p0); } // 0xF033419D1B81FAE8
	static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xB80216B463E5B366, ped, componentId, drawableId, textureId); } // 0xE825F6B6CEA7671D 0x952ABD9A
	static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0xA27FDFE5C0EBB875, ped, componentId, drawableId, textureId, paletteId); } // 0x262B14F48D29DE80 0xD4F7B05C
	static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, BOOL p1) { invoke<Void>(0x6F040B02C824E718, ped, p1); } // 0xC8A9481A01E63C28 0x4111BA46
	static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0x59EC44E2FED6E16B, ped); } // 0xC44AA05345C992C6 0xE3318E0E
	static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0xF3BDAFB717C7FBD5, ped); } // 0x45EEE61580806D63 0xC866A984
	static void SET_PED_BLEND_FROM_PARENTS(Any p0, Any p1, Any p2, float p3, float p4) { invoke<Void>(0xDCEC280D67681E84, p0, p1, p2, p3, p4); } // 0x137BBD05230DB22D 0x837BD370
	static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0x7504458282E37D37, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); } // 0x9414E18B9434C2FE 0x60746B88
	static BOOL _GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0xB07B3E2FD5A9971A, ped, headBlendData); } // 0x2746BD9D88C5C5D0
	static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0x47A9F007A8D7BD40, ped, shapeMix, skinMix, thirdMix); } // 0x723538F61C647C5A 0x5CB76219
	static void _SET_PED_EYE_COLOR(Ped ped, int index) { invoke<Void>(0x134BAEF85EC0795C, ped, index); } // 0x50B56988B170AFDF
	static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0x6EB31A9B93CF00AA, ped, overlayID, index, opacity); } // 0x48F44967FA05CC1E 0xD28DBA90
	static int _GET_PED_HEAD_OVERLAY_VALUE(Ped ped, int overlayID) { return invoke<int>(0xC2E06BDFB9D5F310, ped, overlayID); } // 0xA60EF3B6461A4D43
	static int _GET_NUM_HEAD_OVERLAY_VALUES(int overlayID) { return invoke<int>(0x4C5D2C59D969604C, overlayID); } // 0xCF1CE768BB43480E 0xFF43C18D
	static void _SET_PED_HEAD_OVERLAY_COLOR(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0xE65393AF50FBAC87, ped, overlayID, colorType, colorID, secondColorID); } // 0x497BF74A7B9CB952
	static void _SET_PED_HAIR_COLOR(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0xB1BC45CABF67963F, ped, colorID, highlightColorID); } // 0x4CFFC65454C93A49
	static int _GET_NUM_HAIR_COLORS() { return invoke<int>(0xE52411F8E34285D9); } // 0xE5C0CF872C2AD150
	static int _0xD1F7CA1535D22818() { return invoke<int>(0xAC2612C9C913796E); } // 0xD1F7CA1535D22818
	static void _0x4852FC386E2E1BB5(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x95C740F48D01BE74, p0, p1, p2, p3); } // 0x4852FC386E2E1BB5
	static void _0x013E5CFC38CD5387(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xC23AF52A68E343B0, p0, p1, p2, p3); } // 0x013E5CFC38CD5387
	static BOOL _0xED6D8E27A43B8CDE(Any p0) { return invoke<BOOL>(0xA9A44E5AA1E74B6C, p0); } // 0xED6D8E27A43B8CDE
	static int _0xEA9960D07DADCF10(Any p0) { return invoke<int>(0x3962AE2D88F1C23E, p0); } // 0xEA9960D07DADCF10
	static BOOL _0x3E802F11FBE27674(Any p0) { return invoke<BOOL>(0xF17A02E310FB2971, p0); } // 0x3E802F11FBE27674
	static BOOL _0xF41B5D290C99A3D6(Any p0) { return invoke<BOOL>(0x05F9A376EF345505, p0); } // 0xF41B5D290C99A3D6
	static BOOL _0xE0D36E5D9E99CC21(Any p0) { return invoke<BOOL>(0x084EE01997053318, p0); } // 0xE0D36E5D9E99CC21
	static Any _0xAAA6A3698A69E048(Any p0) { return invoke<Any>(0x288C3383D30D679B, p0); } // 0xAAA6A3698A69E048
	static BOOL _0x0525A2C2562F3CD4(Any p0) { return invoke<BOOL>(0x359F618A111E25D4, p0); } // 0x0525A2C2562F3CD4
	static BOOL _0x604E810189EE3A59(Any p0) { return invoke<BOOL>(0xC7A7B212090F2F60, p0); } // 0x604E810189EE3A59
	static Any _0xC56FBF2F228E1DAC(Any p0, Any p1, Any p2) { return invoke<Any>(0xF41F64140E272B26, p0, p1, p2); } // 0xC56FBF2F228E1DAC
	static void _SET_PED_FACE_FEATURE(Ped ped, int index, float scale) { invoke<Void>(0x9F9EB8F6C6AAC267, ped, index, scale); } // 0x71A5C1DBA060049E
	static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0x0C83B6535D8003CD, ped); } // 0x654CD0A825161131 0x2B1BD9C5
	static void _0x4668D80430D6C299(Ped ped) { invoke<Void>(0x61E5185648237702, ped); } // 0x4668D80430D6C299 0x894314A4
	static void _0xCC9682B8951C5229(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF6541572F8915B7A, p0, p1, p2, p3, p4); } // 0xCC9682B8951C5229 0x57E5B3F9
	static void _0xA21C118553BBDF02(Any p0) { invoke<Void>(0x6E4865F2FC5EE76F, p0); } // 0xA21C118553BBDF02 0xC6F36292
	static int _GET_FIRST_PARENT_ID_FOR_PED_TYPE(int type) { return invoke<int>(0xC7F68EA3C9303F09, type); } // 0x68D353AB88B97E0C 0x211DEFEC
	static int _GET_NUM_PARENT_PEDS_OF_TYPE(int type) { return invoke<int>(0x8278F5950DE5052E, type); } // 0x5EF37013A6539C9D 0x095D3BD8
	static Any _0x39D55A620FCB6A3A(Ped ped, int p1, int drawableId, int textureId) { return invoke<Any>(0x6AE78E4B15E61623, ped, p1, drawableId, textureId); } // 0x39D55A620FCB6A3A 0x45F3BDFB
	static BOOL _0x66680A92700F43DF(Ped p0) { return invoke<BOOL>(0x6215D63CCF0E0AE6, p0); } // 0x66680A92700F43DF 0xC6517D52
	static void _0x5AAB586FFEC0FD96(Any p0) { invoke<Void>(0x4912BBCD2C16A25E, p0); } // 0x5AAB586FFEC0FD96 0x6435F67F
	static Any _0x2B16A3BFF1FBCE49(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<Any>(0xEA0F22EB0D1B31C6, ped, componentId, drawableId, TextureId); } // 0x2B16A3BFF1FBCE49 0xC0E23671
	static BOOL _0x784002A632822099(Ped ped) { return invoke<BOOL>(0x7440D9CC6A6BECE9, ped); } // 0x784002A632822099 0x3B0CA391
	static void _0xF79F9DEF0AADE61A(Ped ped) { invoke<Void>(0xD981D8E272020E41, ped); } // 0xF79F9DEF0AADE61A 0xFD103BA7
	static int GET_PED_PROP_INDEX(Ped ped, int componentId) { return invoke<int>(0x9C84A6C416EAB87E, ped, componentId); } // 0x898CC20EA75BACD8 0x746DDAC0
	static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach) { invoke<Void>(0xA4C961D96B05ABB2, ped, componentId, drawableId, TextureId, attach); } // 0x93376B65A266EB5F 0x0829F2E2
	static void KNOCK_OFF_PED_PROP(int propIndex, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x0A1EA45B72B8D26C, propIndex, p1, p2, p3, p4); } // 0x6FD7816A36615F48 0x08D8B180
	static void CLEAR_PED_PROP(Ped ped, int propId) { invoke<Void>(0x2D4CE8A3F6D225E4, ped, propId); } // 0x0943E5B8E078E76E 0x2D23D743
	static void CLEAR_ALL_PED_PROPS(Ped ped) { invoke<Void>(0xAEDAFF716BF5606B, ped); } // 0xCD8A7537A9B52F06 0x81DF8B43
	static void _0xAFF4710E2A0A6C12(Any p0) { invoke<Void>(0x5E2A17D0A0C51B5B, p0); } // 0xAFF4710E2A0A6C12
	static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0xF810D840B3F0B4A1, ped, componentId); } // 0xE131A28626F81AB2 0x922A6653
	static void _0x1280804F7CFD2D6C(Any p0) { invoke<Void>(0xB0821EB147F8C1D1, p0); } // 0x1280804F7CFD2D6C 0x7BCD8991
	static void _0x36C6984C3ED0C911(Any p0) { invoke<Void>(0xCB357088AFDE1F76, p0); } // 0x36C6984C3ED0C911
	static void _0xB50EB4CCB29704AC(Any p0) { invoke<Void>(0x55720175F0C0192D, p0); } // 0xB50EB4CCB29704AC 0x080275EE
	static BOOL _0xFEC9A3B1820F3331(Any p0) { return invoke<BOOL>(0xBBA40ECFC7FE2910, p0); } // 0xFEC9A3B1820F3331
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xFF5CE2ECB4FBD4A8, ped, toggle); } // 0x9F8AA94D6D97DBF4 0xDFE34E4A
	static void SET_PED_BOUNDS_ORIENTATION(Any p0, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0x45EAFFB73A486ECF, p0, p1, p2, p3, p4, p5); } // 0x4F5F651ACCC9C4CF 0xCFA20D68
	static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0x4A7314DF3F35C6D3, ped, target); } // 0x2F25D9AEFA34FBA2 0x50A95442
	static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float areaToAttack) { invoke<Void>(0xA53AB31E7D599443, ped, areaToAttack); } // 0x9222F300BF8354FE 0x7F87559E
	static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0x0A3E1B3F8A867504, x, y, z, xRadius, yRadius, zRadius, pedType); } // 0x876046A8E3A4B71C 0xDC8239EB
	static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0x0F156AC6B7986893, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); } // 0xC33AB876A77F8164 0x8F6C1F55
	static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0xB06F6E38A0659317, value); } // 0x14F19A8782C8071E 0x85615FD0
	static BOOL _0x03EA03AF85A85CB7(Any p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0x4A6AEFD8B21BE62D, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x03EA03AF85A85CB7 0x18DD76A1
	static void _0xDED5AF5A0EA4B297(Any p0, float p1) { invoke<Void>(0xDCE423FBEB8C7F88, p0, p1); } // 0xDED5AF5A0EA4B297 0x6D55B3B3
	static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0x40BD236CFBCDEEF7, driver, ability); } // 0xB195FFA8042FC5C3 0xAAD4012C
	static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0x04B994BBE3AC2417, driver, aggressiveness); } // 0xA731F608CA104E3C 0x8B02A8FB
	static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0x9379CEA9E7FE4EAC, ped); } // 0x128F79EDCECE4FD5 0xC0EFB7A3
	static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xB95715C17CF0AD61, ped, time1, time2, ragdollType, p4, p5, p6); } // 0xAE99FB955581844A 0x83CB5052
	static Any SET_PED_TO_RAGDOLL_WITH_FALL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<Any>(0x5564AD30FF857E52, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xD76632D99E4966C8 0xFA12E286
	static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xFFDCFD22B04FEBDA, ped, toggle); } // 0xF0A4F1BBF4FA7497 0x2654A0F4
	static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xFFE4F37124DBE6D9, ped); } // 0x47E4E977581C5B55 0xC833BBE1
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xC0863786488142AF, ped); } // 0xE3B6097CC25AA69E 0x44A153F2
	static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0x0E5A76EDF0FF9F5E, ped); } // 0x01F6594B923B9251 0x20A5BDE0
	static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0xA3C57E8FE4A1A87B, ped); } // 0x9FA4664CF62E47E8 0xF2865370
	static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0x9D36C5E0C178FB8D, ped, toggle); } // 0xB128377056A54E2A 0xCF1384C4
	static BOOL _0xD1871251F3B5ACD7(Any p0) { return invoke<BOOL>(0x9D0717ED797971B2, p0); } // 0xD1871251F3B5ACD7
	static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0x0256D99B330069EE, ped); } // 0x2AFE52F782F25775 0xFB2AFED1
	static BOOL _0xA3F3564A5B3646C0(Any p0) { return invoke<BOOL>(0x8F60794D419AC708, p0); } // 0xA3F3564A5B3646C0 0x97353375
	static void _SET_PED_RAGDOLL_BLOCKING_FLAGS(Ped ped, Any p1) { invoke<Void>(0x6F169B653DFB4506, ped, p1); } // 0x26695EC767728D84 0x9C8F830D
	static void _0xD86D101FCFD00A4B(Any p0, Any p1) { invoke<Void>(0x3E83952CCFB640CD, p0, p1); } // 0xD86D101FCFD00A4B 0x77CBA290
	static void SET_PED_ANGLED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xFCE7C0C68D597765, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC7F76DF27A5045A1 0x3EFBDD9B
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0x728A92BBF4806518, ped, x, y, z, radius, p5, p6); } // 0x9D3151A373974804 0xBD96D8E8
	static void _0xF9B8F91AAD3B953E(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6) { invoke<Void>(0xE3434162092AE603, p0, p1, p2, p3, p4, p5, p6); } // 0xF9B8F91AAD3B953E 0x40638BDC
	static void _0xE4723DB6E736CCFF(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6) { invoke<Void>(0x793ABAAE9D37424F, p0, p1, p2, p3, p4, p5, p6); } // 0xE4723DB6E736CCFF 0x4763B2C6
	static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0x47354A107FC561C5, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4EF47FE21698A8B6 0x74BDA7CE
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Any p0, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xC20C0E77FB8E4BCF, p0, p1, p2, p3, p4); } // 0x413C6C763A4AFFAD 0xB66B0C9A
	static void REMOVE_PED_DEFENSIVE_AREA(Any p0, BOOL p1) { invoke<Void>(0x3031CD34FF48CEF7, p0, p1); } // 0x74D4E028107450A9 0x34AAAFA5
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Any p0, BOOL p1) { return invoke<Vector3>(0xA06405D74CA3969D, p0, p1); } // 0x3C06B8786DD94CD1 0xCB65198D
	static BOOL _0xBA63D9FE45412247(Any p0, BOOL p1) { return invoke<BOOL>(0xF046339CFBE0D4FB, p0, p1); } // 0xBA63D9FE45412247
	static void SET_PED_PREFERRED_COVER_SET(Any p0, Any p1) { invoke<Void>(0xC18C7AFC37DBBC7D, p0, p1); } // 0x8421EB4DA7E391B9 0xF3B7EFBF
	static void REMOVE_PED_PREFERRED_COVER_SET(Any p0) { invoke<Void>(0x11F0D83A14A2948C, p0); } // 0xFDDB234CF74073D9 0xA0134498
	static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0x5CEA3ACA5C57D3CE, ped); } // 0x8D8ACD8388CD99CE 0x14D3E6E3
	static void RESURRECT_PED(Ped ped) { invoke<Void>(0x8142DB6147121702, ped); } // 0x71BC8E838B9C6035 0xA4B82097
	static void SET_PED_NAME_DEBUG(Ped ped, char* name) { invoke<Void>(0xDB721F9F36A8FE26, ped, name); } // 0x98EFA132A4117BE1 0x20D6273E
	static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL p1) { return invoke<Vector3>(0xBB35D6D94CD8D935, ped, p1); } // 0xE0AF41401ADF87E3 0x5231F901
	static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xC517014488E2DF36, ped, toggle); } // 0x5BA7919BED300023 0xE94E24D4
	static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0x62D432DC7ED05792, ped, toggle); } // 0x97A790315D3831FD 0x4CAD1A4A
	static void _0xF9ACF4A08098EA25(Any p0, BOOL p1) { invoke<Void>(0x966BBDD8576B158A, p0, p1); } // 0xF9ACF4A08098EA25 0x141CC936
	static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0xB35F063248588CA1, ped); } // 0x3AC1F7B898F30C05 0xC4BC4841
	static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Any p0, Any p1, float p2, float p3, Any p4) { invoke<Void>(0x87C53255252E0028, p0, p1, p2, p3, p4); } // 0x816F6981C60BF53B 0x1E54DB12
	static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, char* woundType) { invoke<Void>(0x11CB69E4F6A6DDDB, ped, boneIndex, xRot, yRot, zRot, woundType); } // 0x83F7E01C7B769A26 0x376CE3C0
	static void APPLY_PED_BLOOD_BY_ZONE(Any p0, Any p1, float p2, float p3, Any* p4) { invoke<Void>(0xCB88B21296566D72, p0, p1, p2, p3, p4); } // 0x3311E47B91EDCBBC 0x8F3F3A9C
	static void APPLY_PED_BLOOD_SPECIFIC(Any p0, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8) { invoke<Void>(0x1BECB532D62605C2, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEF0D582CBF2D9B0F 0xFC13CE80
	static void APPLY_PED_DAMAGE_DECAL(Ped p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, BOOL p8, char* p9) { invoke<Void>(0xFEFE1043B988B93F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x397C38AA7B4A5F83 0x8A13A41F
	static void APPLY_PED_DAMAGE_PACK(Ped ped, char* damagePack, float damage, float mult) { invoke<Void>(0x084B3BC6B3FB75E4, ped, damagePack, damage, mult); } // 0x46DF918788CB093F 0x208D0CB8
	static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0x579727EA5FB56C1F, ped); } // 0x8FE22675A5A45817 0xF7ADC960
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped p0, int p1) { invoke<Void>(0x38E15C34274E77C4, p0, p1); } // 0x56E3B78C5408D9F4 0xF210BE69
	static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Any p0, Any p1, BOOL p2) { invoke<Void>(0x5CDBF42DA297D958, p0, p1, p2); } // 0x62AB793144DE75DC 0x0CB6C4ED
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped p0, int p1, char* p2) { invoke<Void>(0x9BA86286AE949DF1, p0, p1, p2); } // 0x523C79AEEFCC4A2A 0x70AA5B7D
	static Any GET_PED_DECORATIONS_STATE(Any p0) { return invoke<Any>(0xE7112D1125256FA2, p0); } // 0x71EAB450D86954A1 0x47187F7F
	static void _0x2B694AFCF64E6994(Any p0, BOOL p1) { invoke<Void>(0xD5CC098AFD8D5585, p0, p1); } // 0x2B694AFCF64E6994
	static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0xD3617D54AE7094CF, ped); } // 0x9C720776DAA43E7E 0x629F15BD
	static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0x0CBEDE9304F210BC, ped, height); } // 0x44CB6447D2571AA0 0x7B33289A
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0x41EAB9720AB1969A, ped); } // 0xB5485E4907B53019 0xBDE749F7
	static void _0x6585D955A68452A5(Ped ped) { invoke<Void>(0x3B0D342D9C9CEFEC, ped); } // 0x6585D955A68452A5 0xA993915F
	static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0x2ECE5A98C3A51D22, ped, sweat); } // 0x27B0405F59637D1F 0x76A1DB9F
	static void _APPLY_PED_OVERLAY(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0x634A7C80357F21F6, ped, collection, overlay); } // 0x5F5D1665E352A839 0x70559AC7
	static void _0x5619BFA07CFD7833(Any p0, Any p1, Any p2) { invoke<Void>(0x05AE60BB5E77B113, p0, p1, p2); } // 0x5619BFA07CFD7833
	static int _GET_TATTOO_ZONE(Hash collection, Hash overlay) { return invoke<int>(0x82770C3E963A8EF1, collection, overlay); } // 0x9FD452BFBE7A7A8B 0x3543019E
	static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xDFBF35426EC22977, ped); } // 0x0E5173C163976E38 0xD4496BF3
	static void _0xE3B27E70CEAB9F0C(Any p0) { invoke<Void>(0x92A9B3487641D881, p0); } // 0xE3B27E70CEAB9F0C 0xEFD58EB9
	static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0x99C47587C621167C, ped); } // 0x11B499C1E0FF8559 0xF7E2FBAD
	static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x7560B9B6FB83879C, ped, boneId, offsetX, offsetY, offsetZ); } // 0x17C07FC640E86B4E 0x4579CAB1
	static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0x27E7F8707EF9B099, startImmediately, messageId); } // 0x418EF2A1BCE56685 0x1CFBFD4B
	static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0x76AFCE3816C0641E, ped); } // 0xB158DFCCC56E5C5B 0x737C3689
	static Any ADD_SCENARIO_BLOCKING_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<Any>(0x6A173E5A316F6DE8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x1B5C85C612E5256E 0xA38C0234
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0x8E3DB58E9EDB1597); } // 0xD37401D78A929A49 0x4DDF845F
	static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0x322323456FCFAB4D, p0, p1); } // 0x31D16B74C6E29D66 0x4483EF06
	static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA8BF14CA11D325EC, p0, p1, p2, p3, p4); } // 0x28157D43CF600981 0x80EAD297
	static BOOL IS_PED_USING_SCENARIO(Ped ped, char* scenario) { return invoke<BOOL>(0xBBF240704DA2607E, ped, scenario); } // 0x1BF094736DD62C2E 0x0F65B0D4
	static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xB8EA24F91D83ACF5, ped); } // 0x57AB4A3080F85143 0x195EF5B7
	static Any _0xFE07FF6495D52E2A(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x05CEF16AC74FC6FE, p0, p1, p2, p3); } // 0xFE07FF6495D52E2A 0x59DE73AC
	static void _0x9A77DFD295E29B09(Any p0, BOOL p1) { invoke<Void>(0xD44883D09DBC1D5C, p0, p1); } // 0x9A77DFD295E29B09 0xC08FE5F6
	static Any _0x25361A96E0F7E419(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xDC12C31C217648E1, p0, p1, p2, p3); } // 0x25361A96E0F7E419 0x58C0F6CF
	static Any _0xEC6935EBE0847B90(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xEF94663B7F79A9FE, p0, p1, p2, p3); } // 0xEC6935EBE0847B90 0x761F8F48
	static void _0xA3A9299C4F2ADB98(Any p0) { invoke<Void>(0x0B43383CB3FFE97D, p0); } // 0xA3A9299C4F2ADB98 0x033F43FA
	static void _0xF1C03A5352243A30(Any p0) { invoke<Void>(0x885A0F303DE57082, p0); } // 0xF1C03A5352243A30 0x4C684C81
	static Any _0xEEED8FAFEC331A70(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x9FF837DAE8D77A6E, p0, p1, p2, p3); } // 0xEEED8FAFEC331A70 0x7B4C3E6F
	static void _0x425AECF167663F48(Ped ped, BOOL p1) { invoke<Void>(0x99FA6ED05820D4B2, ped, p1); } // 0x425AECF167663F48 0x5BC276AE
	static void _0x5B6010B3CBC29095(Any p0, BOOL p1) { invoke<Void>(0x7B01156CEDA885B4, p0, p1); } // 0x5B6010B3CBC29095
	static void _0xCEDA60A74219D064(Any p0, BOOL p1) { invoke<Void>(0x522278B9DD06CEC3, p0, p1); } // 0xCEDA60A74219D064
	static void PLAY_FACIAL_ANIM(Ped player, char* aaa, char* bbb) { invoke<Void>(0x6732477771749CD2, player, aaa, bbb); } // 0xE1E65CA8AC9C00ED 0x1F6CCDDE
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, char* facialAnim, Any* p2) { invoke<Void>(0x20236B414672EFAE, ped, facialAnim, p2); } // 0xFFC24B988B938B38 0x9BA19C13
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0x42E3993926E1ADFF, ped); } // 0x726256CC1EEB182F 0x5244F4E2
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x3FA2199D9501EAD4, ped, toggle); } // 0xBAF20C5432058024 0xE131E3B3
	static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x0DBAE06A2FA721D1, ped, p1, p2); } // 0xF833DDBA3B104D43 0xA2FDAF27
	static void _0x33A60D8BDD6E508C(Any p0, BOOL p1) { invoke<Void>(0xB71D93384C8240F2, p0, p1); } // 0x33A60D8BDD6E508C 0xADB2511A
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xD20DF430E654B489, ped, toggle); } // 0x6373D1349925A70E 0xF8053081
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x5AE688291F6C92F5, ped, toggle); } // 0x0EB0585D15254740 0x5720A5DD
	static void _0xC2EE020F5FB4DB53(Any p0) { invoke<Void>(0x44FB606E90299B9E, p0); } // 0xC2EE020F5FB4DB53 0xB7CD0A49
	static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0xF3659EACB7914D08, ped, toggle); } // 0x6C3B4D6D13B4C841 0x343B4DE0
	static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0x23D6E2E4F0062F8F, ped, toggle); } // 0xC11C18092C5530DC 0xD3B04476
	static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xDF091F1BD025BC80, ped, toggle); } // 0x73518ECE2485412B 0x9955BC6F
	static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0x2613EAE647212024, ped, toggle); } // 0xF2B7106D37947CE0 0x8E5D4EAB
	static void _0xF5846EDB26A98A24(Any p0, BOOL p1) { invoke<Void>(0x0B2F19C792CD6C33, p0, p1); } // 0xF5846EDB26A98A24 0x7B0040A8
	static void _0x6647C5F6F5792496(Any p0, BOOL p1) { invoke<Void>(0xA7B817C810AE6343, p0, p1); } // 0x6647C5F6F5792496 0x0FDA62DE
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0xD69C027BC6C4334F, ped, toggle); } // 0xEC4686EC06434678 0x584C5178
	static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xB9C0F0B42CD03E08, ped1, ped2); } // 0x5CD3CB88A7F8850D 0x2A5DF721
	static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0x2C09015A1FBBC7B2, ped, entity); } // 0x813A0A7C9D2E831F 0x233C9ACF
	static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0xD3D5079B8B479FC7, ped, lookAt); } // 0xCD17B554996A8D9E 0x6DEF6F1C
	static void _0x78C4E9961DB3EB5B(Any p0, Any p1) { invoke<Void>(0x950342643FACE8F1, p0, p1); } // 0x78C4E9961DB3EB5B 0xFC942D7C
	static void _0x82A3D6D9CC2CB8E3(Any p0, Any p1) { invoke<Void>(0x0C6DF91185E69C04, p0, p1); } // 0x82A3D6D9CC2CB8E3 0x89EEE07B
	static void _0xA660FAF550EB37E5(Any p0, BOOL p1) { invoke<Void>(0x0A627DB319327E30, p0, p1); } // 0xA660FAF550EB37E5
	static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0x705E4255B39314A7, ped, flagId, value); } // 0x1913FE4CBF41C463 0x9CFBE10D
	static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xF674E664795C8CB3, ped, flagId, doReset); } // 0xC1E8A365BF3B29F2 0xCFF6FF66
	static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0x8B99D63EA8B2E230, ped, flagId, p2); } // 0x7EE53118C892B513 0xABE98267
	static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0x0566060B874845C0, ped, flagId); } // 0xAF9E59B1B1FBF2A0 0x2FC10D11
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0x69AB64EF21C2006E, ped, index); } // 0x0BDDB8D9EC6BCF3C 0x2AB3670B
	static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0x571779A9F65748CC, ped, toggle); } // 0x6B7A646C242A7059 0x542FEB4D
	static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xC8D318B256BD39B2, ped, evadingEntity); } // 0x414641C26E105898 0xD82829DC
	static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xEE0B46264DEEDA2F, ped, x, y, z, toggle); } // 0x96A05E4FB321B1BA 0xFD64EAE5
	static void SET_PED_MODEL_IS_SUPPRESSED(Ped ped, BOOL toggle) { invoke<Void>(0x5D348128ED26CC58, ped, toggle); } // 0xE163A4BCE4DE6F11 0x7820CA43
	static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0x03BEF132341A7523); } // 0xB47BD05FA66B40CF 0x5AD7DC55
	static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0x0A7DE7C9189AECEE, ped, toggle); } // 0x638C03B0F9878F57 0x6FD9A7CD
	static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x8188A9DBABFECFC6, ped, toggle); } // 0x7FB17BA2E7DECA5B 0xE9B97A2B
	static void _0xE43A13C9E4CCCBCF(Any p0, BOOL p1) { invoke<Void>(0xEA914F4039FC30BB, p0, p1); } // 0xE43A13C9E4CCCBCF 0xFF1F6AEB
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xEBC040B50DB4346A, ped, toggle); } // 0xDF993EE5E90ABA25 0xE9BD733A
	static void GIVE_PED_HELMET(Ped ped, BOOL cannotPedRemove, int helmetFlag, int textureIndex) { invoke<Void>(0xC874C506F7527F84, ped, cannotPedRemove, helmetFlag, textureIndex); } // 0x54C7C4A94367717E 0x1862A461
	static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0xF152F4EB3CEAF22E, ped, instantly); } // 0xA7B2458D0AD6DED8 0x2086B1F0
	static BOOL _0x14590DDBEDB1EC85(Any p0) { return invoke<BOOL>(0xFE72E202A8DE8B7C, p0); } // 0x14590DDBEDB1EC85
	static void SET_PED_HELMET(Ped ped, BOOL p1) { invoke<Void>(0x4519324BAE580305, ped, p1); } // 0x560A43136EB58105 0xED366E53
	static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0xFE751DE26A316774, ped, helmetFlag); } // 0xC0E78D5C2CE3EB25 0x12677780
	static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex) { invoke<Void>(0x18A992A478B68856, ped, propIndex); } // 0x26D83693ED99291C 0xA316D13F
	static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0x751FCF59FB6B4990, ped, textureIndex); } // 0xF1550C4BD22582E2 0x5F6C3328
	static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0x42F7F3EE791EDE08, ped); } // 0xF33BDFE19B309B19 0x0D680D49
	static void _0x687C0B594907D2E8(Any p0) { invoke<Void>(0x8BFDF14E173903D3, p0); } // 0x687C0B594907D2E8 0x24A1284E
	static Any _0x451294E859ECC018(Any p0) { return invoke<Any>(0x7DFD8E899734EDCD, p0); } // 0x451294E859ECC018 0x8A3A3116
	static Any _0x9D728C1E12BF5518(Any p0) { return invoke<Any>(0x8CE1F2379CF13955, p0); } // 0x9D728C1E12BF5518 0x74EB662D
	static BOOL _0xF2385935BFFD4D92(Any p0) { return invoke<BOOL>(0x7DDCAE54C401F5FC, p0); } // 0xF2385935BFFD4D92 0xFFF149FE
	static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x8A086FF68E8ABF6C, ped, toggle); } // 0x332B562EEDA62399 0xCF94BA97
	static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xB5EAFD7FE0B740B6, ped, toggle); } // 0xCB7553CDCEF4A735 0x5194658B
	static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x1D45609671ED0784, ped, toggle); } // 0xC514825C507E3736 0xC1DAE216
	static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x5D72077238FE6CB9, ped, toggle); } // 0x94D94BF1A75AED3D 0x7C563CD2
	static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xACA55483991E5CD4, ped, mode); } // 0xC396F5B86FF9FEBD 0xFDDB042E
	static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xB4DF250840A343BF, ped, toggle); } // 0x0A986918B102B448 0xA211A128
	static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0x5707B7855D48FD0C, ped, toggle); } // 0xED7F7EFE9FABF340 0xB5F8BA28
	static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0x9E177D12CEEF2332, ped, toggle); } // 0xEEB64139BA29A7CF 0xFE2554FC
	static void _0x1A330D297AAC6BC1(Any p0, Any p1) { invoke<Void>(0x1BD93B27951F5B07, p0, p1); } // 0x1A330D297AAC6BC1 0x77BB7CB8
	static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Any p0) { invoke<Void>(0x036D38097C02FB9E, p0); } // 0xC158D28142A34608 0x4AC3421E
	static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Any p0, float p1) { invoke<Void>(0xE576C7AFAB2E4CBF, p0, p1); } // 0x5917BBA32D06C230 0x7CEFFA45
	static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0xECD905C06E682B6D, ped, combatMovement); } // 0x4D9CA1009AFBD057 0x12E62F9E
	static Any GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<Any>(0xDB933235B9A974FE, ped); } // 0xDEA92412FCAEB3F5 0xF3E7730E
	static void SET_PED_COMBAT_ABILITY(Ped ped, int p1) { invoke<Void>(0x54753279989302A7, ped, p1); } // 0xC7622C0D36B2FDA8 0x6C23D329
	static void SET_PED_COMBAT_RANGE(Ped ped, int p1) { invoke<Void>(0x71D369F947D2E619, ped, p1); } // 0x3C606747B23E497B 0x8818A959
	static Any GET_PED_COMBAT_RANGE(Ped ped) { return invoke<Any>(0x6EC2D983BFC32BAF, ped); } // 0xF9D9F7F2DB8E2FA0 0x9B9B7163
	static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) { invoke<Void>(0x87BBAE0EE5DD7680, ped, attributeIndex, enabled); } // 0x9F7794730795E019 0x81D64248
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0x5D68D7AA6F7D4144, ped, responseType); } // 0x0703B9079823DA4A 0xCFA613FF
	static BOOL _0xDCCA191DF9980FD7(Any p0) { return invoke<BOOL>(0xE0D64C0509B5F91D, p0); } // 0xDCCA191DF9980FD7 0x139C0875
	static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0x54F35422D2CB3C36, ped); } // 0xFD4CCDBCC59941B7 0x9ADD7B21
	static BOOL _0xEBD0EDBA5BE957CF(Ped ped) { return invoke<BOOL>(0x1D16C8C6A5F17AA8, ped); } // 0xEBD0EDBA5BE957CF 0x9BE7C860
	static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0x01C4F34A921ABFD3, ped); } // 0x863B23EFDE9C5DF2 0xD044C8AF
	static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0x00952D7F237B28EC, ped); } // 0x18A3E9EE1297FD39 0xAFEC26A4
	static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0x5E83455CA001686F, ped); } // 0xF9800AA1A771B000 0x2EA4B54E
	static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xF8C13ADF56A8A53D, ped); } // 0x7F08E26039C7347C 0xBDD3CE69
	static BOOL _0x61767F73EACEED21(Any p0) { return invoke<BOOL>(0x9875A1B11E98CEE6, p0); } // 0x61767F73EACEED21 0x3993092B
	static void SET_PED_FLEE_ATTRIBUTES(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x797AA7825A5A2D95, ped, p1, p2); } // 0x70A2D1137C8ED7C9 0xA717A875
	static void SET_PED_COWER_HASH(Any p0, char* p1) { invoke<Void>(0xD4A9EC38CDB4AA45, p0, p1); } // 0xA549131166868ED3 0x16F30DF4
	static void _0x2016C603D6B8987C(Any p0, BOOL p1) { invoke<Void>(0x6A57211A267E038C, p0, p1); } // 0x2016C603D6B8987C 0xA6F2C057
	static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0x20B1373517B906A0, ped, toggle); } // 0x46F2193B3AD1D891 0x797CAE4F
	static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0x77934682317DD8B3, ped, toggle); } // 0x1509C089ADC208BF 0x3BD9B0A6
	static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0xC63E6940AD6DAF5F, ped, toggle); } // 0xEB6FB9D48DDE23EC 0x533C0651
	static void _0xA9B61A329BFDCBEA(Any p0, BOOL p1) { invoke<Void>(0x5FCDF14032D69E07, p0, p1); } // 0xA9B61A329BFDCBEA 0x2276DE0D
	static void _0x570389D1C3DE3C6B(Any p0) { invoke<Void>(0xF4F850D48289A7F5, p0); } // 0x570389D1C3DE3C6B 0x59C52BE6
	static void _0x576594E8D64375E2(Any p0, BOOL p1) { invoke<Void>(0x0B75C75E608FD326, p0, p1); } // 0x576594E8D64375E2 0x1D87DDC1
	static void _0xA52D5247A4227E14(Any p0) { invoke<Void>(0xB0DB9429DEE0A2DB, p0); } // 0xA52D5247A4227E14 0xB52BA5F5
	static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xD5723D169730DAAD, x, y, z, radius); } // 0x083961498679DC9F 0xFBD9B050
	static void _0x2208438012482A1A(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x2945E3CE39DA8591, ped, p1, p2); } // 0x2208438012482A1A 0x187B9070
	static BOOL _0xFCF37A457CB96DC0(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xEC2915067E62C37B, p0, p1, p2, p3, p4); } // 0xFCF37A457CB96DC0 0x45037B9B
	static void _0x7D7A2E43E74E2EB8(Any p0) { invoke<Void>(0xE0E48FD2AE97A676, p0); } // 0x7D7A2E43E74E2EB8 0x840D24D3
	static void GET_PED_FLOOD_INVINCIBILITY(Ped ped, BOOL p1) { invoke<Void>(0x8596E031C10DA22B, ped, p1); } // 0x2BC338A7B21F4608 0x31C31DAA
	static void _0xCD018C591F94CB43(Any p0, BOOL p1) { invoke<Void>(0x8DD6C51471CD026C, p0, p1); } // 0xCD018C591F94CB43
	static void _0x75BA1CB3B7D40CAF(Any p0, BOOL p1) { invoke<Void>(0xE4B07492D5D967B7, p0, p1); } // 0x75BA1CB3B7D40CAF 0x9194DB71
	static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0x79C6BB40BB05BB73, ped); } // 0x91C8E617F64188AC 0x33248CC1
	static Any _0x511F1A683387C7E2(Any p0) { return invoke<Any>(0x8D9D53603B8EE531, p0); } // 0x511F1A683387C7E2 0x5B1B70AA
	static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0x7D5E5B7F1F50ABCD, ped); } // 0x4C5E1F087CD10BB7 0x7EB613D9
	static BOOL HAS_PED_RECEIVED_EVENT(Any p0, Any p1) { return invoke<BOOL>(0xCC455F3EA7B162D8, p0, p1); } // 0x8507BCB710FA6DC0 0xECD73DB0
	static BOOL _0x6CD5A433374D4CFB(Any p0, Any p1) { return invoke<BOOL>(0x5CA53329DE05CCF7, p0, p1); } // 0x6CD5A433374D4CFB 0x74A0F291
	static BOOL _0x9C6A6C19B6C0C496(Ped p0, Any* p1) { return invoke<BOOL>(0xE11A5C9A20412249, p0, p1); } // 0x9C6A6C19B6C0C496
	static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0xFA167453DE504152, ped, boneId); } // 0x3F428D08BE5AAE31 0x259C6BA2
	static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0x8422F728E711A79D, ped, bone); } // 0x2057EF813397A772 0x849F0716
	static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xC071A704AD4653E2, ped, value); } // 0xBF29516833893561 0xFC1CFC27
	static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0xDEBC4699F6CE74F7, ped); } // 0x9C14D30395A51A3C 0xA3421E39
	static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0x928B0ACB10D32017, ped, toggle); } // 0xD2C5AA0C0E8D0F1E 0xC70F4A84
	static void _0x110F526AB784111F(Ped ped, float p1) { invoke<Void>(0x597D90442A901E7F, ped, p1); } // 0x110F526AB784111F 0x3B882533
	static void _0xD69411AA0CEBF9E9(Ped ped, int p1, int p2, int p3) { invoke<Void>(0x6DCE421DED77C29E, ped, p1, p2, p3); } // 0xD69411AA0CEBF9E9 0x87A0C174
	static void _0x1216E0BFA72CC703(Any p0, Any p1) { invoke<Void>(0xB273B277B5BB732E, p0, p1); } // 0x1216E0BFA72CC703 0x7BD26837
	static void _0x2B5AA717A181FB4C(Any p0, BOOL p1) { invoke<Void>(0x786042CFA75BC5B0, p0, p1); } // 0x2B5AA717A181FB4C 0x98E29ED0
	static BOOL _0xB8B52E498014F5B0(Ped ped) { return invoke<BOOL>(0x3A8AB44244EDF930, ped); } // 0xB8B52E498014F5B0
	static Any CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float p3, float p4, float p5, Any p6) { return invoke<Any>(0x6194C3993E6BB2A5, x, y, z, p3, p4, p5, p6); } // 0x8C18E0F9080ADD73 0xFFDDF8FA
	static Any _0x62EC273D00187DCA(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0xD31BD311FD511C34, p0, p1, p2, p3, p4); } // 0x62EC273D00187DCA 0xF3876894
	static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(Any p0) { return invoke<BOOL>(0x74CC94B98FBFE813, p0); } // 0x25D39B935A038A26 0x57A282F1
	static void SET_SYNCHRONIZED_SCENE_ORIGIN(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { invoke<Void>(0xD13412C3A0F2227E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x6ACF6B7225801CD7 0x2EC2A0B2
	static void SET_SYNCHRONIZED_SCENE_PHASE(Any p0, float p1) { invoke<Void>(0xB1A2B8A065E00D0C, p0, p1); } // 0x734292F4F0ABF6D0 0xF5AB0D98
	static float GET_SYNCHRONIZED_SCENE_PHASE(Any scene) { return invoke<float>(0xA84C8086E7377CD5, scene); } // 0xE4A310B1D7FA73CC 0xB0B2C852
	static void SET_SYNCHRONIZED_SCENE_RATE(Any p0, float p1) { invoke<Void>(0x6B1A3158AFCC9C01, p0, p1); } // 0xB6C49F8A5E295A5D 0xF10112FD
	static float GET_SYNCHRONIZED_SCENE_RATE(Any p0) { return invoke<float>(0xF8850FB0143A1D23, p0); } // 0xD80932D577274D40 0x89365F0D
	static void SET_SYNCHRONIZED_SCENE_LOOPED(Any p0, BOOL p1) { invoke<Void>(0x530044AE9D695B53, p0, p1); } // 0xD9A897A4C6C2974F 0x32ED9F82
	static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(Any p0) { return invoke<BOOL>(0x3B034F341629A46D, p0); } // 0x62522002E0C391BA 0x47D87A84
	static void _0x394B9CD12435C981(Any p0, BOOL p1) { invoke<Void>(0xEB14A75A6A936DCF, p0, p1); } // 0x394B9CD12435C981 0x2DE48DA1
	static BOOL _0x7F2F4F13AC5257EF(Any p0) { return invoke<BOOL>(0x277A40B3655FCE1F, p0); } // 0x7F2F4F13AC5257EF 0x72CF2514
	static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Any scene, Any entity, Any boneIndex) { invoke<Void>(0x890054289B8F80A8, scene, entity, boneIndex); } // 0x272E4723B56A3B96 0xE9BA6189
	static void DETACH_SYNCHRONIZED_SCENE(Any p0) { invoke<Void>(0x5FB710E6CD88134B, p0); } // 0x6D38F1F04CBB37EA 0x52A1CAB2
	static void _0xCD9CC7E200A52A6F(Any p0) { invoke<Void>(0x82819E24C6692CEF, p0); } // 0xCD9CC7E200A52A6F 0xBF7F9035
	static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0xE33751BF671E2013, ped, motionStateHash, p2, p3, p4); } // 0xF28965D04F570DCA 0x164DDEFF
	static BOOL _0xF60165E1D2C5370B(Ped p0, Any* p1, Any* p2) { return invoke<BOOL>(0x9BABFCC26AFA67D0, p0, p1, p2); } // 0xF60165E1D2C5370B
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x44A694E0E28FA402, ped, value); } // 0x433083750C5E064A 0xEAD0269A
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x8C9ED0E62CB91000, ped, value); } // 0x01A898D26E2333DD 0x383EC364
	static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0x795929762541DFAD, ped, value); } // 0x085BF80FA50A39D1 0x900008C6
	static BOOL _0x46B05BCAE43856B0(Ped ped, int flag) { return invoke<BOOL>(0x60A83E7C16ED149B, ped, flag); } // 0x46B05BCAE43856B0 0x79543043
	static int GET_PED_NEARBY_VEHICLES(Ped ped, int* sizeAndVehs) { return invoke<int>(0xDAD0A73A45610B74, ped, sizeAndVehs); } // 0xCFF869CBFA210D82 0xCB716F68
	static int GET_PED_NEARBY_PEDS(Ped ped, int* sizeAndPeds, int pedTypeToIgnore) { return invoke<int>(0xC204507743BB34BC, ped, sizeAndPeds, pedTypeToIgnore); } // 0x23F8F5FC7E8C4A6B 0x4D3325F4
	static BOOL _0x7350823473013C02(Ped ped) { return invoke<BOOL>(0x0FCB864DA1538DD2, ped); } // 0x7350823473013C02 0xF9FB4B71
	static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0xADE6634A0B78694F, ped); } // 0x00E73468D085F745 0x5AE7EDA2
	static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, Any p2, char* action) { invoke<Void>(0x6C77F5322B94AC81, ped, p1, p2, action); } // 0xD75ACCF5E0FB5367 0x8802F696
	static void _0x781DE8FA214E87D2(Ped p0, char* p1) { invoke<Void>(0x0564EA6119ACD1C5, p0, p1); } // 0x781DE8FA214E87D2
	static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0x5AE6931F30A8F4F2, ped, value); } // 0x364DF566EC833DE2 0xB153E1B9
	static Any REGISTER_PEDHEADSHOT(Ped ped) { return invoke<Any>(0x234846A78A509D1D, ped); } // 0x4462658788425076 0xFFE2667B
	static Any _0x953563CE563143AF(Any p0) { return invoke<Any>(0xF34CB0ACF2954B65, p0); } // 0x953563CE563143AF 0x4DD03628
	static void UNREGISTER_PEDHEADSHOT(Ped ped) { invoke<Void>(0xB360DA2AE12FCC02, ped); } // 0x96B1361D9B24C2FF 0x0879AE45
	static int IS_PEDHEADSHOT_VALID(int handle) { return invoke<int>(0x8AFD1D34F9842BB9, handle); } // 0xA0A9668F158129A2 0x0B1080C4
	static BOOL IS_PEDHEADSHOT_READY(int handle) { return invoke<BOOL>(0x70FC8DD858474636, handle); } // 0x7085228842B13A67 0x761CD02E
	static char* GET_PEDHEADSHOT_TXD_STRING(int handle) { return invoke<char*>(0x17F6632C0BD7F15A, handle); } // 0xDB4EACD4AD0A5D6B 0x76D28E96
	static BOOL _0xF0DAEF2F545BEE25(Any p0) { return invoke<BOOL>(0x1A238B00772CF5F9, p0); } // 0xF0DAEF2F545BEE25 0x10F2C023
	static void _0x5D517B27CF6ECD04(Any p0) { invoke<Void>(0xB8779A09227E14D4, p0); } // 0x5D517B27CF6ECD04 0x0DBB2FA7
	static Any _0xEBB376779A760AA8() { return invoke<Any>(0x3E419AB48F949E3F); } // 0xEBB376779A760AA8 0x810158F8
	static Any _0x876928DDDFCCC9CD() { return invoke<Any>(0x70594A1B3CCCF9C4); } // 0x876928DDDFCCC9CD 0x05023F8F
	static Any _0xE8A169E666CBC541() { return invoke<Any>(0x4C88F3C8E18BDC04); } // 0xE8A169E666CBC541 0xAA39FD6C
	static void _0xC1F6EBF9A3D55538(Any p0, Any p1) { invoke<Void>(0x7CDE1B44A91D8620, p0, p1); } // 0xC1F6EBF9A3D55538 0xEF9142DB
	static void _0x600048C60D5C2C51(Any p0) { invoke<Void>(0x4B58BB7BB366FBAB, p0); } // 0x600048C60D5C2C51 0x0688DE64
	static void _0x2DF9038C90AD5264(float p0, float p1, float p2, float p3, float p4, Any p5, float p6, Any p7) { invoke<Void>(0xA81B36E128305692, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2DF9038C90AD5264 0x909A1D76
	static void _0xB2AFF10216DEFA2F(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, float p8, Any p9) { invoke<Void>(0x20C8B26DF4377161, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xB2AFF10216DEFA2F 0x4AAD0ECB
	static void _0xFEE4A5459472A9F8() { invoke<Void>(0xB0C9486E4E778206); } // 0xFEE4A5459472A9F8 0x492C9E46
	static Any _0x3C67506996001F5E() { return invoke<Any>(0xDBD26B3B95431588); } // 0x3C67506996001F5E 0x814A28F4
	static Any _0xA586FBEB32A53DBB() { return invoke<Any>(0x7C086C5B65728A7E); } // 0xA586FBEB32A53DBB 0x0B60D2BA
	static Any _0xF445DE8DA80A1792() { return invoke<Any>(0x6538AB9B28AE0946); } // 0xF445DE8DA80A1792 0x6B83ABDF
	static Any _0xA635C11B8C44AFC2() { return invoke<Any>(0xBF656D9895240AF1); } // 0xA635C11B8C44AFC2 0xF46B4DC8
	static void _0x280C7E3AC7F56E90(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x91E05C60C6CEAD98, p0, p1, p2, p3); } // 0x280C7E3AC7F56E90 0x36A4AC65
	static void _0xB782F8238512BAD5(Any p0, Any* p1) { invoke<Void>(0xCACFF8D05D40E632, p0, p1); } // 0xB782F8238512BAD5 0xBA699DDF
	static void SET_IK_TARGET(Ped ped, int p1, Ped targetPed, int boneLookAt, float x, float y, float z, Any p7, int duration, int duration1) { invoke<Void>(0x2FC848377F4A7C05, ped, p1, targetPed, boneLookAt, x, y, z, p7, duration, duration1); } // 0xC32779C16FCEECD9 0x6FE5218C
	static void _0xED3C76ADFA6D07C4(Any p0) { invoke<Void>(0xD2CCC89CE3CEDD1E, p0); } // 0xED3C76ADFA6D07C4 0xFB4000DC
	static void REQUEST_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0x178C04F86139EC23, asset); } // 0x290E2780BB7AA598 0x572BA553
	static BOOL HAS_ACTION_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0x61C3255A0D6DED0B, asset); } // 0xE4B5F4BF2CB24E65 0xF7EB2BF1
	static void REMOVE_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0x7A4A28509EC19924, asset); } // 0x13E940F88470FA51 0x3F480F92
	static void REQUEST_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xE88AF3F034EC4F5A, asset); } // 0x2A0A62FCDEE16D4F 0x280A004A
	static BOOL HAS_STEALTH_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0xA9562BE67BF61940, asset); } // 0xE977FC5B08AF3441 0x39245667
	static void REMOVE_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xA5B2B84DD04251D0, asset); } // 0x9219857D21F0E842 0x8C0B243A
	static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0xDF429CC5CD4E5006, ped, multiplier); } // 0xDC2C5C242AAC342B 0x1D2B5C70
	static void _0xE861D0B05C7662B8(Any p0, BOOL p1, Any p2) { invoke<Void>(0x430FBC38B8164AF8, p0, p1, p2); } // 0xE861D0B05C7662B8 0x2F9550C2
	static void _0x129466ED55140F8D(Any p0, BOOL p1) { invoke<Void>(0xF7F00525816A16B1, p0, p1); } // 0x129466ED55140F8D 0x37DBC2AD
	static void _0xCB968B53FC7F916D(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0x1B9DC0D8A90D8235, p0, p1, p2, p3); } // 0xCB968B53FC7F916D 0xC0F1BC91
	static BOOL _0x68772DB2B2526F9F(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x25A95C36B95B3351, p0, p1, p2, p3, p4); } // 0x68772DB2B2526F9F 0x1A464167
	static BOOL _0x06087579E7AA85A9(Any p0, Any p1, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0x484870B11F1B4180, p0, p1, p2, p3, p4, p5); } // 0x06087579E7AA85A9 0xD0567D41
	static void _0xD8C3BE3EE94CAF2D(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x2E5D73B2F68C0EAB, p0, p1, p2, p3, p4); } // 0xD8C3BE3EE94CAF2D 0x4BBE5E2C
	static void _0xD33DAA36272177C4(Any p0) { invoke<Void>(0x204A693DE25287B7, p0); } // 0xD33DAA36272177C4 0xA89A53F2
	static void _0x83A169EABCDB10A2(Any p0, Any p1) { invoke<Void>(0x0CDF57E74A733ED4, p0, p1); } // 0x83A169EABCDB10A2
	static void _0x288DF530C92DAD6F(Any p0, float p1) { invoke<Void>(0xA4B86C8FA557C8E4, p0, p1); } // 0x288DF530C92DAD6F
}

namespace VEHICLE
{
	static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL networkHandle, BOOL vehiclehandle) { return invoke<Vehicle>(0xE044C77D0FC9DB66, modelHash, x, y, z, heading, networkHandle, vehiclehandle); } // 0xAF35D0D2583051B0 0xDD75460A
	static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0xEFA1F34A28EE763C, vehicle); } // 0xEA386986E786A54F 0x9803AF60
	static void _0x7D6F9A3EF26136A0(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x4824CA3A165ECF77, vehicle, p1, p2); } // 0x7D6F9A3EF26136A0 0xBB54ECCA
	static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL p1) { invoke<Void>(0x671B5310203167BD, veh, p1); } // 0x5D14D4154BFE7B2C 0x8BAAC437
	static int _0xE6B0E8CFC3633BF0(Vehicle vehicle) { return invoke<int>(0x1C6209DE51A131DC, vehicle); } // 0xE6B0E8CFC3633BF0 0xFBDE9FD8
	static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash hash) { return invoke<BOOL>(0x324FA0A89ED8A01A, vehicle, hash); } // 0x423E8DE37D934D89 0x013B10B6
	static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(Any vehicleGenerator) { return invoke<BOOL>(0x217F87CD2B203B6B, vehicleGenerator); } // 0xF6086BC836400876 0xF6BDDA30
	static Any CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<Any>(0x3332739018DC0D9C, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x9DEF883114668116 0x25A9A261
	static void DELETE_SCRIPT_VEHICLE_GENERATOR(Any vehicleGenerator) { invoke<Void>(0xD87D5228FD2B2FBF, vehicleGenerator); } // 0x22102C9ABFCF125D 0xE4328E3F
	static void SET_SCRIPT_VEHICLE_GENERATOR(Any vehicleGenerator, BOOL enabled) { invoke<Void>(0xA8F3F3D4C9C436C4, vehicleGenerator, enabled); } // 0xD9D620E0AC6DC4B0 0x40D73747
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { invoke<Void>(0xE4EC3FD6A99953E8, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xC12321827687FE4D 0xB4E0E69A
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0xE1A329E99CE31246); } // 0x34AD89078831A4BC 0xAB1FDD76
	static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0x535F8E422446AA19, active); } // 0x608207E7A8FB787C 0x87F767F2
	static void _0x9A75585FB2E54FAD(float p0, float p1, float p2, float p3) { invoke<Void>(0xE2576E8D38A7E49B, p0, p1, p2, p3); } // 0x9A75585FB2E54FAD 0x935A95DA
	static void _0x0A436B8643716D14() { invoke<Void>(0x52B255095342C438); } // 0x0A436B8643716D14 0x6C73E45A
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle) { return invoke<BOOL>(0x74207974B5483203, vehicle); } // 0x49733E92263139D1 0xE14FDBA6
	static Any SET_ALL_VEHICLES_SPAWN(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<Any>(0x80661E685A1A5676, p0, p1, p2, p3); } // 0xE023E8AC4EF7C117 0xA0909ADB
	static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x2D673E4F960F546C, vehicle); } // 0xB497F06B288DCFDF 0x18D07C6C
	static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x4E9DFDE10BB0B08F, vehicle); } // 0xB72E26D81006005B 0x3A13D384
	static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xEE3A423FCE2CD367, vehicle); } // 0xC53EB42A499A7E90 0xF390BA1B
	static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0x5C22D20F8D56E182, vehicle); } // 0x5721B434AD84D57A 0x655F072C
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x41617C7E7EAFFE34, vehicle); } // 0x24CB2137731FFE89 0x1EF20849
	static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x8EF0E5E933BE561D, vehicle); } // 0xA7C4F2C6E744A550 0x0A2FC08C
	static int _GET_VEHICLE_MODEL_MAX_NUMBER_OF_PASSENGERS(Hash VehicleModel) { return invoke<int>(0xAF3D6F27CC1E594E, VehicleModel); } // 0x2AD93716F184EDA4 0x838F7BF7
	static BOOL _0xF7F203E31F96F6A1(Vehicle vehicle, BOOL flag) { return invoke<BOOL>(0x4E78173E80C9C0FF, vehicle, flag); } // 0xF7F203E31F96F6A1 0x769E5CF2
	static BOOL _0xE33FFA906CE74880(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x2E4E40B8585CA076, vehicle, p1); } // 0xE33FFA906CE74880
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x18FB7BCBEDA481BD, multiplier); } // 0x245A6883D966D537 0xF4187E51
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x899FA88A6E0A712C, multiplier); } // 0xB3B3359379FE77D3 0x543F712B
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x3C52FE405A37F862, multiplier); } // 0xEAE6DCC7EEE3DB1D 0xDD46CEBE
	static void _0xD4B8E3D1917BC86B(BOOL p0) { invoke<Void>(0xA59B91227E6E4C1A, p0); } // 0xD4B8E3D1917BC86B 0x09462665
	static void _0x90B6DA738A9A25DA(float p0) { invoke<Void>(0x8ECB6DA0B1E7C118, p0); } // 0x90B6DA738A9A25DA 0xDAE2A2BE
	static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0xB8DA159DEF98CD93, toggle); } // 0x26324F33423F3CC3 0x9F019C49
	static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0xBED8BA76A59E95DB, value); } // 0xCAA15F13EBD417FF 0x206A58E8
	static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0xB032923150355520, vehicle, doorLockStatus); } // 0xB664292EAECF7FA6 0x4CDD35D0
	static void SET_PED_TARGETTABLE_VEHICLE_DESTROY(Vehicle vehicle, int vehicleComponent, int destroyType) { invoke<Void>(0x94CCC7D0DD96996A, vehicle, vehicleComponent, destroyType); } // 0xBE70724027F85BCD 0xD61D182D
	static void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF70CA53802DCBECC, vehicle, toggle); } // 0xD8050E0EB60CF274 0xC54156A9
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, _Player player, BOOL toggle) { invoke<Void>(0x93456C539FCB41E2, vehicle, player, toggle); } // 0x517AAF684BB50CD1 0x49829236
	static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, _Player player) { return invoke<BOOL>(0x27EFB0D32010171F, vehicle, player); } // 0xF6AF6CB341349015 0x1DC50247
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x58046B46E2D18640, vehicle, toggle); } // 0xA2F80B8D040727CC 0x891BA8A4
	static void _0x9737A37136F07E75(Vehicle veh, BOOL p1) { invoke<Void>(0x97F99A3B6E025DD2, veh, p1); } // 0x9737A37136F07E75 0xE4EF6514
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0xD7BBB3FC2DE8B7CF, vehicle, team, toggle); } // 0xB81F6D4A8F5EEBA8 0x4F85E783
	static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0x9307741EFDD78856, vehicle, isAudible, isInvisible); } // 0xBA71116ADF5B514C 0xBEDEACEB
	static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0x5236DC0A19CC19C3, vehicle, killDriver, explodeOnImpact); } // 0xF19D095E42D430CC 0x3764D734
	static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0x3EEA8C715A0F54CE, vehicle, ped, toggle); } // 0x2E0A74E1002380B1 0xDB8CB8E2
	static void _0x99AD4CCCB128CBC9(Any p0) { invoke<Void>(0x8E98BE236D25E2C0, p0); } // 0x99AD4CCCB128CBC9 0x811373DE
	static Any _0x6ADAABD3068C5235() { return invoke<Any>(0x63C81403B6C5A78B); } // 0x6ADAABD3068C5235 0xA4E69134
	static void _0xEF49CF0270307CBE() { invoke<Void>(0x361BB843E32D26A4); } // 0xEF49CF0270307CBE 0x65255524
	static BOOL _0xAE3FEE8709B39DCB(Any p0) { return invoke<BOOL>(0x8A3DF7E568C550F7, p0); } // 0xAE3FEE8709B39DCB 0xE39DAF36
	static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0xE580658F0EBDF071, vehicle, state); } // 0x598803E85E8448D9 0x68639D85
	static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x7DD9C79589D3F1CB, vehicle); } // 0x7504C0F113AB50FC 0x6FC4924A
	static BOOL IS_VEHICLE_IN_GARAGE_AREA(char* garageName, Vehicle vehicle) { return invoke<BOOL>(0xE994FC7025A2258D, garageName, vehicle); } // 0xCEE4490CD57BB3C2 0xA90EC257
	static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0x728045E0733945FD, vehicle, colorPrimary, colorSecondary); } // 0x4F1D4BE3A7F24601 0x57F24253
	static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xC76240A4BAEBE875, vehicle, toggle); } // 0x8B7FD87F0DDB421E 0x9C49CC15
	static void STEER_UNLOCK_BIAS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x688FFB4BD8E2F160, vehicle, toggle); } // 0x07116E24E9D1929D 0xA59E3DCD
	static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xD11F996F2FA368A0, vehicle, r, g, b); } // 0x7141766F91D15BEA 0x8DF9F9BC
	static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xD7BF27AD958D4143, vehicle, r, g, b); } // 0xB64CF2CCA9D95F52 0x1C2B9FEF
	static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x6AB3C011F32ADEE1, vehicle); } // 0x55E1D2758F34E437 0x51E1E33D
	static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x2DE691A863102557, vehicle); } // 0xF095C0405307B21B 0xD7EC8760
	static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xAF450BF0FFB19AB7, vehicle, r, g, b); } // 0x36CED73BFED89754 0x9D77259E
	static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x6F1B26095D81AF5F, vehicle, r, g, b); } // 0x8389CD56CA8072DC 0x3FF247A2
	static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x742893DC43AB0799, vehicle); } // 0x5FFBDEEC3E8E2009 0x7CE00B29
	static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xFC480E19F9385A5D, vehicle); } // 0x910A32E7AAD2656C 0x288AD228
	static void _SET_VEHICLE_PAINT_FADE(Vehicle veh, float fade) { invoke<Void>(0x8CB54EEC86076312, veh, fade); } // 0x3AFDC536C3D01674 0x8332730C
	static float _GET_VEHICLE_PAINT_FADE(Vehicle veh) { return invoke<float>(0xB500196EFC7C7C82, veh); } // 0xA82819CAC9C4C403 0xD5F1EEE1
	static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0xB41D07AEADF81363, vehicle, state); } // 0x52BBA29D5EC69356 0x37677590
	static void _0x33506883545AC0DF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x91249D0BEAB4A81E, vehicle, p1); } // 0x33506883545AC0DF 0x54E9EE75
	static void _JITTER_VEHICLE(Vehicle vehicle, BOOL p1, float yaw, float pitch, float roll) { invoke<Void>(0xD5F204EF91ACEA26, vehicle, p1, yaw, pitch, roll); } // 0xC59872A5134879C7 0x4A46E814
	static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCB50578868A841C2, vehicle, toggle); } // 0x75DBEC174AEEAD10 0xA3906284
	static BOOL _GET_BOAT_ANCHOR(Vehicle vehicle) { return invoke<BOOL>(0x4804D51795E820C2, vehicle); } // 0x26C10ECBDA5D043B
	static void _0xE3EBAAE484798530(Vehicle vehicle, BOOL p1) { invoke<Void>(0xC78B0CE1A5C15B34, vehicle, p1); } // 0xE3EBAAE484798530 0x0ED84792
	static void _0xB28B1FE5BFADD7F5(Vehicle vehicle, BOOL p1) { invoke<Void>(0xA7CCC6EC6AF0626D, vehicle, p1); } // 0xB28B1FE5BFADD7F5 0xA739012A
	static void _0xE842A9398079BD82(Vehicle vehicle, float p1) { invoke<Void>(0x4EE245C2A6A9DCA1, vehicle, p1); } // 0xE842A9398079BD82 0x66FA450C
	static void _0x8F719973E1445BA2(Vehicle vehicle, BOOL p1) { invoke<Void>(0x998CC6C318FB1C14, vehicle, p1); } // 0x8F719973E1445BA2 0x35614622
	static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xFDBFA3E3DB2F305D, vehicle, toggle); } // 0xF4924635A19EB37D 0x4AC1EFC7
	static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0x3AA542F1AE2C7CC6, vehicle); } // 0x4C9BF537BE2634B2 0x25EB5873
	static BOOL _0xB5CC40FBCB586380(Vehicle vehicle) { return invoke<BOOL>(0x6651E0B1C4C0AEDE, vehicle); } // 0xB5CC40FBCB586380
	static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x30AACBA8A7A124E3, vehicle, toggle); } // 0x3E8C8727991A8A0B 0xC758D19F
	static void REMOVE_VEHICLE_STUCK_CHECK(Any p0) { invoke<Void>(0x4B6BFB76D391DFA6, p0); } // 0x8386BFB614D06749 0x81594917
	static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0xCAD2F245E2AC499C, vehicle, colorPrimary, colorSecondary); } // 0xA19435F193E081AC 0x40D82D88
	static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x6315EBE95A97CADF, vehicle, seatIndex); } // 0x22AC59A870E6A669 0xDAF42B02
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int index) { return invoke<Ped>(0x8FD32443A080784B, vehicle, index); } // 0xBB40DD2270B65366 0x388FDE9A
	static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0xA89799E38057BB0B, vehicle, seatIndex); } // 0x83F969AA1EE2A664 0xF7C6792D
	static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, int* lightsOn, int* highbeamsOn) { return invoke<BOOL>(0x6191111B7B521073, vehicle, lightsOn, highbeamsOn); } // 0xB91B4C20085BD12F 0x7C278621
	static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0x3E474FAD80A0FADB, vehicle, wheelID, completely); } // 0xBA291848A0815CA9 0x48C80210
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xF1F2951FCA900FD0, vehicle, speed); } // 0xAB54A438726D25D5 0x69880D14
	static void _TASK_BRING_VEHICLE_TO_HALT(Vehicle vehicle, float p1, Any p2, BOOL p3) { invoke<Void>(0xAAE246A3BA63EEF6, vehicle, p1, p2, p3); } // 0x260BE8F09E326A20 0xCBC7D3C8
	static void _0x37EBBF3117BD6A25(Vehicle vehicle, float p1) { invoke<Void>(0x0630D815EE71DAF8, vehicle, p1); } // 0x37EBBF3117BD6A25 0x943A6CFC
	static BOOL SET_PED_ENABLED_BIKE_RINGTONE(Vehicle vehicle, int ringtone) { return invoke<BOOL>(0x1F4346707B20954C, vehicle, ringtone); } // 0x57715966069157AD 0x7FB25568
	static BOOL _0x62CA17B74C435651(Any p0) { return invoke<BOOL>(0xD4C1DA500ACFADE8, p0); } // 0x62CA17B74C435651 0x593143B9
	static Any _0x375E7FC44F21C8AB(Any p0) { return invoke<Any>(0x81489C61221B877E, p0); } // 0x375E7FC44F21C8AB 0x70DD5E25
	static BOOL _0x89D630CF5EA96D23(Any p0, Any p1) { return invoke<BOOL>(0x3B7D5240B68B1361, p0, p1); } // 0x89D630CF5EA96D23 0xFBF5536A
	static void _0x6A98C2ECF57FA5D4(Any p0, Any p1) { invoke<Void>(0x4C307B851EDEDC18, p0, p1); } // 0x6A98C2ECF57FA5D4 0x20AB5783
	static void _0x7C0043FDFF6436BC(Any p0) { invoke<Void>(0x2CA63C67B00E3C52, p0); } // 0x7C0043FDFF6436BC 0x0F11D01F
	static void _0x8AA9180DE2FEDD45(Any p0, BOOL p1) { invoke<Void>(0xB4B363F579AEA7D4, p0, p1); } // 0x8AA9180DE2FEDD45 0xAE040377
	static void _0x0A6A279F3AA4FD70(Any p0, BOOL p1) { invoke<Void>(0x94316D6F960483C3, p0, p1); } // 0x0A6A279F3AA4FD70 0x4C0E4031
	static BOOL _0x634148744F385576(Any p0) { return invoke<BOOL>(0xAFB836606A9B98AE, p0); } // 0x634148744F385576 0x6346B7CC
	static void _0xE6F13851780394DA(Any p0, float p1) { invoke<Void>(0x437DA015C47CF992, p0, p1); } // 0xE6F13851780394DA 0xCCB41A55
	static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL on_rim, float p3) { invoke<Void>(0x27AFA60E96135975, vehicle, index, on_rim, p3); } // 0xEC6A202EE4960385 0x89D28068
	static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0x4877CFC15DCA5DED, vehicle, closeInstantly); } // 0x781B3D62BB013EF5 0xBB1FF6E7
	static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0DD72E0CB1FCF511, vehicle, toggle); } // 0xEB9DC3C7D8596C46 0xA198DB54
	static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0xA2FDA679363F53A2, vehicle); } // 0x678B9BB8C3F58FEB 0x4D76CD2F
	static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0xFC8033AB783BE8CA, vehicle, enabled); } // 0x29B18B4FD460CA8F 0x829ED654
	static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorIndex, BOOL loose, BOOL openInstantly) { invoke<Void>(0x4102C3BEF39A262B, vehicle, doorIndex, loose, openInstantly); } // 0x7C65DAC73C35C862 0xBB75D38B
	static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x67ECF96D21F44820, vehicle, windowIndex); } // 0xA711568EEDB43069 0xBB8104A3
	static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0x6EC1119EEE855175, vehicle); } // 0x85796B0549DDE156 0x51A16DC6
	static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x7ECA096D915B238F, vehicle, windowIndex); } // 0x7AD9E6CE657D69E3 0xF840134C
	static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x32731FA9B14DF2AE, vehicle, windowIndex); } // 0x602E548F46E24D59 0x83B7E06A
	static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0xCCE4D59D85282CAE, vehicle, index); } // 0x9E5B5E4D2CCD2259 0xDDD9A8C2
	static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0x3C9DF6FF3135C11B, vehicle, index); } // 0x772282EBEB95E682 0x6B8E990D
	static void _DETACH_VEHICLE_WINDSCREEN(Vehicle vehicleHandle) { invoke<Void>(0x17D96F34832F25F1, vehicleHandle); } // 0x6D645D59FB5F5AD3 0xCC95C96B
	static void _EJECT_JB700_ROOF(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xF9D7425ADE116BBE, vehicle, x, y, z); } // 0xE38CB9D7D39FDBCC 0xFDA7B6CA
	static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int p1) { invoke<Void>(0x028D0662CAA67D4F, vehicle, p1); } // 0x34E710FF01247C5A 0xE8930226
	static void _0xC45C27EF50F36ADC(Any p0, BOOL p1) { invoke<Void>(0xCDF55EE524021C12, p0, p1); } // 0xC45C27EF50F36ADC 0x4221E435
	static void _0x1FD09E7390A74D54(Any vehicle, int p1) { invoke<Void>(0x6046267C19B35C71, vehicle, p1); } // 0x1FD09E7390A74D54
	static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0xBFC46C57DBA70B99, vehicle, state); } // 0xCDE5E70C1DDB954C 0x24877D84
	static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0x31E162525267C651, vehicle); } // 0xB8FF7AB45305C345 0x5B451FF7
	static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0xDCB77FFC0BA5BD5D, vehicle); } // 0x4319E335B71FFF34 0xF2630A4C
	static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xC02D8C6EE29A3FF5, vehicle, toggle); } // 0xBC2042F090AF6AD3 0x9AD1FE1E
	static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xEEA11E600C8798FE, vehicle, multiplier); } // 0xB385454F8791F57C 0x48039D6A
	static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0xB30E39101D27EBE6, vehicle, trailer, radius); } // 0x3C7D42D58F770B54 0x2133977F
	static void _0x16B5E274BDE402F8(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<Void>(0x80FB747A69D4F52C, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x16B5E274BDE402F8 0x12AC1A16
	static void _0x374706271354CB18(Vehicle p0, Entity p1, float p2) { invoke<Void>(0x856969DDA224B3EE, p0, p1, p2); } // 0x374706271354CB18 0x40C4763F
	static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0xAC458F509C180164, vehicle); } // 0x90532EDF0D2BDD86 0xB5DBF91D
	static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0x0E3B720DBDB92515, vehicle); } // 0xE7CF3C4F9F489F0C 0xE142BBCC
	static void _0x2A8F319B392E7B3F(Any p0, float p1) { invoke<Void>(0xFA080FDC6046D533, p0, p1); } // 0x2A8F319B392E7B3F 0xE74E85CE
	static void _0x95CF53B3D687F9FA(Any p0) { invoke<Void>(0xC9D556F4CB17F1C5, p0); } // 0x95CF53B3D687F9FA 0x06C47A6F
	static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0x2E2BF0DEFE6A3F0C, vehicle, tyreIndex); } // 0x6E13FC662B882D1D 0xA42EFA6B
	static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, char* plateText) { invoke<Void>(0x58398448C0A1FC69, vehicle, plateText); } // 0x95A88F0B409CDA47 0x400F9556
	static char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<char*>(0x65FDE11354F074FF, vehicle); } // 0x7CE1CCB9B293020E 0xE8522D58
	static Any GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<Any>(0xE4FB82B76B7E1C67); } // 0x4C4D6B2644F458CB 0xD24BC1AE
	static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0xC3F98B670A143BDD, vehicle, plateIndex); } // 0x9088EB5A43FFB0A1 0xA1A1890E
	static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0x35FA749428DD4A65, vehicle); } // 0xF11BC2DD9A3E7195 0x499747B6
	static void SET_RANDOM_TRAINS(BOOL unk) { invoke<Void>(0x90651058E4CCE722, unk); } // 0x80D9F74197EA47D9 0xD461CA7F
	static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction) { return invoke<Vehicle>(0xFEF8A126FCBFF821, variation, x, y, z, direction); } // 0x63C6CCA8E68AE8C8 0xD4C2EAFD
	static void SWITCH_TRAIN_TRACK(int intersectionId, BOOL state) { invoke<Void>(0x4A4532D7364A590F, intersectionId, state); } // 0xFD813BB7DB977F20 0x68BFDD61
	static void _0x21973BBF8D17EDFA(Any p0, Any p1) { invoke<Void>(0xFDEC4C7FB87AAA56, p0, p1); } // 0x21973BBF8D17EDFA 0xD5774FB7
	static void DELETE_ALL_TRAINS() { invoke<Void>(0x28E47C99DB52BF13); } // 0x736A718577F39C7D 0x83DE7ABF
	static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0x63C54320D6CBE3EA, train, speed); } // 0xAA0BC91BE0B796E3 0xDFC35E4D
	static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0xE6245A2E24F69DAE, train, speed); } // 0x16469284DB8C62B5 0xB507F51D
	static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0x334CA9394DD5DF82, toggle); } // 0x84436EC293B1415F 0xB505BD89
	static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0xBA8645AA453BAE5F, toggle); } // 0x2AFD795EEAC8D30D 0xD9ABB0FF
	static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Any p0) { return invoke<BOOL>(0xD6CB199CBD3D6689, p0); } // 0x57E4C39DE5EE8470 0x5D91D9AC
	static Any GET_VEHICLE_RECORDING_ID(Any p0, Any* p1) { return invoke<Any>(0xC47221AEE3FE706F, p0, p1); } // 0x21543C612379DB3C 0x328D601D
	static void REQUEST_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0x77051FBD916D3170, p0, p1); } // 0xAF514CABE74CBF15 0x91AFEFD9
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(Any p0, Any* p1) { return invoke<BOOL>(0x48B13379A3313D29, p0, p1); } // 0x300D614A4C785FC4 0xF52CD7F5
	static void REMOVE_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0x11DDC8BDE5CBDCB5, p0, p1); } // 0xF1160ACCF98A3FC8 0xD3C05B00
	static Vector3 _0x92523B76657A517D(Any p0, float p1) { return invoke<Vector3>(0xC1BCCA8FE6DF9F3F, p0, p1); } // 0x92523B76657A517D 0xF31973BB
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return invoke<Vector3>(0x6F15E3218CF5B8EE, p0, p1, p2); } // 0xD242728AA6F0FBA2 0x7178558D
	static Vector3 _0xF0F2103EFAF8CBA7(Any p0, float p1) { return invoke<Vector3>(0x3330433AFECAC4C0, p0, p1); } // 0xF0F2103EFAF8CBA7 0x4D1C15C2
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return invoke<Vector3>(0xBCAA200C0A0B52D8, p0, p1, p2); } // 0x2058206FBE79A8AD 0xD96DEC68
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(Any p0) { return invoke<float>(0x493F8B537F94375F, p0); } // 0x102D125411A7B6E6 0x7116785E
	static Any GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Any p0, Any p1) { return invoke<Any>(0xEF96201841DA11AF, p0, p1); } // 0x0E48D1C262390950 0x5B35EEB7
	static float GET_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0x1E061B716211D14F, p0); } // 0x2DACD605FC681475 0x7DCD644C
	static float GET_TIME_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0xA2A1A94778C2551E, p0); } // 0x5746F3A7AB7FE544 0xF8C3E4A2
	static void START_PLAYBACK_RECORDED_VEHICLE(Any p0, Any p1, Any* p2, BOOL p3) { invoke<Void>(0x8466AAF2AE57F1B9, p0, p1, p2, p3); } // 0x3F878F92B3A7A071 0xCF614CA8
	static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { invoke<Void>(0x4C33F821D2EA0322, p0, p1, p2, p3, p4, p5); } // 0x7D80FD645D4DA346 0x4E721AD2
	static void _0x1F2E4E06DEA8992B(Any p0, BOOL p1) { invoke<Void>(0x938D4A2052A69BFA, p0, p1); } // 0x1F2E4E06DEA8992B 0x01B91CD0
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x26B9AD2BE477CF10, p0); } // 0x54833611C17ABDEA 0xAE99C57C
	static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x9766A9D3176764E9, p0); } // 0x632A689BF42301B1 0xCCF54912
	static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x04A094CF81A4EDE3, p0); } // 0x8879EE09268305D5 0x59060F75
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0xC8FF9EAEF62B118C, p0); } // 0x1C8A4C2C19E68EEC 0x61F7650D
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0xDFC284E88E664FA8, p0); } // 0xAEA8FD591FAD4106 0x63022C58
	static Any GET_CURRENT_PLAYBACK_FOR_VEHICLE(Any p0) { return invoke<Any>(0x2A743010DA8CA71B, p0); } // 0x42BC05C27A946054 0xA3F44390
	static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x06EE4B805DE403E6, p0); } // 0xAB8E2EDA0C0A5883 0x8DEA18C8
	static void SET_PLAYBACK_SPEED(Any p0, float speed) { invoke<Void>(0x4DBE639635E416EA, p0, speed); } // 0x6683AB880E427778 0x684E26E4
	static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Any p0, Any p1, Any* p2, float p3, Any p4) { invoke<Void>(0x2316DD642966B659, p0, p1, p2, p3, p4); } // 0x29DE5FA52D00428C 0x8DE8E24E
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Any p0, float p1) { invoke<Void>(0xDFB772A81EE119F9, p0, p1); } // 0x9438F7AD68771A20 0xCF3EFA4B
	static void SET_PLAYBACK_TO_USE_AI(Any p0, Any p1) { invoke<Void>(0x0EF43817CF90BD63, p0, p1); } // 0xA549C3B37EA28131 0xB536CCD7
	static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xA016C45007829A4C, p0, p1, p2, p3); } // 0x6E63860BBB190730 0x0C8ABAA4
	static void _0x5845066D8A1EA7F7(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0xDF5A200C80C83C59, vehicle, x, y, z, p4); } // 0x5845066D8A1EA7F7 0x943A58EB
	static void _0x796A877E459B99EA(Any p0, float p1, float p2, float p3) { invoke<Void>(0xD217CD638A836F69, p0, p1, p2, p3); } // 0x796A877E459B99EA 0x5C9F477C
	static void _0xFAF2A78061FD9EF4(Any p0, float p1, float p2, float p3) { invoke<Void>(0x7BBBF1F42A1D0523, p0, p1, p2, p3); } // 0xFAF2A78061FD9EF4 0xCD83C393
	static void _0x063AE2B2CC273588(Any p0, BOOL p1) { invoke<Void>(0xF1CA648EC807AE3F, p0, p1); } // 0x063AE2B2CC273588 0x2EF8435C
	static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle p0, BOOL p1) { invoke<Void>(0xE3F3152402782229, p0, p1); } // 0x786A4EB67B01BF0B 0xA85207B5
	static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0x72CADCF719F4AD38, p0, p1, p2, p3, p4, p5, p6); } // 0x2FA9923062DD396C 0xC8B789AD
	static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0x3607936F13065720, model, suppressed); } // 0x0FC2D89AC25A5814 0x42A08C9B
	static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x3F2B9B4503D513FA, x, y, z, radius, modelHash, flags); } // 0x386F6CE5BAF6091C 0x57216D03
	static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xB73B55BDD3C1D5D1, p0, p1, p2, p3, p4, p5, p6); } // 0xC5574E0AEB86BA68 0xDCADEB66
	static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0x673F370FEB0E446B, p0, p1, p2, p3, p4, p5, p6); } // 0xB50807EABE20A8DC 0xD6343F6B
	static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xC9A2776428760D9D, x, y, z, radius, modelHash, flags); } // 0xF73EB622C4F1689B 0xD7E26B2C
	static Entity GET_TRAIN_CARRIAGE(Vehicle train, int carriage) { return invoke<Entity>(0xAC15ED9632EBD316, train, carriage); } // 0x08AAFD0814722BC3 0x2544E7A6
	static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0x64902A3F134CB04C, train); } // 0x5B76B14AE875C795 0x86C9497D
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0xA21CAC5CFED7F622, train, p1); } // 0xBBE7648349B49BE8 0x19808560
	static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0x5D7F6AFFF9BFFD08, train, x, y, z); } // 0x591CA673AA6AB736 0xD6D70803
	static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0xE3C6E31B7236489F, model); } // 0x45A9187928F4B9E3 0x10F6085C
	static BOOL _IS_THIS_MODEL_A_SUBMERSIBLE(Hash model) { return invoke<BOOL>(0x63A9F8DD89623B7D, model); } // 0x9537097412CF75FE
	static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0x1E3C80E7C4B8041B, model); } // 0xA0948AB42D7BA0DE 0x3B3907BB
	static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xFC4346F9DE2AB4AE, model); } // 0xDCE4334788AF94EA 0x8AF7F568
	static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0x0778B61C8A904D0B, model); } // 0x7F6DB52EEFC96DF8 0x60E4C22F
	static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0x11F6DEA60A2AE510, model); } // 0xAB935175B22E822B 0xF87DCFFD
	static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0xBFD32C1D4D54E09B, model); } // 0xB50C0B0CEDC6CE84 0x7E702CDD
	static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0xC388189407833D70, model); } // 0xBF94DD42F63BDED2 0x328E6FF5
	static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0xA727EEDD175A1189, model); } // 0x39DAC362EE65FA28 0xC1625277
	static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0xE88D5F6F072B64A7, vehicle); } // 0xA178472EBB8AE60D 0x033A9408
	static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xCC4C5AF88E64862B, vehicle, speed); } // 0xFD280B4D7F3ABC4D 0x5C7D4EA9
	static void _0x99CAD8E7AFDB60FA(Any p0, float p1, float p2) { invoke<Void>(0x87DBC42CCA290493, p0, p1, p2); } // 0x99CAD8E7AFDB60FA 0x1128A45B
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x18710E6BAF38BF55, vehicle, state); } // 0x3750146A28097A82 0x64B70B1D
	static void _0xDBC631F109350B8C(Any p0, BOOL p1) { invoke<Void>(0xC00E0AC91B7F5055, p0, p1); } // 0xDBC631F109350B8C 0x486C1280
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0xE5D4D5071B67B5E9, vehicle, state); } // 0x4C7028F78FFD3681 0xC5D94017
	static void _0x1AA8A837D2169D94(Any p0, BOOL p1) { invoke<Void>(0x6A19AA7DECC5FB41, p0, p1); } // 0x1AA8A837D2169D94 0x009AB49E
	static void _0x2311DD7159F00582(Any p0, BOOL p1) { invoke<Void>(0x1B640269845E999D, p0, p1); } // 0x2311DD7159F00582 0x758C5E2E
	static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0xDBCF006BC0FE82D2, vehicle); } // 0x8F17BC8BA08DA62B 0xFD15C065
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0xA353FBC64C96C09F, vehicle, dirtLevel); } // 0x79D3B596FE44EE8B 0x2B39128B
	static BOOL _IS_VEHICLE_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x3DB8C3377C79A388, vehicle); } // 0xBCDC5017D3CE1E9E 0xDAC523BC
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorIndex) { return invoke<BOOL>(0xEF2C230B837A02A2, vehicle, doorIndex); } // 0x3E933CFF7B111C22 0xC2385B6F
	static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL unk) { invoke<Void>(0x6F40E1EE32FE6A5E, vehicle, value, instantly, unk); } // 0x2497C4717C8B881E 0x7FBC86F1
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x23210FECFBD7B39A, vehicle, toggle); } // 0x8ABA6AF54B942B95 0x48D02A4E
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x36C3861F31E51C4D, vehicle, toggle); } // 0x5AFEEDD9BB2899D7 0xEFC01CA9
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorIndex, Any p2, float p3) { invoke<Void>(0xF463117DBF0348D6, vehicle, doorIndex, p2, p3); } // 0xF2BFA0430F0A0FCB 0x572DD360
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorIndex, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x1B13E4CE4566152E, vehicle, doorIndex, p2, p3, p4); } // 0xA5A9653A8D2CAF48 0x4EB7BBFC
	static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int door) { return invoke<float>(0x121D588F3F18C186, vehicle, door); } // 0xFE3F9C29F7B32BD5 0x0E399C26
	static Ped _GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doorIndex) { return invoke<Ped>(0x4300569FADD548DF, vehicle, doorIndex); } // 0x218297BF0CFD853B
	static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorIndex, BOOL closeInstantly) { invoke<Void>(0xE7617DB3A22803B4, vehicle, doorIndex, closeInstantly); } // 0x93D9BD300D7789E5 0x142606BD
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorIndex, BOOL toggle) { invoke<Void>(0xCDB4F9F6E01571C2, vehicle, doorIndex, toggle); } // 0xD4D4F6A4AB575A33 0x8147FEA7
	static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x701669D40753A1F5, vehicle, Toggle); } // 0x59BF8C3D52C92F66 0x90A810D1
	static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x16DE11C061E3B20A, vehicle); } // 0x8AC862B0B32C5B80 0xDB817403
	static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x29626AAD56D23B62, vehicle); } // 0x9F243D3919F442FE 0x9CDBA8DE
	static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0xD01393AAC682F92E, vehicle); } // 0x3B963160CD65D41E 0xF2442EE2
	static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int numCombos) { invoke<Void>(0x15E5515C105AB6C8, vehicle, numCombos); } // 0x33E8CD3322E2FE31 0xA557AEAD
	static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0x2C0C14929BC8D27B, vehicle); } // 0x6A842D197F845D56 0x77AC1B4C
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x325A2C5B8927293C, vehicle, toggle); } // 0x31B927BBC44156CD 0x14413319
	static void _0xBE5C1255A1830FF5(Any p0, BOOL p1) { invoke<Void>(0xAF63CB1048A1CD4A, p0, p1); } // 0xBE5C1255A1830FF5 0xA6D8D7A5
	static void _0x9BECD4B9FEF3F8A6(Any p0, BOOL p1) { invoke<Void>(0xD66731B3B2779230, p0, p1); } // 0x9BECD4B9FEF3F8A6 0xACAB8FF3
	static void _0x88BC673CA9E0AE99(Any p0, BOOL p1) { invoke<Void>(0xAA12FDAA08F09AA4, p0, p1); } // 0x88BC673CA9E0AE99 0xF0E5C41D
	static void _0xE851E480B814D4BA(Any p0, BOOL p1) { invoke<Void>(0xA06105EA1C2ADCEA, p0, p1); } // 0xE851E480B814D4BA 0x2F98B4B7
	static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* p2) { invoke<Void>(0x07E101F5C645595F, p0, modelHash, p2); } // 0x055BF0AC0C34F4FD 0xE2C45631
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0x573723AAC88FEB61, vehicle); } // 0x25BC98A59C2EA962 0x0D72CEF2
	static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0xD51BFB0685AEEA96, veh, doorID); } // 0xB8E181E559464527 0x4999E3C3
	static void _SET_VEHICLE_DOOR_BREAKABLE(Vehicle vehicle, int doorIndex, BOOL isBreakable) { invoke<Void>(0x85563DE28335FC93, vehicle, doorIndex, isBreakable); } // 0x2FA133A4A9D37ED8 0x065B92B3
	static BOOL _0x27B926779DEB502D(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x3E52E911D0DE25F4, vehicle, p1); } // 0x27B926779DEB502D 0xB3A2CC4F
	static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xF9086E03004EDFE3, vehicle, p1); } // 0x468056A6BB6F3846 0xAF25C027
	static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0xC1E09F9E834BCD2A, x1, x2, y1, y2, z1, z2); } // 0x7EEF65D5F153E26A 0xFB16C6D1
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xF4EC4B99EA67DA10, vehicle); } // 0xB104CD1BABF302E2 0x10089F8E
	static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0xCF63F083BB8317E3, vehicle); } // 0x28D37D4F71AC5C58 0xE0B35187
	static Any _0xA01BC64DD4BFBBAC(Vehicle vehicle, Any p1) { return invoke<Any>(0x8738B1A73DA7E329, vehicle, p1); } // 0xA01BC64DD4BFBBAC
	static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0x6386DE538FF3CA50, train, toggle); } // 0x317B11A312DF5534 0x899D9092
	static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0xE491F8C2C2A96483, vehicle, pearlescentColor, wheelColor); } // 0x2036F561ADD12E33 0x515DB2A0
	static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0x86DEF98E95F667ED, vehicle, pearlescentColor, wheelColor); } // 0x3BC4245933A166F7 0x80E4659B
	static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0xA22A51B0CC59D4B9); } // 0x0F87E938BDF29D66 0x17A0BCE5
	static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0xEEE264130F2EA9E2, vehicle); } // 0x115722B1B9C14C1C 0x17469AA1
	static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0xF466003901558AA7, vehicle); } // 0x953DA1E1B12C0491 0xDD2920C8
	static void _0x206BC5DC9D1AC70A(Vehicle vehicle, BOOL p1) { invoke<Void>(0x73B0E4AB226EE732, vehicle, p1); } // 0x206BC5DC9D1AC70A
	static void _0x51BB2D88D31A914B(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF9E7970E0FD68AA7, vehicle, p1); } // 0x51BB2D88D31A914B 0x88F0F7E7
	static void _0x192547247864DFDD(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1B0BE87E0321C157, vehicle, p1); } // 0x192547247864DFDD 0x90D6EE57
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9E5CF39FC4E26D85, vehicle, toggle); } // 0x465BF26AB9684352 0xC40192B5
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD46040B5877E6862, vehicle, toggle); } // 0x37C8252A7C92D017 0xAD3E05F2
	static void _0x91A0BD635321F145(Vehicle vehicle, BOOL p1) { invoke<Void>(0x5223EFCBB31747E1, vehicle, p1); } // 0x91A0BD635321F145 0x1784BA1A
	static void _0xC50CE861B55EAB8B(Vehicle vehicle, BOOL p1) { invoke<Void>(0x7AE058C920C4E3A1, vehicle, p1); } // 0xC50CE861B55EAB8B 0x40C323AE
	static void _0x6EBFB22D646FFC18(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF38841B5BD4DE28F, vehicle, p1); } // 0x6EBFB22D646FFC18 0x847F1304
	static void _0x25367DE49D64CF16(Vehicle vehicle, BOOL p1) { invoke<Void>(0x25E546EB6A8BE2E6, vehicle, p1); } // 0x25367DE49D64CF16 0xCBD98BA1
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any unk) { invoke<Void>(0xF5E9CA2257E6786D, x1, y1, z1, x2, y2, z2, unk); } // 0x46A1E1A299EC4BBA 0x42CC15E0
	static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0x8913E759DB41DFA6, vehicle, value); } // 0x42A8EC77D5150CBE 0x7357C1EB
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xDC21CA8351C75F1F, vehicle, extraId); } // 0xD2E6822DBFD6C8BD 0x042098B5
	static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, int toggle) { invoke<Void>(0x175E22227AEEF4D9, vehicle, extraId, toggle); } // 0x7EE3A3C5E4A40CC9 0x642D065C
	static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x643E859A152396CA, vehicle, extraId); } // 0x1262D55792428154 0x409411CC
	static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x4F638E3F459D634F, vehicle, p1); } // 0xF39C4F538B5124C2 0xC87B6A51
	static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0x8F3C1071FC8AD5C7, vehicle, instantlyLower); } // 0xDED51F703D0FA83D 0xC5F72EAE
	static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0x298721A98288CE92, vehicle, instantlyRaise); } // 0x8F5FB35D7E88FC70 0xA4E4CBA3
	static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0x851DDA9C534FCA13, vehicle); } // 0xF8C397922FC03F41 0x1B09714D
	static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xE7D026C4E15E6E7F, vehicle, p1); } // 0x52F357A30698BCCE 0x6EF54490
	static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0xB7B0E9D931E1F8F7, vehicle); } // 0x2959F696AE390A99 0x69200FA4
	static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6) { invoke<Void>(0x4DCDF96D8AD36447, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); } // 0xA1DD317EA8FD4F29 0x21B458B2
	static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x34898726CD7A292C, vehicle); } // 0xC45D23BAF168AAB8 0x8880038A
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xA0BCF2878D04DC73, vehicle, health); } // 0x45F6D8EEF34ABEF1 0x1B760FB5
	static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x45C9703104567743, vehicle); } // 0x7D5DABE888D2D074 0xE41595CE
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xFE9791BE61B48751, vehicle, health); } // 0x70DB57649FA8D0D8 0x660A3692
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int p2) { return invoke<BOOL>(0x9E7343C699F331A6, vehicle, p1, p2); } // 0x679BE1DAF71DA874 0x2FCF58C1
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, BOOL nullAttributes) { invoke<Void>(0xEEF9BCDAFE218FC1, vehicle, nullAttributes); } // 0xD7591B0065AFAA7A 0xEF2A6016
	static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x1F1B2B6E500380C5, vehicle, p1); } // 0x4C241E39B23DF959 0x41A7267A
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0x5DAC607F3BD7200B, vehicle, owned); } // 0x2B5F9D2AF1F1722D 0xB4D3DBFB
	static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3DDB2198EF950E49, vehicle, toggle); } // 0xFBA550EA44404EE6 0xD8260751
	static void _0x9F3F689B814F2599(Any p0, BOOL p1) { invoke<Void>(0x97F5CC716EB546E6, p0, p1); } // 0x9F3F689B814F2599
	static void _0x4E74E62E0A97E901(Any p0, BOOL p1) { invoke<Void>(0x529CF5A753CC0FB9, p0, p1); } // 0x4E74E62E0A97E901
	static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL p3) { invoke<Void>(0x5FCCDE3D6388E2B2, vehicle, duration, mode, p3); } // 0x9C8C6504B5B63D2C 0x0DF5ADB3
	static void _0x9D44FCCE98450843(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF84A468A9EF1437A, vehicle, toggle); } // 0x9D44FCCE98450843 0x968E5770
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x6783F2971949E5C2, vehicle, toggle); } // 0x92F0CF722BC4202F 0x0D1CBC65
	static char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<char*>(0xFC96A08CFC53257A, modelHash); } // 0xB215AAC32D25D019 0xEC86DF39
	static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float position1, float position2, float position3) { return invoke<Vector3>(0x25780572C73A1131, vehicle, position1, position2, position3); } // 0x4EC6CFBC7B2E9536 0xABF02075
	static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0xB9C9103C26C01C4F, vehicle, livery); } // 0x60BF608F1B8CD1B6 0x7AD87059
	static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0xB7F7AFF78B9F9EF6, vehicle); } // 0x2BB9230590DA5E8A 0xEC82A51D
	static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0x642E829F9613672E, vehicle); } // 0x87B63E25A529D526 0xFB0CA947
	static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x0840C5452268553B, vehicle, windowIndex); } // 0x46E571A0E20D01F1 0xAC4EF23D
	static BOOL _ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0x34118DD5943DCA03, vehicle); } // 0x11D862A3E977A9EF 0xBB619744
	static BOOL _IS_ANY_VEHICLE_SEAT_EMPTY(Vehicle veh) { return invoke<BOOL>(0x521BB3D7D6C781FB, veh); } // 0x2D34FC3BC4ADB780 0x648E685A
	static void RESET_VEHICLE_WHEELS(Any p0, BOOL p1) { invoke<Void>(0x22641ADA6D76505B, p0, p1); } // 0x21D2E5662C1F6FED 0xD5FFE779
	static BOOL IS_HELI_PART_BROKEN(Any p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xBA73486F36A2B148, p0, p1, p2, p3); } // 0xBC74B4BE25EB6C8A 0xF4E4C439
	static float _GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xA9D55D93B236832B, vehicle); } // 0xE4CB7541F413D2C5 0xF01E2AAB
	static float _GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xA374483E8E4DAF6F, vehicle); } // 0xAE8CE82A4219AC8C 0xA41BC13D
	static float _GET_HELI_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x84BF338226672EC3, vehicle); } // 0xAC51915D27E4A5F7 0x8A68388F
	static BOOL WAS_COUNTER_ACTIVATED(Any p0, Any p1) { return invoke<BOOL>(0x55B3B831FF2AE742, p0, p1); } // 0x3EC8BF18AA453FE9 0x2916D69B
	static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, char* name) { invoke<Void>(0xC6CEB6EF16AB5C69, vehicle, name); } // 0xBFDF984E2C22B94F 0xA712FF5C
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x39C4DA429D9174C5, vehicle, toggle); } // 0x71B0892EC081D60A 0x38CC692B
	static void _0x3441CAD2F2231923(Any p0, BOOL p1) { invoke<Void>(0x12A1ECE927BE278C, p0, p1); } // 0x3441CAD2F2231923 0xC306A9A3
	static void _0x2B6747FAA9DB9D6B(Vehicle vehicle, BOOL p1) { invoke<Void>(0x457A60D14B64992B, vehicle, p1); } // 0x2B6747FAA9DB9D6B 0x95A9ACCB
	static void _SET_VEHICLE_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0x1682BCC816B3B035, vehicle, state); } // 0xCFC8BE9A5E1FE575 0x24F873FB
	static int _GET_VEHICLE_LANDING_GEAR(Vehicle vehicle) { return invoke<int>(0xB5BA4B2B27FE3A39, vehicle); } // 0x9B0F3DCA3DB0F4CD 0xA6F02670
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x916C9DBA707424D8, x, y, z, radius); } // 0x61E1DD6125A3EEE6 0x2867A834
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Any p0) { invoke<Void>(0x2B6521A64CBB67B6, p0); } // 0xA6E9FDCB2C76785E 0x9DA21956
	static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Any p0) { invoke<Void>(0x551423F2564AA4CB, p0); } // 0x00689CDE5F7C6787 0x382BE070
	static BOOL IS_VEHICLE_HIGH_DETAIL(Any p0) { return invoke<BOOL>(0xF5C91DB47E02A1A5, p0); } // 0x1F25887F3C104278 0x55D41928
	static void REQUEST_VEHICLE_ASSET(Hash VehicleHash, int vehicleAsset) { invoke<Void>(0x03B619753CEFE676, VehicleHash, vehicleAsset); } // 0x81A15811460FAB3A 0x902B4F06
	static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0x0C8BBA1A7F589008, vehicleAsset); } // 0x1BBE0523B8DB9A21 0x8DAAC3CB
	static void REMOVE_VEHICLE_ASSET(Any p0) { invoke<Void>(0x5DA4C60EB26350A6, p0); } // 0xACE699C71AB9DEB5 0x9620E9C6
	static void _SET_TOW_TRUCK_CRANE_RAISED(Vehicle towTruck, float state) { invoke<Void>(0x77A5F92BED92F7C0, towTruck, state); } // 0xFE54B92A344583CA 0x88236E22
	static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0x1D4E9B002A0709C7, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); } // 0x29A16F8D621C4508 0x8151571A
	static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0xF7B71ABDFD7D8134, towTruck, vehicle); } // 0xC2DB6B6708350ED8 0xC666CF33
	static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0x73AC369C7ABACFB1, vehicle); } // 0xD0E9CE05A1E68CD8 0x3BF93651
	static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0x0324876F69B4FC18, towTruck, vehicle); } // 0x146DF9EC4C4B9FD4 0x9699CFDC
	static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0xD918F0CB16988C6E, towTruck); } // 0xEFEA18DCF10F8F75 0x11EC7844
	static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, Any p1, Any p2) { return invoke<Any>(0x483A8C64905D06CC, vehicle, p1, p2); } // 0x8BA6F76BC53A1493 0x4273A8D3
	static void _0xF8EBCCC96ADB9FB7(Any p0, float p1, BOOL p2) { invoke<Void>(0x4A6A6027DD5079EE, p0, p1, p2); } // 0xF8EBCCC96ADB9FB7 0xED23C8A3
	static void _0x56B94C6D7127DFBA(Any p0, float p1, BOOL p2) { invoke<Void>(0x16EFDC6D1E93D48B, p0, p1, p2); } // 0x56B94C6D7127DFBA 0xB1A52EF7
	static void _0x1093408B4B9D1146(Any p0, float p1) { invoke<Void>(0x6EC1004E3DA68D46, p0, p1); } // 0x1093408B4B9D1146 0xF30C566F
	static void _0x30D779DE7C4F6DD3(Any p0, float p1) { invoke<Void>(0xD7B4A1AC9C8BC6EB, p0, p1); } // 0x30D779DE7C4F6DD3 0xA7DF64D7
	static void _0x9AA47FFF660CB932(Any p0, float p1) { invoke<Void>(0xC705F889F0AD9B23, p0, p1); } // 0x9AA47FFF660CB932 0xDD7936F5
	static BOOL _0xA4822F1CF23F4810(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0x35535C8AFDF4D227, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); } // 0xA4822F1CF23F4810 0x34E02FCD
	static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE426A303EE1AE0C6, vehicle, toggle); } // 0xFB8794444A7D60FB 0x9B6EF0EA
	static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x764C5B40341BAAE9, vehicle); } // 0x1297A88E081430EB 0x6632BC12
	static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x4DCC14D351314CFA, vehicle, toggle); } // 0x222FF6A823D122E2 0x90D3A0D9
	static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0x6E3EB6601FEB3A1C, vehicle, turnSignal, toggle); } // 0xB5D45264751B7DF0 0xA6073B5D
	static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0xFBE07CF487F5E654, vehicle, Toggle); } // 0x92B35082E0B42F66 0x6D9BA11E
	static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x8FA247FBA8B4A9D8, vehicle, Toggle); } // 0x684785568EF26A22 0xBA729A25
	static void _0x48ADC8A773564670() { invoke<Void>(0x71454D4862BA7065); } // 0x48ADC8A773564670 0x37BC6ACB
	static Any _0x91D6DD290888CBAB() { return invoke<Any>(0x01DA0FBF59746B55); } // 0x91D6DD290888CBAB 0x71D898EF
	static void _0x51DB102F4A3BA5E0(BOOL p0) { invoke<Void>(0x363D6A599BFAE6C7, p0); } // 0x51DB102F4A3BA5E0 0x0B0523B0
	static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0xBFD07924C8EBEB59, vehicle, trailer); } // 0x1CDD6BADC297830D 0xAE84D758
	static void _0xCAC66558B944DA67(Vehicle vehicle, BOOL p1) { invoke<Void>(0x69044BFC73B8C514, vehicle, p1); } // 0xCAC66558B944DA67 0x0B200CE2
	static void SET_VEHICLE_RUDDER_BROKEN(Vehicle p0, BOOL p1) { invoke<Void>(0xA8796811E7A099DE, p0, p1); } // 0x09606148B6C71DEF 0x3FAC3CD4
	static void _0x1A78AD3D8240536F(Vehicle vehicle, BOOL p1) { invoke<Void>(0x39FA1A30D1877D31, vehicle, p1); } // 0x1A78AD3D8240536F 0x0858678C
	static float _GET_VEHICLE_SPEED(Vehicle vehicle) { return invoke<float>(0xD6D39532149CE0AF, vehicle); } // 0x53AF99BAA671CA47 0x7D1A0616
	static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0xF2274CEA7189290C, vehicle); } // 0xAD7E85FC227197C4 0x03B926F6
	static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0xE13FEFCC53F8D6D3, vehicle); } // 0xA132FB5370554DB0 0x7E5A1587
	static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0x50B9326B2773706F, vehicle); } // 0x5DD35C8D074E57AE 0x00478321
	static float _GET_VEHICLE_MAX_SPEED(Hash modelHash) { return invoke<float>(0xC5369B6424D6E9AF, modelHash); } // 0xF417C2502FFFED43 0x8F291C4A
	static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0x522070B820244118, modelHash); } // 0xDC53FD41B4ED944C 0x7EF02883
	static float _0xBFBA3BA79CFF7EBF(Hash modelHash) { return invoke<float>(0xF6675A2F5F144493, modelHash); } // 0xBFBA3BA79CFF7EBF 0xF3A7293F
	static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0x67A8C0D8D4EB1723, modelHash); } // 0x539DE94D44FDFD0D 0x7F985597
	static float GET_VEHICLE_MODEL_ACCELERATION(Any p0) { return invoke<float>(0xF794ABA9EED0152A, p0); } // 0x8C044C5C84505B6A 0x29CB3537
	static float _0x53409B5163D5B846(Hash modelHash) { return invoke<float>(0x6721E18D4FF7A591, modelHash); } // 0x53409B5163D5B846 0x37FBA7BC
	static float _0xC6AD107DDC9054CC(Hash modelHash) { return invoke<float>(0x99E6C26DC8696AC6, modelHash); } // 0xC6AD107DDC9054CC 0x95BB67EB
	static float _0x5AA3F878A178C4FC(Any p0) { return invoke<float>(0x7BB8DE916EA519FB, p0); } // 0x5AA3F878A178C4FC 0x87C5D271
	static Any _0x00C09F246ABEDD82(Any p0) { return invoke<Any>(0x10C16CF7856EFB3B, p0); } // 0x00C09F246ABEDD82 0xCE67162C
	static float GET_VEHICLE_CLASS_MAX_TRACTION(Any p0) { return invoke<float>(0x995172833C054001, p0); } // 0xDBC86D85C5059461 0x5B4FDC16
	static float GET_VEHICLE_CLASS_MAX_AGILITY(Any p0) { return invoke<float>(0x6597E5895A4ACB86, p0); } // 0x4F930AD022D6DE3B 0x45F2BD83
	static float GET_VEHICLE_CLASS_MAX_ACCELERATION(Any p0) { return invoke<float>(0x405468252CCA174F, p0); } // 0x2F83E7E45D9EA7AE 0x3E220A9B
	static float GET_VEHICLE_CLASS_MAX_BRAKING(Any p0) { return invoke<float>(0x207FC861FC75524A, p0); } // 0x4BF54C16EC8FEC03 0xD08CC1A5
	static Any _0x2CE544C68FB812A0(float p0, float p1, float p2, float p3, float p4, BOOL p5) { return invoke<Any>(0x31A41950AB3460E5, p0, p1, p2, p3, p4, p5); } // 0x2CE544C68FB812A0 0xD6685803
	static BOOL _0x1033371FC8E842A7(Any p0) { return invoke<BOOL>(0xC9267D852DE385DE, p0); } // 0x1033371FC8E842A7 0x0C0332A6
	static void _OPEN_VEHICLE_BOMB_BAY(Any p0) { invoke<Void>(0xA9A3DCF9E032716A, p0); } // 0x87E7F24270732CB1 0x6574041D
	static void _0x3556041742A0DC74(Any p0) { invoke<Void>(0xF0F445AB40F36145, p0); } // 0x3556041742A0DC74 0xF8EC5751
	static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x40371B25BF96DC75, vehicle); } // 0xC0F97FCE55094987 0xADAF3513
	static void SET_VEHICLE_SEARCHLIGHT(Vehicle vehicle, BOOL duskLight, BOOL p2) { invoke<Void>(0xC8D951530ABFA7D4, vehicle, duskLight, p2); } // 0x14E85C5EE7A4D542 0xE2C0DD8A
	static BOOL _0x639431E895B9AA57(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0x80A32E1648764112, p0, p1, p2, p3, p4); } // 0x639431E895B9AA57 0xAB0E79EB
	static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x36453421AD1121D7, vehicle, p1); } // 0x30785D90C956BF35 0xB3EB01ED
	static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0x141913B932CAECD6, vehicle); } // 0x33F2E3FE70EAAE1D 0xE4903AA0
	static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0xE1A095B0BA3A0EA3, vehicle, modKit); } // 0x1F2AA07F00B3217A 0xB8132158
	static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0x50B1D75C8D874AB7, vehicle); } // 0x6325D1A044AE510D 0x9FE60927
	static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0x3F9519EA6CB3B018, vehicle); } // 0xFC058F5121E54C32 0xE5F76765
	static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0x488810150C919B35, vehicle); } // 0xB3ED1BFB4BE636DC 0xDA58D7AE
	static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0xA54551115DE6D858, vehicle, WheelType); } // 0x487EB21CC7295BA1 0x64BDAAAD
	static Any GET_NUM_MOD_COLORS(Any p0, BOOL p1) { return invoke<Any>(0x576BBBDA0F8E8486, p0, p1); } // 0xA551BE18C11A476D 0x73722CD9
	static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int p3) { invoke<Void>(0xF096DFF0883E5600, vehicle, paintType, color, p3); } // 0x43FEB945EE7F85B8 0xCBE9A54D
	static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0xE5C24398C2FCDF48, vehicle, paintType, color); } // 0x816562BADFDEC83E 0xC32613C2
	static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* p3) { invoke<Void>(0xD61D02E08E5ABADB, vehicle, paintType, color, p3); } // 0xE8D65CA700C9A693 0xE625510A
	static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0x8D1BC87C8AC01C5E, vehicle, paintType, color); } // 0x81592BE4E3878728 0x9B76BB8E
	static Any _0xB45085B721EFD38C(Any p0, BOOL p1) { return invoke<Any>(0xCA80E63BBD9709C5, p0, p1); } // 0xB45085B721EFD38C 0x9A0840FD
	static Any _0x4967A516ED23A5A1(Any p0) { return invoke<Any>(0x57384D5D858892D1, p0); } // 0x4967A516ED23A5A1 0x9BDC0B49
	static BOOL _0x9A83F5F9963775EF(Any p0) { return invoke<BOOL>(0x3C085FB6217C3923, p0); } // 0x9A83F5F9963775EF 0x112D637A
	static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0xF55EA971ECC0BCE5, vehicle, modType, modIndex, customTires); } // 0x6AF0636DDEDCB6DD 0xB52E5ED5
	static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0xADEACD5FDE0D1FDE, vehicle, modType); } // 0x772960298DA26FDB 0xDC520069
	static BOOL GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<BOOL>(0xA5E33613E078F35F, vehicle, modType); } // 0xB3924ECD70E095DC 0xC1B92003
	static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0x952B48FDCC7BFAAC, vehicle, modType); } // 0xE38E9162A2500646 0x8A814FF9
	static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0xA9C332BE77BC05F4, vehicle, modType); } // 0x92D619E420858204 0x9CC80A43
	static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0x6D0141CBE6B3B145, vehicle, modType, toggle); } // 0x2A1F4F37F95BAD08 0xD095F811
	static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0x11C052A5C8A50EE1, vehicle, modType); } // 0x84B233A8C8FC8AE7 0xF0E1689F
	static char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<char*>(0x1600BD20ACC91AF6, vehicle, modType, modValue); } // 0x8935624F8C5592CC 0x0BA39CA7
	static char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<char*>(0x0A63B45D1B9CA43D, vehicle, modType); } // 0x51F0FEB9F6AE98C0 0x5E113483
	static char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<char*>(0x578E9E9538DA2D71, vehicle, liveryIndex); } // 0xB4C7A93837C91A1F 0xED80B5BE
	static Any GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<Any>(0x27E0F1C4254FE068, vehicle, modType, modIndex); } // 0x90A38E9838E0A8C1 0x73AE5505
	static Any _0x4593CF82AA179706(Any p0, Any p1, Any p2) { return invoke<Any>(0x50B4C4A48944EC61, p0, p1, p2); } // 0x4593CF82AA179706 0x94850968
	static void PRELOAD_VEHICLE_MOD(Any p0, Any p1, Any p2) { invoke<Void>(0xB23B3202A5F55884, p0, p1, p2); } // 0x758F49C24925568A 0x6EA5F4A8
	static BOOL HAS_PRELOAD_MODS_FINISHED(Any p0) { return invoke<BOOL>(0xE7A068B639045A0C, p0); } // 0x06F43E5175EB6D96 0xA8A0D246
	static void RELEASE_PRELOAD_MODS(Any p0) { invoke<Void>(0x1B14F0E5AA20299D, p0); } // 0x445D79F995508307 0xD442521F
	static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x3A9188D7AA55A522, vehicle, r, g, b); } // 0xB5BA80F839791C0F 0x3EDEC0DB
	static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xC9061BC15843FFE0, vehicle, r, g, b); } // 0xB635392A4938B3C3 0x75280015
	static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0x5B5BB9221E7FD2F8, vehicle, tint); } // 0x57C51E6BAD752696 0x497C8787
	static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0xB62C5DACDE4A3153, vehicle); } // 0x0EE21293DAD47C95 0x13D53892
	static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0x81F32A932B1CAF8F); } // 0x9D1224004B3A6707 0x625C7B66
	static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x83051C361BB81ADB, vehicle, r, g, b); } // 0xF3CC740D36221548 0x03BC8F1B
	static int _0xEEBFC7A7EFDC35B4(Any p0) { return invoke<int>(0x2AAC8569B67D415A, p0); } // 0xEEBFC7A7EFDC35B4 0x749DEEA2
	static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0xF3934E639ED6740B, vehicle); } // 0xE495D1EF4C91FD20 0x7F8C20DD
	static BOOL _IS_HEADLIGHT_L_BROKEN(Vehicle vehicle) { return invoke<BOOL>(0xB7C26B2AC2098EDB, vehicle); } // 0x5EF77C9ADD3B11A3 0xA0777943
	static BOOL _IS_HEADLIGHT_R_BROKEN(Vehicle vehicle) { return invoke<BOOL>(0xD10809D9FCD1D350, vehicle); } // 0xA7ECB73355EB2F20 0xF178390B
	static void _SET_VEHICLE_ENGINE_POWER_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0x2B00950E69CDEABD, vehicle, value); } // 0x93A3996368C94158 0xE943B09C
	static void _0x1CF38D529D7441D9(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x15DFFAF9B7C5451E, vehicle, toggle); } // 0x1CF38D529D7441D9 0xDF594D8D
	static void _0x1F9FB66F3A3842D2(Any p0, BOOL p1) { invoke<Void>(0x3A92722CCCEB9C1B, p0, p1); } // 0x1F9FB66F3A3842D2 0x4D840FC4
	static Any _0x54B0F614960F4A5F(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x108E79FBF25B9B21, p0, p1, p2, p3, p4, p5, p6); } // 0x54B0F614960F4A5F 0x5AB26C2B
	static void _0xE30524E1871F481D(Any p0) { invoke<Void>(0x0EF95CB35F9F769E, p0); } // 0xE30524E1871F481D 0xEF05F807
	static BOOL _0x291E373D483E7EE7(Any p0) { return invoke<BOOL>(0x97C29E7ED977A936, p0); } // 0x291E373D483E7EE7 0xD656E7E5
	static void _SET_VEHICLE_ENGINE_TORQUE_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0xDD79DF5DFE21507E, vehicle, value); } // 0xB59E4BD37AE292DB 0x642DA5AA
	static void _0x0AD9E8F87FF7C16F(Any p0, BOOL p1) { invoke<Void>(0xCF3E72E81E9E1684, p0, p1); } // 0x0AD9E8F87FF7C16F 0x04F5546C
	static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x90CB3242FBA5D01A, vehicle, state); } // 0xF7EC25A3EBEEC726 0xDAA388E8
	static void _0xF488C566413B4232(Any p0, float p1) { invoke<Void>(0xE741518864BC7EE6, p0, p1); } // 0xF488C566413B4232 0xA25CCB8C
	static void _0xC1F981A6F74F0C23(Any p0, BOOL p1) { invoke<Void>(0x4CAAF39EB2E331D1, p0, p1); } // 0xC1F981A6F74F0C23 0x00966934
	static void _0x0F3B4D4E43177236(Any p0, BOOL p1) { invoke<Void>(0x58EF386DC0260BDE, p0, p1); } // 0x0F3B4D4E43177236 0x113DF5FD
	static float _0x6636C535F6CC2725(Any p0) { return invoke<float>(0x6991E5BA5F380328, p0); } // 0x6636C535F6CC2725 0x7C8D6464
	static void DISABLE_PLANE_AILERON(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xCD219B9FF4D1DCBA, p0, p1, p2); } // 0x23428FC53C60919C 0x7E84C45C
	static BOOL _IS_VEHICLE_ENGINE_ON(Vehicle vehicle) { return invoke<BOOL>(0xD75C122E26DC1917, vehicle); } // 0xAE31E7DF9B5B132E 0x7DC6D022
	static void _0x1D97D1E3A70A649F(Any p0, BOOL p1) { invoke<Void>(0x596CCF03FCA5D8DD, p0, p1); } // 0x1D97D1E3A70A649F 0xA03E42DF
	static void _SET_BIKE_LEAN_ANGLE(Vehicle vehicle, float x, float y) { invoke<Void>(0x99DD8F3F32570067, vehicle, x, y); } // 0x9CFA4896C3A53CBB 0x15D40761
	static void _0xAB04325045427AAE(Any p0, BOOL p1) { invoke<Void>(0x62F8A663774DA6EA, p0, p1); } // 0xAB04325045427AAE 0x1984F88D
	static void _0xCFD778E7904C255E(Any p0) { invoke<Void>(0xEBE848773EBE7FBC, p0); } // 0xCFD778E7904C255E 0x3FBE904F
	static void _0xACFB2463CC22BED2(Any p0) { invoke<Void>(0x1024616B94124EB5, p0); } // 0xACFB2463CC22BED2 0xD1B71A25
	static Any _0xB2D06FAEDE65B577() { return invoke<Any>(0xE2EB073861D474CB); } // 0xB2D06FAEDE65B577 0xFEB0C0C8
	static void _0xE01903C47C7AC89E() { invoke<Void>(0xC34A4119E5260A42); } // 0xE01903C47C7AC89E
	static void _0x02398B627547189C(Any p0, BOOL p1) { invoke<Void>(0x77FD65A82B3B1207, p0, p1); } // 0x02398B627547189C 0x08CD58F9
	static void _SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Any p0, Any p1) { invoke<Void>(0xED5FE61F81255747, p0, p1); } // 0xB893215D8D4C015B 0x8C4B63E2
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xC266352E62F1DC53, vehicle, multiplier); } // 0x93AE6A61BE015BF1 0x569E5AE3
	static void _0x428BACCDF5E26EAD(Any p0, BOOL p1) { invoke<Void>(0xB6EC3F3CD188EFCE, p0, p1); } // 0x428BACCDF5E26EAD 0x1604C2F5
	static Any _0x42A4BEB35D372407(Any p0) { return invoke<Any>(0x1A2A6FDB530A3509, p0); } // 0x42A4BEB35D372407 0x8CDB0C09
	static Any _0x2C8CBFE1EA5FC631(Any p0) { return invoke<Any>(0x204A253AC78E0F5E, p0); } // 0x2C8CBFE1EA5FC631 0xABC99E21
	static void _0x4D9D109F63FEE1D4(Any p0, BOOL p1) { invoke<Void>(0x18A79A38323CB4B1, p0, p1); } // 0x4D9D109F63FEE1D4 0x900C878C
	static void _0x279D50DE5652D935(Any p0, BOOL p1) { invoke<Void>(0x5BABC30632C7C88A, p0, p1); } // 0x279D50DE5652D935 0xB3200F72
	static void _0xE44A982368A4AF23(Any p0, Any p1) { invoke<Void>(0x67ED4B04B86BE9F9, p0, p1); } // 0xE44A982368A4AF23 0xBAE491C7
	static void _0xF25E02CB9C5818F8() { invoke<Void>(0x2BA4313377265D3B); } // 0xF25E02CB9C5818F8 0xF0E59BC1
	static void _0xBC3CCA5844452B06(float p0) { invoke<Void>(0xA42A4D659735BACC, p0); } // 0xBC3CCA5844452B06 0x929801C6
	static void SET_VEHICLE_SHOOT_AT_TARGET(Ped pilot, Entity ent, float targetx, float targety, float targetz) { invoke<Void>(0x750C2E72779D8633, pilot, ent, targetx, targety, targetz); } // 0x74CD9A9327A282EA 0x2343FFDF
	static BOOL _GET_VEHICLE_OWNER(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0x7183D2D51CA58D3E, vehicle, entity); } // 0x8F5EBAB1F260CFCE 0x4A557117
	static void _0x97CE68CB032583F0(Vehicle vehicle, BOOL p1) { invoke<Void>(0xBA103A042934EE72, vehicle, p1); } // 0x97CE68CB032583F0 0xE0FC6A32
	static void _0x182F266C2D9E2BEB(Any p0, float p1) { invoke<Void>(0x5F07EEF2F5301CC8, p0, p1); } // 0x182F266C2D9E2BEB 0x7D0DE7EA
	static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0x8AC7426FA5FFB588, vehicle); } // 0x9CCC9525BF2408E0 0x65CA9286
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0x6DF8E06AA9365A4A, vehicle); } // 0x64473AEFDCF47DCA 0x78122DC1
	static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0xC848DCB38697A02D, vehicle); } // 0xAA0A52D24FB98293 0x7E0D6056
	static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x416C72E5E4496FC1, vehicle, Toggle); } // 0x89F149B6131E57DA 0x07B2A6DC
	static void _0xE6C0C80B8C867537(BOOL p0) { invoke<Void>(0xE993FC69F3A801AA, p0); } // 0xE6C0C80B8C867537 0xD2B8ACBD
	static Any _0x36492C2F0D134C56(Any p0) { return invoke<Any>(0x07D245DA324C3787, p0); } // 0x36492C2F0D134C56 0xA4A75FCF
	static void _0x06582AFF74894C75(Any p0, BOOL p1) { invoke<Void>(0x69550CAEDC7BE060, p0, p1); } // 0x06582AFF74894C75 0x50F89338
	static void _0xDFFCEF48E511DB48(Any p0, BOOL p1) { invoke<Void>(0x7D626F776988DACB, p0, p1); } // 0xDFFCEF48E511DB48 0xEB7D7C27
	static BOOL _0x8D474C8FAEFF6CDE(Any p0) { return invoke<BOOL>(0x14B7D17CC0377CED, p0); } // 0x8D474C8FAEFF6CDE 0x5EB00A6A
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x050283B96EB098C0, vehicle, toggle); } // 0x983765856F2564F9 0x081DAC12
	static void _0xF0E4BA16D1DB546C(Vehicle vehicle, int p1, int p2) { invoke<Void>(0xCC5DF8F2BB3C5B5C, vehicle, p1, p2); } // 0xF0E4BA16D1DB546C 0x5BD8D82D
	static void _0xF87D9F2301F7D206(Any p0) { invoke<Void>(0x4154542E8C8B02AD, p0); } // 0xF87D9F2301F7D206 0x450AD03A
	static BOOL _0x4198AB0022B15F87(Any p0) { return invoke<BOOL>(0xCCB7105CE933D5AB, p0); } // 0x4198AB0022B15F87 0xBD085DCA
	static BOOL _0x755D6D5267CBBD7E(Any p0) { return invoke<BOOL>(0xEDCFA59F91668210, p0); } // 0x755D6D5267CBBD7E 0xABBDD5C6
	static void _0x0CDDA42F9E360CA6(Any p0, BOOL p1) { invoke<Void>(0x3AE5F095D1799A59, p0, p1); } // 0x0CDDA42F9E360CA6 0x9B581DE7
	static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0x7DB73C3712A1EDD0, vehicle); } // 0x4AF9BD80EEBEB453 0x20B61DDE
	static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0x4BA36C8825F6A05D, vehicle, isStolen); } // 0x67B2C79AA7FF5738 0x70912E42
	static void _0xAD2D28A1AFDFF131(Any p0, float p1) { invoke<Void>(0x1A485FD2CFD640F3, p0, p1); } // 0xAD2D28A1AFDFF131 0xED159AE6
	static BOOL _0x5991A01434CE9677(Any p0) { return invoke<BOOL>(0xA7AB4565394A3E30, p0); } // 0x5991A01434CE9677 0xAF8CB3DF
	static void _0xB264C4D2F2B0A78B(Any p0) { invoke<Void>(0xF812F8D04D2BB3E3, p0); } // 0xB264C4D2F2B0A78B 0x45F72495
	static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x26105E9B7449B226, vehicle, cargobob); } // 0x0E21D3DF1051399D 0x83D3D331
	static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0xA57F5B85C5F5A311, vehicle); } // 0xADF7BE450512C12F 0x50E0EABE
	static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { return invoke<BOOL>(0x5F158B3DE04B8D5E, vehicle, cargobob); } // 0xD40148F22E81A1D9 0x5DEEC76C
	static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0x1B780FCD77C7597A, cargobob); } // 0x873B82D42AC2B9E5 0x301A1D24
	static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0xB73F7D3B8D839732, vehicle, cargobob, p2, x, y, z); } // 0x4127F1D84E347769 0x607DC9D5
	static void _0x571FEB383F629926(Any p0, BOOL p1) { invoke<Void>(0xC15B74B533DBF609, p0, p1); } // 0x571FEB383F629926
	static Vector3 _0xCBDB9B923CACC92D(Any p0) { return invoke<Vector3>(0x0797F5B15D1C86A4, p0); } // 0xCBDB9B923CACC92D
	static BOOL _IS_CARGOBOB_HOOK_ACTIVE(Vehicle cargobob) { return invoke<BOOL>(0x544C24571472D2E1, cargobob); } // 0x1821D91AD4B56108 0xAF769B81
	static void _ENABLE_CARGOBOB_HOOK(Vehicle cargobob, int state) { invoke<Void>(0xDDBAD34B07A0E9AF, cargobob, state); } // 0x7BEB0C7A235F6F3B 0x4D3C9A99
	static void _RETRACT_CARGOBOB_HOOK(Vehicle cargobob) { invoke<Void>(0x1EF37B93ED0A6601, cargobob); } // 0x9768CF648F54C804 0xA8211EE9
	static void _0x877C1EAEAC531023(Any p0, float p1, float p2, BOOL p3) { invoke<Void>(0x8E53981001633C28, p0, p1, p2, p3); } // 0x877C1EAEAC531023 0x3A8AB081
	static void _0xCF1182F682F65307(Any p0, float p1) { invoke<Void>(0x2AAB10B40B3C0F72, p0, p1); } // 0xCF1182F682F65307
	static BOOL _IS_CARGOBOB_MAGNET_ACTIVE(Vehicle cargobob) { return invoke<BOOL>(0xEBD74C8A7C1BD292, cargobob); } // 0x6E08BF5B3722BAC9
	static void _CARGOBOB_MAGNET_GRAB_VEHICLE(Vehicle cargobob, BOOL Grab) { invoke<Void>(0xA2228BD86A41F422, cargobob, Grab); } // 0x9A665550F8DA349B
	static void _0xBCBFCD9D1DAC19E2(Any p0, float p1) { invoke<Void>(0xAB4B480604B01271, p0, p1); } // 0xBCBFCD9D1DAC19E2
	static void _0xA17BAD153B51547E(Any p0, float p1) { invoke<Void>(0xEB6970C174CB744A, p0, p1); } // 0xA17BAD153B51547E
	static void _0x66979ACF5102FD2F(Any p0, float p1) { invoke<Void>(0xE5F638B2E1EE8375, p0, p1); } // 0x66979ACF5102FD2F
	static void _0x6D8EAC07506291FB(Any p0, float p1) { invoke<Void>(0x1504EE2D48EDFEA6, p0, p1); } // 0x6D8EAC07506291FB
	static void _0xED8286F71A819BAA(Any p0, float p1) { invoke<Void>(0x2DCC3B9C0795FB94, p0, p1); } // 0xED8286F71A819BAA
	static void _0x685D5561680D088B(Any p0, float p1) { invoke<Void>(0xEF35614AE720454D, p0, p1); } // 0x685D5561680D088B
	static void _0xE301BD63E9E13CF0(Any p0, Any p1) { invoke<Void>(0x98482465B990631D, p0, p1); } // 0xE301BD63E9E13CF0
	static void _0x9BDDC73CC6A115D4(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x3C108A6246ADD46A, p0, p1, p2); } // 0x9BDDC73CC6A115D4
	static void _0x56EB5E94318D3FB6(Any p0, BOOL p1) { invoke<Void>(0xE010F145D05094E7, p0, p1); } // 0x56EB5E94318D3FB6
	static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0xB3CA072889EC63CC, vehicle); } // 0x25ECB9F8017D98E0 0xB2E1E1FB
	static void _0x2C4A1590ABF43E8B(Any p0, BOOL p1) { invoke<Void>(0xA850DFEDFC06EC6A, p0, p1); } // 0x2C4A1590ABF43E8B 0x2EC19A8B
	static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0x487EB209F7758667, disabled, weaponHash, vehicle, owner); } // 0xF4FC6A6F67D8D856 0xA688B7D1
	static void _0xE05DD0E9707003A3(Any p0, BOOL p1) { invoke<Void>(0xB1E0FE13ECEB5605, p0, p1); } // 0xE05DD0E9707003A3 0x123E5B90
	static void _0x21115BCD6E44656A(Any p0, BOOL p1) { invoke<Void>(0x324B89F100277245, p0, p1); } // 0x21115BCD6E44656A 0xEBC225C1
	static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0x31691A2062D86667, vehicle); } // 0x29439776AAA00A62 0xC025338E
	static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0xA44D84A320785CB1, modelHash); } // 0xDEDF1C8BD47C2200 0xEA469980
	static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0x6184BCA834C8A3B7, vehicle); } // 0xBCDF8BAF56C87B6A 0xDE86447D
	static void _0x300504B23BD3B711(Any p0, BOOL p1) { invoke<Void>(0xF369791429FC3437, p0, p1); } // 0x300504B23BD3B711 0x5130DB1E
	static void _0xE5810AC70602F2F5(Any p0, float p1) { invoke<Void>(0x4E3DCCAC04D9C268, p0, p1); } // 0xE5810AC70602F2F5 0xB6BE07E0
	static void _0x068F64F2470F9656(Any p0, BOOL p1) { invoke<Void>(0xDB80474BF7AF2C99, p0, p1); } // 0x068F64F2470F9656 0x4BB5605D
	static void _0xB8FBC8B1330CA9B4(Any p0, BOOL p1) { invoke<Void>(0x6775FC748C05B3E6, p0, p1); } // 0xB8FBC8B1330CA9B4 0x51E0064F
	static void _0x10655FAB9915623D(Any p0, Any p1) { invoke<Void>(0xF79AA95F8C2D047B, p0, p1); } // 0x10655FAB9915623D
	static void _0x79DF7E806202CE01(Any p0, Any p1) { invoke<Void>(0x422D02D1AE7B364E, p0, p1); } // 0x79DF7E806202CE01 0xAEF9611C
	static void _0x9007A2F21DC108D4(Any p0, float p1) { invoke<Void>(0x3C09E07A20A83043, p0, p1); } // 0x9007A2F21DC108D4 0x585E49B6
	static void _SET_HELICOPTER_ROLL_PITCH_YAW_MULT(Vehicle helicopter, float multiplier) { invoke<Void>(0x24697C3FAB1724CF, helicopter, multiplier); } // 0x6E0859B530A365CC 0x6E67FD35
	static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0xA9A3E718F793DD89, vehicle, friction); } // 0x1837AF7C627009BA 0x32AFD42E
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Any p0, BOOL p1) { invoke<Void>(0xB0AB3F558448F339, p0, p1); } // 0xA37B9A517B133349 0x670913A4
	static BOOL _0xF78F94D60248C737(Any p0, BOOL p1) { return invoke<BOOL>(0x8A6D8B5D26908339, p0, p1); } // 0xF78F94D60248C737
	static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float p1) { invoke<Void>(0xA1E39031CEEFA84E, vehicle, p1); } // 0xA46413066687A328 0x98A10A86
	static void _0x5E569EC46EC21CAE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x7D4DA25CE0AFF8CB, vehicle, toggle); } // 0x5E569EC46EC21CAE 0xBC649C49
	static void _0x6D6AF961B72728AE(Any p0) { invoke<Void>(0xEA04D656DB60C58A, p0); } // 0x6D6AF961B72728AE 0x8DD9AA0C
	static BOOL DOES_VEHICLE_EXIST_WITH_DECORATOR(char* decorator) { return invoke<BOOL>(0xF787E3563361D3A1, decorator); } // 0x956B409B984D9BF7 0x39E68EDD
	static void _0x41062318F23ED854(Any p0, BOOL p1) { invoke<Void>(0xAE63413D6CB01C08, p0, p1); } // 0x41062318F23ED854 0xAA8BD440
	static void _SET_EXCLUSIVE_DRIVER(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0xB27D8BC01AB47DED, vehicle, p1, p2); } // 0xB5C51B5502E85E83
	static void _0x500873A45724C863(Vehicle vehicle, Any p1) { invoke<Void>(0x2E3A618C24EC0961, vehicle, p1); } // 0x500873A45724C863
	static void _0xB055A34527CB8FD7(Vehicle vehicle, BOOL p1) { invoke<Void>(0xD4C0E22196C8F628, vehicle, p1); } // 0xB055A34527CB8FD7
	static void _0xF796359A959DF65D(BOOL p0) { invoke<Void>(0x0F68697A4441AB6D, p0); } // 0xF796359A959DF65D 0xB5CC548B
	static void _SET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x1C73C3411F2D84F5, vehicle, r, g, b); } // 0x8E0A582209A62695
	static void _GET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x9072FD06FAA1F250, vehicle, r, g, b); } // 0x7619EEE8C886757F
	static void _SET_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0x8AF3786CC992C15C, vehicle, index, toggle); } // 0x2AA720E4287BF269
	static BOOL _IS_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0x00808205EBA044E7, vehicle, index); } // 0x8C4B92553E4766A5
	static void _0x35E0654F4BAD7971(BOOL p0) { invoke<Void>(0x79EE2A934FD76C63, p0); } // 0x35E0654F4BAD7971
	static void _0xB088E9A47AE6EDD5(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF0A5F9029B87AE61, vehicle, p1); } // 0xB088E9A47AE6EDD5
	static void _0xDBA3C090E3D74690(Vehicle vehicle) { invoke<Void>(0x4AA8A74DA00D9AEF, vehicle); } // 0xDBA3C090E3D74690
	static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0x26525FD87B5E2405, vehicle); } // 0xF271147EB7B40F12 0x2B2FCC28
	static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0x63CAEF48CD3CA460, vehicle, value); } // 0xB77D05AC8C78AADB 0x920C2517
	static void _0xDF7E3EEB29642C38(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0xEF16318FB7D95C5B, vehicle, p1, p2); } // 0xDF7E3EEB29642C38
	static float _GET_VEHICLE_SUSPENSION_HEIGHT(Vehicle vehicle) { return invoke<float>(0xD8233CFF78D150DF, vehicle); } // 0x53952FD2BAA19F17 0xB73A1486
	static void _0x84FD40F56075E816(float p0) { invoke<Void>(0x3CA7D18061C1D0B6, p0); } // 0x84FD40F56075E816
	static void _0xA7DCDF4DED40A8F4(Vehicle vehicle, BOOL p1) { invoke<Void>(0xC9E2D1652EDB532C, vehicle, p1); } // 0xA7DCDF4DED40A8F4
	static float _GET_VEHICLE_BODY_HEALTH_2(Any p0) { return invoke<float>(0xA995BAE40F520285, p0); } // 0xB8EF61207C2393A9
	static BOOL _0xD4C4642CB7F50B5D(Any p0) { return invoke<BOOL>(0xFC113A46DD03D34A, p0); } // 0xD4C4642CB7F50B5D
	static void _0xC361AA040D6637A8(Any p0, BOOL p1) { invoke<Void>(0xDFC64B38BF018FAA, p0, p1); } // 0xC361AA040D6637A8
	static void _0x99C82F8A139F3E4E(Any p0, BOOL p1) { invoke<Void>(0xD2E1F45333B62926, p0, p1); } // 0x99C82F8A139F3E4E
	static void _0xE16142B94664DEFD(Any p0, BOOL p1) { invoke<Void>(0xC8C47F9570274CAF, p0, p1); } // 0xE16142B94664DEFD
}

namespace OBJECT
{
	static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL networkHandle, BOOL createHandle, BOOL dynamic) { return invoke<Object>(0xE1C25770C2FB7AE3, modelHash, x, y, z, networkHandle, createHandle, dynamic); } // 0x509D5878EB39E842 0x2F7AA05C
	static Object CREATE_OBJECT_NO_OFFSET(Hash objectHash, float posX, float posY, float posZ, BOOL networkHandle, BOOL createHandle, BOOL dynamic) { return invoke<Object>(0xF7753FE89C776300, objectHash, posX, posY, posZ, networkHandle, createHandle, dynamic); } // 0x9A294B2138ABB884 0x58040420
	static void DELETE_OBJECT(Object* object) { invoke<Void>(0xE9755D24C3BFFBED, object); } // 0x539E0AE3E6634B9F 0xD6EF9DA7
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0x8CB9EA0BF8B13CD0, object); } // 0x58A850EAEE20FAA3 0x8F95A20B
	static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collisionCheck) { return invoke<BOOL>(0x636B7733A87E96D6, object, toX, toY, toZ, speedX, speedY, speedZ, collisionCheck); } // 0x2FDFF4107B8C1147 0x63BFA7A0
	static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0xDC0BC07C94BE7F70, object, targettable); } // 0x8A7391690F5AFD81 0x3F88CD86
	static void _0x77F33F2CCF64B3AA(Any p0, BOOL p1) { invoke<Void>(0x798BDF3C5413B459, p0, p1); } // 0x77F33F2CCF64B3AA 0x483C5C88
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xD016B4FD90D52ED7, x, y, z, radius, modelHash, isMission, p6, p7); } // 0xE143FA2249364369 0x45619B33
	static BOOL HAS_OBJECT_BEEN_BROKEN(Object object) { return invoke<BOOL>(0xD9890AC57C9BDC10, object); } // 0x8ABFB70C49CC43E2 0xFE21F891
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<BOOL>(0x2D4EE08FC4EAA858, p0, p1, p2, p3, p4, p5); } // 0x761B0E69AC4D007E 0x6FC0353D
	static BOOL _0x46494A2475701343(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<BOOL>(0xDBDF6650942F627D, p0, p1, p2, p3, p4, p5); } // 0x46494A2475701343 0x7DB578DD
	static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float x, float y, float z, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0x8461D93FE2207D3A, x, y, z, heading, xOffset, yOffset, zOffset); } // 0x163E252DE035A133 0x87A42A12
	static Any _0x163F8B586BC95F2A(Any coords, float radius, Hash modelHash, float x, float y, float z, Vector3* p6, int p7) { return invoke<Any>(0x8483BC41736A375E, coords, radius, modelHash, x, y, z, p6, p7); } // 0x163F8B586BC95F2A 0x65213FC3
	static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0x555D253AB8DC8914, type, x, y, z, locked, heading, p6); } // 0xF82D8F1926A02C3D 0x38C951A4
	static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0xEEA764E871B66A51, type, x, y, z, locked, heading); } // 0xEDC1A5B84AEF33FF 0x4B44A83D
	static void _DOOR_CONTROL(Hash doorHash, float x, float y, float z, BOOL locked, float p5, float p6, float p7) { invoke<Void>(0x67D4988A4132E7EC, doorHash, x, y, z, locked, p5, p6, p7); } // 0x9B12F9A24FABEDB0 0x4E0A260B
	static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x2B4DFB0E79980B43, doorHash, modelHash, x, y, z, p5, p6, p7); } // 0x6F8838D03D1DC226 0x9D2D778D
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) { invoke<Void>(0x15A94A0D45E6AB3B, doorHash); } // 0x464D8E1427156FE4 0x00253286
	static void _0x6BAB9442830C7F53(Hash doorHash, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x6A7EBBBF8B647A25, doorHash, p1, p2, p3); } // 0x6BAB9442830C7F53 0xDF83DB47
	static Any _0x160AA1B32F6139B8(Hash doorHash) { return invoke<Any>(0x6B9EAB3E2813BB95, doorHash); } // 0x160AA1B32F6139B8 0xD42A41C2
	static Any _0x4BC2854478F3A749(Any p0) { return invoke<Any>(0xBE7BDE26CC6869C7, p0); } // 0x4BC2854478F3A749 0xD649B7E1
	static void _0x03C27E13B42A0E82(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0xE2B961A942F7B569, doorHash, p1, p2, p3); } // 0x03C27E13B42A0E82 0x4F44AF21
	static void _0x9BA001CB45CBF627(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0x3BEF48E2CBFC387D, doorHash, p1, p2, p3); } // 0x9BA001CB45CBF627 0x47531446
	static void _0xB6E6FBA95C7324AC(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0xED71B6E985126065, doorHash, p1, p2, p3); } // 0xB6E6FBA95C7324AC 0x34883DE3
	static float _0x65499865FCA6E5EC(Hash doorHash) { return invoke<float>(0xC25905C5890870AD, doorHash); } // 0x65499865FCA6E5EC 0xB74C3BD7
	static void _0xC485E07E4F0B7958(Hash doorHash, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xFDD2E78CB9FF58B1, doorHash, p1, p2, p3); } // 0xC485E07E4F0B7958 0xB4A9A558
	static void _0xD9B71952F78A2640(Hash doorHash, BOOL p1) { invoke<Void>(0xEAF0742A41CFAFF5, doorHash, p1); } // 0xD9B71952F78A2640 0xECE58AE0
	static void _0xA85A21582451E951(Hash doorHash, BOOL p1) { invoke<Void>(0xF16E1F9763C136EF, doorHash, p1); } // 0xA85A21582451E951 0xF736227C
	static BOOL _DOES_DOOR_EXIST(Hash doorHash) { return invoke<BOOL>(0x7B0208FFAEF67EF9, doorHash); } // 0xC153C43EA202C8C1 0x5AFCD8A1
	static BOOL IS_DOOR_CLOSED(Hash door) { return invoke<BOOL>(0x3EF445814B8BE304, door); } // 0xC531EE8A1145A149 0x48659CD7
	static void _0xC7F29CA00F46350E(BOOL p0) { invoke<Void>(0xA7D0106FC60B1B8C, p0); } // 0xC7F29CA00F46350E 0x9BF33E41
	static void _0x701FDA1E82076BA4() { invoke<Void>(0x7C9497273289A6AA); } // 0x701FDA1E82076BA4 0xF592AD10
	static BOOL _0xDF97CDD4FC08FD34(Any p0) { return invoke<BOOL>(0x613F1B992D993EDD, p0); } // 0xDF97CDD4FC08FD34 0x17FF9393
	static BOOL _0x589F80B325CC82C5(float p0, float p1, float p2, Any p3, Any* p4) { return invoke<BOOL>(0xA8ADF74E95459895, p0, p1, p2, p3, p4); } // 0x589F80B325CC82C5 0xE9AE494F
	static BOOL IS_GARAGE_EMPTY(Any garage, BOOL p1, int p2) { return invoke<BOOL>(0xA83061BB3623796F, garage, p1, p2); } // 0x90E47239EA1980B8 0xA8B37DEA
	static BOOL _0x024A60DEB0EA69F0(Any p0, Any p1, float p2, Any p3) { return invoke<BOOL>(0x5DA0C93CAE2064BF, p0, p1, p2, p3); } // 0x024A60DEB0EA69F0 0xC33ED360
	static BOOL _0x1761DC5D8471CBAA(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x11E895949F0C0ACC, p0, p1, p2); } // 0x1761DC5D8471CBAA 0x41924877
	static BOOL _0x85B6C850546FDDE2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x962CD7164B631493, p0, p1, p2, p3, p4); } // 0x85B6C850546FDDE2 0x4BD59750
	static BOOL _0x673ED815D6E323B7(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x4D1522D13E4C1C85, p0, p1, p2, p3, p4); } // 0x673ED815D6E323B7 0x7B44D659
	static BOOL _0x372EF6699146A1E4(Any p0, Any p1, float p2, Any p3) { return invoke<BOOL>(0x63AAB31417A39048, p0, p1, p2, p3); } // 0x372EF6699146A1E4 0x142C8F76
	static BOOL _0xF0EED5A6BC7B237A(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x0FA2DF4CE189797E, p0, p1, p2); } // 0xF0EED5A6BC7B237A 0x95A9AB2B
	static void _0x190428512B240692(Any p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x88EB1752966F3E5B, p0, p1, p2, p3, p4); } // 0x190428512B240692 0xA565E27E
	static void _0xF2E1A7133DD356A6(Any p0, BOOL p1) { invoke<Void>(0xD2C1BA2D2765FF50, p0, p1); } // 0xF2E1A7133DD356A6 0x43BB7E48
	static void _0x66A49D021870FE88() { invoke<Void>(0x6C213B0FBDA1332A); } // 0x66A49D021870FE88 0x6158959E
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xE99F157D6ECE25DA, x, y, z, radius, hash, p5); } // 0xBFA48E2FF417213F 0x23FF2BA4
	static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0xDFC5B758BDC9546F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2A70BAE8883E4C81 0x73BCFFDC
	static void _0x4D89D607CB3DD1D2(Any p0, BOOL p1) { invoke<Void>(0xC7F19ABEF7A08AD2, p0, p1); } // 0x4D89D607CB3DD1D2 0x19B17769
	static void SET_OBJECT_PHYSICS_PARAMS(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<Void>(0xFADE0D11624C9959, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xF6DF6E90DE7DF90F 0xE8D11C58
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0x76D3D7502930A6F3, p0, p1); } // 0xB6FBFD079B8D0596 0xF0B330AD
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Any p0, BOOL p1) { invoke<Void>(0xF53BC09A146F0975, p0, p1); } // 0x406137F8EF90EAF5 0x3E263AE1
	static BOOL IS_ANY_OBJECT_NEAR_POINT(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0x82C3AA7E0F0CF1A1, p0, p1, p2, p3, p4); } // 0x397DC58FF00298D1 0xE9E46941
	static BOOL IS_OBJECT_NEAR_POINT(Hash p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x8A5FCFB22E21490C, p0, p1, p2, p3, p4); } // 0x8C90FE4B381BA60A 0x50A62C43
	static void _0x4A39DB43E47CF3AA(Any p0) { invoke<Void>(0x3DF8D26024161B4A, p0); } // 0x4A39DB43E47CF3AA 0xE3261B35
	static void _0xE7E4C198B0185900(Object p0, Any p1, BOOL p2) { invoke<Void>(0x5E2489FF7823A5B1, p0, p1, p2); } // 0xE7E4C198B0185900 0x1E82C2AE
	static void _0xF9C1681347C8BD15(Object object) { invoke<Void>(0x280B8BAF0AF8A10C, object); } // 0xF9C1681347C8BD15
	static void TRACK_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0x7A68038203474D14, p0); } // 0xB252BC036B525623 0x46D06B9A
	static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0x18E8AE05B615030F, object); } // 0x8B32ACE6326A7546 0xF4FD8AE4
	static void _0xC6033D32241F6FB5(Any p0, BOOL p1) { invoke<Void>(0x7BA88B3B2D8259CF, p0, p1); } // 0xC6033D32241F6FB5 0xF4A1A14A
	static void _0xEB6F1A9B5510A5D2(Any p0, BOOL p1) { invoke<Void>(0x3225833AAE14343F, p0, p1); } // 0xEB6F1A9B5510A5D2 0xAF016CC1
	static void _0xBCE595371A5FBAAF(Any p0, BOOL p1) { invoke<Void>(0xB44C14AB24A2A991, p0, p1); } // 0xBCE595371A5FBAAF 0x3A68AA46
	static Any _0xB48FCED898292E52(float x, float y, float z, float p3, char* p4) { return invoke<Any>(0x66A41CE547600192, x, y, z, p3, p4); } // 0xB48FCED898292E52 0xA286DE96
	static void _0x5C29F698D404C5E1(Any p0, Any p1) { invoke<Void>(0x21F64301ADA0932D, p0, p1); } // 0x5C29F698D404C5E1 0x21F51560
	static Any _0x899BA936634A322E(Any p0) { return invoke<Any>(0x6F9F3E27FD383A91, p0); } // 0x899BA936634A322E 0xF1B8817A
	static BOOL _0x52AF537A0C5B8AAD(Any p0) { return invoke<BOOL>(0xBA2D5D1079324E95, p0); } // 0x52AF537A0C5B8AAD 0xE08C834D
	static float _0x260EE4FDBDF4DB01(Any p0) { return invoke<float>(0xC8A764C45FFCF08B, p0); } // 0x260EE4FDBDF4DB01 0x020497DE
	static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0x2C909F6674445C8D, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); } // 0xFBA08C503DD5FA58 0x5E14DF68
	static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int p7, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0x2B370F74D5B53597, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, p7, amount, p9, p10, modelHash); } // 0x891804727E0A98B7 0xF015BFE2
	static Pickup CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Pickup>(0x975E3E92387D44C9, pickupHash, posX, posY, posZ, p4, value, modelHash, p7, p8); } // 0x673966A0C0FD7171 0x17B99CE7
	static Pickup CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Any p5) { return invoke<Pickup>(0x6EAE5EC14334B4B0, pickupHash, x, y, z, placeOnGround, p5); } // 0x2EAF1FDB2FB55698 0x8C886BE5
	static Pickup _CREATE_PICKUP_2(Hash pickupType, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Pickup>(0x7DC603B7051792AC, pickupType, x, y, z, placeOnGround, modelHash); } // 0x125494B98A21AAF7 0x56A02502
	static void ATTACH_PORTABLE_PICKUP_TO_PED(Ped ped, Any p1) { invoke<Void>(0x4E1BC01620B4FBEA, ped, p1); } // 0x8DC39368BDD57755 0x184F6AB3
	static void DETACH_PORTABLE_PICKUP_FROM_PED(Ped ped) { invoke<Void>(0x9907A24A0D12B335, ped); } // 0xCF463D1E9A0AECB1 0x1D094562
	static void _0x0BF3B3BD47D79C08(Any p0, Any p1) { invoke<Void>(0xADB3BE393B5FCFDE, p0, p1); } // 0x0BF3B3BD47D79C08 0x7EFBA039
	static void _0x78857FC65CADB909(BOOL p0) { invoke<Void>(0x671810EE85FFCDFC, p0); } // 0x78857FC65CADB909 0xA3CDF152
	static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, Any p3, Any p4) { return invoke<Vector3>(0x9AB61CF2F1CE8D84, x, y, z, p3, p4); } // 0x6E16BC2503FF1FF0 0x618B5F67
	static Vector3 GET_PICKUP_COORDS(Any p0) { return invoke<Vector3>(0xCA4126970421B696, p0); } // 0x225B8B35C88029B3 0xC2E1E2C5
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Any p0) { invoke<Void>(0x3DB362ECE85F5EFE, p0); } // 0x27F9D613092159CF 0x40062C53
	static BOOL HAS_PICKUP_BEEN_COLLECTED(Any p0) { return invoke<BOOL>(0xC37D05B586FADB2B, p0); } // 0x80EC48E6679313F9 0x0BE5CCED
	static void REMOVE_PICKUP(Any p0) { invoke<Void>(0xBA2C7B36DA3F59D3, p0); } // 0x3288D8ACAECD2AB2 0x64A7A0E0
	static void CREATE_MONEY_PICKUPS(float xCoord, float yCoord, float zCoord, int value, int p4, Any p5) { invoke<Void>(0x53349BF471C999BC, xCoord, yCoord, zCoord, value, p4, p5); } // 0x0589B5E791CE9B2B 0x36C9A5EA
	static BOOL DOES_PICKUP_EXIST(Any p0) { return invoke<BOOL>(0x04793529D4EC36D1, p0); } // 0xAFC1CA75AD4074D1 0x9C6DA0B3
	static BOOL DOES_PICKUP_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xA5ECBFDCF9066738, p0); } // 0xD9EFB6DBF7DAAEA3 0xE0B32108
	static Any GET_PICKUP_OBJECT(Any p0) { return invoke<Any>(0x5791AE32A55D687E, p0); } // 0x5099BC55630B25AE 0x6052E62E
	static BOOL _0x0378C08504160D0D(Any p0) { return invoke<BOOL>(0xDA1B641050D3C533, p0); } // 0x0378C08504160D0D
	static BOOL _IS_PICKUP_WITHIN_RADIUS(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0xEA3DC83D78A56017, pickupHash, x, y, z, radius); } // 0xF9C36251F6E48E33 0xF139681B
	static void SET_PICKUP_REGENERATION_TIME(Any p0, Any p1) { invoke<Void>(0xFA8D95911CBA733F, p0, p1); } // 0x78015C9B4B3ECC9D 0xAB11267D
	static void _0x616093EC6B139DD9(Any p0, Any p1, BOOL p2) { invoke<Void>(0xD746083CA177FD95, p0, p1, p2); } // 0x616093EC6B139DD9 0x7FADB4B9
	static void _0x88EAEC617CD26926(Any p0, BOOL p1) { invoke<Void>(0x5860ECE04F4BB3EB, p0, p1); } // 0x88EAEC617CD26926 0x3A8F1BF7
	static void SET_TEAM_PICKUP_OBJECT(Any p0, Any p1, BOOL p2) { invoke<Void>(0x2693702FF909B231, p0, p1, p2); } // 0x53E0DF1A2A3CF0CA 0x77687DC5
	static void _0x92AEFB5F6E294023(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF354CD7077923AF1, p0, p1, p2); } // 0x92AEFB5F6E294023 0xCBB5F9B6
	static void _0xA08FE5E49BDC39DD(Any p0, float p1, BOOL p2) { invoke<Void>(0x3B42ADF819A92820, p0, p1, p2); } // 0xA08FE5E49BDC39DD 0x276A7807
	static Any _0xDB41D07A45A6D4B7(Any p0) { return invoke<Any>(0x8EC8AD0C6FB0EA25, p0); } // 0xDB41D07A45A6D4B7 0x000E92DC
	static void _0x318516E02DE3ECE2(float p0) { invoke<Void>(0xCEA00D21CE8D2739, p0); } // 0x318516E02DE3ECE2 0x9879AC51
	static void _0x31F924B53EADDF65(BOOL p0) { invoke<Void>(0x1EA082520F536C5C, p0); } // 0x31F924B53EADDF65 0xDB18FA01
	static void _0xF92099527DB8E2A7(Any p0, Any p1) { invoke<Void>(0x91A6AEB333D2DFDF, p0, p1); } // 0xF92099527DB8E2A7 0xA7E936FD
	static void _0xA2C1F5E92AFE49ED() { invoke<Void>(0xCD7308190039F1C2); } // 0xA2C1F5E92AFE49ED 0xB241806C
	static void _0x762DB2D380B48D04(Any p0) { invoke<Void>(0xAB73ECA385EA3584, p0); } // 0x762DB2D380B48D04 0xD1BAAFB7
	static void _0x3430676B11CDF21D(float x, float y, float z, Any p3) { invoke<Void>(0xED8CC5F0189F3804, x, y, z, p3); } // 0x3430676B11CDF21D 0x63B02FAD
	static void _0xB2D0BDE54F0E8E5A(Any p0, BOOL p1) { invoke<Void>(0x1FBDF01E35285E38, p0, p1); } // 0xB2D0BDE54F0E8E5A 0x132B6D92
	static Hash _0x08F96CA6C551AD51(Any p0) { return invoke<Hash>(0x26DD471C986D9454, p0); } // 0x08F96CA6C551AD51 0xEDD01937
	static BOOL _0x11D1E53A726891FE(Any p0) { return invoke<BOOL>(0x8BC81D1871589C9A, p0); } // 0x11D1E53A726891FE
	static void _0x971DA0055324D033(Any p0, Any p1) { invoke<Void>(0x901667493310BD13, p0, p1); } // 0x971DA0055324D033
	static Any _0x5EAAD83F8CFB4575(Any p0) { return invoke<Any>(0x7B4F816DF70D7DAA, p0); } // 0x5EAAD83F8CFB4575 0x6AE36192
	static void SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1FC684165018FC59, p0, p1, p2, p3); } // 0xF538081986E49E9D 0x3DA41C1A
	static void _MARK_OBJECT_FOR_DELETION(Object object) { invoke<Void>(0xCF806DD681E98C75, object); } // 0xADBE4809F19F927A 0x2048A7DD
}

namespace AI
{
	static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0xA1C77F22802A787B, ped, ms); } // 0xE73A266DB0CA9042 0x17A64668
	static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0x332BEDF7CCD4832D, ped, time); } // 0x919BE13EED931959 0x6F80965D
	static void TASK_JUMP(Ped ped, BOOL p1) { invoke<Void>(0x8BD9B5C09B18335B, ped, p1); } // 0x0AE4086104E067B1 0x0356E3CE
	static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0x9A213173324A528B, ped, duration); } // 0x3EB1FE9E8E908E15 0x9CF1C19B
	static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, Any p3, Any p4) { invoke<Void>(0x6A3E007E5E0902FB, ped, duration, facingPed, p3, p4); } // 0xF2EAB31979A7F910 0x8DCC19C5
	static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0x51522AE202CF89A5, ped, duration); } // 0xA98FCAFD7893C834 0x3AA39BE9
	static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int doorIndex, float speed) { invoke<Void>(0x4C12B74BEF0F4527, ped, vehicle, timeOut, doorIndex, speed); } // 0x965791A9A488A062 0x8EE06BF4
	static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int p5, Any p6) { invoke<Void>(0xA4FE049E1F729261, ped, vehicle, timeout, seat, speed, p5, p6); } // 0xC20E50AA46D09CA8 0xB8689B4E
	static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0xAB74B3F15710FF7D, ped, vehicle, flags); } // 0xD3DBCE61A490BE02 0x7B1141C6
	static void _TASK_GET_OFF_BOAT(Ped ped, Any p1) { invoke<Void>(0x833FFC77BC7DAA8D, ped, p1); } // 0x9C00E77AF14B2DFF
	static void TASK_SKY_DIVE(Ped ped) { invoke<Void>(0x37FF46426C22F613, ped); } // 0x601736CFE536B0A0 0xD3874AFA
	static void TASK_PARACHUTE(Ped ped, BOOL p1) { invoke<Void>(0xB921EEC2AC890A87, ped, p1); } // 0xD2F1C53C97EE81AB 0xEC3060A2
	static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xE8EDF2DA46E827E2, ped, x, y, z); } // 0xB33E291AFA6BD03A 0xE0104D6C
	static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0x19B0A7F5236F030D, ped, x, y, z); } // 0xC313379AF0FCEDA7 0x6ED3AD81
	static void SET_PARACHUTE_TASK_THRUST(Any p0, float p1) { invoke<Void>(0x9168A023EA28B053, p0, p1); } // 0x0729BAC1B8C64317 0xD07C8AAA
	static void TASK_RAPPEL_FROM_HELI(Ped ped, int p1) { invoke<Void>(0x06AACA3C41132B52, ped, p1); } // 0x09693B0312F91649 0x2C7ADB93
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) { invoke<Void>(0xA41BA6C0692C37D3, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); } // 0xE2A2AA2F659D77A7 0xE4AC0387
	static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0x88DD81EF9B04C3EC, ped, vehicle, x, y, z, speed, driveMode, stopRange); } // 0x158BB33F920D360C 0x1490182A
	static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0x1F1428EF73399830, ped, vehicle, speed, drivingStyle); } // 0x480142959D337D00 0x36EC0EB0
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int p6, float stoppingRange, BOOL p8) { invoke<Void>(0xE04E88EE06430FB6, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, p6, stoppingRange, p8); } // 0x304AE42E357B8C7E 0x2DF5A6AC
	static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0xF58CA5EA1A5B2762, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); } // 0xD76B57B44F1E6F8B 0x80A9E7A7
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xF2DF478C3AC41660, entity1, entity2, p2, p3, p4, p5, p6); } // 0x61E360B7E040D12E 0xD26CAC68
	static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0x89DDE5106D814A78, ped, heading, timeout); } // 0x93B93A37987F1F3D 0x0A0E9B42
	static void TASK_FLUSH_ROUTE() { invoke<Void>(0x263D3A8E29C722D3); } // 0x841142A1376E9006 0x34219154
	static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0xD9157D5760199FBC, x, y, z); } // 0x1E7889778264843A 0x43271F69
	static void TASK_FOLLOW_POINT_ROUTE(Any p0, float p1, Any p2) { invoke<Void>(0x9BC846A3B063BBD4, p0, p1, p2); } // 0x595583281858626E 0xB837C816
	static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6) { invoke<Void>(0x48FD097BDAEE42DD, entity, target, duration, distance, speed, p5, p6); } // 0x6A071245EB0D1882 0x374827C2
	static void TASK_SMART_FLEE_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5, BOOL p6, BOOL p7) { invoke<Void>(0x8D95319102961B7A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x94587F17E9C365D5 0xB2E686FC
	static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float distance, Any fleeTime, BOOL p4, BOOL p5) { invoke<Void>(0x69E46DC398F0B2BD, ped, fleeTarget, distance, fleeTime, p4, p5); } // 0x22B0D0E37CCB840D 0xE52EB560
	static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0xF7F0FF86594048E8, ped, fleeTarget); } // 0x72C896464915D1B1 0x8A632BD8
	static void TASK_SHOCKING_EVENT_REACT(Ped ped, Any event) { invoke<Void>(0xF71A65573752A858, ped, event); } // 0x452419CBD838065B 0x9BD00ACF
	static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLenght, float timeBetweenWalks) { invoke<Void>(0x43AEEEC52704330C, ped, x, y, z, radius, minimalLenght, timeBetweenWalks); } // 0xE054346CA3A0F315 0xC6981FB9
	static void TASK_WANDER_STANDARD(Ped ped, float p1, int p2) { invoke<Void>(0x971ED137B3AF56D8, ped, p1, p2); } // 0xBB9CE077274F6A1B 0xAF59151A
	static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0x80A80036D1802B86, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); } // 0x0F3E34E968EA374E 0x5C85FF90
	static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash killType, float p3, BOOL p4) { invoke<Void>(0x0EFA29CBFE6125B0, killer, target, killType, p3, p4); } // 0xAA5DC05579D60BD9 0x0D64C2FA
	static void TASK_PLANT_BOMB(Ped pedToGiveTask, float x, float y, float z, float degreeAngle) { invoke<Void>(0x186CC89D0AF42BB7, pedToGiveTask, x, y, z, degreeAngle); } // 0x965FEC691D55E9BF 0x33457535
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float zeroFloat, int zeroInt, float zeroFloat2) { invoke<Void>(0x1429584A1E80336C, ped, x, y, z, speed, timeout, zeroFloat, zeroInt, zeroFloat2); } // 0x15D3A79D4E44B913 0xFE4A10D9
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Any p0, float p1, float p2, float p3, float p4, Any p5, float p6, Any p7, float p8, float p9, float p10, float p11) { invoke<Void>(0x8D225476A4F7796E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x17F58B88D085DBAC 0x6BF6E296
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0x7193BE6D226729DE, ped, Toggle); } // 0x8E06A6FE76C9EFF4 0xB7B7D442
	static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0x30BD02A8F756FCDC, ped, Toggle); } // 0x77A5B103C87F476E 0x53A879EE
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0x38B0986618818089, ped, Toggle); } // 0xE361C5C71C431A4F 0x394B7AC9
	static void _0x88E32DB8C1A4AA4B(Ped p0, float p1) { invoke<Void>(0x0BE44C7DF43DBA07, p0, p1); } // 0x88E32DB8C1A4AA4B 0x55E06443
	static void SET_PED_PATHS_WIDTH_PLANT(Any p0, BOOL p1) { invoke<Void>(0x0D389A7F5055C004, p0, p1); } // 0xF35425A4204367EC 0x9C606EE3
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xDFF0CA281C8C98A9, ped, toggle); } // 0x38FE1EC73743793C 0x0EA39A29
	static void SET_PED_PATH_AVOID_FIRE(Any p0, BOOL p1) { invoke<Void>(0xCC99FC1ABFE3883F, p0, p1); } // 0x4455517B28441E60 0xDCC5B934
	static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0xCA8E3C6A566D41AF, height); } // 0x6C6B148586F934F7 0x2AFB14B8
	static Any GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped p0, Any* p1, Any* p2) { return invoke<Any>(0xCEB715EF600D96D0, p0, p1, p2); } // 0xC6F5C0BCDC74D62D 0xD9281778
	static Any GET_NAVMESH_ROUTE_RESULT(Any p0) { return invoke<Any>(0x522651587BA63DA6, p0); } // 0x632E831F382A0FA8 0x96491602
	static BOOL _0x3E38E28A1D80DDF6(Any p0) { return invoke<BOOL>(0x36BBD48EB61C89D9, p0); } // 0x3E38E28A1D80DDF6
	static void TASK_GO_TO_COORD_ANY_MEANS(Any p0, float p1, float p2, float p3, float p4, Any p5, BOOL p6, Any p7, float p8) { invoke<Void>(0x978DF5D08D61900A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x5BC448CB78FA3E88 0xF91DF93B
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped p0, float x, float y, float z, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xAB4B9B2BE318B4D4, p0, x, y, z, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x1DD45F9ECFDB1BC9 0x094B75EF
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, Vector3* position, Any p2, Any p3, Any p4, int drivingStyle, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0xA10B8E8ED4075619, ped, position, p2, p3, p4, drivingStyle, p6, p7, p8, p9, p10, p11, p12); } // 0xB8ECD61F531A7B02 0x86DC03F9
	static void TASK_PLAY_ANIM(Ped ped, char* animDictionary, char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0xC9567EA69F3CC4C2, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, lockX, lockY, lockZ); } // 0xEA47FE3719165B94 0x5AB552C6
	static void TASK_PLAY_ANIM_ADVANCED(Ped ped, char* animDict, char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, Any flag, float animTime, Any p14, Any p15) { invoke<Void>(0x80D24BCACA9887CB, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flag, animTime, p14, p15); } // 0x83CDB10EA29B370B 0x3DDEB0E6
	static void STOP_ANIM_TASK(Ped ped, char* animDictionary, char* animationName, float p3) { invoke<Void>(0xACD556E2EA6F25CF, ped, animDictionary, animationName, p3); } // 0x97FF36A1D40EA00A 0x2B520A57
	static void TASK_SCRIPTED_ANIMATION(Ped ped, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0x8A709ABBB4E57985, ped, p1, p2, p3, p4, p5); } // 0x126EF75F1E17ABE5 0xFC2DCF47
	static void PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0x4E463A4B9687AD4D, p0, p1, p2, p3, p4, p5); } // 0x77A1EEC547E7FCF1 0x02F72AE5
	static void STOP_ANIM_PLAYBACK(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x13C084822086A1CD, ped, p1, p2); } // 0xEE08C992D238C5D1 0xE5F16398
	static void SET_ANIM_WEIGHT(Any p0, float p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xA8B1D864AFE96483, p0, p1, p2, p3, p4); } // 0x207F1A47C0342F48 0x17229D98
	static void SET_ANIM_RATE(Any p0, float p1, Any p2, BOOL p3) { invoke<Void>(0x559C3312426B4FB9, p0, p1, p2, p3); } // 0x032D49C5E359C847 0x6DB46584
	static void SET_ANIM_LOOPED(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x5A319AD06A793144, p0, p1, p2, p3); } // 0x70033C3CC29A1FF4 0x095D61A4
	static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped p0, Any* p1, Any* p2, Any* p3, float p4, float p5, BOOL p6, BOOL p7) { invoke<Void>(0xFEA64BE9BC611C51, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8FBB6758B3B3E9EC 0x1582162C
	static void _TASK_STOP_PHONE_GESTURE_ANIMATION(Any p0) { invoke<Void>(0xB41B879B36B5AA9F, p0); } // 0x3FA00D4F4641BFAE
	static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0x1071B2C8A20D9623, ped); } // 0xB8EBB1E9D3588C10 0x500B6805
	static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Any p0) { return invoke<float>(0x98B6BC0BC3FB9D21, p0); } // 0x47619ABE8B268C60 0x7B72AFD1
	static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Any p0) { return invoke<float>(0x36C38A15DD856FE3, p0); } // 0x1EE0F68A7C25DEC6 0xEF8C3959
	static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, char* animation_set, char* animation_name) { invoke<Void>(0x7BFE404D2F0067B4, vehicle, animation_set, animation_name); } // 0x69F5C3BD0F3EBD89 0x2B28F598
	static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, float duration, Any p5, Any p6) { invoke<Void>(0x6486E0794864EE9B, entity, x, y, z, duration, p5, p6); } // 0x6FA46612594F7973 0x7B784DD8
	static void TASK_LOOK_AT_ENTITY(Ped pedHandle, Entity lookAt, int duration, int unknown1, int unknown2) { invoke<Void>(0xD5DC2873808A9CB5, pedHandle, lookAt, duration, unknown1, unknown2); } // 0x69F4BE8C8CC4796C 0x991D6619
	static void TASK_CLEAR_LOOK_AT(Ped playerPed) { invoke<Void>(0x5CEE5F34DA93AE97, playerPed); } // 0x0F804F1DB19B9689 0x60EB4054
	static void OPEN_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0x95C55738CAE00A20, taskSequence); } // 0xE8854A4326B9E12B 0xABA6923E
	static void CLOSE_SEQUENCE_TASK(Object taskSequence) { invoke<Void>(0x70B222EEA46C37FA, taskSequence); } // 0x39E72BC99E6360CB 0x1A7CEBD0
	static void TASK_PERFORM_SEQUENCE(Ped ped, Object taskSequence) { invoke<Void>(0x3998B29E786DFD96, ped, taskSequence); } // 0x5ABA3986D90D8A3B 0x4D9FBD11
	static void CLEAR_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0x7DFD14B8B873D6B5, taskSequence); } // 0x3841422E9C488D8C 0x47ED03CE
	static void SET_SEQUENCE_TO_REPEAT(Object taskSequence, BOOL repeat) { invoke<Void>(0x916FF2E986EA2C6C, taskSequence, repeat); } // 0x58C70CF3A41E4AE7 0xCDDF1508
	static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0x962AB147BBEEBE33, ped); } // 0x00A9010CFE1E3533 0xA3419909
	static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskNumber) { return invoke<BOOL>(0x77B21D2C209C7D47, ped, taskNumber); } // 0xB0760331C7AA4155 0x86FDDF55
	static int GET_SCRIPT_TASK_STATUS(Ped targetPed, Hash taskHash) { return invoke<int>(0x21178DF77817BF39, targetPed, taskHash); } // 0x77F1BEB8863288D5 0xB2477B23
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle veh) { return invoke<int>(0x057852A274C11A58, veh); } // 0x534AEBA6E5ED4CAB 0xAFA914EF
	static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) { invoke<Void>(0x8474D2383AC8AF53, ped, p1, p2); } // 0x504D54DF3F6F2247 0xDBDD79FA
	static void TASK_AIM_GUN_SCRIPTED(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x51419E61386CFCDF, p0, p1, p2, p3); } // 0x7A192BE16D373D00 0x9D296BCD
	static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6, BOOL p7) { invoke<Void>(0x0C59DFC2451FB552, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8605AF0DE8B3A5AC 0xFD517CE3
	static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped p0, Ped p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x5A3E8D061A2ACE69, p0, p1, p2, p3, p4, p5); } // 0x9724FB59A3E72AD0 0x67E73525
	static Any GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(Any p0) { return invoke<Any>(0x37EBE1FC63C32B54, p0); } // 0x3A8CADC7D37AACC5 0x249EB4EB
	static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL p3) { invoke<Void>(0x55F009A57228A86D, ped, entity, duration, p3); } // 0x9B53BB6E8943AF53 0xBE32B3B6
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0xCD49DDA254A161AF, ped, entity, duration); } // 0x5AD23D40115353AC 0x3C37C767
	static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) { invoke<Void>(0x6D306D449D4A659A, ped, x, y, z, time, p5, p6); } // 0x6671F3EEC681BDA1 0xFBF44AD3
	static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0xB403FC0B6F7505CB, ped, x, y, z, duration, firingPattern); } // 0x46A6CC01E0826106 0x601C22E3
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle) { invoke<Void>(0x1718D605180F4B5D, ped, vehicle); } // 0x7AA80209BDA643EB 0xBEAF8F67
	static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0xD3032BAC1ECE011F, ped); } // 0xE1EF3C1216AFF2CD 0xDE3316AB
	static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xEB6B0D85F7D79F78, ped); } // 0x176CECF6F920D707 0xA635F451
	static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle p0) { invoke<Void>(0x83449394F9735323, p0); } // 0x7F93691AB4B92272 0xC1971F30
	static void TASK_GOTO_ENTITY_OFFSET(Any p0, Any p1, Any p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x1176C8D0C75B2ECC, p0, p1, p2, p3, p4, p5, p6); } // 0xE39B4FF4FDEBDE27 0x1A17A85E
	static void TASK_GOTO_ENTITY_OFFSET_XY(Any p0, Any p1, Any p2, float p3, float p4, float p5, float p6, Any p7) { invoke<Void>(0xA47B7A7E50DC1638, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x338E7EF52B6095A9 0xBC1E3D0A
	static void TASK_TURN_PED_TO_FACE_COORD(Any p0, float p1, float p2, float p3, Any p4) { invoke<Void>(0x94B0F86672C59B38, p0, p1, p2, p3, p4); } // 0x1DDA930A0AC38571 0x30463D73
	static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0xC7A9E9D688D679E8, driver, vehicle, action, time); } // 0xC429DCEEB339E129 0x0679DFB8
	static void TASK_VEHICLE_MISSION(Any p0, Any p1, Any p2, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) { invoke<Void>(0x32A30468AF493A61, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x659427E0EF36BCDE 0x20609E56
	static void TASK_VEHICLE_MISSION_PED_TARGET(Any p0, Any p1, Any p2, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) { invoke<Void>(0x96F7890AEA06DDAE, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x9454528DF15D657A 0xC81C4677
	static void TASK_VEHICLE_MISSION_COORS_TARGET(Any p0, Any p1, float p2, float p3, float p4, Any p5, float p6, Any p7, float p8, float p9, BOOL p10) { invoke<Void>(0x5DB5C19B077049E6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xF0AF20AA7731F8C3 0x6719C109
	static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int p3, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { invoke<Void>(0xA7243274D7FB252F, ped, vehicle, targetVehicle, p3, speed, drivingStyle, minDistance, p7, noRoadsDistance); } // 0x0FA6E4B75F302400 0x9FDCB250
	static void _TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, int drivingStyle, float speed, float minDistance) { invoke<Void>(0x9FF186332C873ECF, driver, vehicle, targetEntity, drivingStyle, speed, minDistance); } // 0xFC545A9F0626E3B6
	static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0x94C2371AD2F5FB5D, driver, targetEnt); } // 0x3C08A8E30363B353 0x55634798
	static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int p4, float radius, int altitude, int p7) { invoke<Void>(0xE33FDF52911EF1C7, pilot, vehicle, entityToFollow, targetSpeed, p4, radius, altitude, p7); } // 0x1E09C32048FEFD1C 0x0CB415EE
	static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0x2F84E69255638842, ped, flag, set); } // 0xCC665AAC360D31E7 0x2A83083F
	static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Any p0, float p1) { invoke<Void>(0x1F6954CF9C2EC229, p0, p1); } // 0x639B642FACBE4EDD 0x04FD3EE7
	static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0x87E9513293D2F33D, pilot, entityToFollow, x, y, z); } // 0xAC83B1DB38D0ADA0 0xAC290A21
	static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xF64B4849E6DD0714, pilot, entityToFollow, x, y, z); } // 0x2D2386F273FF7A25 0x12FA1C28
	static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0xF188A51F622C3C9E, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); } // 0xBF19721FA34D32C0 0x5F7E23EA
	static void TASK_HELI_MISSION(Ped pilot, Vehicle vehicle, Any p2, Ped pedToFollow, float posX, float posY, float posZ, int flag, float speed, float p9, float p10, int p11, int p12, float p13, int p14) { invoke<Void>(0xDEB658873B50218A, pilot, vehicle, p2, pedToFollow, posX, posY, posZ, flag, speed, p9, p10, p11, p12, p13, p14); } // 0xDAD029E187A2BEB4 0x0C143E97
	static void TASK_PLANE_MISSION(Ped pilot, Vehicle plane, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int p7, float physicsSpeed, float p9, float p10, float maxAltitude, float minAltitude) { invoke<Void>(0x228DA122420DEAF4, pilot, plane, targetVehicle, targetPed, destinationX, destinationY, destinationZ, p7, physicsSpeed, p9, p10, maxAltitude, minAltitude); } // 0x23703CD154E83B88 0x1D007E65
	static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, Any p9, float p10, Any p11) { invoke<Void>(0x4F6E280D4656D52B, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, p9, p10, p11); } // 0x15C86013127CE63F 0x5865B031
	static void TASK_DRIVE_BY(Ped p0, Ped targetPed, Any p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8, Hash firingPattern) { invoke<Void>(0x04EAFCCD1700249A, p0, targetPed, p2, p3, p4, p5, p6, p7, p8, firingPattern); } // 0x2F8AF0E82773A171 0x2B84D1C4
	static void SET_DRIVEBY_TASK_TARGET(Any p0, Any p1, Any p2, float p3, float p4, float p5) { invoke<Void>(0x6DA07F03325F4923, p0, p1, p2, p3, p4, p5); } // 0xE5B302114D8162EE 0xDA6A6FC1
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0xC6DA54C88F36FE49, ped); } // 0xC35B5CDB2824CF69 0x9B76F7E6
	static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0xCE5B5C7B05F480D2, ped); } // 0x8785E6E40C7A8818 0xB23F46E6
	static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0xA3B3D31F83A1E651, ped); } // 0xDCFE42068FE0135A 0x500D9244
	static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Entity targetEntity, Any p2, float x, float y, float z) { invoke<Void>(0x50B6651F02BE18E5, shootingPed, targetEntity, p2, x, y, z); } // 0xCCD892192C6D2BB9 0x98713C68
	static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Any p0) { return invoke<BOOL>(0x9A08119789FDC4CF, p0); } // 0xA320EF046186FA3B 0x291E938C
	static void TASK_USE_MOBILE_PHONE(Ped ped, int p1) { invoke<Void>(0xC29813E4A3FD0772, ped, p1); } // 0xBD2A8EC3AF4DE7DB 0x225A38C8
	static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0x5F6B2DFB57BBCE9A, ped, duration); } // 0x5EE02954A14C69DB 0xC99C19F5
	static void TASK_CHAT_TO_PED(Ped ped, Ped target, Any p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0x621D91D496283A81, ped, target, p2, p3, p4, p5, p6, p7); } // 0x8C338E0263E4FD19 0xA2BE1821
	static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0xBAAF14D0D225FEC1, ped, vehicle, seat); } // 0x9A7D091411C5F684 0x65D4A35D
	static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0x04D19748FD6FE17E, entity, target, duration, firingPattern); } // 0x08DA95E8298AE772 0xAC0631C9
	static void TASK_CLIMB(Ped ped, BOOL p1) { invoke<Void>(0xA33AC35619EF8ED4, ped, p1); } // 0x89D9FCC2435112F1 0x90847790
	static void TASK_CLIMB_LADDER(Ped p0, BOOL p1) { invoke<Void>(0x7915205F41C705C4, p0, p1); } // 0xB6C987F9285A3814 0x35BB4EE0
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0xB0993C95A7DBF879, ped); } // 0xAAA34F8A7CB32098 0xBC045625
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x90E57550F36C21C8, p0, p1, p2, p3); } // 0x89221B16730234F0 0xFA60601B
	static void SET_NEXT_DESIRED_MOVE_STATE(Any p0) { invoke<Void>(0x8546D84C68485B77, p0); } // 0xF1B9F16E89E2C93A 0x4E937D57
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float p1) { invoke<Void>(0x8F5F40EEF9C6592E, ped, p1); } // 0x1E982AC8716912C5 0xC65FC712
	static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0x4B1467B1A6A35A02, ped); } // 0x8517D4A6CA8513ED 0x5FEFAB72
	static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0xA4E2F09DBFC52540, ped, target, distanceToStopAt, StartAimingDist); } // 0xA9DA48FAB8A76C12 0xF1C493CF
	static void TASK_SET_DECISION_MAKER(Ped p0, Hash p1) { invoke<Void>(0x6CCF739E55D8B4B3, p0, p1); } // 0xEB8517DDA73720DA 0x830AD50C
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xC8B8B0168A72A6FA, p0, p1, p2, p3, p4); } // 0x933C06518B52A9A4 0x9F3C5D6A
	static void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { invoke<Void>(0x7B45CB4C2F8BCE9A, p0); } // 0x95A6C46A31D1917D 0x7A05BF0D
	static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float p5) { invoke<Void>(0xABE7996366097355, ped, x, y, z, heading, p5); } // 0xD04FE6765D990A06 0x225380EF
	static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float p5, float p6) { invoke<Void>(0xCF8A53CA7064DDD4, ped, x, y, z, heading, p5, p6); } // 0x5A4A6A6D3DC64F52 0x38A995C1
	static ScrHandle ADD_COVER_POINT(float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, BOOL p7) { return invoke<ScrHandle>(0xD5F3AC278EA12B1F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD5C12A75C7B9497F 0xA0AF0B98
	static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0xFDBEB468C41F4B61, coverpoint); } // 0xAE287C923D891715 0x0776888B
	static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0x852AF90FC29DDB9B, x, y, z); } // 0xA98B8E3C088E5A31 0x29F97A71
	static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0x3F8002582939DA4A, coverpoint); } // 0x594A1028FC2A3E85 0xC6B6CCC1
	static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) { invoke<Void>(0x0756233E85C362F2, ped, targetPed, p2, p3); } // 0xF166E48407BAC484 0xCB0D8932
	static void TASK_COMBAT_PED_TIMED(Any p0, Ped ped, int p2, Any p3) { invoke<Void>(0x85E6895786B051E4, p0, ped, p2, p3); } // 0x944F30DCB7096BDE 0xF5CA2A45
	static void TASK_SEEK_COVER_FROM_POS(Any p0, float p1, float p2, float p3, Any p4, BOOL p5) { invoke<Void>(0xC4890A54A381FF6C, p0, p1, p2, p3, p4, p5); } // 0x75AC2B60386D89F2 0x83F18EE9
	static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL p3) { invoke<Void>(0x8FFB323431242036, ped, target, duration, p3); } // 0x84D32B3BEC531324 0xC1EC907E
	static void TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6) { invoke<Void>(0x467D44CBEAC56D8B, p0, p1, p2, p3, p4, p5, p6); } // 0xD43D95C7A869447F 0x3D026B29
	static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8) { invoke<Void>(0x166CCB9A9EC7A6DE, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x39246A6958EF072C 0xFFFE754E
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Any p0, float p1, float p2, float p3, Any p4, BOOL p5, float p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { invoke<Void>(0x4F18EEC1C235A9DB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4172393E6BE1FECE 0xC9F00E68
	static void TASK_EXIT_COVER(Any p0, Any p1, float p2, float p3, float p4) { invoke<Void>(0xD5A11C404F321839, p0, p1, p2, p3, p4); } // 0x79B258E397854D29 0xC829FAC9
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x64DB199E11417540, ped, meleeTarget, p2, p3, p4, p5); } // 0x1C6CD14A876FFE39 0x79E1D27D
	static void TASK_TOGGLE_DUCK(BOOL p0, BOOL p1) { invoke<Void>(0xE9C0015AF8750B21, p0, p1); } // 0xAC96609B9995EDF8 0x61CFBCBF
	static void TASK_GUARD_CURRENT_POSITION(Ped p0, float p1, float p2, BOOL p3) { invoke<Void>(0x7EB5F0F211F1FE57, p0, p1, p2, p3); } // 0x4A58A47A72E3FCB4 0x2FB099E9
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x3E5E220372E4348D, p0, p1, p2, p3, p4, p5, p6); } // 0xD2A207EEBDF9889B 0x7AF0133D
	static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped p0, float p1, float p2, float p3, float p4, float p5, Any p6, float p7, float p8, float p9, float p10) { invoke<Void>(0xBAC1D4D9B771AA79, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xC946FE14BE0EB5E2 0x86B76CB7
	static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, char* scenarioName) { invoke<Void>(0xA06C49C48DAF72AC, ped, x, y, z, heading, scenarioName); } // 0xAE032F8BBA959E90 0xD130F636
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0x3CAD3CEB48DD58A0, driver, cruiseSpeed); } // 0x5C9B84BD7D31D908 0x3CEC07B1
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, float p1) { invoke<Void>(0xF9DFF75F27EE3DA7, p0, p1); } // 0x404A5AA9B9F0B746 0x7FDF6131
	static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0x8816312B08D00099, ped, drivingStyle); } // 0xDACE1BE37D88AF67 0x59C5FAD7
	static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { invoke<Void>(0x8FA5F8F53A0C9C53, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); } // 0x45C597097DD7CB81 0x3536946F
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0x2D6597FA30CA6CD3); } // 0xDB6708C0B46F56D8 0xCF9221A7
	static void TASK_START_SCENARIO_IN_PLACE(Ped ped, char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0x6CD01BB6BE485005, ped, scenarioName, unkDelay, playEnterAnim); } // 0x142A02425FF02BD9 0xE50D6DDE
	static void TASK_START_SCENARIO_AT_POSITION(Ped ped, char* scenarioName, float x, float y, float z, float heading, Any p6, BOOL p7, BOOL p8) { invoke<Void>(0xD8BD9CAA9C281939, ped, scenarioName, x, y, z, heading, p6, p7, p8); } // 0xFA4EFC79F69D4F07 0xAA2C4AC2
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x1BB99831E45818CD, p0, p1, p2, p3, p4, p5); } // 0x277F471BA9DB000B 0x9C50FBF0
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0xFEA9FF41E71B8AFB, ped, x, y, z, radius, p5); } // 0x58E2E0F23F6B76C3 0x1BE9D65C
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0xF181031658D28397, p0, p1, p2, p3, p4, p5); } // 0x9FDA1B3D7E7028B3 0xE32FFB22
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0xF672680CA76A18F4, p0, p1, p2, p3, p4, p5); } // 0x97A28E63F0BA5631 0xBAB4C0AE
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL b) { return invoke<BOOL>(0x89CBB0C8651A8593, x, y, z, radius, b); } // 0x5A59271FFADD33C1 0xFA7F5047
	static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float p0, float p1, float p2, Any* p3, float p4, BOOL p5) { return invoke<BOOL>(0xCFD466D99ADAEF46, p0, p1, p2, p3, p4, p5); } // 0x0A9D0C2A3BBC86C1 0x0FB138A5
	static BOOL IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0x924C04C785313F03, p0, p1, p2, p3, p4); } // 0x788756D73AC2E07C 0x697FC008
	static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0xC43213379852DE68, ped); } // 0x295E3CCEC879CCD7 0x9BE9C691
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, char* animDict, char* animName) { invoke<Void>(0x16EE46BF45B1DB88, ped, animDict, animName); } // 0x748040460F8DF5DC 0x1984A5D1
	static BOOL DOES_SCENARIO_GROUP_EXIST(char* scenarioGroup) { return invoke<BOOL>(0xB956F8A6500F4E47, scenarioGroup); } // 0xF9034C136C9E00D3 0x5F072EB9
	static BOOL IS_SCENARIO_GROUP_ENABLED(char* scenarioGroup) { return invoke<BOOL>(0x2CEFD9CB29EB3DB0, scenarioGroup); } // 0x367A09DED4E05B99 0x90991122
	static void SET_SCENARIO_GROUP_ENABLED(char* scenarioGroup, BOOL p1) { invoke<Void>(0xF8A813E273B61FAC, scenarioGroup, p1); } // 0x02C8E5B49848664E 0x116997B1
	static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xD35046BFD060FB40); } // 0xDD902D0349AFAD3A 0xBF55025D
	static void SET_EXCLUSIVE_SCENARIO_GROUP(char* scenarioGroup) { invoke<Void>(0x758762010B0AA5A5, scenarioGroup); } // 0x535E97E1F7FC0C6A 0x59DB8F26
	static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0x8A292AFF09D705A1); } // 0x4202BBCB8684563D 0x17F9DFE8
	static BOOL IS_SCENARIO_TYPE_ENABLED(char* scenarioType) { return invoke<BOOL>(0xDE7D761EF8F43663, scenarioType); } // 0x3A815DB3EA088722 0xAE37E969
	static void SET_SCENARIO_TYPE_ENABLED(char* scenarioType, BOOL toggle) { invoke<Void>(0x29E97C2751856A2F, scenarioType, toggle); } // 0xEB47EC4E34FB7EE1 0xDB18E5DE
	static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0x24744C097519A590); } // 0x0D40EE2A7F2B2D6D 0xF58FDEB4
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0x975852F02B6457DC, ped); } // 0xAA135F9482C82CC3 0x05038F1A
	static BOOL _0x621C6E4729388E41(Any p0) { return invoke<BOOL>(0x62797BF2A327128D, p0); } // 0x621C6E4729388E41
	static void _0x8FD89A6240813FD0(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD2EFF022FA6AE765, p0, p1, p2); } // 0x8FD89A6240813FD0
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0xAE807E955DB1ACA2, ped, x, y, z, radius, p5); } // 0x4CF5F55DAC3280A0 0xDF099E18
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int p2) { invoke<Void>(0x336610737255D8A5, ped, radius, p2); } // 0x7BF835BB9E2698C8 0x2E7064E4
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Any p0, float p1, Any p2, Any p3) { invoke<Void>(0x60369CF94905C947, p0, p1, p2, p3); } // 0x2BBA30B854534A0C 0xF127AD6A
	static void TASK_THROW_PROJECTILE(Any p0, float x, float y, float z) { invoke<Void>(0xF36E94B209F4721A, p0, x, y, z); } // 0x7285951DBF6B5A51 0xF65C20A7
	static void TASK_SWAP_WEAPON(Ped ped, BOOL p1) { invoke<Void>(0x609ABCF81357F2C0, ped, p1); } // 0xA21C51255B205245 0xDAF4F8FC
	static void TASK_RELOAD_WEAPON(Ped ped, BOOL doReload) { invoke<Void>(0xA7F6DD5A93F5ECFF, ped, doReload); } // 0x62D2916F56B9CD2D 0xCA6E91FD
	static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0x5AE21A1C30DF235D, ped); } // 0x2A74E1D5F2F00EEC 0x320813E6
	static void TASK_WRITHE(Ped ped, Ped target, int time, BOOL p3) { invoke<Void>(0x1BAEC092E5C8B852, ped, target, time, p3); } // 0xCDDC2B77CE54AC6E 0x0FDC54FC
	static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0x6EE56158B3EDF9EC, ped); } // 0xDEB6D52126E7D640 0x09E61921
	static void OPEN_PATROL_ROUTE(char* patrolRoute) { invoke<Void>(0x262012B91EFA2438, patrolRoute); } // 0xA36BFB5EE89F3D82 0xF33F83CA
	static void CLOSE_PATROL_ROUTE() { invoke<Void>(0x61F962F7F1257F65); } // 0xB043ECA801B8CBC1 0x67305E59
	static void ADD_PATROL_ROUTE_NODE(int p0, char* p1, float x1, float y1, float z1, float x2, float y2, float z2, int p8) { invoke<Void>(0x713FEC978FC60C71, p0, p1, x1, y1, z1, x2, y2, z2, p8); } // 0x8EDF950167586B7C 0x21B48F10
	static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { invoke<Void>(0x29E8D57A20B0F34B, p0, p1); } // 0x23083260DEC3A551 0xD8761BB3
	static void CREATE_PATROL_ROUTE() { invoke<Void>(0x3B697F8823273F4C); } // 0xAF8A443CCC8018DC 0x0A6C7864
	static void DELETE_PATROL_ROUTE(char* patrolRoute) { invoke<Void>(0xE658BEEB32A9669B, patrolRoute); } // 0x7767DD9D65E91319 0x2A4E6706
	static void TASK_PATROL(Ped ped, char* p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xDE67575B5CD13FAE, ped, p1, p2, p3, p4); } // 0xBDA5DF49D080FE4E 0xB92E5AF6
	static void TASK_STAY_IN_COVER(Any p0) { invoke<Void>(0x3894F64DEF4D7C56, p0); } // 0xE5DA8615A6180789 0xA27A9413
	static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0x674BDAD0E0B303A1, ped, x, y, z); } // 0x5CF0D8F9BBA0DD75 0x50779A2C
	static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped ped2) { invoke<Void>(0x023542ABCFF26812, ped, ped2); } // 0x85F462BADC7DA47F 0x80461113
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float p2) { invoke<Void>(0x9049AC9F7E4DC888, ped, target, p2); } // 0x10AB107B887214D8 0x59677BA0
	static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0x5DEE320A62320855, ped, target); } // 0xE41885592B08B097 0x920AE6DB
	static void TASK_VEHICLE_SHOOT_AT_COORD(Vehicle vehicle, float x, float y, float z, float p4) { invoke<Void>(0x44A57F84E6AFA6C8, vehicle, x, y, z, p4); } // 0x5190796ED39C9B6D 0xA7AAA4D6
	static void TASK_VEHICLE_AIM_AT_COORD(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x06B84A11FB79E155, vehicle, x, y, z); } // 0x447C1E9EF844BC0F 0x010F47CE
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0x7FA0A64B0EE2FB25, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); } // 0x195AEEB13CEFE2EE 0x55CF3BCD
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, BOOL p8, float p9, float p10, BOOL p11, Any flags, BOOL p13, Hash firingPattern) { invoke<Void>(0x4E5B84497541B0A3, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags, p13, firingPattern); } // 0x11315AB3385B8AC0 0x1552DC91
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, float p1, float p2, float p3, Any p4, float p5, BOOL p6, float p7, float p8, BOOL p9, Any p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0xA823C6696619598C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xB2A16444EAD9AE47 0x9BD52ABD
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped ped, float gotoX, float gotoY, float gotoZ, float aimNearX, float aimNearY, float aimNearZ, float speed, BOOL shoot, float unknown1, float unknown2, BOOL unkTrue, int unknown3, BOOL heading, Hash firingPattern) { invoke<Void>(0xE8CB77B24A3655CD, ped, gotoX, gotoY, gotoZ, aimNearX, aimNearY, aimNearZ, speed, shoot, unknown1, unknown2, unkTrue, unknown3, heading, firingPattern); } // 0xA55547801EB331FC 0x3F91358E
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6, float p7, float p8, BOOL p9, BOOL p10, Any p11) { invoke<Void>(0x546A5926419F84F8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x04701832B739DCE5 0xD896CD82
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float p5, float p6, BOOL p7, BOOL p8, Hash firingPattern) { invoke<Void>(0xF2859083CAA9046F, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, p5, p6, p7, p8, firingPattern); } // 0x97465886D35210E9 0x68E36B7A
	static void SET_HIGH_FALL_TASK(Ped p0, Any p1, Any p2, Any p3) { invoke<Void>(0x28DE1AC2DE058263, p0, p1, p2, p3); } // 0x8C825BDC7741D37C 0xBBB26172
	static void REQUEST_WAYPOINT_RECORDING(char* name) { invoke<Void>(0x4D45DF6114075356, name); } // 0x9EEFB62EB27B5792 0xAFABFB5D
	static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(char* name) { return invoke<BOOL>(0x3E85D449D6D4832B, name); } // 0xCB4E8BE8A0063C5D 0x87125F5D
	static void REMOVE_WAYPOINT_RECORDING(char* name) { invoke<Void>(0x3134206142001736, name); } // 0xFF1B8B4AA1C25DC8 0x624530B0
	static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(Any* p0, Any* p1) { return invoke<BOOL>(0x2B67EA17B078BE39, p0, p1); } // 0x5343532C01A07234 0xF5F9B71E
	static Any WAYPOINT_RECORDING_GET_COORD(Any p0, Any p1, Any p2) { return invoke<Any>(0xE95389D9EE13D1A8, p0, p1, p2); } // 0x2FB897405C90B361 0x19266913
	static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(Any* p0, Any p1) { return invoke<float>(0x3EACFA7F7A59139D, p0, p1); } // 0x005622AEBC33ACA9 0xC765633A
	static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Any* p0, float p1, float p2, float p3, Any* p4) { return invoke<BOOL>(0xF887F103C2E2C60A, p0, p1, p2, p3, p4); } // 0xB629A298081F876F 0xC4CD35AF
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any* p1, Any p2, Any p3, Any p4) { invoke<Void>(0x06A0AFACC5EA5396, p0, p1, p2, p3, p4); } // 0x0759591819534F7B 0xADF9904D
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0) { return invoke<BOOL>(0xA0B9CB712D32CD23, p0); } // 0xE03B3F2D3DC59B64 0x85B7725F
	static Any GET_PED_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0x6A2C1B6C1CC0592B, p0); } // 0x2720AAA75001E094 0x3595B104
	static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0x52FD18E7FE5FD98A, p0); } // 0xE6A877C64CAF1BC5 0x084B35B0
	static Any SET_PED_WAYPOINT_ROUTE_OFFSET(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xBE79992F7DAF062F, p0, p1, p2, p3); } // 0xED98E10B0AFCE4B4 0xF867F747
	static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(Any* p0, Any p1) { return invoke<float>(0x3FAA6CE8832DBB02, p0, p1); } // 0xA5B769058763E497 0xE8422AC4
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xC15291AFE5FF0302, p0); } // 0x701375A7D43F01CB 0xA6BB5717
	static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x8AA3FE17DF6451E9, p0, p1, p2); } // 0x0F342546AA06FED5 0xFE39ECF8
	static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xBE70395117DC1700, p0, p1, p2, p3); } // 0x244F70C84C547D2D 0x50F392EF
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0xDED2F591CF95A8CC, p0, p1, p2); } // 0x7D7D2B47FA788E85 0x23E6BA96
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0xC178C3F4C6D65BF6, p0); } // 0x6599D834B12D0800 0x1BBB2CAC
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any* p0, BOOL p1, float p2, float p3) { invoke<Void>(0x222ECD86D6040353, p0, p1, p2, p3); } // 0x5A353B8E6B1095B5 0x4DFD5FEC
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, BOOL p2) { invoke<Void>(0xE396A84B3431366C, p0, p1, p2); } // 0x20E330937C399D29 0x75E60CF6
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0x7F8EB4C2E9410BE8, p0, p1, p2, p3, p4); } // 0x8968400D900ED8B3 0xF120A34E
	static void _0xE70BA7B90F8390DC(Any p0, Any p1, BOOL p2, Any p3) { invoke<Void>(0xB5C386FC7DF4C8A5, p0, p1, p2, p3); } // 0xE70BA7B90F8390DC
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4, Any p5) { invoke<Void>(0x4E92FB184A5F2A40, p0, p1, p2, p3, p4, p5); } // 0x057A25CFCC9DB671 0xCDDB44D5
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { invoke<Void>(0xB1898BAB97C7AE1F, p0); } // 0x47EFA040EBB8E2EA 0x6D7CF40C
	static void ASSISTED_MOVEMENT_REQUEST_ROUTE(char* route) { invoke<Void>(0x4BD80690941D84BE, route); } // 0x817268968605947A 0x48262EDA
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(char* route) { invoke<Void>(0x280C3437BC224654, route); } // 0x3548536485DD792B 0xB3CEC06F
	static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(char* route) { return invoke<BOOL>(0x135FEF3F493D80E7, route); } // 0x60F9A4393A21F741 0x79B067AF
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(char* route, int props) { invoke<Void>(0x90872AFB182982AC, route, props); } // 0xD5002D78B7162E1B 0x01CAAFCC
	static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0x82203BEEF67E4C5F, dist); } // 0x13945951E16EF912 0x8FB923EC
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5, Any p6, float p7, BOOL p8, float p9) { invoke<Void>(0x5F829400FE31DA00, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x3123FAA6DB1CF7ED 0x959818B6
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0xF418F3DE917B12F3, p0); } // 0xF5134943EA29868C 0x80DD15DB
	static Any GET_VEHICLE_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0xEB730B38E6E78AE9, p0); } // 0x9824CFF8FC66E159 0xD3CCF64E
	static Any GET_VEHICLE_WAYPOINT_TARGET_POINT(Any p0) { return invoke<Any>(0xD49AC59365D6F0C3, p0); } // 0x416B62AC8B9E5BBD 0x81049608
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) { invoke<Void>(0x9D1BAB43B63DD800, p0); } // 0x8A4E6AC373666BC5 0x7C00B415
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) { invoke<Void>(0x344F34709608EBD4, p0); } // 0xDC04FCAA7839D492 0xBEB14C82
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x3F768F9C85656DC1, p0); } // 0x5CEB25A7D2848963 0x923C3AA4
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1) { invoke<Void>(0x2A28F54269B1B665, p0, p1); } // 0x121F0593E0A431D7 0xBE1E7BB4
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x360E9D6EDC41942F, ped, toggle); } // 0x90D2156198831D69 0x1B54FB6B
	static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL p2) { invoke<Void>(0x88F0F59DBAB1FA66, ped, state, p2); } // 0x4F056E1AFFEF17AB 0xCAD2EF77
	static void _0x2D537BA194896636(Ped ped, char* task, float multiplier, BOOL p3, char* animDict, int flags) { invoke<Void>(0xE9C499C21A22CC4B, ped, task, multiplier, p3, animDict, flags); } // 0x2D537BA194896636 0x6F5D215F
	static void _0xD5B35BEA41919ACB(Ped ped, char* p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, float p9, BOOL p10, char* animDict, int flags) { invoke<Void>(0xE8179E99BC4EC787, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, animDict, flags); } // 0xD5B35BEA41919ACB 0x71A5C5DB
	static BOOL _0x921CE12C489C4C41(int _PlayerID) { return invoke<BOOL>(0x428666BD43130153, _PlayerID); } // 0x921CE12C489C4C41 0x902656EB
	static BOOL _0x30ED88D5E0C56A37(Any p0) { return invoke<BOOL>(0x8496E0BE6006DA4B, p0); } // 0x30ED88D5E0C56A37 0x92FDBAE6
	static Any _0xD01015C7316AE176(Any p0, Any p1) { return invoke<Any>(0x66A86B9D0D010B83, p0, p1); } // 0xD01015C7316AE176 0x885724DE
	static Any _0xAB13A5565480B6D9(Any p0, Any p1) { return invoke<Any>(0x284DFAC3C2914F37, p0, p1); } // 0xAB13A5565480B6D9
	static char* _0x717E4D1F2048376D(Ped p0) { return invoke<char*>(0x9D583C63C70AB020, p0); } // 0x717E4D1F2048376D 0x96C0277B
	static void _0xD5BB4025AE449A4E(Ped p0, char* p1, float p2) { invoke<Void>(0x9AB850B3BBFB0496, p0, p1, p2); } // 0xD5BB4025AE449A4E 0xA79BE783
	static void _0xB0A6CFD2C69C1088(Ped p0, Any* p1, BOOL p2) { invoke<Void>(0xE3F30C93C1A0DDFF, p0, p1, p2); } // 0xB0A6CFD2C69C1088 0xF3538041
	static BOOL _0xA7FFBA498E4AAF67(Any p0, char* p1) { return invoke<BOOL>(0xB378F1B83A59395F, p0, p1); } // 0xA7FFBA498E4AAF67 0x1EBB6F3D
	static BOOL _0xB4F47213DF45A64C(Any p0, Any* p1) { return invoke<BOOL>(0x74720316F5FD25B7, p0, p1); } // 0xB4F47213DF45A64C 0x72FA5EF2
	static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0xCF39716E583F46C9, ped); } // 0x349CE7B56DAFD95C 0xE9DAF877
	static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0xF868BA93F05E81B5, ped); } // 0xF133BBBE91E1691F 0xD21639A8
	static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0x35AFE578A6F2494D, ped); } // 0xD4D8636C0199A939 0xE76A2353
	static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0xC43034E58B805B90, ped); } // 0x24A2AD74FA9814E2 0xDD616893
	static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0x3CE167940408A89C, ped); } // 0xAC29253EEF8F0180 0x09E3418D
	static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0x9DFC7AF92A1CB7CF, ped); } // 0xDE4C184B2B9B071A 0x4B865C4A
	static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0xA5528F7B3922ED70, ped); } // 0xC5286FFC176F28A2 0xE9A5578F
	static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x8E30A8C5F10F6DD2, ped); } // 0x57E457CD2C0FC168 0x4F3E0633
	static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0x971B43763F2B9D0E, ped); } // 0xE45B7F222DE47E09 0xEFEED13C
	static void TASK_SYNCHRONIZED_SCENE(Ped ped, Any scene, char* animDictionary, char* animationName, float p4, float p5, Any p6, Any p7, float p8, Any p9) { invoke<Void>(0xCAD643E9EAD85BD2, ped, scene, animDictionary, animationName, p4, p5, p6, p7, p8, p9); } // 0xEEA929141F699854 0x4F217E7B
	static void TASK_SWEEP_AIM_ENTITY(Ped ped, char* anim, char* p2, char* p3, char* p4, int p5, Vehicle vehicle, float p7, float p8) { invoke<Void>(0x96C8554867783F72, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); } // 0x2047C02158D6405A 0x4D210467
	static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0x7D55DA32CCB19775, ped, entity); } // 0xE4973DBDBE6E44B3 0xF65F0F4F
	static void TASK_SWEEP_AIM_POSITION(Any p0, Any* p1, Any* p2, Any* p3, Any* p4, Any p5, float p6, float p7, float p8, float p9, float p10) { invoke<Void>(0x572733073B164C4E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x7AFE8FDC10BC07D2 0x1683FE66
	static void UPDATE_TASK_SWEEP_AIM_POSITION(Any p0, float p1, float p2, float p3) { invoke<Void>(0x40F05734B7BE5C34, p0, p1, p2, p3); } // 0xBB106883F5201FC4 0x6345EC80
	static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0x3A854305124242DE, ped, target); } // 0xF3B9A78A178572B1 0xBC0F153D
	static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0xCCDCDC6EAD7F5AF9, ped); } // 0x3DC52677769B4AE0 0x6942DB7A
	static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x5A2B04607A5BA87C, ped); } // 0x90A09F3A45FED688 0x5FF6C2ED
	static void UNCUFF_PED(Ped ped) { invoke<Void>(0xDB49CE0AD8CE3338, ped); } // 0x67406F2C8F87FC4F 0xA23A1D61
	static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0xAAFF7CEBFBC3817B, ped); } // 0x74E559B3BC910685 0x511CE741
}

namespace GAMEPLAY
{
	static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0xF6014ED18313707D); } // 0x8B3CA62B1EF19B62 0x4E9CA30A
	static int _GET_FREE_STACK_SLOTS_COUNT(int stackSize) { return invoke<int>(0x9F2104D8202CFA99, stackSize); } // 0xFEAD16FC8F9DFC0F 0x11A178B8
	static void SET_RANDOM_SEED(int time) { invoke<Void>(0xEB6337D14A471B33, time); } // 0x444D98F98C11F3EC 0xDB3FEB5C
	static void SET_TIME_SCALE(float time) { invoke<Void>(0xC6B7F8BBCF4D8221, time); } // 0x1D408577D440E81E 0xA7F84694
	static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0x7944710FF545C60B, toggle); } // 0xC4301E5121A0ED73 0x57592D52
	static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0x914490E7407A12A1); } // 0xA33CDCCDA663159E 0x95115F97
	static void SET_RANDOM_EVENT_FLAG(BOOL p0) { invoke<Void>(0x457423E7871A26C1, p0); } // 0x971927086CFD2158 0xA77F31E8
	static Any GET_RANDOM_EVENT_FLAG() { return invoke<Any>(0x0D9CC5C2000C6EA4); } // 0xD2D57F1D764117B1 0x794CC92C
	static Any _0x24DA7D7667FD7B09() { return invoke<Any>(0xC39DDCA15D3C0EFB); } // 0x24DA7D7667FD7B09
	static void _0x4DCDF92BF64236CD(Any p0, Any p1) { invoke<Void>(0x138A3008B47B3386, p0, p1); } // 0x4DCDF92BF64236CD
	static void _0x31125FD509D9043F(Any p0) { invoke<Void>(0x002DDFEA72F5FD26, p0); } // 0x31125FD509D9043F
	static void _0xEBD3205A207939ED(Any p0) { invoke<Void>(0x64FE6DDE13AEFE91, p0); } // 0xEBD3205A207939ED
	static void _0x97E7E2C04245115B(Any p0) { invoke<Void>(0xF06062F5390BB51F, p0); } // 0x97E7E2C04245115B
	static void _0xEB078CA2B5E82ADD(Any p0, Any p1) { invoke<Void>(0x1659FCA7314D3497, p0, p1); } // 0xEB078CA2B5E82ADD
	static void _0x703CC7F60CBB2B57(Any p0) { invoke<Void>(0x3F11E9818B9271D5, p0); } // 0x703CC7F60CBB2B57
	static void _0x8951EB9C6906D3C8() { invoke<Void>(0x9B13287624C9F230); } // 0x8951EB9C6906D3C8
	static void _0xBA4B8D83BDC75551(Any p0) { invoke<Void>(0x217127F3C9BA3F19, p0); } // 0xBA4B8D83BDC75551
	static Any _0xE8B9C0EC9E183F35() { return invoke<Any>(0x3EDA2F6750B051F5); } // 0xE8B9C0EC9E183F35
	static void _0x65D2EBB47E1CEC21(BOOL p0) { invoke<Void>(0x0CE863A8DDA6EA24, p0); } // 0x65D2EBB47E1CEC21
	static void _0x6F2135B6129620C1(BOOL p0) { invoke<Void>(0x767EEB287EFBBF01, p0); } // 0x6F2135B6129620C1 0x8B2DE971
	static void _0x8D74E26F54B4E5C3(char* p0) { invoke<Void>(0x45A3480235A30A33, p0); } // 0x8D74E26F54B4E5C3 0xE77199F7
	static BOOL _0xB335F761606DB47C(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0xF9B1B8C0E49635B2, p0, p1, p2, p3); } // 0xB335F761606DB47C
	static Hash _GET_CURRENT_WEATHER_TYPE() { return invoke<Hash>(0xC3E77A1BD2DE2C3E); } // 0x564B884A05EC45A3 0xA8171E9E
	static Hash _GET_NEXT_WEATHER_TYPE() { return invoke<Hash>(0x5EF6632D8D000D18); } // 0x711327CD09C8F162 0x353E8056
	static BOOL IS_PREV_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0x7401753B189AF3E1, weatherType); } // 0x44F28F86433B10A9 0x250ADA61
	static BOOL IS_NEXT_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0x456BA2E07738D37D, weatherType); } // 0x2FAA3A30BEC0F25D 0x99CB167F
	static void SET_WEATHER_TYPE_PERSIST(char* weatherType) { invoke<Void>(0x3E7936FC5C6C3D45, weatherType); } // 0x704983DF373B198F 0xC6C04C75
	static void SET_WEATHER_TYPE_NOW_PERSIST(char* weatherType) { invoke<Void>(0x4E68434FD275549E, weatherType); } // 0xED712CA327900C8A 0xC869FE97
	static void SET_WEATHER_TYPE_NOW(char* weatherType) { invoke<Void>(0x5DCDE8B28F83392F, weatherType); } // 0x29B487C359E19889 0x361E9EAC
	static void _SET_WEATHER_TYPE_OVER_TIME(char* weatherType, float time) { invoke<Void>(0x11BBF139870B5E0F, weatherType, time); } // 0xFB5045B7C42B75BF 0x386F0D25
	static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0x167B60C14C67FD28); } // 0x8B05F884CF7E8020 0xE7AA1BC9
	static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0x4E9F6A9CAA59E6BD); } // 0xCCC39339BEF76CF5 0x6AB757D8
	static void _GET_WEATHER_TYPE_TRANSITION(Any* p0, Any* p1, float* progress_or_time) { invoke<Void>(0x8D006B1F8976EA62, p0, p1, progress_or_time); } // 0xF3BBE884A14BB413 0x9A5C1D56
	static void _SET_WEATHER_TYPE_TRANSITION(Hash sourceWeather, Hash targetWeather, float transitionTime) { invoke<Void>(0x3EBA5BC72704DF66, sourceWeather, targetWeather, transitionTime); } // 0x578C752848ECFA0C 0x5CA74040
	static void SET_OVERRIDE_WEATHER(char* weatherType) { invoke<Void>(0x3937609D9943BA2A, weatherType); } // 0xA43D5C6FE51ADBEF 0xD9082BB5
	static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0xCAEB7B8DC74D3932); } // 0x338D2E3477711050 0x7740EA4E
	static void _0xB8F87EAD7533B176(float p0) { invoke<Void>(0x27E91D0A73CCF613, p0); } // 0xB8F87EAD7533B176 0x625181DC
	static void _0xC3EAD29AB273ECE8(float p0) { invoke<Void>(0x3B581F7CAF4D65C8, p0); } // 0xC3EAD29AB273ECE8 0xBEBBFDC8
	static void _0xA7A1127490312C36(float p0) { invoke<Void>(0x4B43FA42F62F3297, p0); } // 0xA7A1127490312C36 0x6926AB03
	static void _0x31727907B2C43C55(float p0) { invoke<Void>(0xCDD0FF00F196A0A6, p0); } // 0x31727907B2C43C55 0xD447439D
	static void _0x405591EC8FD9096D(float p0) { invoke<Void>(0x8806F2CE806B5589, p0); } // 0x405591EC8FD9096D 0x584E9C59
	static void _0xF751B16FB32ABC1D(float p0) { invoke<Void>(0x4E13F0FC5038B926, p0); } // 0xF751B16FB32ABC1D 0x5656D578
	static void _0xB3E6360DDE733E82(float p0) { invoke<Void>(0x79D837F991895C02, p0); } // 0xB3E6360DDE733E82 0x0DE40C28
	static void _0x7C9C0B1EEB1F9072(float p0) { invoke<Void>(0x929AF5BB2CCC415A, p0); } // 0x7C9C0B1EEB1F9072 0x98C9138B
	static void _0x6216B116083A7CB4(float p0) { invoke<Void>(0x367F545FF899C1BB, p0); } // 0x6216B116083A7CB4 0xFB1A9CDE
	static void _0x9F5E6BB6B34540DA(float p0) { invoke<Void>(0xDCBD041075C1977F, p0); } // 0x9F5E6BB6B34540DA 0x1C0CAE89
	static void _0xB9854DFDE0D833D6(float p0) { invoke<Void>(0x5F9631F92389729E, p0); } // 0xB9854DFDE0D833D6 0x4671AC2E
	static void _0xC54A08C85AE4D410(float p0) { invoke<Void>(0x470F39E3CF3DD877, p0); } // 0xC54A08C85AE4D410 0xDA02F415
	static void _0xA8434F1DFF41D6E7(float p0) { invoke<Void>(0xE088FA04CD7F2751, p0); } // 0xA8434F1DFF41D6E7 0x5F3DDEC0
	static void _0xC3C221ADDDE31A11(float p0) { invoke<Void>(0x32D52B6D1D23972B, p0); } // 0xC3C221ADDDE31A11 0x63A89684
	static void SET_WIND(float p0) { invoke<Void>(0x9D02240940738B20, p0); } // 0xAC3A74E8384A9919 0xC6294698
	static void SET_WIND_SPEED(float speed) { invoke<Void>(0x2FB741360A631449, speed); } // 0xEE09ECEDBABE47FC 0x45705F94
	static float GET_WIND_SPEED() { return invoke<float>(0xE376DE8AF24D2590); } // 0xA8CF1CC0AFCD3F12 0x098F0F3C
	static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0x70D3E53014A7CE1B, direction); } // 0xEB0F4468467B4528 0x381AEEE9
	static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0x935C248DE2F1C93A); } // 0x1F400FEF721170DA 0x89499A0D
	static void _SET_RAIN_FX_INTENSITY(float intensity) { invoke<Void>(0xDF5790CB51BDA7C5, intensity); } // 0x643E26EA6E024D92
	static Any GET_RAIN_LEVEL() { return invoke<Any>(0xBA38D101A36C435D); } // 0x96695E368AD855F3 0xC9F67F28
	static Any GET_SNOW_LEVEL() { return invoke<Any>(0x97C00EA28442439A); } // 0xC5868A966E5BE3AE 0x1B09184F
	static void _CREATE_LIGHTNING_THUNDER() { invoke<Void>(0x9DE5BC7E5E620CDE); } // 0xF6062E089251C898 0xDF38165E
	static void _0x02DEAAC8F8EA7FE7(char* p0) { invoke<Void>(0xBD4C7B3D08F6F3F5, p0); } // 0x02DEAAC8F8EA7FE7
	static void _0x11B56FBBF7224868(char* p0) { invoke<Void>(0x7A88E2D60CF9958D, p0); } // 0x11B56FBBF7224868 0x8727A4C5
	static void _SET_CLOUD_HAT_TRANSITION(char* type, float transitionTime) { invoke<Void>(0xE9CD83E3D4F58EB7, type, transitionTime); } // 0xFC4842A34657BFCB 0xED88FC61
	static void _0xA74802FB8D0B7814(char* p0, float p1) { invoke<Void>(0x427FBF2D4A21BA2A, p0, p1); } // 0xA74802FB8D0B7814 0xC9FA6E07
	static void _CLEAR_CLOUD_HAT() { invoke<Void>(0xF2F27E81D927CA9E); } // 0x957E790EA1727B64 0x2D7787BC
	static void _0xF36199225D6D8C86(float p0) { invoke<Void>(0xE39FFDCA45013C11, p0); } // 0xF36199225D6D8C86
	static float _0x20AC25E781AE4A84() { return invoke<float>(0xC85D10BEBB101964); } // 0x20AC25E781AE4A84
	static Any GET_GAME_TIMER() { return invoke<Any>(0xDF658EB6CA91DFBC); } // 0x9CD27B0045628463 0xA4EA0691
	static float GET_FRAME_TIME() { return invoke<float>(0x62E2FDDFDA7A731D); } // 0x15C40837039FFAF7 0x96374262
	static float _0xE599A503B3837E1B() { return invoke<float>(0xBA6C618DA63CA206); } // 0xE599A503B3837E1B
	static int GET_FRAME_COUNT() { return invoke<int>(0xFDE3C5D948890F7C); } // 0xFC8202EFC642E6F2 0xB477A015
	static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0xF25F352E34274C58, startRange, endRange); } // 0x313CE5879CEB6FCD 0x0562C4D0
	static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xB5BF1B58C833F7A9, startRange, endRange); } // 0xD53343AA4FB7DD28 0x4051115B
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, Any b) { return invoke<BOOL>(0x776447CD667051CD, x, y, z, groundZ, b); } // 0xC906A7DAB05C8D2B 0xA1BFD5E0
	static BOOL _0x8BDC7BFC57A81E76(float X, float Y, float Z, float* p3, Vector3* p4) { return invoke<BOOL>(0x4CA0EF4E3B2D7070, X, Y, Z, p3, p4); } // 0x8BDC7BFC57A81E76 0x64D91CED
	static float ASIN(float p0) { return invoke<float>(0x4B83CC1C45DF8B93, p0); } // 0xC843060B5765DCE7 0x998E5CAD
	static float ACOS(float p0) { return invoke<float>(0x0E8A4E1AF8D74F3E, p0); } // 0x1D08B970013C34B6 0xF4038776
	static float TAN(float degrees) { return invoke<float>(0xEC969C8D2E8AFA0E, degrees); } // 0x632106CC96E82E91 0xD320CE5E
	static float ATAN(float p0) { return invoke<float>(0x941F68D7884559A4, p0); } // 0xA9D1795CD5043663 0x7A03CC8E
	static float ATAN2(float p0, float p1) { return invoke<float>(0xD3392FFC0C6A404A, p0, p1); } // 0x8927CBF9D22261A4 0x2508AC81
	static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6) { return invoke<float>(0x999A157665D69393, x1, y1, z1, x2, y2, z2, p6); } // 0xF1B760881820C952 0xF698765E
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0x6985B73FFE117B5D, x1, y1, x2, y2); } // 0x186FC4BE848E1C92 0xDBF75E58
	static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0xE92969F4247292EB, dx, dy); } // 0x2FFB6B224F4B2926 0xD209D52B
	static float _0x7F8F6405F4777AF6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<float>(0x4B6FC2B64F933BF3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7F8F6405F4777AF6 0x89459F0A
	static Vector3 _0x21C235BC64831E5A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<Vector3>(0x6231068BAE678C9C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x21C235BC64831E5A 0xCAECF37E
	static BOOL _0xF56DFB7B61BE7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, Any* p12) { return invoke<BOOL>(0x5A88829AAB2820FF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF56DFB7B61BE7276 0xC6CC812C
	static void SET_BIT(int* var, int bit) { invoke<Void>(0x88B0F0DC270164B7, var, bit); } // 0x933D6A9EEC1BACD0 0x4EFE7E6B
	static void CLEAR_BIT(int* var, int bit) { invoke<Void>(0x09C86C0C5CA26B1E, var, bit); } // 0xE80492A9AC099A93 0x8BC9E618
	static Hash GET_HASH_KEY(char* value) { return invoke<Hash>(0x3BB8D1C5FAAB25B3, value); } // 0xD24D37CC275948CC 0x98EFF6F1
	static void _0xF2F6A2FA49278625(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any* p9, Any* p10, Any* p11, Any* p12) { invoke<Void>(0x9DFB59A7D183741B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF2F6A2FA49278625 0x87B92190
	static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xAA84F1DFD3EA9EA4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xA61B4DF533DCB56E 0xC013972F
	static BOOL IS_POSITION_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return invoke<BOOL>(0xB4F50EDEB984CEB4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xADCDE75E1C60F32D 0x452E8D9E
	static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xC12CCAEB3D3589CE, p0, p1, p2, p3, p4, p5, p6); } // 0xE54E209C35FFA18D 0xC161558D
	static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x0B17BC5D018E224B, X, Y, Z, radius, p4, p5, p6, p7); } // 0xA56F01F3765B93A0 0x854E9AB8
	static void _0x957838AAF91BD12D(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x0B2885CD0D141566, x, y, z, radius, p4, p5, p6, p7); } // 0x957838AAF91BD12D 0x20E4FFD9
	static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0xD74B8343DB9FEFD5, x, y, z, radius, p4, p5, p6, p7, p8); } // 0x01C7B9B38428AEB6 0x63320F3C
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { invoke<Void>(0xF305BC976CB46E05, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x11DB3500F042A8AA 0xF11A3018
	static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flag) { invoke<Void>(0xC6C0752EE78174C2, x, y, z, radius, flag); } // 0xDD9B9B385AAC7F5B 0xBB720FE7
	static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, BOOL unk) { invoke<Void>(0xF3C7015EF0F4A17C, x, y, z, radius, unk); } // 0xBE31FD6CE464AC59 0x25BE7FA8
	static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, BOOL unk) { invoke<Void>(0x37CD954C49EA308B, x, y, z, radius, unk); } // 0x04F8FC8FCF58F88D 0x95C53824
	static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, BOOL unk) { invoke<Void>(0x30822041FD942595, x, y, z, radius, unk); } // 0x0A1CB9094635D1A6 0x18DB5434
	static void _0x7EC6F9A478A6A512() { invoke<Void>(0xE4EC0582A2B92F8C); } // 0x7EC6F9A478A6A512
	static void SET_SAVE_MENU_ACTIVE(BOOL p0) { invoke<Void>(0x94F89BEA9646EA4A, p0); } // 0xC9BF75D28165FF77 0xF5CCF164
	static Any _0x397BAA01068BAA96() { return invoke<Any>(0xAE2BC3036AFBE93D); } // 0x397BAA01068BAA96 0x39771F21
	static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0xC74C05656CEF09A7, toggle); } // 0xB938B7E6D3C0620C 0xEC2A0ECF
	static void _0xB51B9AB9EF81868C(BOOL p0) { invoke<Void>(0x570E9A4746B1F6C8, p0); } // 0xB51B9AB9EF81868C 0x75B06B5A
	static Any _0x075F1D57402C93BA() { return invoke<Any>(0xDB1F8582DD4CDB0C); } // 0x075F1D57402C93BA 0x2569C9A7
	static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char* scriptName) { invoke<Void>(0x0B555472F86DC785, scriptName); } // 0x9DC711BC69C548DF 0x9F861FD4
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0xB64A6F2B8046CEF8); } // 0x9243BAC96D64C050 0x878486CE
	static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0x743107D14439AF48, x, y, z, p3, p4); } // 0x1F464EF988465A81 0x4F3E3104
	static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0x99C1005B4B647851, hospitalIndex, toggle); } // 0xC8535819C450EBA8 0x09F49C72
	static Any ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0x97095977658AFE5F, p0, p1, p2, p3, p4); } // 0x452736765B31FC4B 0xE96C29FE
	static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0xADB9D1B16DEA544F, policeIndex, toggle); } // 0x23285DED6EBD7EA3 0x0A280324
	static void _0x706B5EDCAA7FA663(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xAB6E71AED78BAD60, p0, p1, p2, p3); } // 0x706B5EDCAA7FA663
	static void _0xA2716D40842EAF79() { invoke<Void>(0x366C549B960B11F4); } // 0xA2716D40842EAF79
	static void _DISABLE_AUTOMATIC_RESPAWN(BOOL disableRespawn) { invoke<Void>(0x0A4474CA170E33E0, disableRespawn); } // 0x2C2B3493FBF51C71 0x296574AE
	static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0x09FF08F4026F6F86, toggle); } // 0x21FFB63D8C615361 0xDA13A4B6
	static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0xC898340877A3B0B6, toggle); } // 0x4A18E01DF2C87B86 0xC9F6F0BC
	static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0x2FDBB8179C16838D, toggle); } // 0x1E0B4DC0D990A4E7 0xCB074B9D
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0x856FE0EB5A347E56, toggle); } // 0xDA66D2796BA33F12 0xACDE6985
	static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0x90F3CE8672F0B203, toggle); } // 0xF3D78F59DFE18D79 0x6E00EB0B
	static Any REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, Any* p4, Any p5, Any p6) { return invoke<Any>(0x04BAE2369B164F11, p0, p1, p2, p3, p4, p5, p6); } // 0xC0714D0A7EEECA54 0x39C1849A
	static void SET_SAVE_HOUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB71D4065868E6C08, p0, p1, p2); } // 0x4F548CABEAE553BC 0xC3240BB4
	static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0xDB89E4A39B105CFC, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1162EA8AE9D24EEA 0x47436C12
	static Any _0xA4A0065E39C9F25C(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x2050BFD0CDE96693, p0, p1, p2, p3); } // 0xA4A0065E39C9F25C 0xC4D71AB4
	static void DO_AUTO_SAVE() { invoke<Void>(0xE1138754D00FF51F); } // 0x50EEAAD86232EE55 0x54C44B1A
	static Any _0x6E04F06094C87047() { return invoke<Any>(0xE8B62A1757B3F279); } // 0x6E04F06094C87047 0xA8546914
	static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0xE15EE59EAB50C114); } // 0x69240733738C19A0 0x36F75399
	static Any _0x2107A3773771186D() { return invoke<Any>(0x812E3195627B67AF); } // 0x2107A3773771186D 0x78350773
	static void _0x06462A961E94B67C() { invoke<Void>(0x0361F796A4E94959); } // 0x06462A961E94B67C 0x5A45B11A
	static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0x3A524FDAAFC5E019, p0, p1); } // 0xE0E500246FF73D66 0x17F4F44D
	static void _0x69FE6DC87BD2A5E9(Any p0) { invoke<Void>(0x40D59E9BC2A6DE1D, p0); } // 0x69FE6DC87BD2A5E9 0x81216EE0
	static void END_REPLAY_STATS() { invoke<Void>(0x6A0D398040A13817); } // 0xA23E821FBDF8A5F2 0xCB570185
	static Any _0xD642319C54AADEB6() { return invoke<Any>(0xC54436D4080C3ACD); } // 0xD642319C54AADEB6 0xC58250F1
	static Any _0x5B1F2E327B6B6FE1() { return invoke<Any>(0x913FED213F9A80AE); } // 0x5B1F2E327B6B6FE1 0x50C39926
	static Any _0x2B626A0150E4D449() { return invoke<Any>(0xE7EAFFDA289810C5); } // 0x2B626A0150E4D449 0x710E5D1E
	static Any _0xDC9274A7EF6B2867() { return invoke<Any>(0xC2FEC8273755AA88); } // 0xDC9274A7EF6B2867 0xC7BD1AF0
	static Any _0x8098C8D6597AAE18(Any p0) { return invoke<Any>(0xFE33FB1E315AC934, p0); } // 0x8098C8D6597AAE18 0x22BE2423
	static void CLEAR_REPLAY_STATS() { invoke<Void>(0x28F0F601CA2889F5); } // 0x1B1AB132A16FDA55 0xC47DFF02
	static Any _0x72DE52178C291CB5() { return invoke<Any>(0xA8F3BFFB319388E7); } // 0x72DE52178C291CB5 0xF62B3C48
	static Any _0x44A0BDC559B35F6E() { return invoke<Any>(0xA5F08897CA81D2D2); } // 0x44A0BDC559B35F6E 0x3589452B
	static Any _0xEB2104E905C6F2E9() { return invoke<Any>(0xCFCA82CAF2706219); } // 0xEB2104E905C6F2E9
	static Any _0x2B5E102E4A42F2BF() { return invoke<Any>(0xC7AA8565F5D66E22); } // 0x2B5E102E4A42F2BF 0x144AAF22
	static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0x665790CF5316ACE3); } // 0x8A75CE2956274ADD 0x40CE4DFD
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isVisible, float speed) { invoke<Void>(0x10895E556AB793EF, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isVisible, speed); } // 0x867654CBC7606F2C 0xCB7415AC
	static void _0xE3A7742E0B7A2F8B(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isNotAudible, BOOL isInvisible, float speed, Entity entity) { invoke<Void>(0x52F49E7FDC2150AF, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isNotAudible, isInvisible, speed, entity); } // 0xE3A7742E0B7A2F8B 0x52ACCB7B
	static void _0xBFE5756E7407064A(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, BOOL p16, BOOL p17) { invoke<Void>(0x31DCF61613216440, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, p16, p17); } // 0xBFE5756E7407064A
	static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0xA27A0E75635DD922, modelHash, minimum, maximum); } // 0x03E8D3D5F549087A 0x91ABB8E0
	static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0xF855CA0501BD2892, fakeWantedLevel); } // 0x1454F2448DE30163 0x85B1C9FA
	static Any _0x4C9296CBCD1B971E() { return invoke<Any>(0x2832F4A2F7DFD54F); } // 0x4C9296CBCD1B971E 0x0022A430
	static BOOL IS_BIT_SET(int value, int bit) { return invoke<BOOL>(0x08BA6DD398CA197C, value, bit); } // 0xA921AA820C25702F 0x902E26AC
	static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0xA34A4F2453701BF9, toggle); } // 0xF14878FC50BEC6EE 0x20AB0B6B
	static void _0xDEA36202FC3382DF(BOOL p0) { invoke<Void>(0xFF4E49EDB12B7E45, p0); } // 0xDEA36202FC3382DF 0x082BA6F2
	static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0x3F6577E39389B251, toggle); } // 0x19E00D7322C6F85B 0x348B9046
	static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0x575662C16C9FE750); } // 0x2B4A15E44DE0F478 0x53A95E13
	static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0x63A2A2D9389BE39F); } // 0x7B30F65D7B710098 0x7605EF6F
	static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0x8EFDB1F6FBDDA59E); } // 0x61A23B7EDA9BDA24 0x5C3BF51B
	static Any _0xD3D15555431AB793() { return invoke<Any>(0xAE52C62FC0BBB14E); } // 0xD3D15555431AB793 0xBAF17315
	static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0x680A5FBB1F20F775, profileSetting); } // 0xC488FF2356EA7791 0xD374BEBC
	static BOOL ARE_STRINGS_EQUAL(char* string1, char* string2) { return invoke<BOOL>(0x28C1B9853548BD8E, string1, string2); } // 0x0C515FAB3FF9EA92 0x877C0BC5
	static int COMPARE_STRINGS(char* str1, char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0xF9599AA5A135CE4C, str1, str2, matchCase, maxLength); } // 0x1E34710ECD4AB0EB 0xFE25A58F
	static int ABSI(int value) { return invoke<int>(0x9ABCEFB6E400C9FB, value); } // 0xF0D31AD191A74F87 0xB44677C5
	static float ABSF(float value) { return invoke<float>(0x7466327978A6A24C, value); } // 0x73D57CFFDD12C355 0xAF6F6E0B
	static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xC4218042BE09F8FD, x1, y1, z1, x2, y2, z2); } // 0xFEFCF11B01287125 0x0483715C
	static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { return invoke<BOOL>(0xF9043F0F074A61B5, x1, y1, z1, x2, y2, z2, unknown); } // 0x5270A8FBC098C3F8 0x78E1A557
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) { return invoke<BOOL>(0x933D5519D19639FF, x1, y1, z1, x2, y2, z2, type, p7); } // 0x2E0DC353342C4A6D 0x2B73BCF6
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) { return invoke<BOOL>(0x28AB33EAE7D9ED54, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF0BC12401061DEA0 0xD1AE2681
	static BOOL _0x34318593248C8FB2(float p0, float p1, float p2, Any p3, float p4, BOOL p5) { return invoke<BOOL>(0x99C534E6423CB828, p0, p1, p2, p3, p4, p5); } // 0x34318593248C8FB2 0xBE81F1E2
	static Any _0x8D7A43EC6A5FEA45(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x24BD4A062C574B62, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x8D7A43EC6A5FEA45 0x1A40454B
	static Any _0xDFB4138EEFED7B81(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0D046586233AAB40, p0, p1, p2, p3, p4); } // 0xDFB4138EEFED7B81 0x6BDE5CE4
	static Any _0x82FDE6A57EE4EE44(Ped ped, Hash weaponhash, float p2, float p3, float p4, float p5) { return invoke<Any>(0x46FBC6ABCDD0C247, ped, weaponhash, p2, p3, p4, p5); } // 0x82FDE6A57EE4EE44 0x507BC6F7
	static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return invoke<BOOL>(0x8F8A77FB851E2075, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1A8B5F3C01E2B477 0xE2DB58F7
	static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0xB53CC268A7051C62, p0, p1, p2, p3, p4); } // 0x3F2023999AD51C1F 0xB54F46CA
	static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return invoke<BOOL>(0xA3D40066231C7B5C, p0, p1, p2, p3, p4, p5, p6); } // 0xDE0F6D7450D37351 0xAB73ED26
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xF833F9BD2A57E1BA, p0, p1, p2, p3, p4, p5); } // 0x9870ACFB89A90995 0x902BC7D9
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xD849A90CC2FA81EB, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xDC8C5D7CFEAB8394 0x2C2618CC
	static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0xD95D58B9AAC86D55); } // 0xA72BC0B675B1519E 0x40282018
	static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0x15B0CAB107CFCDE1); } // 0x4D982ADB1978442D 0x46FB06A5
	static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0x65121BA303717C5B); } // 0xF6201B4DAF662A9D 0x24005CC8
	static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0xBECAD780226FC009); } // 0xCCA1072C29D096C2 0x4C0D5303
	static BOOL IS_PC_VERSION() { return invoke<BOOL>(0x955B8C8F89CC3AC0); } // 0x48AF36444B965238 0x4D5D9EE3
	static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0xA219F25418B3E599); } // 0x9F1935CA1F724008 0x944BA1DC
	static BOOL IS_STRING_NULL(char* string) { return invoke<BOOL>(0xD28EDDD3F7264249, string); } // 0xF22B6C47C6EAB066 0x8E71E00F
	static BOOL IS_STRING_NULL_OR_EMPTY(char* string) { return invoke<BOOL>(0x509383441597090D, string); } // 0xCA042B6957743895 0x42E9F2CA
	static BOOL STRING_TO_INT(char* string, int* outInteger) { return invoke<BOOL>(0x46EE05029203FDA3, string, outInteger); } // 0x5A5F40FE637EB584 0x590A8160
	static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0x2FEB9B19CC88E728, var, rangeStart, rangeEnd, p3); } // 0x8EF07E15701D61ED 0x32094719
	static Any GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<Any>(0x014A3856E171A151, var, rangeStart, rangeEnd); } // 0x53158863FCC0893A 0xCA03A1E5
	static Any ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15, Any p16) { return invoke<Any>(0x27FD358E305718A3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x1A992DA297A4630C 0xB630E5FF
	static Any ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, Any p17, Any p18) { return invoke<Any>(0x43C19311D5F35FD8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // 0xBBE5D803A5360CBF 0xB9B7E777
	static void DELETE_STUNT_JUMP(Any p0) { invoke<Void>(0xE2DA0C44A53B7226, p0); } // 0xDC518000E39DAE1F 0x840CB5DA
	static void ENABLE_STUNT_JUMP_SET(Any p0) { invoke<Void>(0x2671CB93EA1081C3, p0); } // 0xE369A5783B866016 0x9D1E7785
	static void DISABLE_STUNT_JUMP_SET(Any p0) { invoke<Void>(0xAA6859133666891A, p0); } // 0xA5272EBEDD4747F6 0x644C9FA4
	static void _0xD79185689F8FD5DF(BOOL p0) { invoke<Void>(0x7B0948D604481E4D, p0); } // 0xD79185689F8FD5DF 0x3C806A2D
	static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0x780D34E966DDA53A); } // 0x7A3F19700A4D0525 0xF477D0B1
	static BOOL _0x2272B0A1343129F4() { return invoke<BOOL>(0x2BECEEF86952688A); } // 0x2272B0A1343129F4 0x021636EE
	static Any _0x996DD1E1E02F1008() { return invoke<Any>(0x0836FA98D6AE09C8); } // 0x996DD1E1E02F1008 0x006F9BA2
	static Any _0x6856EC3D35C81EA4() { return invoke<Any>(0x1777126694EF4082); } // 0x6856EC3D35C81EA4
	static void CANCEL_STUNT_JUMP() { invoke<Void>(0x8F1F976F7D38CC0E); } // 0xE6B7B0ACD4E4B75E 0xF43D9821
	static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0x6B0F857FD4BCD4AB, toggle); } // 0x577D1284D6873711 0x8230FF6C
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0x401559486BCA4D9B, toggle); } // 0xAA391C728106F7AF 0xA0C3CE29
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0x9B1D45E9C3D735E8, toggle); } // 0xB98236CAAECEF897 0xD06F1720
	static BOOL _0x071E2A839DE82D90(Any p0, Any p1) { return invoke<BOOL>(0x825F6A45DAD6A6EB, p0, p1); } // 0x071E2A839DE82D90 0xFF6191E1
	static BOOL _0x557E43C447E700A8(Any p0) { return invoke<BOOL>(0xBA4E4F60477943BE, p0); } // 0x557E43C447E700A8
	static void _ENABLE_MP_DLC_MAPS(BOOL toggle) { invoke<Void>(0x2016A48A8F0B74A6, toggle); } // 0x9BAE5AD2508DF078 0x721B2492
	static void _SET_UNK_MAP_FLAG(int flag) { invoke<Void>(0xF25FB6A7A13A935D, flag); } // 0xC5F0A8EBD3F361CE 0xE202879D
	static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0x72D1F5A29BD70129); } // 0x7EA2B6AF97ECA6ED 0x8FF6232C
	static void POPULATE_NOW() { invoke<Void>(0x7D1114B6F231ACE5); } // 0x7472BB270D7B4F3E 0x72C20700
	static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0x23735087861170F2); } // 0xCBAD6729F7B1F4FC 0x6F203C6E
	static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0xD99453139C6FCD7B, level); } // 0x740E14FAD5842351 0x2D833F4A
	static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0x436C5BCB7C9B3B74, p0, p1, p2); } // 0xA9575F812C6A7997 0x881A694D
	static void STOP_SAVE_DATA() { invoke<Void>(0x90D0D5F2504AEC99); } // 0x74E20C9145FB66FD 0x3B1C07C8
	static Any _0xA09F896CE912481F(BOOL p0) { return invoke<Any>(0xEE1EF29C0DC0837D, p0); } // 0xA09F896CE912481F 0x9EF0BC64
	static void REGISTER_INT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x8103697D03A5A524, p0, name); } // 0x34C9EE5986258415 0xB930956F
	static void _0xA735353C77334EA0(Any* p0, Any* p1) { invoke<Void>(0xA437488D8D33FE4C, p0, p1); } // 0xA735353C77334EA0
	static void REGISTER_ENUM_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xD3EF0C1584E0A56E, p0, name); } // 0x10C2FA78D0E128A1 0x9B38374A
	static void REGISTER_FLOAT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x4418275503E0812C, p0, name); } // 0x7CAEC29ECB5DFEBB 0xDB06F7AD
	static void REGISTER_BOOL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x4859C5442F66F8F4, p0, name); } // 0xC8F4131414C835A1 0x5417E0E0
	static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x101C71BAF4E14E34, p0, name); } // 0xEDB1232C5BEAE62F 0x284352C4
	static void _0x6F7794F28C6B2535(Any* p0, char* name) { invoke<Void>(0x884CAE35B8A93F0A, p0, name); } // 0x6F7794F28C6B2535 0xE2089749
	static void _0x48F069265A0E4BEC(Any* p0, char* name) { invoke<Void>(0xC9D3D8EDD797CE07, p0, name); } // 0x48F069265A0E4BEC 0xF91B8C33
	static void _0x8269816F6CFD40F8(Any* p0, char* name) { invoke<Void>(0x37C2AAD7BD274BC5, p0, name); } // 0x8269816F6CFD40F8 0x74E8FAD9
	static void _0xFAA457EF263E8763(Any* p0, char* name) { invoke<Void>(0xF9B0BD0BA4302F49, p0, name); } // 0xFAA457EF263E8763 0x6B4335DD
	static void _START_SAVE_STRUCT(Any* p0, int p1, char* structName) { invoke<Void>(0xDA8BC73BBAC9152F, p0, p1, structName); } // 0xBF737600CDDBEADD 0xFB45728E
	static void STOP_SAVE_STRUCT() { invoke<Void>(0x498FA1527B4A5BB5); } // 0xEB1774DF12BB9F12 0xC2624A28
	static void _START_SAVE_ARRAY(Any* p0, int p1, char* arrayName) { invoke<Void>(0x926C125466F64D5A, p0, p1, arrayName); } // 0x60FE567DF1B1AF9D 0x893A342C
	static void STOP_SAVE_ARRAY() { invoke<Void>(0x7B955064D60B8538); } // 0x04456F95153C6BE4 0x0CAD8217
	static void _0xDC0F817884CDD856(Any p0, Any p1) { invoke<Void>(0x806DACE5511E6771, p0, p1); } // 0xDC0F817884CDD856 0x0B710A51
	static void _0x9B2BD3773123EA2F(Any p0, Any p1) { invoke<Void>(0xA304187E16542C88, p0, p1); } // 0x9B2BD3773123EA2F 0xE0F0684F
	static int _0xEB4A0C2D56441717(int p0) { return invoke<int>(0xAAC6F3235FDDF2C7, p0); } // 0xEB4A0C2D56441717 0x3CE5BF6B
	static Any CREATE_INCIDENT(Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0xDED5585784EEE584, p1, p2, p3, p4, p5, p6, p7); } // 0x3F892CAF67444AE7 0xFC5FF7B3
	static BOOL CREATE_INCIDENT_WITH_ENTITY(int p0, Entity p1, int p2, float p3, Any* p4) { return invoke<BOOL>(0x1DD12BA3781E71F9, p0, p1, p2, p3, p4); } // 0x05983472F0494E60 0xBBC35B03
	static void DELETE_INCIDENT(int* incidentId) { invoke<Void>(0xEDE3BC5A74AB2C55, incidentId); } // 0x556C1AA270D5A207 0x212BD0DC
	static BOOL IS_INCIDENT_VALID(Any p0) { return invoke<BOOL>(0xC2328E478826F8DD, p0); } // 0xC8BC6461E629BEAA 0x31FD0BA4
	static void _0xB08B85D860E7BA3C(Any p0, Any p1, Any p2) { invoke<Void>(0xE6B7A740983798DE, p0, p1, p2); } // 0xB08B85D860E7BA3C 0x0242D88E
	static void _0xD261BA3E7E998072(Any p0, float p1) { invoke<Void>(0x6263B099E3B2231A, p0, p1); } // 0xD261BA3E7E998072 0x1F38102E
	static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float x1, float y1, float z1, float x2, float y2, float z2, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0xEAF88580F3BC36ED, x1, y1, z1, x2, y2, z2, distance, spawnPoint); } // 0x6874E2190B0C1972 0x71AEFD77
	static Any _0x67F6413D3220E18D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x868D0600FD5D3D9A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x67F6413D3220E18D 0x42BF09B3
	static BOOL _0x1327E2FE9746BAEE(Any p0) { return invoke<BOOL>(0xAF4258F870009059, p0); } // 0x1327E2FE9746BAEE
	static void _0xB129E447A2EDA4BF(Any p0, BOOL p1) { invoke<Void>(0x86D46E473BB96D2A, p0, p1); } // 0xB129E447A2EDA4BF 0xFBDBE374
	static Any _0x32C7A7E8C43A1F80(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<Any>(0x00BFDB318D8B3251, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x32C7A7E8C43A1F80
	static void _0xE6869BECDD8F2403(Any p0, BOOL p1) { invoke<Void>(0xDE6D9FE6B2A4F045, p0, p1); } // 0xE6869BECDD8F2403
	static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0x8806353C925F82DC, ped, toggle, p2); } // 0x28A04B411933F8A6 0x0BD3F9EC
	static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xD9DB934B6D70FFA0, ped); } // 0x5D5479D115290C3F 0x04A947BA
	static void _0xE266ED23311F24D4(Any p0, Any* p1, Any* p2, float p3, float p4, BOOL p5) { invoke<Void>(0xB727568F98628E75, p0, p1, p2, p3, p4, p5); } // 0xE266ED23311F24D4 0xC20A7D2B
	static BOOL _0x17DF68D720AA77F8(Any p0) { return invoke<BOOL>(0x32F1E106AE614DAF, p0); } // 0x17DF68D720AA77F8 0x8501E727
	static BOOL _0x19BFED045C647C49(Any p0) { return invoke<BOOL>(0x3414399F0A6C4852, p0); } // 0x19BFED045C647C49 0x1A332D2D
	static BOOL _0xE95B0C7D5BA3B96B(Any p0) { return invoke<BOOL>(0x69F1DFB51EF8782E, p0); } // 0xE95B0C7D5BA3B96B
	static void _0x8FA9C42FC5D7C64B(Any p0, Any p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x11CDEEF25367098C, p0, p1, p2, p3, p4, p5); } // 0x8FA9C42FC5D7C64B 0x0C8865DF
	static void _0x54F157E0336A3822(Any p0, char* p1, float p2) { invoke<Void>(0xF453807536373DC9, p0, p1, p2); } // 0x54F157E0336A3822 0x49F977A9
	static void _0xD10F442036302D50(Any p0, Any p1, Any p2) { invoke<Void>(0x6FB665EA88DA4E9E, p0, p1, p2); } // 0xD10F442036302D50 0x6F009E33
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xAD1F216959B59AD8); } // 0x77A84429DD9F0A15 0xDA65ECAA
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { invoke<Void>(0x35D3749C47A8AEF5, p0); } // 0x6FE601A64180D423 0x6283BE32
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0xEE36A5CB0EDF418F, p0, p1); } // 0x44F7CBC1BEB3327D 0xABADB709
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0x312CA6E09BA2286A, p0, p1); } // 0x48838ED9937A15D1 0x1C996BCD
	static Any _0x918C7B2D2FF3928B(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x6FE5C50306FC2772, p0, p1, p2, p3, p4, p5, p6); } // 0x918C7B2D2FF3928B 0xF557BAF9
	static Any _0x2D4259F1FEB81DA9(float p0, float p1, float p2, float p3) { return invoke<Any>(0xF744B1A5FAE3BFD4, p0, p1, p2, p3); } // 0x2D4259F1FEB81DA9
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(Any p0) { invoke<Void>(0x27641869A3DA4A52, p0); } // 0x264AC28B01B353A5 0xA8D2FB92
	static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xA46FED1008E75187); } // 0xAC7BFD5C1D83EA75 0x9A17F835
	static void _0xD9F692D349249528() { invoke<Void>(0x04A28486AFF4EE40); } // 0xD9F692D349249528 0xE0C9307E
	static void _0xE532EC1A63231B4F(Any p0, Any p1) { invoke<Void>(0xAD2F0C61BF9FDC88, p0, p1); } // 0xE532EC1A63231B4F 0xA0D8C749
	static void _0xB8721407EE9C3FF6(Any p0, Any p1, Any p2) { invoke<Void>(0xE6740BD12D2865FF, p0, p1, p2); } // 0xB8721407EE9C3FF6 0x24A4E0B2
	static void _0xB3CD58CCA6CDA852() { invoke<Void>(0xB35DF7464C800D4B); } // 0xB3CD58CCA6CDA852 0x66C3C59C
	static void _0x2587A48BC88DFADF(BOOL p0) { invoke<Void>(0x2CDB228334E3A78F, p0); } // 0x2587A48BC88DFADF 0xD9660339
	static void _0xCA78CFA0366592FE(BOOL p0, char* windowTitle, Any* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, char* defaultConcat4, char* defaultConcat5, char* defaultConcat6, char* defaultConcat7, int maxInputLength) { invoke<Void>(0x6CA401843B681A82, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); } // 0xCA78CFA0366592FE 0xD2688412
	static void DISPLAY_ONSCREEN_KEYBOARD(BOOL p0, char* windowTitle, char* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, int maxInputLength) { invoke<Void>(0xD06A3758AD98020C, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0x00DC833F2568DBF6 0xAD99F2CE
	static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0xC5400265B5C1CEB3); } // 0x0CF2B696BBF945AE 0x23D0A1CE
	static char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<char*>(0x82DC5FE50D0BBF83); } // 0x8362B09B91893647 0x44828FB3
	static void _0x3ED1438C1F5C6612(Any p0) { invoke<Void>(0x01ECC03A40F2ED10, p0); } // 0x3ED1438C1F5C6612 0x3301EA47
	static void _0xA6A12939F16D85BE(Any p0, BOOL p1) { invoke<Void>(0x675D5E4E9079903C, p0, p1); } // 0xA6A12939F16D85BE 0x42B484ED
	static void _0x1EAE0A6E978894A2(Any p0, BOOL p1) { invoke<Void>(0x154F764D37DA6CA1, p0, p1); } // 0x1EAE0A6E978894A2 0x8F60366E
	static void SET_EXPLOSIVE_AMMO_THIS_FRAME(_Player player) { invoke<Void>(0x5D8E4FFB8DB78FBE, player); } // 0xA66C71C98D5F2CFB 0x2EAFA1D1
	static void SET_FIRE_AMMO_THIS_FRAME(_Player player) { invoke<Void>(0x0A47204F15F1BE8D, player); } // 0x11879CDD803D30F4 0x7C18FC8A
	static void SET_EXPLOSIVE_MELEE_THIS_FRAME(_Player player) { invoke<Void>(0x4F35D04FBD144183, player); } // 0xFF1BED81BFDC0FE0 0x96663D56
	static void SET_SUPER_JUMP_THIS_FRAME(_Player player) { invoke<Void>(0xA4472AAD14B4D0A3, player); } // 0x57FFF03E423A4C0B 0x86745EF3
	static Any _0x6FDDF453C0C756EC() { return invoke<Any>(0x1D0435FC97A108C7); } // 0x6FDDF453C0C756EC 0xC3C10FCC
	static void _0xFB00CA71DA386228() { invoke<Void>(0xECD0B8EC693D1663); } // 0xFB00CA71DA386228 0x054EC103
	static Any _0x5AA3BEFA29F03AD4() { return invoke<Any>(0x3F59EA61B56AFBC2); } // 0x5AA3BEFA29F03AD4 0x46B5A15C
	static void _0xE3D969D2785FFB5E() { invoke<Void>(0x6C0AB4AD4C99D44E); } // 0xE3D969D2785FFB5E
	static void _RESET_LOCALPLAYER_STATE() { invoke<Void>(0x2D249A0D865D7154); } // 0xC0AA53F866B3134D 0x5D209F25
	static void _0x0A60017F841A54F2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xBB51AFD14B1074EC, p0, p1, p2, p3); } // 0x0A60017F841A54F2 0x2D33F15A
	static void _0x1FF6BF9A63E5757F() { invoke<Void>(0xC3BA68C119B9D84B); } // 0x1FF6BF9A63E5757F 0xDF99925C
	static void _0x1BB299305C3E8C13(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDEFD0FCE1BDADFDF, p0, p1, p2, p3); } // 0x1BB299305C3E8C13 0xA27F4472
	static BOOL _0x8EF5573A1F801A5C(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x137E8033A9713074, p0, p1, p2); } // 0x8EF5573A1F801A5C 0x07FF553F
	static void _0x92790862E36C2ADA() { invoke<Void>(0xC6498A177AC53038); } // 0x92790862E36C2ADA
	static void _0xC7DB36C24634F52B() { invoke<Void>(0x609C7909CDA8E866); } // 0xC7DB36C24634F52B
	static void _0x437138B6A830166A() { invoke<Void>(0xB31E2570D1117267); } // 0x437138B6A830166A
	static void _0x37DEB0AA183FB6D8() { invoke<Void>(0x028FC9742194F44D); } // 0x37DEB0AA183FB6D8
	static Any _0xEA2F2061875EED90() { return invoke<Any>(0x57BD34260DE17DD5); } // 0xEA2F2061875EED90
	static Any _0x3BBBD13E5041A79E() { return invoke<Any>(0xA6CDB49A2C0EA61A); } // 0x3BBBD13E5041A79E
	static Any _0xA049A5BE0F04F2F8() { return invoke<Any>(0x41CB871F8BA63FB5); } // 0xA049A5BE0F04F2F8
	static Any _0x4750FC27570311EC() { return invoke<Any>(0x8244CE663D1970E4); } // 0x4750FC27570311EC
	static Any _0x1B2366C3F2A5C8DF() { return invoke<Any>(0x699C8488EB4F3FE6); } // 0x1B2366C3F2A5C8DF
	static void _FORCE_SOCIAL_CLUB_UPDATE() { invoke<Void>(0xFEFA8165CF41AA5F); } // 0xEB6891F03362FB12
	static Any _0x14832BF2ABA53FC5() { return invoke<Any>(0x70728706042CDFC0); } // 0x14832BF2ABA53FC5
	static void _0xC79AE21974B01FB2() { invoke<Void>(0xA56C3FC800FFC15F); } // 0xC79AE21974B01FB2
	static BOOL _0x684A41975F077262() { return invoke<BOOL>(0xA67149298E2279A6); } // 0x684A41975F077262
	static Any _0xABB2FA71C83A1B72() { return invoke<Any>(0x4880920ACD7FFC3C); } // 0xABB2FA71C83A1B72
	static void _0x4EBB7E87AA0DBED4(BOOL p0) { invoke<Void>(0xB5EAD48AB12FE1D6, p0); } // 0x4EBB7E87AA0DBED4
	static BOOL _0x9689123E3F213AA5() { return invoke<BOOL>(0x659B26D30D76A1D6); } // 0x9689123E3F213AA5
	static void _0x9D8D44ADBBA61EF2(BOOL p0) { invoke<Void>(0x66019AF956F01C73, p0); } // 0x9D8D44ADBBA61EF2
	static void _0x23227DF0B2115469() { invoke<Void>(0x4F8D7B0F736BB4E9); } // 0x23227DF0B2115469
	static Any _0xD10282B6E3751BA0() { return invoke<Any>(0xA5F0EF35323210B5); } // 0xD10282B6E3751BA0
}

namespace AUDIO
{
	static void PLAY_PED_RINGTONE(char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0xFB6D67601E7C1B57, ringtoneName, ped, p2); } // 0xF9E56683CA8E11A5 0x1D530E47
	static BOOL IS_PED_RINGTONE_PLAYING(Any p0) { return invoke<BOOL>(0xF129851BB500E6DD, p0); } // 0x1E8E5E20937E3137 0xFE576EE4
	static void STOP_PED_RINGTONE(Any p0) { invoke<Void>(0x57A9226614EE1570, p0); } // 0x6C5AE23EFA885092 0xFEEA107C
	static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xC6CB0C1523C73C77); } // 0x7497D2CE2C30D24C 0x4ED1400A
	static Any _0xC8B1B2425604CDD0() { return invoke<Any>(0x982980F63665F5EB); } // 0xC8B1B2425604CDD0 0x16FB88B5
	static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xEC9956FD4F597D28); } // 0xD2C91A0B572AAE56 0xB2BC25F8
	static void ADD_LINE_TO_CONVERSATION(Any p0, Any* p1, Any* p2, Any p3, Any p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0x37BB966CD8A65259, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC5EF963405593646 0x96CD0513
	static void ADD_PED_TO_CONVERSATION(Any p0, Any p1, char* p2) { invoke<Void>(0xA612DFC1334F0846, p0, p1, p2); } // 0x95D9F4BC443956E7 0xF8D5EB86
	static void _0x33E3C6C6F2F0B506(Any p0, float p1, float p2, float p3) { invoke<Void>(0xC47CA62DEE31BD99, p0, p1, p2, p3); } // 0x33E3C6C6F2F0B506 0x73C6F979
	static void _0x892B6AB8F33606F5(Any p0, Any p1) { invoke<Void>(0x3550C0C916C849C8, p0, p1); } // 0x892B6AB8F33606F5 0x88203DDA
	static void SET_MICROPHONE_POSITION(BOOL p0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0xB47AE4FF04743A58, p0, x1, y1, z1, x2, y2, z2, x3, y3, z3); } // 0xB6AE90EDDE95C762 0xAD7BB191
	static void _0x0B568201DD99F0EB(BOOL p0) { invoke<Void>(0x083B68ABDF962C26, p0); } // 0x0B568201DD99F0EB 0x1193ED6E
	static void _0x61631F5DF50D1C34(BOOL p0) { invoke<Void>(0xCC9B29AFE7F59717, p0); } // 0x61631F5DF50D1C34
	static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xAE005135BF2EF328, p0, p1); } // 0x252E5F915EABB675 0x38E42D07
	static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0x3067A08E74EC6A6C, p0, p1); } // 0x6004BCB0E226AAEA 0x9ACB213A
	static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xC945C3428E8D47B1, p0, p1, p2, p3); } // 0x6B17C62C9635D2DC 0xE5DE7D9D
	static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xA8A4C88FA8A080E2, p0, p1, p2, p3); } // 0x3B3CAD6166916D87 0xDDF5C579
	static void START_PRELOADED_CONVERSATION() { invoke<Void>(0x9A30899AC6BF3C25); } // 0x23641AFE870AF385 0xA170261B
	static Any _0xE73364DB90778FFA() { return invoke<Any>(0x337386D9574F7DC2); } // 0xE73364DB90778FFA 0x336F3D35
	static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xE80581DE0ACF1F8A); } // 0x16754C556D2EDE3D 0xCB8FD96F
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xFECAEF58F99477EE); } // 0xDF0D54BE7A776737 0xE1870EA9
	static Any GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<Any>(0x11112B2494788B6D); } // 0x480357EE890C295A 0x9620E41F
	static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0x404E5A92009260F7, p0); } // 0x8530AD776CD72B12 0xE2C9C6F8
	static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0x8C620099CBB45602); } // 0x9AEB285D1818C9AC 0x6CB24B56
	static Any STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<Any>(0x588D9B1F6CF36C3C, p0); } // 0xD79DEEFB53455EBA 0xAB77DA7D
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0x3432E6B180FDDA50); } // 0x9663FE6B7A61EB00 0x85C98304
	static void INTERRUPT_CONVERSATION(Any p0, Any* p1, Any* p2) { invoke<Void>(0x333190182C6F85A5, p0, p1, p2); } // 0xA018A12E5C5C2FA6 0xF3A67AF3
	static void _0x8A694D7A68F8DC38(Ped p0, char* p1, char* p2) { invoke<Void>(0xB5B6C1CF700DE8B2, p0, p1, p2); } // 0x8A694D7A68F8DC38
	static Any _0xAA19F5572C38B564(Any* p0) { return invoke<Any>(0x715EC6D275544B8A, p0); } // 0xAA19F5572C38B564 0xB58B8FF3
	static void _0xB542DE8C3D1CB210(BOOL p0) { invoke<Void>(0xD342A392D0C1561E, p0); } // 0xB542DE8C3D1CB210 0x789D8C6C
	static void REGISTER_SCRIPT_WITH_AUDIO(Any p0) { invoke<Void>(0xA28F0E9F63F56A89, p0); } // 0xC6ED9D5092438D91 0xA6203643
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0x6B4A98E4E44890AF); } // 0xA8638BE228D4751A 0x66728EFE
	static BOOL REQUEST_MISSION_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xE9F5B70A07DBE47B, p0, p1); } // 0x7345BDD95E62E0F2 0x916E37CA
	static BOOL REQUEST_AMBIENT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xB681AFC282675D02, p0, p1); } // 0xFE02FFBED8CA9D99 0x23C88BC7
	static BOOL REQUEST_SCRIPT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xDD9B91529459212C, p0, p1); } // 0x2F844A8B08D76685 0x21322887
	static Any HINT_AMBIENT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x44291E80E33DC67C, p0, p1); } // 0x8F8C0E370AE62F5C 0xF1850DDC
	static Any HINT_SCRIPT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x06FBD2D01C30C714, p0, p1); } // 0xFB380A29641EC31A 0x41FA0E51
	static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xC770767D344B1458); } // 0x0EC92A1BF0857187 0x8E8824C7
	static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xD00037D124CA1111); } // 0x65475A218FFAA93D 0x8C938784
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(char* audioBank) { invoke<Void>(0x29B0EFEB2715365C, audioBank); } // 0x77ED170667F50170 0x16707ABC
	static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0xAE8BF3C10F9D171E); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5
	static void _0x19AF7ED9B9D23058() { invoke<Void>(0x2130D0000FE7D9B5); } // 0x19AF7ED9B9D23058 0xA58BBF4F
	static void _0x9AC92EED5E4793AB() { invoke<Void>(0x5331B2BF5D96FF18); } // 0x9AC92EED5E4793AB
	static int GET_SOUND_ID() { return invoke<int>(0x2657E29E0DD8087E); } // 0x430386FE9BF80B45 0x6AE0AD56
	static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0xC8656944A36C8E78, soundId); } // 0x353FC880830B88FA 0x9C080899
	static void PLAY_SOUND(int soundId, char* soundName, char* setName, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0x01E52B45D41A4335, soundId, soundName, setName, p3, p4, p5); } // 0x7FF4944CC209192D 0xB6E1917F
	static void PLAY_SOUND_FRONTEND(int soundId, char* soundName, char* setName, BOOL p3) { invoke<Void>(0xAB16AADE80707D47, soundId, soundName, setName, p3); } // 0x67C540AA08E4A6F5 0x2E458F74
	static void _0xCADA5A0D0702381E(char* p0, char* soundset) { invoke<Void>(0x1FEFCA90BEA25FAF, p0, soundset); } // 0xCADA5A0D0702381E 0xC70E6CFA
	static void PLAY_SOUND_FROM_ENTITY(int soundId, char* soundName, Entity entity, char* setName, BOOL p4, Any p5) { invoke<Void>(0x7DEFCA77DEA2C174, soundId, soundName, entity, setName, p4, p5); } // 0xE65F427EB70AB1ED 0x95AE00F8
	static void PLAY_SOUND_FROM_COORD(int soundId, char* soundName, float x, float y, float z, char* setName, BOOL p6, Any p7, BOOL p8) { invoke<Void>(0xCEFFD0ED686CCBA0, soundId, soundName, x, y, z, setName, p6, p7, p8); } // 0x8D8686B622B88120 0xCAD3E2D5
	static void STOP_SOUND(int soundId) { invoke<Void>(0x15761381A3072BFA, soundId); } // 0xA3B0C41BA5CC0BB5 0xCD7F4030
	static Any GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<Any>(0x71313B4F93E64BE8, soundId); } // 0x2DE3F0A134FFBC0D 0x2576F610
	static Any _0x75262FD12D0A1C84(Any p0) { return invoke<Any>(0x1756D8B421DA5B89, p0); } // 0x75262FD12D0A1C84 0xD064D4DC
	static void SET_VARIABLE_ON_SOUND(int soundId, Any* p1, float p2) { invoke<Void>(0x86F350F5CCA04497, soundId, p1, p2); } // 0xAD6B3148A78AE9B6 0x606EE5FA
	static void SET_VARIABLE_ON_STREAM(char* p0, float p1) { invoke<Void>(0x90CB1D1396311384, p0, p1); } // 0x2F9D3834AEB9EF79 0xF67BB44C
	static void OVERRIDE_UNDERWATER_STREAM(Any* p0, BOOL p1) { invoke<Void>(0x534F1A150739DF5D, p0, p1); } // 0xF2A9CDABCEA04BD6 0x9A083B7E
	static void _0x733ADF241531E5C2(Any* p0, float p1) { invoke<Void>(0x70BC12027B196BB6, p0, p1); } // 0x733ADF241531E5C2 0x62D026BE
	static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0x7DFD3CAC2CF49957, soundId); } // 0xFCBDCE714A7C88E5 0xE85AEC2E
	static void _PLAY_AMBIENT_SPEECH1(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0xD8A7A2C7456E47C9, ped, speechName, speechParam); } // 0x8E04FEDD28D42462 0x5C57B85D
	static void _PLAY_AMBIENT_SPEECH2(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0x4750962A25B2EC5B, ped, speechName, speechParam); } // 0xC6941B4A3A8FBBB9 0x444180DB
	static void _PLAY_AMBIENT_SPEECH_WITH_VOICE(Ped p0, char* speechName, char* voiceName, char* speechParam, BOOL p4) { invoke<Void>(0x9A1116B636E7177A, p0, speechName, voiceName, speechParam, p4); } // 0x3523634255FC3318 0x8386AE28
	static void _0xED640017ED337E45(Any* p0, Any* p1, float p2, float p3, float p4, Any* p5) { invoke<Void>(0xAF88146FB04FE85F, p0, p1, p2, p3, p4, p5); } // 0xED640017ED337E45 0xA1A1402E
	static void OVERRIDE_TREVOR_RAGE(Any* p0) { invoke<Void>(0x0765D0420692FA7E, p0); } // 0x13AD665062541A7E 0x05B9B5CF
	static void RESET_TREVOR_RAGE() { invoke<Void>(0xAFCFAE876FADC58C); } // 0xE78503B10C4314E0 0xE80CF0D4
	static void SET_PLAYER_ANGRY(_Player player, BOOL IsAngry) { invoke<Void>(0x104A12EBC32291C7, player, IsAngry); } // 0xEA241BB04110F091 0x782CA58D
	static void PLAY_PAIN(int painID, float p1, int p2) { invoke<Void>(0xA4FBF6E76C1B1672, painID, p1, p2); } // 0xBC9AE166038A5CEC 0x874BD6CB
	static void _0xD01005D2BA2EB778(Any* p0) { invoke<Void>(0x60E6E59F99B1CD21, p0); } // 0xD01005D2BA2EB778 0x59A3A17D
	static void _0xDDC635D5B3262C56(Any* p0) { invoke<Void>(0x761E04F475C366CD, p0); } // 0xDDC635D5B3262C56 0x0E387BFE
	static void SET_AMBIENT_VOICE_NAME(Ped ped, char* name) { invoke<Void>(0xD97F9F0D7231AC43, ped, name); } // 0x6C8065A3B780185B 0xBD2EA1A1
	static void _0x40CF0D12D142A9E8(Any p0) { invoke<Void>(0x4F8B33E65FD446C7, p0); } // 0x40CF0D12D142A9E8
	static void _0x7CDC8C3B89F661B3(Any p0, Any p1) { invoke<Void>(0xFAD31C3641A0814B, p0, p1); } // 0x7CDC8C3B89F661B3
	static void _0xA5342D390CDA41D6(Any p0, BOOL p1) { invoke<Void>(0xCE444E40F505E71F, p0, p1); } // 0xA5342D390CDA41D6
	static void _0x7A73D05A607734C7(Any p0) { invoke<Void>(0x89300C02840C3378, p0); } // 0x7A73D05A607734C7
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped p0) { invoke<Void>(0xFC942BCB9A58BF05, p0); } // 0xB8BEC0CA6F0EDB0F 0xBB8E64BF
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0x124290C0A019B083, p0); } // 0x9072C8B49907BFAD 0x1972E8AA
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0x41B28305FEAC89F5, p0); } // 0xCC9AA18DCC7084F4 0x2C653904
	static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0x2C93AFAEAA97C570, ped); } // 0x729072355FA39EC9 0x2B74A6D6
	static BOOL _0x49B99BF3FDA89A7A(Any p0, Any* p1, BOOL p2) { return invoke<BOOL>(0x932D892C0ED221F7, p0, p1, p2); } // 0x49B99BF3FDA89A7A 0x8BD5F11E
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(Any p0) { return invoke<BOOL>(0xCA9F382238BF0D15, p0); } // 0x049E937F18F4020C 0x7B2F0743
	static void SET_PED_IS_DRUNK(Any p0, BOOL p1) { invoke<Void>(0x3D0303642BF7B345, p0, p1); } // 0x95D2D383D5396B8A 0xD2EA77A3
	static void _0xEE066C7006C49C0A(Any p0, Any p1, Any* p2) { invoke<Void>(0x874E6F0E44CE4290, p0, p1, p2); } // 0xEE066C7006C49C0A 0x498849F3
	static BOOL _0xC265DF9FB44A9FBD(Any p0) { return invoke<BOOL>(0x80976C1C32A10725, p0); } // 0xC265DF9FB44A9FBD 0x0CBAF2EF
	static void SET_ANIMAL_MOOD(Any p0, Any p1) { invoke<Void>(0x8F9B6234E3003CE3, p0, p1); } // 0xCC97B29285B1DC3B 0x3EA7C6CB
	static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0x96C8552D09B10A62); } // 0xB35CE999E8EF317E 0x6E502A5B
	static void SET_MOBILE_PHONE_RADIO_STATE(BOOL p0) { invoke<Void>(0x6089414DD4DA71DE, p0); } // 0xBF286C554784F3DF 0xE1E0ED34
	static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0x6327B643497275A6); } // 0xE8AF77C4C06ADC93 0x1C4946AC
	static char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<char*>(0xC5291E6D40B33FC3); } // 0xF6D733C32076AD03 0xD909C107
	static char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<char*>(0x91715E28C0CEA779, radioStation); } // 0xB28ECA15046CA8B9 0x3DF493BC
	static Any GET_PLAYER_RADIO_STATION_GENRE() { return invoke<Any>(0x77188BBB27D82F39); } // 0xA571991A7FE6CCEB 0x872CF0EA
	static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0x8E326405D64D7F51); } // 0xA151A7394A214E65 0xCF29097B
	static Any _0x0626A247D2405330() { return invoke<Any>(0xEE7660EB94DECD0D); } // 0x0626A247D2405330
	static void _0xFF266D1D0EB1195D() { invoke<Void>(0x57207B07582AF545); } // 0xFF266D1D0EB1195D 0x53DB6994
	static void _0xDD6BCF9E94425DF9() { invoke<Void>(0x822BB6101B77CAE0); } // 0xDD6BCF9E94425DF9 0xD70ECC80
	static void SET_RADIO_TO_STATION_NAME(char* radioStation) { invoke<Void>(0x59CA83A35E3F2FD3, radioStation); } // 0xC69EDA28699D5107 0x7B36E35E
	static void SET_VEH_RADIO_STATION(Vehicle vehicle, char* radioStation) { invoke<Void>(0x4DA90A8B408EBB18, vehicle, radioStation); } // 0x1B9C0099CB942AC6 0xE391F55F
	static void _0xC1805D05E6D4FE10(Any p0) { invoke<Void>(0xF382B13C8BAD0291, p0); } // 0xC1805D05E6D4FE10 0x7ABB89D2
	static void SET_EMITTER_RADIO_STATION(char* emitterName, char* radioStation) { invoke<Void>(0x15AFB7463136E864, emitterName, radioStation); } // 0xACF57305B12AF907 0x87431585
	static void SET_STATIC_EMITTER_ENABLED(char* emitterName, BOOL toggle) { invoke<Void>(0x32508B8E93AAF2BE, emitterName, toggle); } // 0x399D2D3B33F1B8EB 0x91F72E92
	static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0x6D7332623661A4AA, radioStation); } // 0xA619B168B8A8570F 0x1D82766D
	static void SET_FRONTEND_RADIO_ACTIVE(BOOL p0) { invoke<Void>(0x9D6A148C9D49C64A, p0); } // 0xF7F26C6E9CC9EBB8 0xB1172075
	static void UNLOCK_MISSION_NEWS_STORY(Any p0) { invoke<Void>(0x1064358D6267EE4A, p0); } // 0xB165AB7C248B2DC1 0xCCD9ABE4
	static Any GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(Any p0) { return invoke<Any>(0x0E6C5CD00CE13B01, p0); } // 0x66E49BF55B4B1874 0x27305D37
	static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0xFEA3C90997C5DD92); } // 0x50B196FC9ED6545B 0xA2B88CA7
	static void PLAY_END_CREDITS_MUSIC(BOOL p0) { invoke<Void>(0x862F49CB871C487F, p0); } // 0xCD536C4D33DCC900 0x8E88B3CC
	static void SKIP_RADIO_FORWARD() { invoke<Void>(0x47D95B6D5DBF6271); } // 0x6DDBBDD98E2E9C25 0x10D36630
	static void FREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0xAF656045A8C74D9A, radioStation); } // 0x344F393B027E38C3 0x286BF543
	static void UNFREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0x2166F0E386D54010, radioStation); } // 0xFC00454CF60B91DD 0x4D46202C
	static void SET_RADIO_AUTO_UNFREEZE(BOOL p0) { invoke<Void>(0x5508A94ED5FBE8A4, p0); } // 0xC1AA9F53CE982990 0xA40196BF
	static void SET_INITIAL_PLAYER_STATION(char* radioStation) { invoke<Void>(0xEC9C8435056C6359, radioStation); } // 0x88795F13FACDA88D 0x9B069233
	static void SET_USER_RADIO_CONTROL_ENABLED(BOOL p0) { invoke<Void>(0x5A6B86444D23FCA8, p0); } // 0x19F21E63AE6EAE4E 0x52E054CE
	static void SET_RADIO_TRACK(char* radioStation, char* radioTrack) { invoke<Void>(0x600A03FE9BB9274F, radioStation, radioTrack); } // 0xB39786F201FEE30B 0x76E96212
	static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x474EEA7CEFBBC727, vehicle, toggle); } // 0xBB6F1CAEC68B0BCE 0x8D9EDD99
	static BOOL _IS_VEHICLE_RADIO_LOUD(Vehicle vehicle) { return invoke<BOOL>(0xF8EDE17CBB577902, vehicle); } // 0x032A116663A4D5AC 0xCBA99F4A
	static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL Toggle) { invoke<Void>(0x6BBE2EE05E67FE2B, Toggle); } // 0x1098355A16064BB3 0x990085F0
	static Any _0x109697E2FFBAC8A1() { return invoke<Any>(0x9FB4AB85AEBEC9F4); } // 0x109697E2FFBAC8A1 0x46B0C696
	static Any _0x5F43D83FD6738741() { return invoke<Any>(0xA833EC76BCCA9EBA); } // 0x5F43D83FD6738741 0x2A3E5E8B
	static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF3E3BC1FD7FDE221, vehicle, toggle); } // 0x3B988190C0AA6C0B 0x6F812CAB
	static void _0x4E404A9361F75BB2(Any* p0, Any* p1, BOOL p2) { invoke<Void>(0xCA4B70168E058023, p0, p1, p2); } // 0x4E404A9361F75BB2 0x128C3873
	static void _0x1654F24A88A8E3FE(char* radioStation) { invoke<Void>(0x210271A20432896C, radioStation); } // 0x1654F24A88A8E3FE 0x1D766976
	static int _MAX_RADIO_STATION_INDEX() { return invoke<int>(0xCDD4A3A3D14D74C3); } // 0xF1620ECB50E01DE7 0xCC91FCF5
	static Any FIND_RADIO_STATION_INDEX(int station) { return invoke<Any>(0xBE894454E6E68BE8, station); } // 0x8D67489793FF428B 0xECA1512F
	static void _0x774BD811F656A122(char* radioStation, BOOL p1) { invoke<Void>(0xA149AF899ECC5C89, radioStation, p1); } // 0x774BD811F656A122 0xB1FF7137
	static void _0x2C96CDB04FCA358E(float p0) { invoke<Void>(0x213FA5C2A0A391FE, p0); } // 0x2C96CDB04FCA358E 0xC8B514E2
	static void _0x031ACB6ABA18C729(char* radioStation, char* p1) { invoke<Void>(0x7B6C71091A825970, radioStation, p1); } // 0x031ACB6ABA18C729 0xBE998184
	static void _0xF3365489E0DD50F9(Any p0, BOOL p1) { invoke<Void>(0x5BAE07558FB7883D, p0, p1); } // 0xF3365489E0DD50F9 0x8AFC488D
	static void SET_AMBIENT_ZONE_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0xFB051B1CD07B259B, p0, p1, p2); } // 0xBDA07E5950085E46 0x2849CAC9
	static void CLEAR_AMBIENT_ZONE_STATE(Any* p0, BOOL p1) { invoke<Void>(0xA6B74F502A6205D3, p0, p1); } // 0x218DD44AAAC964FF 0xCDFF3C82
	static void SET_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0x640DE749957659BD, p0, p1, p2); } // 0x9748FA4DE50CCE3E 0xBF80B412
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1) { invoke<Void>(0x893FC8A04F8ED96B, p0, p1); } // 0x120C48C614909FA4 0x38B9B8D4
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xDFEB99FF23FBFA15, ambientZone, p1, p2); } // 0x1D6650420CEC9D3B 0xC1FFB672
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xDDF7894250162801, ambientZone, p1, p2); } // 0xF3638DAE8C4045E1 0x5F5A2605
	static BOOL IS_AMBIENT_ZONE_ENABLED(Any* p0) { return invoke<BOOL>(0x1AC2B94FFC02A9AF, p0); } // 0x01E2817A479A7F9B 0xBFABD872
	static void SET_CUTSCENE_AUDIO_OVERRIDE(Any* p0) { invoke<Void>(0x0E52F2E14853D1D7, p0); } // 0x3B4BF5F0859204D9 0xCE1332B7
	static void GET_PLAYER_HEADSET_SOUND_ALTERNATE(Any* p0, float p1) { invoke<Void>(0x87F9E482672A55ED, p0, p1); } // 0xBCC29F935ED07688 0xD63CF33A
	static Any PLAY_POLICE_REPORT(char* name, float p1) { return invoke<Any>(0x7FEBBF591E88FBC0, name, p1); } // 0xDFEBD56D9BD1EB16 0x3F277B62
	static void _0xB4F90FAF7670B16F() { invoke<Void>(0x7D879F221FDE3AB6); } // 0xB4F90FAF7670B16F
	static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0x292C73EC7DC6F327, vehicle); } // 0x1B9025BDA76822B6 0xC0EB6924
	static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL mute, int p2) { invoke<Void>(0xECD9215086335A9C, vehicle, mute, p2); } // 0x3CDC1E622CCE0356 0x2ACAB783
	static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x380A5E610EBB33B1, vehicle); } // 0x9D6BFC12B05C6121 0x20E2BDD0
	static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0x7E62AE1242CF7F11, toggle); } // 0x395BF71085D1B1D9 0x01D6EABE
	static void _0x02E93C796ABD3A97(Any p0) { invoke<Void>(0x8A306A621E40EC31, p0); } // 0x02E93C796ABD3A97 0x3C395AEE
	static void _0x58BB377BEC7CD5F4(BOOL p0, BOOL p1) { invoke<Void>(0xB6B26447B5805F35, p0, p1); } // 0x58BB377BEC7CD5F4 0x8CE63FA1
	static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xBAF36E5CABD75C86); } // 0xD11FA52EB849D978 0xF1F51A14
	static Any GET_STREAM_PLAY_TIME() { return invoke<Any>(0x4E1F16D7698A9ABB); } // 0x4E72BBDBCA58A3DB 0xB4F0AD56
	static BOOL LOAD_STREAM(char* streamName, char* soundSet) { return invoke<BOOL>(0x3E0337AD43C7C515, streamName, soundSet); } // 0x1F1F957154EC51DF 0x0D89599D
	static BOOL LOAD_STREAM_WITH_START_OFFSET(char* streamName, int startOffset, char* soundSet) { return invoke<BOOL>(0xDFA138A7857BEF5F, streamName, startOffset, soundSet); } // 0x59C16B79F53B3712 0xE5B5745C
	static void _0x89049DD63C08B5D1(Any p0) { invoke<Void>(0x9641D78C4601ECD6, p0); } // 0x89049DD63C08B5D1 0xA1D7FABE
	static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xDE519B1729422535, vehicle); } // 0xB70374A758007DFA 0xF8E4BDA2
	static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0xEA95DDCA6613520F, object); } // 0xEBAA9B64D76356FD 0xC5266BF7
	static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xA58DE260B9617E8D); } // 0x58FCE43488F9F5F4 0x2C2A16BC
	static void SPECIAL_FRONTEND_EQUAL(Any p0, Any p1, Any p2) { invoke<Void>(0xAE7FF921278DEEC5, p0, p1, p2); } // 0x21442F412E8DE56B 0x6FE5D865
	static void STOP_STREAM() { invoke<Void>(0x574416540AF6C9DF); } // 0xA4718A1419D18151 0xD1E364DE
	static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0xB0608983A83FFE10, ped, shaking); } // 0x9D64D7405520E3D3 0xFF92B49D
	static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xD40823AFB0472B1C, ped, toggle); } // 0xA9A41C1E940FB0E8 0x3B8E2D5F
	static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0xC48E39A0B599EE38, ped); } // 0x932C2D096A2C3FFF 0x109D1F89
	static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL set) { invoke<Void>(0x6049F85E21EE39EE, vehicle, set); } // 0x1FEF0683B96EBCF2 0x77182D58
	static void _0x9C11908013EA4715(Any p0) { invoke<Void>(0x66E49DFEE445671B, p0); } // 0x9C11908013EA4715 0xDE8BA3CD
	static void SET_HORN_ENABLED(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF945957131FD0319, vehicle, p1); } // 0x76D683C108594D0E 0x6EB92D05
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0x926D43FB8F9481B6, vehicle, p1); } // 0xE5564483E407F914 0x271A9766
	static void _0x9D3AF56E94C9AE98(Any p0, float p1) { invoke<Void>(0xE89D3E1EB566A83F, p0, p1); } // 0x9D3AF56E94C9AE98 0x2F0A16D1
	static void USE_SIREN_AS_HORN(Any p0, BOOL p1) { invoke<Void>(0xBFB395511FD8EF10, p0, p1); } // 0xFA932DE350266EF8 0xC6BC16F3
	static void _0x4F0C413926060B38(Any p0, char* p1) { invoke<Void>(0x53FD263377777F6E, p0, p1); } // 0x4F0C413926060B38 0x33B0B007
	static void _0xF1F8157B8C3F171C(Any p0, char* p1, char* p2) { invoke<Void>(0x0D1AE1F53B46DBA2, p0, p1, p2); } // 0xF1F8157B8C3F171C 0x1C0C5E4C
	static void _0xD2DCCD8E16E20997(Any p0) { invoke<Void>(0x06F954CD6AA163CE, p0); } // 0xD2DCCD8E16E20997
	static BOOL _0x5DB8010EE71FDEF2(Any p0) { return invoke<BOOL>(0xB5B5A8EC3A75F8DB, p0); } // 0x5DB8010EE71FDEF2 0x6E660D3F
	static void _0x59E7B488451F4D3A(Any p0, float p1) { invoke<Void>(0x881AD1C0D33AC5FC, p0, p1); } // 0x59E7B488451F4D3A 0x23BE6432
	static void _0x01BB4D577D38BD9E(Any p0, float p1) { invoke<Void>(0xF896F6FF4CC653AA, p0, p1); } // 0x01BB4D577D38BD9E 0xE81FAC68
	static void _0x1C073274E065C6D2(Any p0, BOOL p1) { invoke<Void>(0xB884B2020C145E49, p0, p1); } // 0x1C073274E065C6D2 0x9365E042
	static void _0x2BE4BC731D039D5A(Any p0, BOOL p1) { invoke<Void>(0x0979414D22CE803B, p0, p1); } // 0x2BE4BC731D039D5A 0x2A60A90E
	static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x881C0078DA0A6BCC, vehicle, Toggle); } // 0x4A04DE7CAB2739A1 0x072F15F2
	static void _0x6FDDAD856E36988A(Any p0, BOOL p1) { invoke<Void>(0xAE7AA6A5D881A572, p0, p1); } // 0x6FDDAD856E36988A 0x934BE749
	static void _0x06C0023BED16DD6B(Any p0, BOOL p1) { invoke<Void>(0x6D2F64E1D3A6B913, p0, p1); } // 0x06C0023BED16DD6B 0xE61110A2
	static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, Any p1) { invoke<Void>(0x8492003BC264FA34, vehicle, p1); } // 0x3A539D52857EA82D 0x84930330
	static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, Any p1) { invoke<Void>(0xBCA085298BDE0C22, vehicle, p1); } // 0x62A456AA4769EF34 0xBA2CF407
	static void _0xC15907D667F7CFB2(Any p0, BOOL p1) { invoke<Void>(0xAEAC4408251423AB, p0, p1); } // 0xC15907D667F7CFB2 0x563B635D
	static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0xEAE2B13A39703BBB); } // 0x6D28DC1671E334FD 0x7643170D
	static void SET_GPS_ACTIVE(BOOL p0) { invoke<Void>(0xC6FD42229A7B43E7, p0); } // 0x3BD3F52BA9B1E4E8 0x0FC3379A
	static void PLAY_MISSION_COMPLETE_AUDIO(char* audioName) { invoke<Void>(0x77519D378E79AF55, audioName); } // 0xB138AAB8A70D3C69 0x3033EA1D
	static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0xF5058FF6E5FAB56A); } // 0x19A30C23F5827F8A 0x939982A1
	static Any _0x6F259F82D873B8B8() { return invoke<Any>(0x66D7954BC1A66A9C); } // 0x6F259F82D873B8B8 0xCBE09AEC
	static void _0xF154B8D1775B2DEC(BOOL p0) { invoke<Void>(0xBDD2940225B782DA, p0); } // 0xF154B8D1775B2DEC 0xD2858D8A
	static BOOL START_AUDIO_SCENE(char* sceneName) { return invoke<BOOL>(0xC94C39C53546E775, sceneName); } // 0x013A80FC08F6E4F2 0xE48D757B
	static void STOP_AUDIO_SCENE(char* scene) { invoke<Void>(0x7C1793252FA472B6, scene); } // 0xDFE8422B3B94E688 0xA08D8C58
	static void STOP_AUDIO_SCENES() { invoke<Void>(0xD8522EF4BC9E87B3); } // 0xBAC7FC81A75EC1A1 0xF6C7342A
	static BOOL IS_AUDIO_SCENE_ACTIVE(char* scene) { return invoke<BOOL>(0x6DEB8F88FFE09057, scene); } // 0xB65B60556E2A9225 0xACBED05C
	static void SET_AUDIO_SCENE_VARIABLE(Any* p0, Any* p1, float p2) { invoke<Void>(0xBBC594424F4175F1, p0, p1, p2); } // 0xEF21A9EF089A2668 0x19BB3CE8
	static void _0xA5F377B175A699C5(Any p0) { invoke<Void>(0x68F3BB2B8457B548, p0); } // 0xA5F377B175A699C5 0xE812925D
	static void _0x153973AB99FE8980(Entity p0, char* p1, float p2) { invoke<Void>(0x70C2DBAE2904E1EA, p0, p1, p2); } // 0x153973AB99FE8980 0x2BC93264
	static void _0x18EB48CFC41F2EA0(Any p0, float p1) { invoke<Void>(0x14F2413A60FF70C3, p0, p1); } // 0x18EB48CFC41F2EA0 0x308ED0EC
	static Any AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<Any>(0x8C852E3812B25E8C); } // 0x845FFC3A4FEEFA3E 0x86E995D1
	static BOOL PREPARE_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0x27971883A8701E73, eventName); } // 0x1E5185B72EF5158A 0x534A5C1C
	static BOOL CANCEL_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0x8821193EA2732C2C, eventName); } // 0x5B17A90291133DA5 0x89FF942D
	static BOOL TRIGGER_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0xB49DAD10DC051295, eventName); } // 0x706D57B0F50DA710 0xB6094948
	static Any _0xA097AB275061FB21() { return invoke<Any>(0x9837F65B2F302EDF); } // 0xA097AB275061FB21 0x2705C4D5
	static Any GET_MUSIC_PLAYTIME() { return invoke<Any>(0x81EC84CE8CCB60F8); } // 0xE7A0D23DC414507B 0xD633C809
	static void _0xFBE20329593DEC9D(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7A70867B1C254AF8, p0, p1, p2, p3); } // 0xFBE20329593DEC9D 0x53FC3FEC
	static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0x3DAB4C99E294A706); } // 0xB32209EFFDC04913 0xE6B033BF
	static void _0x70B8EC8FC108A634(BOOL p0, Any p1) { invoke<Void>(0xF938EB558A19916A, p0, p1); } // 0x70B8EC8FC108A634 0x95050CAD
	static void _0x149AEE66F0CB3A99(float p0, float p1) { invoke<Void>(0x69556C24DC554A33, p0, p1); } // 0x149AEE66F0CB3A99 0xE64F97A0
	static void _0x8BF907833BE275DE(float p0, float p1) { invoke<Void>(0x55BCDFFE5FE047B1, p0, p1); } // 0x8BF907833BE275DE
	static void _0x062D5EAD4DA2FA6A() { invoke<Void>(0xC84CE8CE596CB535); } // 0x062D5EAD4DA2FA6A 0xD87AF337
	static BOOL PREPARE_ALARM(char* alarmName) { return invoke<BOOL>(0x754F8E942F7D853F, alarmName); } // 0x9D74AE343DB65533 0x084932E8
	static void START_ALARM(char* alarmName, BOOL p2) { invoke<Void>(0x2097137B28577723, alarmName, p2); } // 0x0355EF116C4C97B2 0x703F524B
	static void STOP_ALARM(char* alarmName, BOOL toggle) { invoke<Void>(0x57A3EB106AEAE4F8, alarmName, toggle); } // 0xA1CADDCD98415A41 0xF987BE8C
	static void STOP_ALL_ALARMS(BOOL p0) { invoke<Void>(0x591CEB831749B00C, p0); } // 0x2F794A877ADD4C92 0xC3CB9DC6
	static BOOL IS_ALARM_PLAYING(char* alarmName) { return invoke<BOOL>(0x413789AF2E7F385E, alarmName); } // 0x226435CB96CCFC8C 0x9D8E1D23
	static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle veh) { return invoke<Hash>(0x133955D95356A9F3, veh); } // 0x02165D55000219AC 0xE84ABC19
	static Any _0xACB5DCCA1EC76840(Any p0) { return invoke<Any>(0x96349EE944BF31BC, p0); } // 0xACB5DCCA1EC76840 0xFD4B5B3B
	static void RESET_PED_AUDIO_FLAGS(Any p0) { invoke<Void>(0x09968673B9A175D3, p0); } // 0xF54BB7B61036F335 0xDF720C86
	static void _0xD2CC78CD3D0B50F9(Any p0, BOOL p1) { invoke<Void>(0x6582F11F2065B423, p0, p1); } // 0xD2CC78CD3D0B50F9 0xC307D531
	static void _0xBF4DC1784BE94DFA(Any p0, BOOL p1, Any p2) { invoke<Void>(0xCBF9E7BAE7070FAB, p0, p1, p2); } // 0xBF4DC1784BE94DFA
	static void _0x75773E11BA459E90(Any p0, BOOL p1) { invoke<Void>(0xCCB71973CD0011DD, p0, p1); } // 0x75773E11BA459E90
	static void _0xD57AAAE0E2214D11() { invoke<Void>(0xB13B2777A2413907); } // 0xD57AAAE0E2214D11
	static void _0x552369F549563AD5(BOOL p0) { invoke<Void>(0xE0A9922A01BEEFBE, p0); } // 0x552369F549563AD5 0x13EB5861
	static void _0x43FA0DFC5DF87815(Any p0, BOOL p1) { invoke<Void>(0x4571CEFD5A50B71F, p0, p1); } // 0x43FA0DFC5DF87815 0x7BED1872
	static void SET_AUDIO_FLAG(char* flagName, BOOL toggle) { invoke<Void>(0x0756AF366187C194, flagName, toggle); } // 0xB9EFD5C25018725A 0x1C09C9E0
	static Any PREPARE_SYNCHRONIZED_AUDIO_EVENT(Any p0, Any p1) { return invoke<Any>(0x2DF1DF653A0E225B, p0, p1); } // 0xC7ABCACA4985A766 0xE1D91FD0
	static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(Any p0, Any* p1) { return invoke<BOOL>(0x5DFE788ED8170D07, p0, p1); } // 0x029FE7CD1B7E2E75 0x7652DD49
	static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0xC8147979B093F6F0, p0); } // 0x8B2FD4560E55DD2D 0x507F3241
	static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0x119D077CB7A3B22D, p0); } // 0x92D6A88E64A94430 0xADEED2B4
	static void _0xC8EDE9BDBCCBA6D4(Any* p0, float p1, float p2, float p3) { invoke<Void>(0x06FA1D08E22561B0, p0, p1, p2, p3); } // 0xC8EDE9BDBCCBA6D4 0x55A21772
	static void _0x950A154B8DAB6185(char* p0, Ped p1) { invoke<Void>(0x3DDEBA0265D2554A, p0, p1); } // 0x950A154B8DAB6185 0xA17F9AB0
	static void _0x12561FCBB62D5B9C(Any p0) { invoke<Void>(0x88E94C2B463D2CE0, p0); } // 0x12561FCBB62D5B9C 0x62B43677
	static void _0x044DBAD7A7FA2BE5(char* p0, char* p1) { invoke<Void>(0x3153EBDFF4BBFD8A, p0, p1); } // 0x044DBAD7A7FA2BE5 0x8AD670EC
	static void _0xB4BBFD9CD8B3922B(char* p0) { invoke<Void>(0x8CD063048C5E8937, p0); } // 0xB4BBFD9CD8B3922B 0xD24B4D0C
	static void _0xE4E6DD5566D28C82() { invoke<Void>(0xA187389A7C8C656F); } // 0xE4E6DD5566D28C82 0x7262B5BA
	static Any _0x3A48AB4445D499BE() { return invoke<Any>(0x2EEA34492E6AF099); } // 0x3A48AB4445D499BE 0x93A44A1F
	static void _0x4ADA3F19BE4A6047(Any p0) { invoke<Void>(0x2BBA3F1788571FE4, p0); } // 0x4ADA3F19BE4A6047 0x13777A0B
	static void _0x0150B6FF25A9E2E5() { invoke<Void>(0xC5491272919944B0); } // 0x0150B6FF25A9E2E5 0x1134F68B
	static void _0xBEF34B1D9624D5DD(BOOL p0) { invoke<Void>(0x9569A7F9EFC0BE93, p0); } // 0xBEF34B1D9624D5DD 0xE0047BFD
	static void _0x806058BBDC136E06() { invoke<Void>(0x903896895766D68C); } // 0x806058BBDC136E06
	static Any _0x544810ED9DB6BBE6() { return invoke<Any>(0xC9CE28BE2BEDFD4E); } // 0x544810ED9DB6BBE6
	static Any _0x5B50ABB1FE3746F4() { return invoke<Any>(0xF764D13AF6FAC24E); } // 0x5B50ABB1FE3746F4
}

namespace CUTSCENE
{
	static void REQUEST_CUTSCENE(char* cutsceneName, int p1) { invoke<Void>(0x6946239981A418D8, cutsceneName, p1); } // 0x7A86743F475D9E09 0xB5977853
	static void _REQUEST_CUTSCENE_2(char* cutsceneName, int p1, int p2) { invoke<Void>(0xC9ED8FFB30E7C224, cutsceneName, p1, p2); } // 0xC23DE0E91C30B58C 0xD98F656A
	static void REMOVE_CUTSCENE() { invoke<Void>(0x6987F23FD8A8D8B0); } // 0x440AF51A3462B86F 0x8052F533
	static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xDF3F7A44D6400C56); } // 0xC59F528E9AB9F339 0xF9998582
	static BOOL HAS_THIS_CUTSCENE_LOADED(char* cutsceneName) { return invoke<BOOL>(0xF2C882CE346D9432, cutsceneName); } // 0x228D3D94F8A11C3C 0x3C5619F2
	static void _0x8D9DF6ECA8768583(Any p0) { invoke<Void>(0x8894F50D634D5984, p0); } // 0x8D9DF6ECA8768583 0x25A2CABC
	static BOOL _0xB56BBBCC2955D9CB() { return invoke<BOOL>(0xCAC1D33299EA11C3); } // 0xB56BBBCC2955D9CB 0xDD8878E9
	static BOOL _0x71B74D2AE19338D0(Any p0) { return invoke<BOOL>(0x24111FA5EFB6F83F, p0); } // 0x71B74D2AE19338D0 0x7B93CDAA
	static void _0x4C61C75BEE8184C2(Any* p0, Any p1, Any p2) { invoke<Void>(0xA626C1A83CE0A7A9, p0, p1, p2); } // 0x4C61C75BEE8184C2 0x47DB08A9
	static void _0x06A3524161C502BA(Any* p0) { invoke<Void>(0xE1790F56ABF16F3F, p0); } // 0x06A3524161C502BA
	static BOOL _0xA1C996C2A744262E(Any* p0) { return invoke<BOOL>(0x7D37922EA7F47D4A, p0); } // 0xA1C996C2A744262E
	static void _0xD00D76A7DFC9D852(Any* p0) { invoke<Void>(0x07584EFF2506B549, p0); } // 0xD00D76A7DFC9D852
	static Any _0x0ABC54DE641DC0FC(Any* p0) { return invoke<Any>(0x778A30C1F5804E42, p0); } // 0x0ABC54DE641DC0FC
	static void START_CUTSCENE(int p0) { invoke<Void>(0xCD18C12FDC3FB874, p0); } // 0x186D5CB5E7B0FF7B 0x210106F6
	static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int p3) { invoke<Void>(0x5FD3536520DF158D, x, y, z, p3); } // 0x1C9ADDA3244A1FBF 0x58BEA436
	static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0x445ABC6551819877, p0); } // 0xC7272775B4DC786E 0x5EE84DC7
	static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0x9656BB1F68387E70); } // 0xD220BDD222AC4A1E 0xF528A2AD
	static void SET_CUTSCENE_ORIGIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x99FACBC8CB0130A3, p0, p1, p2, p3, p4); } // 0xB812B3FD1C01CF27 0xB0AD7792
	static void _0x011883F41211432A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xBD747940AD3335AB, p0, p1, p2, p3, p4, p5, p6); } // 0x011883F41211432A
	static Any GET_CUTSCENE_TIME() { return invoke<Any>(0x6990DC1A99A254AC); } // 0xE625BEABBAFFDAB9 0x53F5B5AB
	static Any GET_CUTSCENE_TOTAL_DURATION() { return invoke<Any>(0x40A50AE12106B780); } // 0xEE53B14A19E480D4 0x0824EBE8
	static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xA4910923CA2E327B); } // 0x40C8656EDAEDD569 0xC9B6949D
	static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0x407BC09BBD9D4440); } // 0x7C0A893088881D57 0x5DED14B4
	static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xC317719223E13B66); } // 0x991251AFC3981F84 0xCCE2FE9D
	static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0x7C0379981B7E6E40); } // 0xD3C2E180A40F031E 0xA3A78392
	static Any GET_CUTSCENE_SECTION_PLAYING() { return invoke<Any>(0x3C66A17922A60A68); } // 0x49010A6A396553D8 0x1026F0D6
	static Any GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(Any* p0, Any p1) { return invoke<Any>(0xE9767DDB1DF1978E, p0, p1); } // 0x0A2E9FDB9A8C62F6 0x1D09ABC7
	static Any _0x583DF8E3D4AFBD98() { return invoke<Any>(0x07ECAE5066B48EA1); } // 0x583DF8E3D4AFBD98 0x5AE68AE6
	static Any _0x4CEBC1ED31E8925E(Any p0) { return invoke<Any>(0x5F3FEE4B81072789, p0); } // 0x4CEBC1ED31E8925E
	static void REGISTER_ENTITY_FOR_CUTSCENE(Any p0, Any* p1, Any p2, Any p3, Any p4) { invoke<Void>(0x6BF154720AFAC26B, p0, p1, p2, p3, p4); } // 0xE40C1C56DF95C2E8 0x7CBC3EC7
	static Any GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(Any* p0, Any p1) { return invoke<Any>(0xB5A5BBBE3805407B, p0, p1); } // 0xC0741A26499654CD 0x46D18755
	static void _0x7F96F23FA9B73327(Any p0) { invoke<Void>(0xA6F4C0952036DBFB, p0); } // 0x7F96F23FA9B73327
	static void SET_CUTSCENE_TRIGGER_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x1091F53844105FC6, p0, p1, p2, p3, p4, p5); } // 0x9896CE4721BE84BA 0x9D76D9DE
	static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(Any* p0, Any p1) { return invoke<BOOL>(0x70DD06B9BDB0A0CA, p0, p1); } // 0x645D0B458D8E17B5 0x55C30B26
	static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(Any* p0, Any p1) { return invoke<BOOL>(0xF467E68A540B1B48, p0, p1); } // 0x4C6A6451C79E4662 0x8FF5D3C4
	static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0x8D6FD7D962FDEB7F, p0); } // 0xB2CBCD0930DFB420 0xEDAE6C02
	static void _0xC61B86C9F61EB404(BOOL p0) { invoke<Void>(0xD88C3482EA86B6F5, p0); } // 0xC61B86C9F61EB404 0x35721A08
	static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x15D1AE21C7754435, p0, p1, p2, p3); } // 0x8093F23ABACCC7D4 0xD19EF0DD
	static void _0x20746F7B1032A3C7(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x0898502403A5CFE2, p0, p1, p2, p3); } // 0x20746F7B1032A3C7
	static void _0x06EE9048FD080382(BOOL p0) { invoke<Void>(0x0CB5F22A85788312, p0); } // 0x06EE9048FD080382
	static int _0xA0FE76168A189DDB() { return invoke<int>(0xD0570FF450787B16); } // 0xA0FE76168A189DDB
	static void _0x2F137B508DE238F2(BOOL p0) { invoke<Void>(0x4A3D98257B115866, p0); } // 0x2F137B508DE238F2 0x8338DA1D
	static void _0xE36A98D8AB3D3C66(BOOL p0) { invoke<Void>(0x90ADE5E1B5F4B68F, p0); } // 0xE36A98D8AB3D3C66 0x04377C10
	static Any _0x5EDEF0CF8C1DAB3C() { return invoke<Any>(0x3C8DFE028C880811); } // 0x5EDEF0CF8C1DAB3C 0xDBD88708
	static void _0x41FAA8FB2ECE8720(BOOL p0) { invoke<Void>(0xA6751A7AAFB1A074, p0); } // 0x41FAA8FB2ECE8720 0x28D54A7F
	static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { invoke<Void>(0x63E6A76991D6CFC6); } // 0x2131046957F31B04 0xB60CFBB9
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION(Any* p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA845063673EFBCA5, p0, p1, p2, p3, p4); } // 0xBA01E7B6DEEFBBC9 0x6AF994A1
	static void _0x2A56C06EBEF2B0D9(Any* p0, Any p1, Any p2) { invoke<Void>(0x7A6E96CA8880AFEB, p0, p1, p2); } // 0x2A56C06EBEF2B0D9 0x1E7DA95E
	static BOOL DOES_CUTSCENE_ENTITY_EXIST(Any* p0, Any p1) { return invoke<BOOL>(0xB8A62A1D7932B484, p0, p1); } // 0x499EF20C5DB25C59 0x58E67409
	static void _0x0546524ADE2E9723(Any* p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x712525D5B6D169EE, p0, p1, p2, p3, p4); } // 0x0546524ADE2E9723 0x22E9A9DE
	static Any _0x708BDD8CD795B043() { return invoke<Any>(0xF574829AAE4F6157); } // 0x708BDD8CD795B043 0x4315A7C5
}

namespace INTERIOR
{
	static Any GET_INTERIOR_GROUP_ID(int interiorID) { return invoke<Any>(0x7933C96E6F1F08FD, interiorID); } // 0xE4A84ABF135EF91A 0x09D6376F
	static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(int interiorID, float x, float y, float z) { return invoke<Vector3>(0x51652E55077C9492, interiorID, x, y, z); } // 0x9E3B3E6D66F6E22F 0x7D8F26A1
	static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0xA1D9579C5525304B); } // 0xBC72B5D7A1CBD54D 0x55226C13
	static BOOL IS_VALID_INTERIOR(int interiorID) { return invoke<BOOL>(0x72C176FA688CE74D, interiorID); } // 0x26B0E73D7EAAF4D3 0x39C0B635
	static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0xB7081F2F3AF041D0, entity); } // 0xB365FC0C4E27FFA7 0x7DDADB92
	static void FORCE_ROOM_FOR_ENTITY(Entity entity, int interiorID, Hash roomHashKey) { invoke<Void>(0xFA64D091CB09FA9C, entity, interiorID, roomHashKey); } // 0x52923C4710DD9907 0x10BD4435
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xA1BD23B41765C6D6, entity); } // 0x47C2A06D4F5F424B 0xE4ACF8C3
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0x4B2402E6A00E9163, entity); } // 0x399685DB942336BC 0x91EA80EF
	static int GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<int>(0x16A396814EC162D8, entity); } // 0x2107BA504071A6BB 0x5C644614
	static void _0x82EBB79E258FA2B7(Entity entity, int interiorID) { invoke<Void>(0xC442297E8EEF1642, entity, interiorID); } // 0x82EBB79E258FA2B7 0xE645E162
	static void _0x920D853F3E17F1DA(int interiorID, Hash roomHashKey) { invoke<Void>(0xFC7F8BA9E54D9F71, interiorID, roomHashKey); } // 0x920D853F3E17F1DA 0xD79803B5
	static void _0xAF348AFCB575A441(char* roomName) { invoke<Void>(0xA7667D1639F16A5C, roomName); } // 0xAF348AFCB575A441 0x1F6B4B13
	static void _0x405DC2AEF6AF95B9(Hash roomHashKey) { invoke<Void>(0xC33583F32F03F68D, roomHashKey); } // 0x405DC2AEF6AF95B9 0x0E9529CC
	static Hash _GET_ROOM_KEY_FROM_GAMEPLAY_CAM() { return invoke<Hash>(0x2D5A188A51CA7A82); } // 0xA6575914D2A0B450 0x4FF3D3F5
	static void _0x23B59D8912F94246() { invoke<Void>(0x1F72399540C69FEA); } // 0x23B59D8912F94246 0x617DC75D
	static int GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<int>(0xDACF94AE8FA53F42, x, y, z); } // 0xB0F7F8663821D9C3 0xA17FBF37
	static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Any pickup, char* roomName) { invoke<Void>(0xFCE2DB7416B4A560, pickup, roomName); } // 0x3F6167F351168730 0xA2A73564
	static void _0x2CA429C029CCF247(int interiorID) { invoke<Void>(0x493EEE1A031FD768, interiorID); } // 0x2CA429C029CCF247 0x3ADA414E
	static void UNPIN_INTERIOR(int interiorID) { invoke<Void>(0xBC4C3BADA8503A20, interiorID); } // 0x261CCE7EED010641 0xFCFF792A
	static BOOL IS_INTERIOR_READY(int interiorID) { return invoke<BOOL>(0x319560E9F4C27299, interiorID); } // 0x6726BDCCC1932F0E 0xE1EF6450
	static Any _0x4C2330E61D3DEB56(int interiorID) { return invoke<Any>(0x7CCBC14FA20CE3E6, interiorID); } // 0x4C2330E61D3DEB56
	static int GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, char* interiorType) { return invoke<int>(0x07BE5BF18FEF759E, x, y, z, interiorType); } // 0x05B7A89BD78797FC 0x96525B06
	static int _0xF0F77ADB9F67E79D(float x, float y, float z, Any unknown) { return invoke<int>(0x7255DB31FC35B373, x, y, z, unknown); } // 0xF0F77ADB9F67E79D
	static BOOL _ARE_COORDS_COLLIDING_WITH_EXTERIOR(float x, float y, float z) { return invoke<BOOL>(0x9EAA10271825C2DB, x, y, z); } // 0xEEA5AC2EDA7C33E8 0x7762249C
	static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<int>(0xB510B10405DCDDFA, x, y, z); } // 0xEC4CF9FCB29A4424 0x7ED33DC1
	static void _ENABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0xA57D09C0569A13B9, interiorID, propName); } // 0x55E86AF2712B36A1 0xC80A5DDF
	static void _DISABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0xB88B5C1BDC382AEB, interiorID, propName); } // 0x420BD37289EEE162 0xDBA768A1
	static BOOL _IS_INTERIOR_PROP_ENABLED(int interiorID, char* propName) { return invoke<BOOL>(0xF1A444E9FA0716A5, interiorID, propName); } // 0x35F7DD45E8C0A16D 0x39A3CC6F
	static void REFRESH_INTERIOR(int interiorID) { invoke<Void>(0x44C7C728D0CDD919, interiorID); } // 0x41F37C3427C75AE0 0x9A29ACE6
	static void _HIDE_MAP_OBJECT_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0x40687E8F7A49B97F, mapObjectHash); } // 0xA97F257D0151A6AB 0x1F375B4C
	static void DISABLE_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0x11ABA5583C494FAD, interiorID, toggle); } // 0x6170941419D7D8EC 0x093ADEA5
	static BOOL IS_INTERIOR_DISABLED(int interiorID) { return invoke<BOOL>(0xEE57F76AC9F2B20C, interiorID); } // 0xBC5115A5A939DD15 0x81F34C71
	static void CAP_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0x3CB5223C17FAF3F6, interiorID, toggle); } // 0xD9175F941610DB54 0x34E735A6
	static BOOL IS_INTERIOR_CAPPED(int interiorID) { return invoke<BOOL>(0x0201083D93067366, interiorID); } // 0x92BAC8ACF88CEC26 0x18B17C80
	static void _0x9E6542F0CE8E70A3(BOOL toggle) { invoke<Void>(0xF673E19DAC6909CE, toggle); } // 0x9E6542F0CE8E70A3 0x5EF9C5C2
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, Any camera, BOOL p3, BOOL p4) { invoke<Void>(0x2D5A415AD869CB5F, render, ease, camera, p3, p4); } // 0x07E5B515DB0636FC 0x74337969
	static void _0xC819F3CBB62BF692(Any p0, Any p1, Any p2) { invoke<Void>(0xD2C0F2FD77D871FA, p0, p1, p2); } // 0xC819F3CBB62BF692 0xD3C08183
	static Cam CREATE_CAM(char* camName, BOOL p1) { return invoke<Cam>(0x669DFEC6C5E8A812, camName, p1); } // 0xC3981DCE61D9E13F 0xE9BF2A7D
	static Cam CREATE_CAM_WITH_PARAMS(char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xF442D2875C1C4699, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0xB51194800B257161 0x23B02F15
	static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xA93B9A3C4A092CB3, camHash, p1); } // 0x5E3CF89C6BCCA67D 0x5D6739AE
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, Any p9) { return invoke<Cam>(0x12F59429E5E012F4, camHash, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x6ABFA3E16460F22D 0x0688BE9A
	static void DESTROY_CAM(Cam cam, BOOL destroy) { invoke<Void>(0x50C86ABC13A071F8, cam, destroy); } // 0x865908C81A2C22E9 0xC39302BD
	static void DESTROY_ALL_CAMS(BOOL destroy) { invoke<Void>(0xBF45BEDB6EE0BB30, destroy); } // 0x8E5FB15663F79120 0x10C151CE
	static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0x0D2E3F017CBCB8A8, cam); } // 0xA7A932170592B50E 0x1EF89DC0
	static void SET_CAM_ACTIVE(Any cam, BOOL active) { invoke<Void>(0x07553DAC96600443, cam, active); } // 0x026FB97D0A425F84 0x064659C2
	static BOOL IS_CAM_ACTIVE(Any cam) { return invoke<BOOL>(0xC0A42281C0F88A94, cam); } // 0xDFB2B516207D3534 0x4B58F177
	static BOOL IS_CAM_RENDERING(Any p0) { return invoke<BOOL>(0xD369B57993C85A50, p0); } // 0x02EC0AF5C5A49B7A 0x6EC6B5B2
	static Cam GET_RENDERING_CAM() { return invoke<Cam>(0xCF05B25EAAD660C4); } // 0x5234F9F10919EABA 0x0FCF4DF1
	static Vector3 GET_CAM_COORD(Any cam) { return invoke<Vector3>(0x9BB4C18693988436, cam); } // 0xBAC038F7459AE5AE 0x7C40F09C
	static Vector3 GET_CAM_ROT(Any cam, Any p1) { return invoke<Vector3>(0x8CA90C0D9A0E33D9, cam, p1); } // 0x7D304C1C955E3E12 0xDAC84C9F
	static float GET_CAM_FOV(Any cam) { return invoke<float>(0xB179038A0082A814, cam); } // 0xC3330A45CCCDB26A 0xD6E9FCF5
	static float GET_CAM_NEAR_CLIP(Any cam) { return invoke<float>(0x70CF62134C9C56DB, cam); } // 0xC520A34DAFBF24B1 0xCFCD35EE
	static float GET_CAM_FAR_CLIP(Any cam) { return invoke<float>(0xC78D087B470A8770, cam); } // 0xB60A9CFEB21CA6AA 0x09F119B8
	static float GET_CAM_FAR_DOF(Any cam) { return invoke<float>(0x75EE45AACBDB7BBE, cam); } // 0x255F8DAFD540D397 0x98C5CCE9
	static void SET_CAM_PARAMS(Any cam, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xD769455216FEB03D, cam, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xBFD8727AEA3CCEBA 0x2167CEBF
	static void SET_CAM_COORD(Any cam, float posX, float posY, float posZ) { invoke<Void>(0x8E4B7BCF3F153D3C, cam, posX, posY, posZ); } // 0x4D41783FB745E42E 0x7A8053AF
	static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int p4) { invoke<Void>(0x00D89D1097963F54, cam, rotX, rotY, rotZ, p4); } // 0x85973643155D0B07 0xEE38B3C1
	static void SET_CAM_FOV(Any cam, float fieldOfView) { invoke<Void>(0x033BAA756AF85975, cam, fieldOfView); } // 0xB13C14F66A00D047 0xD3D5D74F
	static void SET_CAM_NEAR_CLIP(Any cam, float nearClip) { invoke<Void>(0xF3FCD007B6955B38, cam, nearClip); } // 0xC7848EFCCC545182 0x46DB13B1
	static void SET_CAM_FAR_CLIP(Any cam, float farClip) { invoke<Void>(0xD17B21801B84F333, cam, farClip); } // 0xAE306F2A904BF86E 0x0D23E381
	static void SET_CAM_MOTION_BLUR_STRENGTH(Any cam, float blur) { invoke<Void>(0xF73F6C6F30EACF6F, cam, blur); } // 0x6F0F77FBA9A8F2E6 0xFD6E0D67
	static void SET_CAM_NEAR_DOF(Any cam, float nearDOF) { invoke<Void>(0x649E3E2650D91F9E, cam, nearDOF); } // 0x3FA4BF0A7AB7DE2C 0xF28254DF
	static void SET_CAM_FAR_DOF(Any cam, float farDOF) { invoke<Void>(0x6C987E89C1484886, cam, farDOF); } // 0xEDD91296CD01AEE0 0x58515E8E
	static void SET_CAM_DOF_STRENGTH(Any cam, float dofStrength) { invoke<Void>(0xA8FB79C2191831FA, cam, dofStrength); } // 0x5EE29B4D7D5DF897 0x3CC4EB3F
	static void SET_CAM_DOF_PLANES(Any cam, float p1, float p2, float p3, float p4) { invoke<Void>(0xA6BE2A5CC2B775DF, cam, p1, p2, p3, p4); } // 0x3CF48F6F96E749DC 0xAD6C2B8F
	static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0x53526DBFBE1A7C82, cam, toggle); } // 0x16A96863A17552BB 0x8306C256
	static void SET_USE_HI_DOF() { invoke<Void>(0xFFB4B63E941D6EB8); } // 0xA13B0222F3D94A94 0x8BBF2950
	static void _0xF55E4046F6F831DC(Any p0, float p1) { invoke<Void>(0x2D04ECB75A8FAF27, p0, p1); } // 0xF55E4046F6F831DC
	static void _0xE111A7C0D200CBC5(Any p0, float p1) { invoke<Void>(0x62E7A8025D8A00A5, p0, p1); } // 0xE111A7C0D200CBC5
	static void _0x7DD234D6F3914C5B(Any p0, float p1) { invoke<Void>(0x02E91135E0DDBE11, p0, p1); } // 0x7DD234D6F3914C5B
	static void _0xC669EEA5D031B7DE(Any p0, float p1) { invoke<Void>(0xB7E1B974ED60E267, p0, p1); } // 0xC669EEA5D031B7DE
	static void _0xC3654A441402562D(Any p0, float p1) { invoke<Void>(0xBBA6D4D9B6115425, p0, p1); } // 0xC3654A441402562D
	static void _0x2C654B4943BDDF7C(Any p0, float p1) { invoke<Void>(0xF0111C33AD2B27D3, p0, p1); } // 0x2C654B4943BDDF7C
	static void ATTACH_CAM_TO_ENTITY(Any cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL p5) { invoke<Void>(0xC65E66FE2F1B36F5, cam, entity, xOffset, yOffset, zOffset, p5); } // 0xFEDB7D269E8C60E3 0xAD7C45F6
	static void ATTACH_CAM_TO_PED_BONE(int cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0xB50317BCB9C22E0C, cam, ped, boneIndex, x, y, z, heading); } // 0x61A3DBA14AB7F411 0x506BB35C
	static void DETACH_CAM(int camHandle) { invoke<Void>(0xB4A3E9E17CD4384A, camHandle); } // 0xA2FABBE87F4BAD82 0xF4FBF14A
	static void SET_CAM_INHERIT_ROLL_VEHICLE(int cam, Any p1) { invoke<Void>(0xD1A5B7BEA2954857, cam, p1); } // 0x45F1DE9C34B93AE6 0xE4BD5342
	static void POINT_CAM_AT_COORD(Any cam, float x, float y, float z) { invoke<Void>(0x87F3DAA833126372, cam, x, y, z); } // 0xF75497BB865F0803 0x914BC21A
	static void POINT_CAM_AT_ENTITY(Any cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x02A1B2E42F6521E6, cam, entity, p2, p3, p4, p5); } // 0x5640BFF86B16E8DC 0x7597A0F7
	static void POINT_CAM_AT_PED_BONE(int cam, int ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xE0342BEE8F7D9572, cam, ped, boneIndex, x, y, z, p6); } // 0x68B2B5F33BA63C41 0x09F47049
	static void STOP_CAM_POINTING(int cam) { invoke<Void>(0xC0C6B447E842233A, cam); } // 0xF33AB75780BA57DE 0x5435F6A5
	static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0x416F1AEDB7A8877E, cam, toggle); } // 0x8C1DC7770C51DC8D 0x0C74F9AF
	static void _0x661B5C8654ADD825(Any p0, BOOL p1) { invoke<Void>(0x544E5393AEB06812, p0, p1); } // 0x661B5C8654ADD825 0xE1A0B2F1
	static void _0xA2767257A320FC82(Any p0, BOOL p1) { invoke<Void>(0xE9A3B9F3AC19054A, p0, p1); } // 0xA2767257A320FC82
	static void _0x271017B9BA825366(Any p0, BOOL p1) { invoke<Void>(0x8B40193F3CAE7E5E, p0, p1); } // 0x271017B9BA825366 0x43220969
	static void SET_CAM_DEBUG_NAME(Cam camera, char* name) { invoke<Void>(0xDFD740A00F1F7EE8, camera, name); } // 0x1B93E0107865DD40 0x9B00DF3F
	static void ADD_CAM_SPLINE_NODE(int camera, float x, float y, float z, float xRot, float yRot, float zRot, int p7, int p8, int p9) { invoke<Void>(0x694DD9C0BB3EE7CD, camera, x, y, z, xRot, yRot, zRot, p7, p8, p9); } // 0x8609C75EC438FB3B 0xAD3C7EAA
	static void _0x0A9F2A468B328E74(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x17387518185AD708, p0, p1, p2, p3); } // 0x0A9F2A468B328E74 0x30510511
	static void _0x0FB82563989CF4FB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3AA1A35AC1F0562E, p0, p1, p2, p3); } // 0x0FB82563989CF4FB 0xBA6C085B
	static void _0x609278246A29CA34(Any p0, Any p1, Any p2) { invoke<Void>(0x14384EBBB0988D5A, p0, p1, p2); } // 0x609278246A29CA34 0xB4737F03
	static void SET_CAM_SPLINE_PHASE(int cam, float p1) { invoke<Void>(0x24198B09B5FDA2A0, cam, p1); } // 0x242B5874F0A4E052 0xF0AED233
	static float GET_CAM_SPLINE_PHASE(int cam) { return invoke<float>(0xB8646911ED8AE97D, cam); } // 0xB5349E36C546509A 0x39784DD9
	static float GET_CAM_SPLINE_NODE_PHASE(Any p0) { return invoke<float>(0xCBC868924ACFEEDF, p0); } // 0xD9D0E694C8282C96 0x7B9522F6
	static void SET_CAM_SPLINE_DURATION(int cam, int timeDuration) { invoke<Void>(0xB2A163916F814BA0, cam, timeDuration); } // 0x1381539FEE034CDA 0x3E91FC8A
	static void _0xD1B0F412F109EA5D(Any p0, Any p1) { invoke<Void>(0x48F3280EF5355E65, p0, p1); } // 0xD1B0F412F109EA5D 0x15E141CE
	static BOOL GET_CAM_SPLINE_NODE_INDEX(int cam) { return invoke<BOOL>(0xA17C90803258E309, cam); } // 0xB22B17DF858716A6 0xF8AEB6BD
	static void _0x83B8201ED82A9A2D(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0x7255771D50F611E6, p0, p1, p2, p3); } // 0x83B8201ED82A9A2D 0x21D275DA
	static void _0xA6385DEB180F319F(Any p0, Any p1, float p2) { invoke<Void>(0xB2796D1DE87A2136, p0, p1, p2); } // 0xA6385DEB180F319F 0xA3BD9E94
	static void OVERRIDE_CAM_SPLINE_VELOCITY(int cam, int p1, float p2, float p3) { invoke<Void>(0xE58B5B7BB2C338D8, cam, p1, p2, p3); } // 0x40B62FA033EB0346 0x326A17E2
	static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Any p0, Any p1, float p2, float p3) { invoke<Void>(0xB00788506E01E4FC, p0, p1, p2, p3); } // 0x7DCF7C708D292D55 0x633179E6
	static void _0x7BF1A54AE67AC070(Any p0, Any p1, Any p2) { invoke<Void>(0x723D2300E51339F5, p0, p1, p2); } // 0x7BF1A54AE67AC070 0xC90B2DDC
	static BOOL IS_CAM_SPLINE_PAUSED(Any p0) { return invoke<BOOL>(0xB5F54C407568A88A, p0); } // 0x0290F35C0AD97864 0x60B34FF5
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, BOOL easeLocation, BOOL easeRotation) { invoke<Void>(0xF13B03E3D574D5F1, camTo, camFrom, duration, easeLocation, easeRotation); } // 0x9FBDA379383A52A4 0x7983E7F0
	static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0xE006B634C7488210, cam); } // 0x036F97C908C2B52C 0x7159CB5D
	static void SHAKE_CAM(Cam cam, char* type, float amplitude) { invoke<Void>(0xE54CCCC537E33A2F, cam, type, amplitude); } // 0x6A25241C340D3822 0x1D4211B0
	static void ANIMATED_SHAKE_CAM(Cam cam, char* p1, char* p2, char* p3, float amplitude) { invoke<Void>(0x50B69BDBF684D07F, cam, p1, p2, p3, amplitude); } // 0xA2746EEAE3E577CD 0xE1168767
	static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xB9A03175F1C0EC4E, cam); } // 0x6B24BFE83A2BE47B 0x0961FD9B
	static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0x95CDEE1B0E45B05E, cam, amplitude); } // 0xD93DB43B82BC0D00 0x60FF6382
	static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0x8A33BD71F3FB5A6A, cam, p1); } // 0xBDECF64367884AC3 0x40D0EB87
	static void _0xF4C8CF9E353AFECA(char* p0, float p1) { invoke<Void>(0x2716A081E898444A, p0, p1); } // 0xF4C8CF9E353AFECA 0x2B0F05CD
	static void _0xC2EAE3FB8CDBED31(char* p0, char* p1, char* p2, float p3) { invoke<Void>(0x063AD94590986A0D, p0, p1, p2, p3); } // 0xC2EAE3FB8CDBED31 0xCB75BD9C
	static Any _0xC912AF078AF19212() { return invoke<Any>(0xD7BD59EF8A498940); } // 0xC912AF078AF19212 0x6AEFE6A5
	static void _0x1C9D7949FA533490(BOOL p0) { invoke<Void>(0x638B6A0DAE124D02, p0); } // 0x1C9D7949FA533490 0x26FCFB96
	static BOOL PLAY_CAM_ANIM(Cam cam, char* animName, char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0x128C333B85F7D23D, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); } // 0x9A2D0FB2E7852392 0xBCEFB87E
	static BOOL IS_CAM_PLAYING_ANIM(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x0B3ADE2C1B0678A2, p0, p1, p2); } // 0xC90621D8A0CEECF2 0xB998CB49
	static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0x6E1769ABEFBABF2C, cam, phase); } // 0x4145A4C44FF3B5A6 0x3CB1D17F
	static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0x1B38A54ACE88C199, cam); } // 0xA10B2DB49E92A6B0 0x345F72D0
	static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, char* p2, char* p3) { return invoke<BOOL>(0x7EB0D56EE8F8F8E8, p0, p1, p2, p3); } // 0xE32EFE9AB4A9AA0C 0x9458459E
	static void _0x503F5920162365B2(Any p0, float p1, float p2, float p3) { invoke<Void>(0x0329539E64D09ADE, p0, p1, p2, p3); } // 0x503F5920162365B2 0x56F9ED27
	static void _0xF9D02130ECDD1D77(Any p0, float p1) { invoke<Void>(0xE3A2D539BE35495D, p0, p1); } // 0xF9D02130ECDD1D77 0x71570DBA
	static void _0xC91C6C55199308CA(Any p0, float p1, float p2, float p3) { invoke<Void>(0x90AF64CEA9F5BDB5, p0, p1, p2, p3); } // 0xC91C6C55199308CA 0x60B345DE
	static void _0xC8B5C4A79CC18B94(Any p0) { invoke<Void>(0x356DE7184D918F45, p0); } // 0xC8B5C4A79CC18B94 0x44473EFC
	static BOOL _0x5C48A1D6E3B33179(Any p0) { return invoke<BOOL>(0x06B34E472E04297D, p0); } // 0x5C48A1D6E3B33179 0xDA931D65
	static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0x2C22E7D1C80A53EF); } // 0xB16FCE9DDC7BA182 0x9CAA05FA
	static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xB20CA7A3EE29687A); } // 0x5A859503B0C08678 0x4F37276D
	static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0x44F90FBF2C1E8021); } // 0x797AC7CB535BA28F 0x79275A57
	static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0x9AB98132476504BC); } // 0x5C544BC6C57AC575 0xC7C82800
	static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0xA0303A6B8C99DD6A, duration); } // 0xD4E8E24955024033 0x66C1BDEE
	static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0xF215E3B07B7990BC, duration); } // 0x891B5B39AC6302AF 0x89D01805
	static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0x00EC874B4D5FCE61, p0, p1); } // 0xDCD4EA924F42D01A 0x1A75DC9A
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0xACDF5DE746C18841); } // 0x14D6F5678D8F1B37 0x9388CF79
	static Vector3 GET_GAMEPLAY_CAM_ROT(Any p0) { return invoke<Vector3>(0x6A24DA4D96755021, p0); } // 0x837765A25378F0BB 0x13A010B5
	static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0x5D35253F3F753F6A); } // 0x65019750A0324133 0x4D6B3BFA
	static void _0x487A82C650EB7799(float p0) { invoke<Void>(0x828E2FE4BF9B3DDF, p0); } // 0x487A82C650EB7799 0xA6E73135
	static void _0x0225778816FDC28C(float p0) { invoke<Void>(0x5001EA127FDD8208, p0); } // 0x0225778816FDC28C 0x1126E37C
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0xF81B1BC329E97BDD); } // 0x743607648ADD4587 0xCAF839C2
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0x8BDD755F07063522, heading); } // 0xB4EC2312F4E5B1F1 0x20C6217C
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0x7D6F3EA7A4634D65); } // 0x3A6867B4845BEDA2 0xFC5A4946
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { invoke<Void>(0x2A7D387AD73F1D15, x, Value2); } // 0x6D0858B8EDFD2B7D 0x6381B963
	static void _SET_GAMEPLAY_CAM_RAW_YAW(float yaw) { invoke<Void>(0x4F2266E0E67762B0, yaw); } // 0x103991D4A307D472
	static void _SET_GAMEPLAY_CAM_RAW_PITCH(float pitch) { invoke<Void>(0x3520C88C443FE1BC, pitch); } // 0x759E13EBC1C15C5A
	static void _0x469F2ECDEC046337(BOOL p0) { invoke<Void>(0x32D24A99B312AF88, p0); } // 0x469F2ECDEC046337
	static void SHAKE_GAMEPLAY_CAM(char* shakeName, float intensity) { invoke<Void>(0xF739099EF2A2F292, shakeName, intensity); } // 0xFD55E49555E017CF 0xF2EFE660
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0x9CE7F23542F47D14); } // 0x016C090630DF1F89 0x3457D681
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0xDD90E0980BB277E2, amplitude); } // 0xA87E00932DB4D85D 0x9219D44A
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0x684D46085CBC939C, p0); } // 0x0EF93E9F3D08C178 0xFD569E4E
	static void _0x8BBACBF51DA047A8(Any p0) { invoke<Void>(0xAA5A22F25480AB29, p0); } // 0x8BBACBF51DA047A8 0x7D3007A2
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0x76E840F466FECF8E); } // 0x39B5D1B10383F0C8 0x0EF276DA
	static BOOL _0x3044240D2E0FA842() { return invoke<BOOL>(0x3923D30D178C15EF); } // 0x3044240D2E0FA842 0xC0B00C20
	static BOOL _0x705A276EBFF3133D() { return invoke<BOOL>(0x6809AD9B44609E7E); } // 0x705A276EBFF3133D 0x60C23785
	static void _0xDB90C6CCA48940F1(BOOL p0) { invoke<Void>(0xB139CC01E7D87C3E, p0); } // 0xDB90C6CCA48940F1 0x20BFF6E5
	static void _ENABLE_CROSSHAIR_THIS_FRAME() { invoke<Void>(0xA7E3C9C7E0DE3C5B); } // 0xEA7F0AD7E9BA676F 0xA61FF9AC
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0x1D8A198427AB65AD); } // 0x70FDA869F3317EA9 0x33C83F17
	static void _0x2AED6301F67007D5(Any p0) { invoke<Void>(0xECB0D8970926D5B1, p0); } // 0x2AED6301F67007D5 0x2701A9AD
	static void _0x49482F9FCD825AAA(Any p0) { invoke<Void>(0xBAD934A9F72CBF71, p0); } // 0x49482F9FCD825AAA 0xC4736ED3
	static void _0xFD3151CD37EA2245(Any p0) { invoke<Void>(0x43E9D00179977190, p0); } // 0xFD3151CD37EA2245
	static void _0xDD79DF9F4D26E1C9() { invoke<Void>(0x092B01E376AB3923); } // 0xDD79DF9F4D26E1C9 0x6B0E9D57
	static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0xE514F14357BDEECF, x, y, z, radius); } // 0xE33D59DA70B58FDF 0xDD1329E2
	static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0x73805C13A04651C3); } // 0xC6D3D26810C8E0F9 0x9F9E856C
	static BOOL SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(char* p0, int p1) { return invoke<BOOL>(0x923105178C305688, p0, p1); } // 0x44A113DD6FFC48D1 0x1425F6AC
	static void _0x271401846BD26E92(BOOL p0, BOOL p1) { invoke<Void>(0x2597C0A34F684673, p0, p1); } // 0x271401846BD26E92 0x8DC53629
	static void _0xC8391C309684595A() { invoke<Void>(0x33D91633A2B7C650); } // 0xC8391C309684595A 0x1F9DE6E4
	static void _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { invoke<Void>(0x74ECB7703A3B4779, minimum, maximum); } // 0x8F993D26E0CA5E8E 0x749909AC
	static void _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { invoke<Void>(0x34507405C3F30CE9, minimum, maximum); } // 0xA516C198B7DCA1E1 0xFA3A16E7
	static void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float _distance) { invoke<Void>(0x06145D01734B9977, p0, _distance); } // 0xDF2E1F7742402E81 0x77340650
	static void _0xE9EA16D6E54CDCA4(Vehicle p0, int p1) { invoke<Void>(0x25A164AB4221E1CE, p0, p1); } // 0xE9EA16D6E54CDCA4 0x4B22C5CB
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0x55A896CBD8416411); } // 0xDE2EF5DA284CC8DF
	static void _0x59424BD75174C9B1() { invoke<Void>(0xEE125916A74FC2A9); } // 0x59424BD75174C9B1
	static Any GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<Any>(0xF2A068382B99AC14); } // 0x33E6C8EFD0CD93E9 0x57583DF1
	static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xFA461E82A81FEF04); } // 0x8D4D46230B2C353A 0xA65FF946
	static void SET_FOLLOW_PED_CAM_VIEW_MODE(Any p0) { invoke<Void>(0x0AFFDD3BC4F170F9, p0); } // 0x5A4F9EDF1673F704 0x495DBE8D
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0x16FD96008A4787C8); } // 0xCBBDE6D335D6D496 0x8DD49B77
	static void _0x91EF6EE6419E5B97(BOOL p0) { invoke<Void>(0x00A8A1F2BE20D24F, p0); } // 0x91EF6EE6419E5B97 0x9DB5D391
	static void _0x9DFE13ECDC1EC196(BOOL p0, BOOL p1) { invoke<Void>(0xA046C2450420361B, p0, p1); } // 0x9DFE13ECDC1EC196 0x92302899
	static Any GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<Any>(0x3F7C3078AE3BD74B); } // 0xEE82280AB767B690 0x8CD67DE3
	static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(Any p0) { invoke<Void>(0xB95C16558F8BFC6A, p0); } // 0x19464CB6E4078C8A 0x8F55EBBE
	static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0x9A86F9EDFD899454); } // 0xA4FF579AC0E3AAAE 0xA4B4DB03
	static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int mode) { invoke<Void>(0x2A132469EEF38581, mode); } // 0xAC253D7842768F48 0xC4FBBBD3
	static Any _0xEE778F8C7E1142E2(Any p0) { return invoke<Any>(0x819C3E64C255229B, p0); } // 0xEE778F8C7E1142E2 0xF3B148A6
	static void _0x2A2173E46DAECD12(Any p0, Any p1) { invoke<Void>(0x08F3A8D800DC9D48, p0, p1); } // 0x2A2173E46DAECD12 0x1DEBCB45
	static Any _0x19CAFA3C87F7C2FF() { return invoke<Any>(0xCCC8FE2C71D0E93E); } // 0x19CAFA3C87F7C2FF
	static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x62B4986EA88E929B); } // 0x68EDDA28A5976D07 0xC24B4F6F
	static Any _0x74BD83EA840F6BC9() { return invoke<Any>(0x27D0D9FF42DF386F); } // 0x74BD83EA840F6BC9 0x8F320DE4
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xE228E561BF27BBD0); } // 0x5E346D934122613F 0xD6280468
	static void _0x1A31FE0049E542F6() { invoke<Void>(0x0A2261DDCE597766); } // 0x1A31FE0049E542F6 0x1BAA7182
	static float _GET_GAMEPLAY_CAM_ZOOM() { return invoke<float>(0xE08072E3BF45CBDE); } // 0x7EC52CC40597D170 0x33951005
	static void _0x70894BD0915C5BCA(float p0) { invoke<Void>(0xB75D32757DC152F1, p0); } // 0x70894BD0915C5BCA 0x9F4AF763
	static void _0xCED08CBE8EBB97C7(float p0, float p1) { invoke<Void>(0x895C803F305EE352, p0, p1); } // 0xCED08CBE8EBB97C7 0x68BA0730
	static void _0x2F7F2B26DD3F18EE(float p0, float p1) { invoke<Void>(0xDAB4A9D984810171, p0, p1); } // 0x2F7F2B26DD3F18EE 0x2F29F0D5
	static void _0xBCFC632DB7673BF0(float p0, float p1) { invoke<Void>(0x4814B9152A1AA407, p0, p1); } // 0xBCFC632DB7673BF0 0x76DAC96C
	static void _0x0AF7B437918103B3(float p0) { invoke<Void>(0x866BE5029CD631A5, p0); } // 0x0AF7B437918103B3 0x0E21069D
	static void _0x42156508606DE65E(float p0) { invoke<Void>(0x1208AA7634DD92CA, p0); } // 0x42156508606DE65E 0x71E9C63E
	static void _0x4008EDF7D6E48175(BOOL p0) { invoke<Void>(0x89CCDD379D9DBA1D, p0); } // 0x4008EDF7D6E48175 0xD1EEBC45
	static Vector3 _GET_GAMEPLAY_CAM_COORDS() { return invoke<Vector3>(0xDBAACFEF5824A69B); } // 0xA200EB1EE790F448 0x9C84BDA0
	static Vector3 _GET_GAMEPLAY_CAM_ROT(Any p0) { return invoke<Vector3>(0x7BF09DD72260FA1E, p0); } // 0x5B4E4C817FCC2DFB 0x1FFBEFC5
	static Vector3 _0x26903D9CD1175F2C(Any p0, Any p1) { return invoke<Vector3>(0xA8E049B910DEBA49, p0, p1); } // 0x26903D9CD1175F2C 0xACADF916
	static Any _0x80EC114669DAEFF4() { return invoke<Any>(0x549DCD7FE43EFAD1); } // 0x80EC114669DAEFF4 0x721B763B
	static float _0x5F35F6732C3FBBA0(Any p0) { return invoke<float>(0xB57454CC0A4EC4E5, p0); } // 0x5F35F6732C3FBBA0 0x23E3F106
	static Any _0xD0082607100D7193() { return invoke<Any>(0x124D0E8833AC0CEF); } // 0xD0082607100D7193 0x457AE195
	static Any _0xDFC8CBC606FDB0FC() { return invoke<Any>(0x066E69799426020B); } // 0xDFC8CBC606FDB0FC 0x46CB3A49
	static Any _0xA03502FC581F7D9B() { return invoke<Any>(0x7DEE80460BF635D4); } // 0xA03502FC581F7D9B 0x19297A7A
	static Any _0x9780F32BCAF72431() { return invoke<Any>(0x2A805970CE9E46ED); } // 0x9780F32BCAF72431 0xF24777CA
	static Any _0x162F9D995753DC19() { return invoke<Any>(0x3ED08587BCFEE9C5); } // 0x162F9D995753DC19 0x38992E83
	static void SET_GAMEPLAY_COORD_HINT(float p0, float p1, float p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x88369A72B2D24605, p0, p1, p2, p3, p4, p5, p6); } // 0xD51ADCD2D8BC0FB3 0xF27483C9
	static void SET_GAMEPLAY_PED_HINT(Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x1E2A27303259DD8D, p0, x1, y1, z1, p4, p5, p6, p7); } // 0x2B486269ACD548D3 0x7C27343E
	static void SET_GAMEPLAY_VEHICLE_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x2A1E49C74224D271, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA2297E18F3E71C2E 0x2C9A11D8
	static void SET_GAMEPLAY_OBJECT_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x906BCBA97DC29AAA, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x83E87508A2CA2AC6 0x2ED5E2F8
	static void SET_GAMEPLAY_ENTITY_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x7F06EF9578636ADC, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x189E955A8313E298 0x66C32306
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xFA597181B01136F0); } // 0xE520FF1AD2785B40 0xAD8DA205
	static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xB3FF3FBDAFD0ADCF, p0); } // 0xF46C581C61718916 0x1BC28B7B
	static void _0xCCD078C2665D2973(Any p0) { invoke<Void>(0x9A29C84D606AA153, p0); } // 0xCCD078C2665D2973 0xCAFEE798
	static void _0x247ACBC4ABBC9D1C(BOOL p0) { invoke<Void>(0x83F843D5D0860885, p0); } // 0x247ACBC4ABBC9D1C
	static Any _0xBF72910D0F26F025() { return invoke<Any>(0xCC95EBE9F30385B5); } // 0xBF72910D0F26F025
	static void SET_GAMEPLAY_HINT_FOV(float p0) { invoke<Void>(0xF9972E5A2C83A68B, p0); } // 0x513403FB9C56211F 0x96FD173B
	static void _0xF8BDBF3D573049A1(float p0) { invoke<Void>(0xA9678252A5B0205D, p0); } // 0xF8BDBF3D573049A1 0x72E8CD3A
	static void _0xD1F8363DFAD03848(float p0) { invoke<Void>(0xB4757D7AE1D1D77A, p0); } // 0xD1F8363DFAD03848 0x79472AE3
	static void _0x5D7B620DAE436138(float p0) { invoke<Void>(0x16C6902542FDEC3A, p0); } // 0x5D7B620DAE436138 0xFC7464A0
	static void _0xC92717EF615B6704(float p0) { invoke<Void>(0x944FB1B0E1953726, p0); } // 0xC92717EF615B6704 0x3554AA0E
	static void GET_IS_MULTIPLAYER_BRIEF(BOOL p0) { invoke<Void>(0xDB7CCF634A901817, p0); } // 0xE3433EADAAF7EE40 0x2F0CE859
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0x841EA440AD1F0294, p0); } // 0x51669F7D1FB53D9F 0x3FBC5D00
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xE7EA177AF8F520FC); } // 0xB15162CB5826E9E8 0x80471AD9
	static void SHAKE_CINEMATIC_CAM(char* p0, float p1) { invoke<Void>(0x613AC5736DC3F029, p0, p1); } // 0xDCE214D9ED58F3CF 0x61815F31
	static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0x23721F933285401A); } // 0xBBC08F6B4CB8FF0A 0x8376D939
	static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0x5A1DDA7C7C1FAEA9, p0); } // 0xC724C701C30B2FE7 0x67510C4B
	static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0x84BED6C7E8B0DD06, p0); } // 0x2238E588E588A6D7 0x71C12904
	static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0x35FBFE9B937728A9); } // 0xADFF1B2A555F5FBA 0x5AC6DAC9
	static void _0x62ECFCFDEE7885D6() { invoke<Void>(0x84A51D29DB6F8864); } // 0x62ECFCFDEE7885D6 0x837F8581
	static void _0x9E4CFFF989258472() { invoke<Void>(0x5A1AB77B8D08A174); } // 0x9E4CFFF989258472 0x65DDE8AF
	static void _0xF4F2C0D4EE209E20() { invoke<Void>(0xC24506E2E3181933); } // 0xF4F2C0D4EE209E20 0xD75CDD75
	static Any _0xCA9D2AA3E326D720() { return invoke<Any>(0xC310187F21E35104); } // 0xCA9D2AA3E326D720 0x96A07066
	static Any _0x4F32C0D5A90A9B40() { return invoke<Any>(0x7CC73BBA898B4C38); } // 0x4F32C0D5A90A9B40
	static void CREATE_CINEMATIC_SHOT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDD499AB91462DC0C, p0, p1, p2, p3); } // 0x741B0129D4560F31 0xAC494E35
	static BOOL IS_CINEMATIC_SHOT_ACTIVE(Any p0) { return invoke<BOOL>(0x76E9FD0FBE8D954B, p0); } // 0xCC9F3371A7C28BC9 0xA4049042
	static void STOP_CINEMATIC_SHOT(Any p0) { invoke<Void>(0xEDB194679E673590, p0); } // 0x7660C6E75D3A078E 0xD78358C5
	static void _0xA41BCD7213805AAC(BOOL p0) { invoke<Void>(0xCCCA9B848C4D21A9, p0); } // 0xA41BCD7213805AAC 0xFBB85E02
	static void _0xDC9DA9E8789F5246() { invoke<Void>(0xAFFBA76EF2BE7CBD); } // 0xDC9DA9E8789F5246 0x4938C82F
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL p0) { invoke<Void>(0xCD6128000861D8D0, p0); } // 0xDCF0754AC3D6FD4E 0x2009E747
	static Any _0x1F2300CB7FA7B7F6() { return invoke<Any>(0x0F71CB36473AE086); } // 0x1F2300CB7FA7B7F6 0x6739AD55
	static Any _0x17FCA7199A530203() { return invoke<Any>(0xB18D6B85BBC9224A); } // 0x17FCA7199A530203
	static void STOP_CUTSCENE_CAM_SHAKING() { invoke<Void>(0xA9D03791D9CCDEA3); } // 0xDB629FFD9285FA06 0xF07D603D
	static void _0x12DED8CA53D47EA5(float p0) { invoke<Void>(0x2C7FA0DF791BD922, p0); } // 0x12DED8CA53D47EA5 0x067BA6F5
	static Any _0x89215EC747DF244A(float p0, Any p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0x22D2EB6C24EDB1E6, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x89215EC747DF244A 0xFD99BE2B
	static void _0x5A43C76F7FC7BA5F() { invoke<Void>(0x68A4A81C0AE569E6); } // 0x5A43C76F7FC7BA5F 0xE206C450
	static void _SET_CAM_EFFECT(int p0) { invoke<Void>(0x6EF2074DC51C46CD, p0); } // 0x80C8B1846639BB19 0xB06CCD38
	static void _0x5C41E6BABC9E2112(Any p0) { invoke<Void>(0x8249E39EEAC50B61, p0); } // 0x5C41E6BABC9E2112
	static void _0x21E253A7F8DA5DFB(char* vehicleName) { invoke<Void>(0x7AD2E1184B678B4B, vehicleName); } // 0x21E253A7F8DA5DFB
	static void _0x11FA5D3479C7DD47(Any p0) { invoke<Void>(0x64E9510D400B0888, p0); } // 0x11FA5D3479C7DD47
	static Any _0xEAF0FA793D05C592() { return invoke<Any>(0x7B1CBF3A5A8FA5A8); } // 0xEAF0FA793D05C592
	static Any _0x8BFCEB5EA1B161B6() { return invoke<Any>(0x5C20D73C51175719); } // 0x8BFCEB5EA1B161B6
}

namespace WEAPON
{
	static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0x37F5FC53D6AE87F3, toggle); } // 0xC8B46D7727D864AA 0xE3438955
	static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0x47938048EBFFB3FE, componentHash); } // 0x0DB57B41EC1DB083 0x324FA47A
	static Any GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Any>(0x0D6624CFA803F591, weaponHash); } // 0xF46CDC33180FDA94 0x44E1C269
	static Any GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Any>(0xB7B5C638EACD20B5, weaponHash); } // 0x4215460B9B8B7FA0 0x2E3759AF
	static Any GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Any>(0x3AFAF26DE0EEA7E8, weaponHash); } // 0xC3287EE3050FB74C 0x5F2DE833
	static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL equipNow) { invoke<Void>(0x2538B3290C0E12F3, ped, weaponHash, equipNow); } // 0xADF692B254977C0C 0xB8278882
	static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0x79DEFA3570360EAF, ped, weaponHash, p2); } // 0x3A87E44BB9A01D54 0xB0237302
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped) { return invoke<Entity>(0x1B65C769A2C57865, ped); } // 0x3B390A939AF0B5FC 0x5D73CD20
	static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0xEF29055B82B7A53C, ped, p1); } // 0x8483E98E8B888AE2 0xB998D444
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0x2ABE838B945DFCD7, ped, weaponHash); } // 0x75C55983C2C39DAA 0x8E6F2AF1
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x4BB9C94E83A66B44, ped, weaponHash); } // 0x1017582BCD3832DC 0xF26C5D65
	static BOOL IS_PED_ARMED(Ped ped, int p1) { return invoke<BOOL>(0xD791ED8E9ADE270C, ped, p1); } // 0x475768A975D5AD17 0x0BFC892C
	static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0x5EC20F258A07D902, weaponHash); } // 0x937C71165CF334B3 0x38CA2954
	static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0x36B6788E20B0DAB6, ped, weaponHash, p2); } // 0x8DECB02F88F428BC 0x43D2FA82
	static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0x4CC1C5C862B39F48, ped); } // 0xB80CA294F2F26749 0x02A32CB0
	static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0xBB8AB3DFEC7718B3, ped, weaponSlot); } // 0xEFFED78E9011134D 0x9BC64E16
	static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0x721AEAEA1E47C804, ped, weaponhash); } // 0x015A522136D7F951 0x0C755733
	static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x78FCD9FE6B750259, ped, weaponHash, ammo); } // 0x78F0424C34306220 0x7F0580C7
	static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x244FCCEEA53E8D8D, ped, weaponHash, ammo); } // 0x14E56BC5B5DB6A19 0xBF90DF1A
	static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0xA336C498C7727061, ped, toggle, weaponHash); } // 0x3EDCB0505123623B 0x9CB8D278
	static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0x22AE58E4FB1F2372, ped, toggle); } // 0x183DADC6AA953186 0x5A5E3B67
	static void GIVE_WEAPON_TO_PED(_Player ped, Hash weaponHash, int ammoCount, BOOL p4, BOOL equipNow) { invoke<Void>(0x8942ADC0DB9F81E4, ped, weaponHash, ammoCount, p4, equipNow); } // 0xBF0FD6E56C964FCB 0xC4D88A85
	static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int time, BOOL equipNow) { invoke<Void>(0xFC58A524C1CF0304, ped, weaponHash, time, equipNow); } // 0xB282DC6EBD803C75 0x5868D20D
	static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL toggle) { invoke<Void>(0xF2B8D227BF166CF8, ped, toggle); } // 0xF25DF915FA38C5F3 0xA44CE817
	static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0xB09984D51448364F, ped, weaponHash); } // 0x4899CB088EDF59B8 0x9C37F220
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0xF414004DEC115D4A, ped, toggle); } // 0x6F6981D2253C208F 0x00CFD6E9
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0x264E6E3419CC904C, ped, visible, deselectWeapon, p3, p4); } // 0x0725A4CCFDED9A70 0x00BECD77
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x98009BE46AE7DBE0, ped, toggle); } // 0x476AE72C1D19D1A8 0x8A444056
	static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xF062807B95918EDD, ped, weaponHash, weaponType); } // 0x2D343D2219CD027A 0xCDFBBCC6
	static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0xDD72339CDB6657BF, ped); } // 0x0E98F88A24C5F4B8 0x52C68832
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x377920A41CE2B59C, entity, weaponHash, weaponType); } // 0x131D401334815E94 0x6DAABB39
	static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0xBB1A0BBB371EDF99, entity); } // 0xAC678E40BE7C74D2 0xCEC2732B
	static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0x0992E1247A291CA3, ped); } // 0x6B7513D9966FBEC0 0x3D3329FA
	static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float p2, float p3, float p4, Any p5) { invoke<Void>(0xA958EAF17F0672D1, ped, weaponHash, p2, p3, p4, p5); } // 0x208A1888007FC0E6 0x81FFB874
	static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0xD15184363E42EACD, ped, weaponHash, p2); } // 0xA38DCFFCEA8962FA 0x6961E2A4
	static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x1E469CE14C37916A, ped, weaponHash, ammo); } // 0x2E1202248937775C 0x73C100C3
	static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0xF236B115472B383B, ped, weaponHash, ammo); } // 0xDCD2A934D65CB497 0xA54B0B10
	static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xCC79E6CFB02FD8CE, ped, weaponHash, ammo); } // 0xDC16122C7A20C933 0x0B294796
	static void SET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType, int ammo) { invoke<Void>(0xE8145BC7E950324D, ped, ammoType, ammo); } // 0x5FD1E1F011E76D7E 0x311C52BB
	static int GET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType) { return invoke<int>(0xBF4592605BCA9098, ped, ammoType); } // 0x39D22031557946C1 0x54077C4D
	static void SET_PED_AMMO_TO_DROP(Any p0, Any p1) { invoke<Void>(0xA8C7125E334FD584, p0, p1); } // 0xA4EFEF9440A5B0EF 0x2386A307
	static void _0xE620FD3512A04F18(float p0) { invoke<Void>(0x820B322FADC99FA1, p0); } // 0xE620FD3512A04F18 0xD6460EA2
	static Any _GET_PED_AMMO_TYPE(Ped ped, Hash weaponHash) { return invoke<Any>(0x19937578390C717C, ped, weaponHash); } // 0x7FEAD38B326B9F74 0x09337863
	static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coord) { return invoke<BOOL>(0xEF698C08491ECB37, ped, coord); } // 0x6C4D0409BA1A2BC2 0x9B266079
	static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0x0C6B833584DF036E, ped, gadgetHash, p2); } // 0xD0D7B1E680ED4A1A 0x8A256D0A
	static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0xB057BAEE46DEDD89, ped, gadgetHash); } // 0xF731332072F5156C 0x8DDD0B5B
	static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0x5C5A0DF40DAC1ECF, ped); } // 0x0A6DB4965674D243 0xD240123E
	static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0x7D09AE93685EC805, ped, weaponHash, p2); } // 0xFC4BD125DE7611E4 0x35A0B955
	static void REMOVE_ALL_PROJECTILES_OF_TYPE(Any p0, BOOL p1) { invoke<Void>(0xE7183F660F9C504E, p0, p1); } // 0xFC52E0F37E446528 0xA5F89919
	static float _0x840F03E9041E2C9C(Any p0) { return invoke<float>(0xB72215EDD02DA85A, p0); } // 0x840F03E9041E2C9C 0x3612110D
	static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x66B93DAC0C2657CC, ped); } // 0x814C9D19DFD69679 0xB2B2BBAA
	static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weapon, Any p3) { return invoke<BOOL>(0xEC844180B99BFC13, driver, vehicle, weapon, p3); } // 0x717C8481234E3B88 0xA57E2E80
	static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x94B31BDA8A976A13, ped, weaponHash, componentHash); } // 0xD966D51AA5B28BB9 0x3E1E286D
	static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x0CB2A6406DC2B81B, ped, weaponHash, componentHash); } // 0x1E8BE90C74FB4C09 0x412AA00D
	static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xA63C8D5A22A2859B, ped, weaponHash, componentHash); } // 0xC593212475FAE340 0xDC0FC145
	static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x4394915B45C908B8, ped, weaponHash, componentHash); } // 0x0D78DE0572D3969E 0x7565FB19
	static BOOL _IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xA0E8BD01A3F048E3, ped); } // 0x8C0D57EA686FAD87 0x82EEAF0F
	static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0xDE7A6C1BC238BB54, ped); } // 0x20AE33F3AC9C0033 0x515292C2
	static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, BOOL p2) { invoke<Void>(0x1D35593B1D9CB458, weaponHash, p1, p2); } // 0x5443438F033E29C3 0x65D139A5
	static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0x3B53211A0839BF4E, weaponHash); } // 0x36E353271F0E90EE 0x1891D5BB
	static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0xF2840F5C3F588483, weaponHash); } // 0xAA08EF13F341C8FC 0x2C0DFE3C
	static Any CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float heading, Any p7) { return invoke<Any>(0xDD561D769F9BC582, weaponHash, ammoCount, x, y, z, showWorldModel, heading, p7); } // 0x9541D3CF0D398F36 0x62F5987F
	static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash addonHash) { invoke<Void>(0x71D66996DB2F36A7, weaponObject, addonHash); } // 0x33E179436C0B31DB 0xF7612A37
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { invoke<Void>(0x1752F3610B25C718, p0, p1); } // 0xF7D82B0D66777611 0xA6E7ED3C
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash addonHash) { return invoke<BOOL>(0xCD902B2A1FB425FB, weapon, addonHash); } // 0x76A18844E743BF91 0x1D368510
	static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0x652F753371E70398, weaponObject, ped); } // 0xB1FA61371AF7C4B7 0x639AF3EF
	static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xE3EED8A649134E8F, weaponHash, componentHash); } // 0x5CEE3DF569CECAB0 0xB1817BAA
	static Entity GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Entity>(0x4740AB00474AD9ED, ped, p1); } // 0xCAE1DC9A0E22A16D 0xDF939A38
	static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int colorIndex) { invoke<Void>(0xD51FC600D27423CB, ped, weaponHash, colorIndex); } // 0x50969B9B89ED5738 0xEB2A7B23
	static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0x4D057AF87C43F32F, ped, weaponHash); } // 0x2B9EEDC07BD06B9F 0x3F9C90A7
	static void SET_WEAPON_OBJECT_TINT_INDEX(Entity weapon, int tint) { invoke<Void>(0x111D87FF44983628, weapon, tint); } // 0xF827589017D4E4A9 0x44ACC1DA
	static int GET_WEAPON_OBJECT_TINT_INDEX(Entity weapon) { return invoke<int>(0x59356CC68E51126E, weapon); } // 0xCD183314F7CD2E57 0xD91D9576
	static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0x199218B38DCA2771, weaponHash); } // 0x5DCF6C5CAB2E9BF7 0x99E4EAAB
	static BOOL GET_WEAPON_HUD_STATS(Any p0, Any* p1) { return invoke<BOOL>(0x184E20BF473D6537, p0, p1); } // 0xD92C739EE34C9EBA 0xA9AD3D98
	static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Any p0, Any* p1) { return invoke<BOOL>(0x1C1B6CB5AE3C2466, p0, p1); } // 0xB3CAF387AE12E9F8 0xBB5498F4
	static float _0x3133B907D8B32053(Any p0, Any p1) { return invoke<float>(0x65C7460A9F5FB481, p0, p1); } // 0x3133B907D8B32053
	static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0x1F5D1D4EDBF28BB6, weaponHash); } // 0x583BE370B1EC6EB4 0x8D515E66
	static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0x84D7599172090787, ped, xBias, yBias); } // 0x8378627201D5497D 0xB4F44C6E
	static Entity _0xB4C8D77C80C0421E(Ped ped, float p1) { return invoke<Entity>(0x9D4106358AC65A2C, ped, p1); } // 0xB4C8D77C80C0421E 0xEC2E5304
	static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0x324B84F8987141A9, weaponObject); } // 0x48164DBB970AC3F0 0xE3BD00F9
	static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0x4CD028B657AD22EA, ped); } // 0x65F0C5AE05943EC7 0xBAF7BFBE
	static BOOL SET_WEAPON_SMOKEGRENADE_ASSIGNED(Any p0) { return invoke<BOOL>(0xA1B51EE502564421, p0); } // 0x4B7620C47217126C 0x76876154
	static Any SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<Any>(0x1C574C9EEF0DE7C8, distance); } // 0xCEA66DAD478CD39B 0xB0127EA7
	static void SET_WEAPON_ANIMATION_OVERRIDE(Any p0, Any p1) { invoke<Void>(0xC505ED3693B93834, p0, p1); } // 0x1055AC3A667F09D9 0xA5DF7484
	static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0x31171C9B4E573B4A, weaponHash); } // 0x3BE0BB12D25FB305 0x013AFC13
	static void _0xE4DCEC7FD5B739A5(Ped ped) { invoke<Void>(0x810F79A5909D12BD, ped); } // 0xE4DCEC7FD5B739A5 0x64646F1D
	static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0x377AF5D764873AA6, weaponHash); } // 0xBC7BE5ABC0879F74 0x135E7AD4
}

namespace ITEMSET
{
	static Any CREATE_ITEMSET(BOOL p0) { return invoke<Any>(0xE7F9C475338E0066, p0); } // 0x35AD299F50D91B24 0x0A113B2C
	static void DESTROY_ITEMSET(Any p0) { invoke<Void>(0x3EF4156035EE91B5, p0); } // 0xDE18220B1C183EDA 0x83CE1A4C
	static BOOL IS_ITEMSET_VALID(Any p0) { return invoke<BOOL>(0xC6BABFE0373DBFC2, p0); } // 0xB1B1EA596344DFAB 0xD201FC29
	static BOOL ADD_TO_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0xF4E47A7AFE250090, p0, p1); } // 0xE3945201F14637DD 0x6B0FE61B
	static void REMOVE_FROM_ITEMSET(Any p0, Any p1) { invoke<Void>(0xD3CE6C76E825122F, p0, p1); } // 0x25E68244B0177686 0xA9565228
	static Any GET_ITEMSET_SIZE(Any p0) { return invoke<Any>(0xC0A4DF49B0D29A5D, p0); } // 0xD9127E83ABF7C631 0x2B31F41A
	static Any GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) { return invoke<Any>(0x848A3BA6BD19C9DA, p0, p1); } // 0x7A197E2521EE2BAB 0x3F712874
	static BOOL IS_IN_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0xC05DCBCAFBEE8808, p0, p1); } // 0x2D0FC594D1E9C107 0x0D4B9730
	static void CLEAN_ITEMSET(Any p0) { invoke<Void>(0x6E4C1C38BD0168F6, p0); } // 0x41BC0D722FC04221 0x919A4858
}

namespace STREAMING
{
	static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0x3078E3064737768B); } // 0xBD6E84632DD4CB3F 0xC9DBDA90
	static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0x63253B36033DDC9F, x, y, z); } // 0x4448EB75B4904BDB 0xB72403F5
	static Any NETWORK_UPDATE_LOAD_SCENE() { return invoke<Any>(0x59AA66AC5ABAEF32); } // 0xC4582015556D1C46 0xC76E023C
	static void NETWORK_STOP_LOAD_SCENE() { invoke<Void>(0xDEF5F09241F7E255); } // 0x64E630FAF5F60F44 0x24857907
	static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0x4EC0970D38F47F7B); } // 0x41CA5A33160EA4AB 0x6DCFC021
	static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0x5E5A78E1D230D801, interiorID, toggle); } // 0xE37B76C387BE28ED 0xE1013910
	static void REQUEST_MODEL(Hash model) { invoke<Void>(0x491067A8E906F22D, model); } // 0x963D27A58DF860AC 0xFFF1B500
	static void _REQUEST_MODEL_2(Hash model) { invoke<Void>(0x6677B2F2FC7D6CD3, model); } // 0xA0261AEF7ACFC51E 0x48CEB6B4
	static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x2C1B5A0D3E233FC3, model); } // 0x98A4EB5D89A0C952 0x62BFDB37
	static void _0x8A7A40100EDFEC58(int interiorID, char* roomName) { invoke<Void>(0x952D60F62376583F, interiorID, roomName); } // 0x8A7A40100EDFEC58 0x939243FB
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0x2C07692AA3545079, model); } // 0xE532F5D78798DAAB 0xAE0F069E
	static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0x3217B792F2F3BB7B, model); } // 0x35B9E0803292B641 0x1094782F
	static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0x81972CB541487AFD, model); } // 0xC0296A2EDF545E92 0xAF8F8E9D
	static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0x30A854527925CD1E, model); } // 0x19AAC8F07BFEC53E 0xFFFC85D4
	static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0x55A8C3CD1FB16FC3, x, y, z); } // 0x07503F7948F491A7 0xCD9805E7
	static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0x0BEDD61034CDCCC7, model); } // 0x923CB32A3B874FCB 0x3930C042
	static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x4ABA2DC7CF926AE7, model); } // 0x22CCA434E368F03A 0x41A094F8
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float p0, float p1, float p2) { invoke<Void>(0x8B97ACC58F65BA90, p0, p1, p2); } // 0xC9156DC11411A9EA 0xC2CC1DF2
	static BOOL DOES_ANIM_DICT_EXIST(char* animDict) { return invoke<BOOL>(0x346FAFE6C319D5AB, animDict); } // 0x2DA49C3B79856961 0xCD31C872
	static void REQUEST_ANIM_DICT(char* animDict) { invoke<Void>(0xA9DC3948106CC3E4, animDict); } // 0xD3BD40951412FEF6 0xDCA96950
	static BOOL HAS_ANIM_DICT_LOADED(char* animDict) { return invoke<BOOL>(0xAD21C77209FD2024, animDict); } // 0xD031A9162D01088C 0x05E6763C
	static void REMOVE_ANIM_DICT(char* animDict) { invoke<Void>(0x04269E768DDAF940, animDict); } // 0xF66A602F829E2A06 0x0AE050B5
	static void REQUEST_ANIM_SET(char* animSet) { invoke<Void>(0x1FDEEFA5ACE58B3E, animSet); } // 0x6EA47DAE7FAD0EED 0x2988B3FC
	static BOOL HAS_ANIM_SET_LOADED(char* animSet) { return invoke<BOOL>(0xFFE4069DEC9438D2, animSet); } // 0xC4EA073D86FB29B0 0x4FFF397D
	static void REMOVE_ANIM_SET(char* animSet) { invoke<Void>(0xF3B82E77720E6F84, animSet); } // 0x16350528F93024B3 0xD04A817A
	static void REQUEST_CLIP_SET(char* Alexandra) { invoke<Void>(0x7E1EB8ACEBE481B1, Alexandra); } // 0xD2A71E1A77418A49 0x546C627A
	static BOOL HAS_CLIP_SET_LOADED(char* clipSet) { return invoke<BOOL>(0x322CE47298FFA4A7, clipSet); } // 0x318234F4F3738AF3 0x230D5455
	static void REMOVE_CLIP_SET(char* clipSet) { invoke<Void>(0x0877822DCC67FC54, clipSet); } // 0x01F73A131C18CD94 0x1E21F7AA
	static void REQUEST_IPL(char* iplName) { invoke<Void>(0xB8289431295C363A, iplName); } // 0x41B4893843BBDB74 0x3B70D1DB
	static void REMOVE_IPL(char* iplName) { invoke<Void>(0x28F28FA21E7B496C, iplName); } // 0xEE6C5AD3ECE0A82D 0xDF7CBD36
	static BOOL IS_IPL_ACTIVE(char* iplName) { return invoke<BOOL>(0x3FD21E1BA0B74B4A, iplName); } // 0x88A741E44A2B3495 0xB2C33714
	static void SET_STREAMING(BOOL toggle) { invoke<Void>(0x6A269857139DEB93, toggle); } // 0x6E0C692677008888 0x27EF6CB2
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0x0745756DF15EC093, toggle); } // 0x717CD6E6FAEBBEDC 0x9211A28A
	static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xA8BD4AE8B61790FA, toggle); } // 0x77B5F9A36BF96710 0xAFCB2B86
	static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0x232563CB718B35C0, toggle); } // 0x80C527893080CCF3 0xCDB4FB7E
	static void SET_DITCH_POLICE_MODELS(Any p0) { invoke<Void>(0x83C96EB729FF924D, p0); } // 0x42CBE54462D92634 0x3EA7FCE4
	static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0x43B3D30548F0F564); } // 0x4060057271CEBC89 0xC2EE9A02
	static void REQUEST_PTFX_ASSET() { invoke<Void>(0x9DFBA65465F4DEE5); } // 0x944955FB2A3935C8 0x2C649263
	static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xA83726F584E77AA5); } // 0xCA7D9B86ECA7481B 0x3EFF96BE
	static void REMOVE_PTFX_ASSET() { invoke<Void>(0x10314C97FA558501); } // 0x88C6814073DD4A73 0xC10F178C
	static void REQUEST_NAMED_PTFX_ASSET(char* fxName) { invoke<Void>(0x6C35127C4A69B50E, fxName); } // 0xB80D8756B4668AB6 0xCFEA19A9
	static BOOL HAS_NAMED_PTFX_ASSET_LOADED(char* fxName) { return invoke<BOOL>(0x91DE9C108B463160, fxName); } // 0x8702416E512EC454 0x9ACC6446
	static void _REMOVE_NAMED_PTFX_ASSET(char* fxName) { invoke<Void>(0x6976683D83BCFF6C, fxName); } // 0x5F61EBBE1A00F96D
	static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0x297E2D1CF4A0058E, p0); } // 0xCB9E1EB3BE2AF4E9 0x1D56993C
	static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0x370A4E6949BE16BA, p0); } // 0x8C95333CFC3340F3 0xD2D026CD
	static void CLEAR_FOCUS() { invoke<Void>(0xE6A458183F9D98BB); } // 0x31B73D1EA9F01DA2 0x34D91E7A
	static void _SET_FOCUS_AREA(float x, float y, float z, float p3, float p4, float p5) { invoke<Void>(0x9A32D4A48E252BF5, x, y, z, p3, p4, p5); } // 0xBB7454BAFF08FE25 0x14680A60
	static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0xD5FECA073AC0C8C4, entity); } // 0x198F77705FA0931D 0x18DB04AC
	static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0x882FA917D25EC5E1, entity); } // 0x2DDFF3FB9075D747 0xB456D707
	static void _0x0811381EF5062FEC(Entity p0) { invoke<Void>(0x3E9352505DA338DA, p0); } // 0x0811381EF5062FEC
	static void _0xAF12610C644A35C9(Any* p0, BOOL p1) { invoke<Void>(0x09A5835E4195F37C, p0, p1); } // 0xAF12610C644A35C9 0x403CD434
	static void _0x4E52E752C76E7E7A(Any p0) { invoke<Void>(0xA421BDE55BDAC058, p0); } // 0x4E52E752C76E7E7A 0xA07BAEB9
	static Any _0x219C7B8D53E429FD(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<Any>(0x9C6515EB1482F76F, p0, p1, p2, p3, p4, p5); } // 0x219C7B8D53E429FD 0x10B6AB36
	static Any _0x1F3F018BC3AFA77C(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0x94F5D84E6514BBF4, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x1F3F018BC3AFA77C 0x72344191
	static Any _0x0AD9710CEE2F590F(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<Any>(0x5E4E0AF6B5BE86E2, p0, p1, p2, p3, p4, p5, p6); } // 0x0AD9710CEE2F590F 0xC0157255
	static void _0x1EE7D8DF4425F053(Any p0) { invoke<Void>(0x3A1A6B774A522BCB, p0); } // 0x1EE7D8DF4425F053 0xE80F8ABE
	static Any _0x7D41E9D2D17C5B2D(Any p0) { return invoke<Any>(0xA17E0AFF560240D3, p0); } // 0x7D41E9D2D17C5B2D 0x1B3521F4
	static Any _0x07C313F94746702C(Any p0) { return invoke<Any>(0x93C83E475DF075BA, p0); } // 0x07C313F94746702C 0x42CFE9C0
	static Any _0xBC9823AB80A3DCAC() { return invoke<Any>(0x055BAA064B8AC293); } // 0xBC9823AB80A3DCAC 0x56253356
	static BOOL NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { return invoke<BOOL>(0x34534A9EB2E27FA9, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x212A8D0D2BABFAC2 0xDF9C38B6
	static BOOL _0xACCFB4ACF53551B0(float p0, float p1, float p2, float p3, Any p4) { return invoke<BOOL>(0x639927C5DE78E8D7, p0, p1, p2, p3, p4); } // 0xACCFB4ACF53551B0 0xFA037FEB
	static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0x2E1E57681BD2050A); } // 0xC197616D221FF4A4 0x7C05B1F6
	static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0x9726BE1252F8F0B6); } // 0xA41A05B6CB741B85 0xAD234B7F
	static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0x66491EA3F355967D); } // 0x01B8247A7A8B9AD1 0x3ECD839F
	static Any _0x71E7B2E657449AAD() { return invoke<Any>(0xB28303BA72F3CA34); } // 0x71E7B2E657449AAD 0xEAA51103
	static void START_PLAYER_SWITCH(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7F8DE433BC13BD15, p0, p1, p2, p3); } // 0xFAA23F2CBA159D67 0x0829E975
	static void STOP_PLAYER_SWITCH() { invoke<Void>(0x533B05BECE72D00A); } // 0x95C0A5BBDC189AA1 0x2832C010
	static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0xC740F8182E7E9681); } // 0xD9D2CFFF49FAB35F 0x56135ACC
	static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0x4067637E264DB8F1); } // 0xB3C94A90D9FC9E62 0x280DC015
	static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0x3E15BB2B11953AA6, x1, y1, z1, x2, y2, z2); } // 0xB5D7B26B45720E05 0xD5A450F1
	static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x3FC82179CAE1D56D); } // 0x470555300D10B2A5 0x39A0E1F2
	static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0x6E51F350486CBA60); } // 0x20F898A5D9782800 0x9B7BA38F
	static void _0x5F2013F8BC24EE69(Any p0) { invoke<Void>(0xD4594285ED4DA008, p0); } // 0x5F2013F8BC24EE69 0xF0BD420D
	static Any _0x78C0D93253149435() { return invoke<Any>(0x8F4D4A66E805DAC4); } // 0x78C0D93253149435 0x02BA7AC2
	static void _0xC208B673CE446B61(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xC4D6BED99802A73B, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC208B673CE446B61 0x47352E14
	static void _0x0FDE9DBFC0A6BC65(Any* p0) { invoke<Void>(0xA162F5FB8F784981, p0); } // 0x0FDE9DBFC0A6BC65 0x279077B0
	static void _0x43D1680C6D19A8E9() { invoke<Void>(0x85CB73F4EC0782DA); } // 0x43D1680C6D19A8E9 0x55CB21F9
	static void _0x74DE2E8739086740() { invoke<Void>(0xC6723EA2278FDCFC); } // 0x74DE2E8739086740 0x1084F2F4
	static void _0x8E2A065ABDAE6994() { invoke<Void>(0x9D0BF116C265FF36); } // 0x8E2A065ABDAE6994 0x5B1E995D
	static void _0xAD5FDF34B81BFE79() { invoke<Void>(0x6C7EB0091A0F0282); } // 0xAD5FDF34B81BFE79 0x4B4B9A13
	static Any _0xDFA80CB25D0A19B3() { return invoke<Any>(0xAA3AE1FC4C77C45E); } // 0xDFA80CB25D0A19B3 0x408F7148
	static void _0xD4793DFF3AF2ABCD() { invoke<Void>(0x335523BF9FF70319); } // 0xD4793DFF3AF2ABCD
	static void _0xBD605B8E0E18B3BB() { invoke<Void>(0xE930128CAC076EFB); } // 0xBD605B8E0E18B3BB
	static void _0xAAB3200ED59016BC(Any p0, Any p1, Any p2) { invoke<Void>(0xB229D5B22EB58B98, p0, p1, p2); } // 0xAAB3200ED59016BC 0xFB4D062D
	static void _0xD8295AF639FD9CB8(Any p0) { invoke<Void>(0x07C9EBE8D91E1C5D, p0); } // 0xD8295AF639FD9CB8 0x2349373B
	static Any _0x933BBEEB8C61B5F4() { return invoke<Any>(0x929E4DF305DF8F8C); } // 0x933BBEEB8C61B5F4 0x74C16879
	static Any SET_PLAYER_INVERTED_UP() { return invoke<Any>(0xA9ABD60F6D4C1BDE); } // 0x08C2D6C52A3104BB 0x569847E3
	static Any _0x5B48A06DD0E792A5() { return invoke<Any>(0x26117C52882E0F64); } // 0x5B48A06DD0E792A5 0xC7A3D279
	static Any DESTROY_PLAYER_IN_PAUSE_MENU() { return invoke<Any>(0x1F43C58A73F5342B); } // 0x5B74EA8CFD5E3E7E 0x90F64284
	static void _0x1E9057A74FD73E23() { invoke<Void>(0x7C5EF940FCFABCB7); } // 0x1E9057A74FD73E23
	static Any _0x0C15B0E443B2349D() { return invoke<Any>(0x3A8DD401724A2956); } // 0x0C15B0E443B2349D 0x7154B6FD
	static void _0xA76359FC80B2438E(float p0) { invoke<Void>(0xE819B15556666449, p0); } // 0xA76359FC80B2438E 0xE5612C1A
	static void _0xBED8CA5FF5E04113(float p0, float p1, float p2, float p3) { invoke<Void>(0xB0FFE3936D6D7A8E, p0, p1, p2, p3); } // 0xBED8CA5FF5E04113 0x9CD6A451
	static void _0x472397322E92A856() { invoke<Void>(0xBAA4C5E2AEC848A6); } // 0x472397322E92A856 0x4267DA87
	static void _0x40AEFD1A244741F2(BOOL p0) { invoke<Void>(0xCD7C19843C25A772, p0); } // 0x40AEFD1A244741F2 0x9FA4AF99
	static void _0x03F1A106BDA7DD3E() { invoke<Void>(0xB8F87740D442794E); } // 0x03F1A106BDA7DD3E
	static void _0x95A7DABDDBB78AE7(Any* p0, Any* p1) { invoke<Void>(0xD574A7C1D4BD0C59, p0, p1); } // 0x95A7DABDDBB78AE7 0x9EF0A9CF
	static void _0x63EB2B972A218CAC() { invoke<Void>(0x9953CF9BFE720725); } // 0x63EB2B972A218CAC 0xF2CDD6A8
	static Any _0xFB199266061F820A() { return invoke<Any>(0x76E37106E3BF5101); } // 0xFB199266061F820A 0x17B0A1CD
	static void _0xF4A0DADB70F57FA6() { invoke<Void>(0x38C48D0517B95BAE); } // 0xF4A0DADB70F57FA6 0x3DA7AA5D
	static Any _0x5068F488DDB54DD8() { return invoke<Any>(0x231644AA9058B13A); } // 0x5068F488DDB54DD8 0xDAB4BAC0
	static void PREFETCH_SRL(Any* p0) { invoke<Void>(0x64D9F230E29482F4, p0); } // 0x3D245789CE12982C 0x37BE2FBB
	static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xCEE951E37A461E16); } // 0xD0263801A4C5B0BB 0x670FA2A6
	static void BEGIN_SRL() { invoke<Void>(0xF80EEE19CD752043); } // 0x9BADDC94EF83B823 0x24F49427
	static void END_SRL() { invoke<Void>(0x82BDD8095E75E06D); } // 0x0A41540E63C9EE17 0x1977C56A
	static void SET_SRL_TIME(float p0) { invoke<Void>(0x393927D6CA4C2A3E, p0); } // 0xA74A541C6884E7B8 0x30F8A487
	static void _0xEF39EE20C537E98C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x5A062654DAD52127, p0, p1, p2, p3, p4, p5); } // 0xEF39EE20C537E98C 0x814D0752
	static void _0xBEB2D9A1D9A8F55A(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCB6C0A1F9D504BB9, p0, p1, p2, p3); } // 0xBEB2D9A1D9A8F55A 0x62F02485
	static void _0x20C6C7E4EB082A7F(BOOL p0) { invoke<Void>(0x3BED7F741AF1BC3B, p0); } // 0x20C6C7E4EB082A7F 0xA6459CAA
	static void _0xF8155A7F03DDFC8E(Any p0) { invoke<Void>(0x7DB9A3EA20C80595, p0); } // 0xF8155A7F03DDFC8E 0xF8F515E4
	static void SET_HD_AREA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xAEC584B17F91BCD9, p0, p1, p2, p3); } // 0xB85F26619073E775 0x80BAA035
	static void CLEAR_HD_AREA() { invoke<Void>(0x9FE314132E930AE8); } // 0xCE58B1CFB9290813 0x7CAC6FA0
	static void _0xB5A4DB34FE89B88A() { invoke<Void>(0x9B63A65D20DE798A); } // 0xB5A4DB34FE89B88A 0xE243B2AF
	static void _0xCCE26000E9A6FAD7() { invoke<Void>(0x70B2CB0ED837E780); } // 0xCCE26000E9A6FAD7 0x897A510F
	static BOOL _0x0BC3144DEB678666(Any p0) { return invoke<BOOL>(0x222335478A053B70, p0); } // 0x0BC3144DEB678666 0xC0E83320
	static void _0xF086AD9354FAC3A3(Any p0) { invoke<Void>(0xCF2AB711254E7834, p0); } // 0xF086AD9354FAC3A3 0x1C576388
	static Any _0x3D3D8B3BE5A83D35() { return invoke<Any>(0x17F65DD1870B84FA); } // 0x3D3D8B3BE5A83D35 0x3E9C4CBE
}

namespace SCRIPT
{
	static void REQUEST_SCRIPT(char* scriptName) { invoke<Void>(0xE568CE38FF8C1318, scriptName); } // 0x6EB5F71AA68F2E8E 0xE26B2666
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(char* scriptName) { invoke<Void>(0x3CFCF109465A1DA6, scriptName); } // 0xC90D2DCACD56184C 0x6FCB7795
	static BOOL HAS_SCRIPT_LOADED(char* scriptName) { return invoke<BOOL>(0x71DF55A4DE7565D5, scriptName); } // 0xE6CC9F3BA0FB9EF1 0x5D67F751
	static BOOL DOES_SCRIPT_EXIST(char* scriptName) { return invoke<BOOL>(0xC946E501B11B18D5, scriptName); } // 0xFC04745FBE67C19A 0xDEAB87AB
	static void _REQUEST_STREAMED_SCRIPT(Hash scriptHash) { invoke<Void>(0x97BA1BB955E49665, scriptHash); } // 0xD62A67D26D9653E6 0x1C68D9DC
	static void _SET_STREAMED_SCRIPT_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0xD49603A9729A6576, scriptHash); } // 0xC5BC038960E9DB27 0x96C26F66
	static BOOL _HAS_STREAMED_SCRIPT_LOADED(Hash scriptHash) { return invoke<BOOL>(0x1CC9F840F1FBB51F, scriptHash); } // 0x5F0F0C783EB16C04 0x06674818
	static BOOL _0xF86AA3C56BA31381(Any p0) { return invoke<BOOL>(0x7C2F153B770607B8, p0); } // 0xF86AA3C56BA31381
	static void TERMINATE_THREAD(int id) { invoke<Void>(0x24A7771C17B117D6, id); } // 0xC8B189ED9138BCD4 0x253FD520
	static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0x96549B1C2E196049, threadId); } // 0x46E9AE36D8FA6417 0x78D7A5A0
	static char* _GET_THREAD_NAME(int threadId) { return invoke<char*>(0xD11735783850E137, threadId); } // 0x05A42BA9FC8DA96B 0xBE7ACD89
	static void _0xDADFADA5A20143A8() { invoke<Void>(0x9BAC905F8A042A68); } // 0xDADFADA5A20143A8 0xBB4E2F66
	static int _0x30B4FA1C82DD4B9F() { return invoke<int>(0xEC374179DDB26ADF); } // 0x30B4FA1C82DD4B9F 0x1E28B28F
	static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xEAE20F1125B83888); } // 0xC30338E8088E2E21 0xDE524830
	static void TERMINATE_THIS_THREAD() { invoke<Void>(0x78C587487CD40B92); } // 0x1090044AD1DA76FA 0x3CD9CBB7
	static int _GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(Hash scriptHash) { return invoke<int>(0xA96867DD0A63C62C, scriptHash); } // 0x2C83A9DA6BFFC4F9 0x029D3841
	static char* GET_THIS_SCRIPT_NAME() { return invoke<char*>(0x367152330DB70D69); } // 0x442E0A7EDE4A738A 0xA40FD5D9
	static Hash _GET_THIS_SCRIPT_HASH() { return invoke<Hash>(0xD24F6522EB082914); } // 0x8A1C8B1738FFE87E 0x2BEE1F45
	static int GET_NUMBER_OF_EVENTS(int p0) { return invoke<int>(0x18088877E109A757, p0); } // 0x5F92A689A06620AA 0xA3525D60
	static BOOL GET_EVENT_EXISTS(int p0, int eventIndex) { return invoke<BOOL>(0xA8A2C6421DCDE504, p0, eventIndex); } // 0x936E6168A9BCEDB5 0xA1B447B5
	static int GET_EVENT_AT_INDEX(int p0, int eventIndex) { return invoke<int>(0xA1A2C3AC0F629413, p0, eventIndex); } // 0xD8F66A3A60C62153 0xB49C1442
	static BOOL GET_EVENT_DATA(int p0, int eventIndex, int* eventData, int p3) { return invoke<BOOL>(0x4FD5256AFF6E50B7, p0, eventIndex, eventData, p3); } // 0x2902843FCD2B2D79 0x4280F92F
	static void TRIGGER_SCRIPT_EVENT(Any p0, int* p1, int p2, int p3) { invoke<Void>(0x8E36889D76C8D4FA, p0, p1, p2, p3); } // 0x5AE99C571D5BBE5D 0x54763B35
	static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0xD6019C0376F4870E); } // 0x078EBE9809CCD637 0xA2826D17
	static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0xACBEFB0A5F1CF619, toggle); } // 0x5262CC1995D07E09 0xC8055034
	static BOOL _GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0x2C8EB7E5159312EE); } // 0x18C1270EA7F199BC
	static void _0xB1577667C3708F9B() { invoke<Void>(0x206F460D9FF3E621); } // 0xB1577667C3708F9B 0xB03BCCDF
}

namespace UI
{
	static void _0xABA17D7CE615ADBF(char* p0) { invoke<Void>(0xDC96797B53DF25D3, p0); } // 0xABA17D7CE615ADBF 0xCB7C8994
	static void _0xBD12F8228410D9B4(int p0) { invoke<Void>(0x6349285C2B22C0E9, p0); } // 0xBD12F8228410D9B4 0x903F5EE4
	static void _0x10D373323E5B9C0D() { invoke<Void>(0x39C6D32CD560BA7C); } // 0x10D373323E5B9C0D 0x94119534
	static void _0xC65AB383CD91DF98() { invoke<Void>(0x88080D12C5A0DF57); } // 0xC65AB383CD91DF98 0x71077FBD
	static BOOL _0xD422FCC5F239A915() { return invoke<BOOL>(0xF0BFAF163DAA4888); } // 0xD422FCC5F239A915 0xB8B3A5D0
	static Any _0xB2A592B04648A9CB() { return invoke<Any>(0x4E22FC7F3876B9AB); } // 0xB2A592B04648A9CB
	static void _0x9245E81072704B8A(BOOL p0) { invoke<Void>(0xD2517FB6583781FB, p0); } // 0x9245E81072704B8A
	static void _SHOW_CURSOR_THIS_FRAME() { invoke<Void>(0x3AAD9D87062EB88B); } // 0xAAE7CE1D63167423
	static void _0x8DB8CFFD58B62552(Any p0) { invoke<Void>(0x70F5FD87FA8FE8FD, p0); } // 0x8DB8CFFD58B62552
	static void _0x98215325A695E78A(BOOL p0) { invoke<Void>(0x7AD6EBAB13918CFC, p0); } // 0x98215325A695E78A
	static Any _0x3D9ACB1EB139E702() { return invoke<Any>(0x6946F66C693055AC); } // 0x3D9ACB1EB139E702
	static BOOL _0x632B2940C67F4EA9(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0x8CD62438848DE4F0, scaleformHandle, p1, p2, p3); } // 0x632B2940C67F4EA9
	static void _0x6F1554B0CC2089FA(BOOL p0) { invoke<Void>(0xAFB211E31DBDD364, p0); } // 0x6F1554B0CC2089FA 0xA7C8594B
	static void _0x55598D21339CB998(float p0) { invoke<Void>(0xDA81B130FA38800A, p0); } // 0x55598D21339CB998 0x1DA7E41A
	static void _0x25F87B30C382FCA7() { invoke<Void>(0x6EDFAF353D332BBF); } // 0x25F87B30C382FCA7 0x1E63088A
	static void _0xA8FDB297A8D25FBA() { invoke<Void>(0x3437639A811EF082); } // 0xA8FDB297A8D25FBA 0x5205C6F5
	static void _REMOVE_NOTIFICATION(int handle) { invoke<Void>(0x5AF920EE00652664, handle); } // 0xBE4390CB40B3E627 0xECA8ACB9
	static void _0xA13C11E1B5C06BFC() { invoke<Void>(0xC86638BF73D28518); } // 0xA13C11E1B5C06BFC 0x520FCB6D
	static void _0x583049884A2EEE3C() { invoke<Void>(0xC6A75507A4B1CE87); } // 0x583049884A2EEE3C 0xC8BAB2F2
	static void _0xFDB423997FA30340() { invoke<Void>(0xB5B3F40B585C8D07); } // 0xFDB423997FA30340 0x4D0449C6
	static void _0xE1CD1E48E025E661() { invoke<Void>(0x2D1364CCF7771349); } // 0xE1CD1E48E025E661 0xD3F40140
	static Any _0xA9CBFD40B3FA3010() { return invoke<Any>(0xE73C00AC968F5BFB); } // 0xA9CBFD40B3FA3010 0xC5223796
	static void _0xD4438C0564490E63() { invoke<Void>(0xB2A7DB74E25EA410); } // 0xD4438C0564490E63 0x709B4BCB
	static void _0xB695E2CD0A2DA9EE() { invoke<Void>(0x72F7626F0D491479); } // 0xB695E2CD0A2DA9EE 0x4A4A40A4
	static Any _GET_ACTIVE_NOTIFICATION_HANDLE() { return invoke<Any>(0x7DA5E2A771C16DFD); } // 0x82352748437638CA 0x294405D4
	static void _0x56C8B608CFD49854() { invoke<Void>(0xA4182C19FEEBD878); } // 0x56C8B608CFD49854 0xF881AB87
	static void _0xADED7F5748ACAFE6() { invoke<Void>(0x3B936EFC7615D59B); } // 0xADED7F5748ACAFE6 0x1D6859CA
	static void _0x92F0DA1E27DB96DC(Any p0) { invoke<Void>(0x798DB5FAF249E315, p0); } // 0x92F0DA1E27DB96DC
	static void _0x17430B918701C342(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xADC760B866B4147C, p0, p1, p2, p3); } // 0x17430B918701C342 0xCF14D7F2
	static void _0x17AD8C9706BDD88A(Any p0) { invoke<Void>(0x9CE08DA72589276D, p0); } // 0x17AD8C9706BDD88A 0x24A97AF8
	static void _0x4A0C7C9BB10ABB36(BOOL p0) { invoke<Void>(0xA43F4925B824DD8C, p0); } // 0x4A0C7C9BB10ABB36 0x44018EDB
	static void _0xFDD85225B2DEA55E() { invoke<Void>(0xD4049AB5260E0944); } // 0xFDD85225B2DEA55E 0xA4524B23
	static void _0xFDEC055AB549E328() { invoke<Void>(0x4ED386C60F841AAE); } // 0xFDEC055AB549E328 0xAFA1148B
	static void _0x80FE4F3AB4E1B62A() { invoke<Void>(0x4159ED30F7D85283); } // 0x80FE4F3AB4E1B62A 0x3CD4307C
	static void _0xBAE4F9B97CD43B30(BOOL p0) { invoke<Void>(0x8F4E4A5797613589, p0); } // 0xBAE4F9B97CD43B30
	static void _0x317EBA71D7543F52(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xCF5D3892606E7989, p0, p1, p2, p3); } // 0x317EBA71D7543F52
	static void _SET_NOTIFICATION_TEXT_ENTRY(char* type) { invoke<Void>(0x754E61FE98961B39, type); } // 0x202709F4C58A0424 0x574EE85C
	static int _0x2B7E9A4EAAA93C89(char* p0, int p1, int p2, int p3, BOOL p4, char* picName1, char* picName2) { return invoke<int>(0x598C1E5FE1E44478, p0, p1, p2, p3, p4, picName1, picName2); } // 0x2B7E9A4EAAA93C89 0xED130FA1
	static int _SET_NOTIFICATION_MESSAGE(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject) { return invoke<int>(0xDAB775768F2B11B1, picName1, picName2, flash, iconType, sender, subject); } // 0x1CCD9A37359072CF 0xE7E3C98B
	static Any _0xC6F580E4C94926AC(char* picName1, char* picName2, BOOL p2, Any p3, char* p4, char* p5) { return invoke<Any>(0x26ECB2CED1B0FA6A, picName1, picName2, p2, p3, p4, p5); } // 0xC6F580E4C94926AC
	static int _0x1E6611149DB3DB6B(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration) { return invoke<int>(0xCA750BFC8682E80C, picName1, picName2, flash, iconType, sender, subject, duration); } // 0x1E6611149DB3DB6B 0x0EB382B7
	static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration, char* clanTag) { return invoke<int>(0x502E0FCB458D60CD, picName1, picName2, flash, iconType, sender, subject, duration, clanTag); } // 0x5CBF7BADE20DB93E 0x3E807FE3
	static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG_2(char* picName1, char* picName2, BOOL flash, int iconType1, char* sender, char* subject, float duration, char* clanTag, int iconType2, int p9) { return invoke<int>(0x2CC7218E8D38DAB3, picName1, picName2, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); } // 0x531B84E7DA981FB6 0xDEB491C8
	static int _DRAW_NOTIFICATION(BOOL blink, BOOL p1) { return invoke<int>(0xBCD67D962E393B66, blink, p1); } // 0x2ED7843F8F801023 0x08F7AF78
	static int _DRAW_NOTIFICATION_2(BOOL blink, BOOL p1) { return invoke<int>(0xA0843E2D3E4081BC, blink, p1); } // 0x44FA03975424A0EE 0x57B8D0D4
	static int _DRAW_NOTIFICATION_3(BOOL blink, BOOL p1) { return invoke<int>(0xF45414B4B1D9E204, blink, p1); } // 0x378E809BF61EC840 0x02BCAF9B
	static int _0xAA295B6F28BD587D(char* p0, char* p1, int p2, int p3, char* p4) { return invoke<int>(0x335B88CF5347D1B7, p0, p1, p2, p3, p4); } // 0xAA295B6F28BD587D 0x02DED2B8
	static Any _0x97C9E4E7024A8F2C(BOOL p0, BOOL p1, Any* p2, Any p3, BOOL p4, BOOL p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x44B40096A9C3C3F9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x97C9E4E7024A8F2C 0xA9CCEF66
	static Any _0x137BC35589E34E1E(BOOL p0, BOOL p1, Any* p2, Any p3, BOOL p4, BOOL p5, Any p6, Any* p7, Any p8, Any p9, Any p10) { return invoke<Any>(0xF02E9753777E6C9C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x137BC35589E34E1E 0x88B9B909
	static Any _0x33EE12743CCD6343(Any p0, Any p1, Any p2) { return invoke<Any>(0xE1584C92D369FEBC, p0, p1, p2); } // 0x33EE12743CCD6343 0xE05E7052
	static Any _0xC8F3AAF93D0600BF(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x09376CBD4BC85489, p0, p1, p2, p3); } // 0xC8F3AAF93D0600BF 0x4FA43BA4
	static Any _0x7AE0589093A2E088(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xFC2C4FFDCCEFF0D1, p0, p1, p2, p3, p4, p5); } // 0x7AE0589093A2E088 0x8C90D22F
	static int _DRAW_NOTIFICATION_4(BOOL blink, BOOL p1) { return invoke<int>(0xDD247DAD8B68D95E, blink, p1); } // 0xF020C96915705B3A 0x8E319AB8
	static Any _0x8EFCCF6EC66D85E4(Any* p0, Any* p1, Any* p2, BOOL p3, BOOL p4) { return invoke<Any>(0x908533792988EFE7, p0, p1, p2, p3, p4); } // 0x8EFCCF6EC66D85E4
	static Any _0xB6871B0555B02996(Any* p0, Any* p1, Any p2, Any* p3, Any* p4, Any p5) { return invoke<Any>(0xD06D0F510E5E2FFE, p0, p1, p2, p3, p4, p5); } // 0xB6871B0555B02996 0x5E93FBFA
	static Any _0xD202B92CBF1D816F(int type, int image, char* text) { return invoke<Any>(0x2FBD2F629759183F, type, image, text); } // 0xD202B92CBF1D816F
	static Any _0xDD6CB2CCE7C2735C(int type, char* button, char* text) { return invoke<Any>(0x39A862EFDA659A13, type, button, text); } // 0xDD6CB2CCE7C2735C
	static void _SET_TEXT_ENTRY_2(char* p0) { invoke<Void>(0x43ADD6E60AA2507B, p0); } // 0xB87A37EEB7FAA67D 0xF42C43C7
	static void _DRAW_SUBTITLE_TIMED(int time, BOOL p1) { invoke<Void>(0xAA85370CFA6D5384, time, p1); } // 0x9D77056A530643F6 0x38F82261
	static void _0x853648FD1063A213(Any* p0) { invoke<Void>(0xD6B5839441DD3BED, p0); } // 0x853648FD1063A213 0xDD524A11
	static Any _0x8A9BA1AB3E237613() { return invoke<Any>(0x7A2AFC1B08BD3742); } // 0x8A9BA1AB3E237613 0x672EFB45
	static void _SET_TEXT_ENTRY(char* text) { invoke<Void>(0x09BF2ADDAAD5BC05, text); } // 0x25FBB336DF1804CB 0x3E35563E
	static void _DRAW_TEXT(float x, float y) { invoke<Void>(0x80F8A2A91BE5A679, x, y); } // 0xCD015E5BB0D96A57 0x6F8350CE
	static void _SET_TEXT_ENTRY_FOR_WIDTH(char* text) { invoke<Void>(0x2F736F028E87FCBF, text); } // 0x54CE8AC98E120CAB 0x51E7A037
	static float _GET_TEXT_SCREEN_WIDTH(BOOL p0) { return invoke<float>(0xCEAFBE1E102E8742, p0); } // 0x85F061DA64ED2F67 0xD12A643A
	static void _SET_TEXT_GXT_ENTRY(char* entry) { invoke<Void>(0x26962CC488F25A87, entry); } // 0x521FB041D93DD0E4 0x94B82066
	static Any _0x9040DFB09BE75706(float p0, float p1) { return invoke<Any>(0xC05C59027C3AD7C0, p0, p1); } // 0x9040DFB09BE75706 0xAA318785
	static void _SET_TEXT_COMPONENT_FORMAT(char* inputType) { invoke<Void>(0x55B5433015A91E85, inputType); } // 0x8509B634FBE7DA11 0xB245FC10
	static void _DISPLAY_HELP_TEXT_FROM_STRING_LABEL(Any p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0x85AE92859C5AADE3, p0, loop, beep, shape); } // 0x238FFE5C7B0498A6 0xB59B530D
	static void _0x0A24DA3A41B718F5(char* p0) { invoke<Void>(0xA277242E6FB38513, p0); } // 0x0A24DA3A41B718F5 0x00E20F2D
	static BOOL _0x10BDDBFC529428DD(int p0) { return invoke<BOOL>(0x52387FFD63E8D8FC, p0); } // 0x10BDDBFC529428DD 0xF63A13EC
	static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(char* gxtentry) { invoke<Void>(0x940E74834C801A79, gxtentry); } // 0xF9113A30DE5C6670 0xF4C211F6
	static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0x61C3F79E9ECF289E, blip); } // 0xBC38B49BCB83BC9B 0xE8E59820
	static void _0x23D69E0465570028(char* p0) { invoke<Void>(0x19345F447B418207, p0); } // 0x23D69E0465570028 0x0E103475
	static void _0xCFDBDF5AE59BA0F4(BOOL p0) { invoke<Void>(0xF7925FF361DC330D, p0); } // 0xCFDBDF5AE59BA0F4 0x2944A6C5
	static void _0xE124FA80A759019C(char* p0) { invoke<Void>(0x775C13C3833376FE, p0); } // 0xE124FA80A759019C 0x550665AE
	static void _0xFCC75460ABA29378() { invoke<Void>(0x953FDEB57BB0D276); } // 0xFCC75460ABA29378 0x67785AF2
	static void _0x8F9EE5687F8EECCD(char* p0) { invoke<Void>(0xDDA14C22837A100D, p0); } // 0x8F9EE5687F8EECCD 0xBF855650
	static void _0xA86911979638106F(BOOL p0) { invoke<Void>(0x424BEF9C3A572D8E, p0); } // 0xA86911979638106F 0x6E7FDA1C
	static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0x3F9D1B882EC0B8AF, value); } // 0x03B504CF259931BC 0xFE272A57
	static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0x63A04EB63F481124, value, decimalPlaces); } // 0xE7DCB5B874BCD96E 0x24D78013
	static void _ADD_TEXT_COMPONENT_ITEM_STRING(char* labelName) { invoke<Void>(0xBDE6EEC5F6BDC060, labelName); } // 0xC63CD5D2920ACBE7 0xDCE05406
	static void _0x17299B63C7683A2B(Hash inputName) { invoke<Void>(0xDF3B405935FDB6CC, inputName); } // 0x17299B63C7683A2B 0x150E03B6
	static void _0x80EAD8E2E1D5D52E(Blip blip) { invoke<Void>(0x245225E63C3F8D31, blip); } // 0x80EAD8E2E1D5D52E 0x5DE98F0A
	static void _ADD_TEXT_COMPONENT_STRING(char* text) { invoke<Void>(0xDA35BDB37E728640, text); } // 0x6C188BE134E074AA 0x27A244D8
	static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0x37F0707A16E921F7, timestamp, flags); } // 0x1115F16B8AB9E8BF 0x135B3CD0
	static void _0x0E4C749FF9DE9CC4(int p0, BOOL p1) { invoke<Void>(0xBEC4DE8C7D72AD8A, p0, p1); } // 0x0E4C749FF9DE9CC4 0x12929BDF
	static void _0x761B77454205A61D(char* p0, int p1) { invoke<Void>(0xAACCC88E8429891E, p0, p1); } // 0x761B77454205A61D 0x65E1D404
	static void _ADD_TEXT_COMPONENT_STRING2(char* text) { invoke<Void>(0x467EEE18B529EAE2, text); } // 0x94CF4AC034C9C986 0xC736999E
	static void _ADD_TEXT_COMPONENT_STRING3(char* text) { invoke<Void>(0xCEA56CB39AFA838F, text); } // 0x5F68520888E69014 0x0829A799
	static void _0x39BBF623FC803EAC(int p0) { invoke<Void>(0x212C24688D441F9E, p0); } // 0x39BBF623FC803EAC 0x6F1A1901
	static char* _GET_TEXT_SUBSTRING(char* text, int position, int length) { return invoke<char*>(0x15BAFA3B5F3ABB22, text, position, length); } // 0x169BD9382084C8C0 0x34A396EE
	static char* _GET_TEXT_SUBSTRING_SAFE(char* text, int position, int length, int maxLength) { return invoke<char*>(0x431F53B7A8FAAE33, text, position, length, maxLength); } // 0xB2798643312205C5 0x0183A66C
	static char* _GET_TEXT_SUBSTRING_SLICE(char* text, int startPosition, int endPosition) { return invoke<char*>(0xE187E39B4E7355FC, text, startPosition, endPosition); } // 0xCE94AEBA5D82908A 0xFA6373BB
	static char* _GET_LABEL_TEXT(char* labelName) { return invoke<char*>(0xFFC9DE7E93AEAE21, labelName); } // 0x7B5280EBA9840C72 0x95C4B5AD
	static void CLEAR_PRINTS() { invoke<Void>(0x715FC4B638D9A515); } // 0xCC33FA791322B9D9 0x216CB1C5
	static void CLEAR_BRIEF() { invoke<Void>(0x3D3143BBC7AC7061); } // 0x9D292F73ADBD9313 0x9F75A929
	static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xED3BAEA4520667CF); } // 0x6178F68A87A4D3A0 0x9E5D9198
	static void CLEAR_THIS_PRINT(char* p0) { invoke<Void>(0xB32A833D2CE3521D, p0); } // 0xCF708001E1E536DD 0x06878327
	static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xCE1FE0AA21AD16F0); } // 0x2CEA2839313C09AC 0xA869A238
	static BOOL DOES_TEXT_BLOCK_EXIST(char* gxt) { return invoke<BOOL>(0x6F8CE3FB00C438BF, gxt); } // 0x1C7302E725259789 0x96F74838
	static void REQUEST_ADDITIONAL_TEXT(char* gxt, int slot) { invoke<Void>(0x7BCE93123FE81E45, gxt, slot); } // 0x71A78003C8E71424 0x9FA9175B
	static void _REQUEST_ADDITIONAL_TEXT_2(char* gxt, int slot) { invoke<Void>(0x56E509B4C2EA3ADA, gxt, slot); } // 0x6009F9F1AE90D8A6 0xF4D27EBE
	static BOOL HAS_ADDITIONAL_TEXT_LOADED(Any additionalText) { return invoke<BOOL>(0x985A6C5313B2276C, additionalText); } // 0x02245FE4BED318B8 0xB0E56045
	static void CLEAR_ADDITIONAL_TEXT(Any additionalText, BOOL p1) { invoke<Void>(0x89B76C6241C0104D, additionalText, p1); } // 0x2A179DF17CCF04CD 0x518141E0
	static BOOL IS_STREAMING_ADDITIONAL_TEXT(Any additionalText) { return invoke<BOOL>(0x0EA9ED4C5E6110D9, additionalText); } // 0x8B6817B71B85EBF0 0xF079E4EB
	static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(char* gxt, int slot) { return invoke<BOOL>(0x15CD8FB3CF6BE10D, gxt, slot); } // 0xADBF060E2B30C5BC 0x80A52040
	static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x43589182CF3243AE); } // 0x7984C03AA5CC2F41 0x6A77FE8D
	static BOOL DOES_TEXT_LABEL_EXIST(char* gxt) { return invoke<BOOL>(0x7179DC5DD4B8EEBC, gxt); } // 0xAC09CA973C564252 0x6ECAE560
	static Any GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(char* gxt) { return invoke<Any>(0xD21767AFC068855B, gxt); } // 0x801BD273D3A23F74 0xA4CA7BE5
	static int GET_LENGTH_OF_LITERAL_STRING(char* string) { return invoke<int>(0x3ACC64D0951B9D26, string); } // 0xF030907CCBB8A9FD 0x99379D55
	static int _0x43E4111189E54F0E(char* p0) { return invoke<int>(0x8BC27E98D5626ED8, p0); } // 0x43E4111189E54F0E 0x7DBC0764
	static char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<char*>(0x7EDFC28EBE0F929B, hash); } // 0xD0EF8A959B8A4CB9 0x1E8E310C
	static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x9B719EC6FE4899FC); } // 0x1930DFA731813EC4 0xC3BC1B4F
	static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x6FCB748171BFFF17); } // 0x9EB6522EA68F22FE 0x14AEAA28
	static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x32FF1663A80B4F87); } // 0xAD6DACA4BA53E0A4 0x63BA19F5
	static void DISPLAY_HUD(BOOL Toggle) { invoke<Void>(0x943A052E20E9C2CE, Toggle); } // 0xA6294919E56FF02A 0xD10E4E31
	static void _0x7669F9E39DC17063() { invoke<Void>(0x894FA242DC20DB77); } // 0x7669F9E39DC17063 0xC380AC85
	static void _0x402F9ED62087E898() { invoke<Void>(0x11707922E5482F07); } // 0x402F9ED62087E898 0xC47AB1B0
	static void DISPLAY_RADAR(BOOL Toggle) { invoke<Void>(0x627D428B266FEDCA, Toggle); } // 0xA0EBB943C300E693 0x52816BD4
	static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0x4FE4B4E1325C405D); } // 0xA86478C6958735C5 0x40BADA1D
	static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0x0893ED56F523F729); } // 0x157F93B036700462 0x1AB3B954
	static Any _0xAF754F20EB5CD51A() { return invoke<Any>(0x200DD17084CE53D1); } // 0xAF754F20EB5CD51A
	static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0x71E206F83114C3D2, blip, enabled); } // 0x4F7D8A9BFB0B43E9 0x3E160C90
	static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0xB43DF35ABEF4FAE7, blip, colour); } // 0x837155CD2F63DA09 0xDDE7C65C
	static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0x39B1028E2365CFAC, p0); } // 0x60296AF4BA14ABC5 0xB58B25BD
	static void _0x57D760D55F54E071(BOOL p0) { invoke<Void>(0x9A487AE90EC35827, p0); } // 0x57D760D55F54E071 0x9854485F
	static void RESPONDING_AS_TEMP(float p0) { invoke<Void>(0x469A7E2E068DDAFB, p0); } // 0xBD12C5EEE184C337 0xDCA3F423
	static void SET_RADAR_ZOOM(int p0) { invoke<Void>(0x9CC9E62E6D67D295, p0); } // 0x096EF57A0C999BBA 0x2A50D1A6
	static void _0xF98E4B3E56AFC7B1(Any p0, float p1) { invoke<Void>(0x6CC571ECC985252C, p0, p1); } // 0xF98E4B3E56AFC7B1 0x25EC28C0
	static void _SET_RADAR_ZOOM_LEVEL_THIS_FRAME(float zoomLevel) { invoke<Void>(0x10FC77ACAC291A33, zoomLevel); } // 0xCB7CC0D58405AD41 0x09CF1CE5
	static void _0xD2049635DEB9C375() { invoke<Void>(0xB8310F3CBBAEC26C); } // 0xD2049635DEB9C375 0xE8D3A910
	static void GET_HUD_COLOUR(int hudColour, int* r, int* g, int* b, int* a) { invoke<Void>(0x29F530EB20218AC0, hudColour, r, g, b, a); } // 0x7C9C91AB74A0360F 0x63F66A0B
	static void _0xD68A5FF8A3A89874(int r, int g, int b, int a) { invoke<Void>(0x05743AEF149FBAB2, r, g, b, a); } // 0xD68A5FF8A3A89874 0x0E41E45C
	static void _0x16A304E6CB2BFAB9(int r, int g, int b, int a) { invoke<Void>(0x7C5B5E28B09FED12, r, g, b, a); } // 0x16A304E6CB2BFAB9 0x6BE3ACA8
	static void _0x1CCC708F0F850613(Any p0, Any p1) { invoke<Void>(0x6442AD35C1A40FF4, p0, p1); } // 0x1CCC708F0F850613 0x3B216749
	static void _0xF314CF4F0211894E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x5F279AE12616A8A3, p0, p1, p2, p3, p4); } // 0xF314CF4F0211894E 0xF6E7E92B
	static void FLASH_ABILITY_BAR(Any p0) { invoke<Void>(0xF102A908FB9B0715, p0); } // 0x02CFBA0C9E9275CE 0x3648960D
	static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0x14B13D58B078974F, p0, p1); } // 0x9969599CCFF5D85E 0x24E53FD8
	static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0xC50451558F0FB334, p0); } // 0xA18AFB39081B6A1F 0x629F866B
	static void _0xBA8D65C1C65702E5(BOOL p0) { invoke<Void>(0xA9249D36865425A3, p0); } // 0xBA8D65C1C65702E5
	static float _0xDB88A37483346780(float size, Any p1) { return invoke<float>(0x167B696877E49A32, size, p1); } // 0xDB88A37483346780 0x3330175B
	static void SET_TEXT_SCALE(float p0, float size) { invoke<Void>(0xBF14E70921AA4E54, p0, size); } // 0x07C837F9A01C34C9 0xB6E15B23
	static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0xDEB22FE9E351379F, red, green, blue, alpha); } // 0xBE6B23FFA53FB442 0xE54DD2C8
	static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0x81111C63B56D4B25, align); } // 0xC02F4DBFB51D988B 0xE26D39A1
	static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0x9BDA4A51F16D85C6, toggle); } // 0x6B3C4650BC8BEE47 0x45B60520
	static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0x00D7EEE9B3B84E1C, justifyType); } // 0x4E096588B13FFECA 0x68CDFA60
	static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0x366FF85701018BC1, start, end); } // 0x63145D9C883A1A70 0x6F60AB54
	static void SET_TEXT_LEADING(BOOL p0) { invoke<Void>(0x2FBB13D1590A874B, p0); } // 0xA50ABC31E3CDFAFF 0x98CE21D4
	static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0x7B17291A00C79516, p0); } // 0x038C1F517D7FDCF8 0xF49D8A08
	static void SET_TEXT_FONT(int fontType) { invoke<Void>(0x03FEF1B70B6CD8DA, fontType); } // 0x66E0276CC5F6B9DA 0x80BC530D
	static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0xD2487E80F66840B8); } // 0x1CA3E9EAC9D93E5E 0xE2A11511
	static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0x996F92DB3D314DB1, distance, r, g, b, a); } // 0x465C84BC39F1C351 0xE6587517
	static void SET_TEXT_OUTLINE() { invoke<Void>(0xF2284E9876DFABC7); } // 0x2513DFB0FB8400FE 0xC753412F
	static void SET_TEXT_EDGE(Hash p0, int r, int g, int b, int a) { invoke<Void>(0x7744A5D6F8CE8FA9, p0, r, g, b, a); } // 0x441603240D202FA6 0x3F1A5DAB
	static void SET_TEXT_RENDER_ID(Any p0) { invoke<Void>(0x3C50A3550FB6DB4E, p0); } // 0x5F15302936E07111 0xC5C3B7F3
	static Any GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<Any>(0x7ED204B2CAEDDF75); } // 0x52F0982D7FD156B6 0x8188935F
	static BOOL REGISTER_NAMED_RENDERTARGET(char* p0, BOOL p1) { return invoke<BOOL>(0xCFB9D2542820E400, p0, p1); } // 0x57D9C12635E25CE3 0xFAE5D6F0
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(char* p0) { return invoke<BOOL>(0x3C3FFB3C5310E07E, p0); } // 0x78DCDC15C9F116B4 0x284057F5
	static BOOL RELEASE_NAMED_RENDERTARGET(Any* p0) { return invoke<BOOL>(0xC09719D492EA1AB2, p0); } // 0xE9F6FFE837354DD4 0xD3F6C892
	static void LINK_NAMED_RENDERTARGET(Hash hash) { invoke<Void>(0xAF36A5E144D1A146, hash); } // 0xF6C09E276AEB3F2D 0x6844C4B9
	static Any GET_NAMED_RENDERTARGET_RENDER_ID(char* p0) { return invoke<Any>(0xA17E85BB0151FB9D, p0); } // 0x1A6478B61C6BDC3B 0xF9D7A401
	static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash hash) { return invoke<BOOL>(0x6033442D4E141E04, hash); } // 0x113750538FA31298 0x8B52601F
	static void CLEAR_HELP(BOOL Enable) { invoke<Void>(0x94724F7C938EBE34, Enable); } // 0x8DFCED7A656F8802 0xE6D85741
	static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0x38716BDBCC755DD9); } // 0xDAD37F45428801AE 0x4B3C9CA9
	static BOOL _0x214CD562A939246A() { return invoke<BOOL>(0x09B0F4233610039C); } // 0x214CD562A939246A 0x812CBE0E
	static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x598A9E990F05F82C); } // 0x4D79439A6B55AC67 0xA65F262A
	static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0x9A450B8B8FEC3CA9); } // 0x327EDEEEAC55C369 0x3E50AE92
	static int _0x4A9923385BDB9DAD() { return invoke<int>(0xFD656AC431BCD138); } // 0x4A9923385BDB9DAD 0x87871CE0
	static Any _GET_BLIP_INFO_ID_ITERATOR() { return invoke<Any>(0xD7ED6EBE213268C9); } // 0x186E5D252FA50E7D 0xB9827942
	static Any GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<Any>(0xDB96B19F6762DA83); } // 0x9A3FF3DE163034E8 0x144020FA
	static Blip GET_NEXT_BLIP_INFO_ID(Blip blip) { return invoke<Blip>(0x373536CCAC9EC0C7, blip); } // 0x14F96AA50D6FBEA7 0x9356E92F
	static Blip GET_FIRST_BLIP_INFO_ID(Blip blip) { return invoke<Blip>(0xFC40E37448F735D8, blip); } // 0x1BEDE233E6CD2A1F 0x64C0273D
	static Vector3 GET_BLIP_INFO_ID_COORD(Any p0) { return invoke<Vector3>(0xE7910FE41D6FF6F5, p0); } // 0xFA7C7F0AADF25D09 0xB7374A66
	static Any GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<Any>(0xA475DDBF7464352E, blip); } // 0x1E314167F701DC3B 0xD0FC19F4
	static Any GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<Any>(0x8BE6F7E9EC18CA16, blip); } // 0xBE9B0959FFD0779B 0x501D7B4E
	static Any GET_BLIP_INFO_ID_ENTITY_INDEX(Any p0) { return invoke<Any>(0x47DC6443F77F0EAF, p0); } // 0x4BA4E2553AFEDC2C 0xA068C40B
	static Any GET_BLIP_INFO_ID_PICKUP_INDEX(Any p0) { return invoke<Any>(0x13C5C5C6AA276DB4, p0); } // 0x9B6786E4C03DD382 0x86913D37
	static Blip GET_BLIP_FROM_ENTITY(Entity p0) { return invoke<Blip>(0xF12D47E8A88B5BD0, p0); } // 0xBC8DBDCA2436F7E8 0x005A2A47
	static Blip ADD_BLIP_FOR_RADIUS(float x, float y, float z, float radius) { return invoke<Blip>(0xF2C736D2FDAF2CB1, x, y, z, radius); } // 0x46818D79B1F7499A 0x4626756C
	static int ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<int>(0x91B4D18C6AFDC14C, entity); } // 0x5CDE92C702A8FCE7 0x30822554
	static Any ADD_BLIP_FOR_PICKUP(Any p0) { return invoke<Any>(0x7A67617EED9039A0, p0); } // 0xBE339365C863BD36 0x16693C3A
	static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0x52CE8C31DD5898E7, x, y, z); } // 0x5A039BB0BCA604B6 0xC6F43D0E
	static void _0x72DD432F3CDFC0EE(float p0, float p1, float p2, float p3, int p4) { invoke<Void>(0xA3815A19A55E22B3, p0, p1, p2, p3, p4); } // 0x72DD432F3CDFC0EE 0xBF25E7B2
	static void _0x60734CC207C9833C(BOOL p0) { invoke<Void>(0xDC13FF78EB87E301, p0); } // 0x60734CC207C9833C 0xE7E1E32B
	static void SET_BLIP_COORDS(Blip p0, float p1, float p2, float p3) { invoke<Void>(0x5E674CE3A7662F54, p0, p1, p2, p3); } // 0xAE2AF67E9D9AF65D 0x680A34D4
	static Vector3 GET_BLIP_COORDS(Any p0) { return invoke<Vector3>(0xA4C471C6C99EDD6B, p0); } // 0x586AFE3FF72D996E 0xEF6FF47B
	static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0x32479C670EB9962F, blip, spriteId); } // 0xDF735600A4696DAF 0x8DBBB0B9
	static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0xE2D4B51819FD3439, blip); } // 0x1FC877464A04FC4F 0x72FF2E73
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, char* blipname) { invoke<Void>(0x6F18BFEFE84565FF, blip, blipname); } // 0xEAA0FFE120D92784 0xAC8A5461
	static void SET_BLIP_NAME_TO_PLAYER_NAME(Any p0, Any p1) { invoke<Void>(0x4EB16F6143BFBD8D, p0, p1); } // 0x127DE7B20C60A6A3 0x03A0B8F9
	static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0x9F80CD84AD2B3DA4, blip, alpha); } // 0x45FF974EEE1C8734 0xA791FCCD
	static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0x122D9C2B75D6BD65, blip); } // 0x970F608F0EE6C885 0x297AF6C8
	static void SET_BLIP_FADE(Any p0, Any p1, Any p2) { invoke<Void>(0x0DB65AB6E9C4EDE1, p0, p1, p2); } // 0x2AEE8F8390D2298C 0xA5999031
	static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0x80363F708E67A268, blip, rotation); } // 0xF87683CDF73C3F6E 0x6B8F44FE
	static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xFB70601EAE8F9B9E, blip, duration); } // 0xD3CD6FD297AE87CC 0x8D5DF611
	static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0x75BF2D22E6E52160, blip, p1); } // 0xAA51DB313C010A7E 0xEAF67377
	static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0x77804F3DCBA01DB5, blip, color); } // 0x03D7FB09E75D6B7E 0xBB3C5A41
	static void SET_BLIP_SECONDARY_COLOUR(Blip blip, float r, float g, float b) { invoke<Void>(0x50B40563B1B788D1, blip, r, g, b); } // 0x14892474891E09EB 0xC6384D32
	static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0x73FE4085418790FE, blip); } // 0xDF729E8D20CF7327 0xDD6A1E54
	static Any GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<Any>(0x17F99BFBF44159B8, blip); } // 0x729B5F1EFBC0AAEE 0xE88B4BC2
	static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xFA13BD772A67B73A, blip); } // 0xDA5F8727EB75B926 0x1226765A
	static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0x67E5BF48CCEA8D62, blip); } // 0xE41CA53051197A27 0x258CBA3A
	static BOOL _0xDD2238F57B977751(Any p0) { return invoke<BOOL>(0x7AF4F2F8E4DEF2EB, p0); } // 0xDD2238F57B977751 0x3E47F357
	static void _0x54318C915D27E4CE(Any p0, BOOL p1) { invoke<Void>(0x8BF1CD8781381F18, p0, p1); } // 0x54318C915D27E4CE 0x43996428
	static void SET_BLIP_HIGH_DETAIL(Any p0, BOOL p1) { invoke<Void>(0xC6E1CB2ED20C0279, p0, p1); } // 0xE2590BC29220CEBB 0xD5842BFF
	static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xB0FD1DD8D3A7B2D3, blip, toggle); } // 0x24AC0137444F9FD5 0x802FB686
	static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0x0BB52BB42E55C12A, blip); } // 0x26F49BF3381D933D 0x24ACC4E9
	static Any DISABLE_BLIP_NAME_FOR_VAR() { return invoke<Any>(0x8B6CD93E8A36B971); } // 0x5C90988E7C8E1AF4 0xFFD7476C
	static Any _0x4167EFE0527D706E() { return invoke<Any>(0x13C35E50420B42F4); } // 0x4167EFE0527D706E 0xC5EB849A
	static void _0xF1A6C18B35BCADE6(BOOL p0) { invoke<Void>(0x787CE0B8CC96B3D7, p0); } // 0xF1A6C18B35BCADE6 0xA2CAAB4F
	static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0x3AE9C8E8575D2576, blip, toggle); } // 0xB14552383D39CE3E 0xC0047F15
	static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0x40DCFF56C00A607E, blip, toggle); } // 0x2E8D9498C56DD0D1 0x1A81202B
	static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0xE16952EDCAB2C2D9, blip); } // 0xA5E41FD83AD6CEF0 0x52E111D7
	static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL p1) { invoke<Void>(0x9ABFD60B4E082992, blip, p1); } // 0xBE8BE4FE60E27B72 0x5C67725E
	static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xC40118229E47A3D7, blip, scale); } // 0xD38744167B2FA257 0x1E6EC434
	static void SET_BLIP_PRIORITY(Blip blip, Any p1) { invoke<Void>(0x420759DE4A6A9555, blip, p1); } // 0xAE9FC9EF6A9FAC79 0xCE87DA6F
	static void SET_BLIP_DISPLAY(Blip blip, int p1) { invoke<Void>(0x8373805E5E68D815, blip, p1); } // 0x9029B2F3DA924928 0x2B521F91
	static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0x4DED52EE7192A7F2, blip, index); } // 0x234CDD44D996FD9A 0xEF72F533
	static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0x0B57C567D698C373, blip); } // 0x86A652570E5F25DD 0xD8C3C1CD
	static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0x47C16DAEBDB1E5FD, blip, toggle); } // 0x6F6F290102C02AB4 0xF290CFD8
	static void PULSE_BLIP(Blip blip) { invoke<Void>(0x4E7EEBD9FA8FE60A, blip); } // 0x742D6FD43115AF73 0x44253855
	static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0xBFF2A421A57CA700, blip, number); } // 0xA3C0B359DCB848B6 0x7BFC66C6
	static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0xD3E4DA97330612E7, blip); } // 0x532CFF637EF80148 0x0B6D610D
	static void _0x75A16C3DA34F1245(Any p0, BOOL p1) { invoke<Void>(0x2FE9515E72A14285, p0, p1); } // 0x75A16C3DA34F1245 0x1D99F676
	static void _0x74513EA3E505181E(Blip blip, BOOL toggle) { invoke<Void>(0x40AAEAE8B2F77780, blip, toggle); } // 0x74513EA3E505181E 0x3DCF0092
	static void _SET_BLIP_SHOW_HEADING_INDICATOR(Blip blip, BOOL toggle) { invoke<Void>(0x3D53EFA10C28BBAA, blip, toggle); } // 0x5FBCA48327B914DF 0xD1C3D71B
	static void _0xB81656BC81FE24D1(Blip blip, BOOL toggle) { invoke<Void>(0x223F04017A8761D7, blip, toggle); } // 0xB81656BC81FE24D1 0x8DE82C15
	static void _0x23C3EB807312F01A(Blip blip, BOOL toggle) { invoke<Void>(0xDA41533E078484D1, blip, toggle); } // 0x23C3EB807312F01A 0x4C8F02B4
	static void _0xDCFB5D4DB8BF367E(Any p0, BOOL p1) { invoke<Void>(0x85CD465B59C71075, p0, p1); } // 0xDCFB5D4DB8BF367E 0xABBE1E45
	static void _0xC4278F70131BAA6D(Any p0, BOOL p1) { invoke<Void>(0x03BF882778D9DF25, p0, p1); } // 0xC4278F70131BAA6D 0x6AA6A1CC
	static void _0x2B6D467DAB714E8D(Blip blip, BOOL toggle) { invoke<Void>(0xABCB2390A72236A4, blip, toggle); } // 0x2B6D467DAB714E8D 0xC575F0BC
	static void _0x25615540D894B814(Any p0, BOOL p1) { invoke<Void>(0x676AD143BE6E9CD4, p0, p1); } // 0x25615540D894B814 0x40E25DB8
	static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0x16833EFAA58E63DB, blip); } // 0xA6DB27D19ECBB7DA 0xAE92DD96
	static void SET_WAYPOINT_OFF() { invoke<Void>(0x6D44E6D2944837FE); } // 0xA7E4E2D361C2627F 0xB3496E1B
	static void _0xD8E694757BCEA8E9() { invoke<Void>(0x2963020A1B65B30A); } // 0xD8E694757BCEA8E9 0x62BABF2C
	static void REFRESH_WAYPOINT() { invoke<Void>(0x6C45FF9FCE8A01E6); } // 0x81FA173F170560D1 0xB395D753
	static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0xF06B045B9DA829B7); } // 0x1DD1F58F493F1DA5 0x5E4DF47B
	static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0x509BFB0C9F78C574, x, y); } // 0xFE43368D2AA4F2FC 0x8444E1F0
	static void SET_BLIP_BRIGHT(Any p0, Any p1) { invoke<Void>(0xE758849293751864, p0, p1); } // 0xB203913733F27884 0x72BEE6DF
	static void SET_BLIP_SHOW_CONE(Any p0, BOOL p1) { invoke<Void>(0xBC6D7C831B667AB4, p0, p1); } // 0x13127EC3665E8EE1 0xFF545AD8
	static void _0xC594B315EDF2D4AF(Ped ped) { invoke<Void>(0x85DF44E64D1522D4, ped); } // 0xC594B315EDF2D4AF 0x41B0D022
	static Any SET_MINIMAP_COMPONENT(Any p0, Any p1, Any p2) { return invoke<Any>(0x1E8D45D2D7539440, p0, p1, p2); } // 0x75A9A10948D1DEA6 0x419DCDC4
	static void _0x60E892BA4F5BDCA4() { invoke<Void>(0x8EFCCDF45BAAAC79); } // 0x60E892BA4F5BDCA4
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0x30317AA2F78B9688); } // 0xDCD4EC3F419D02FA 0xAB93F020
	static void _0x41350B4FC28E3941(BOOL p0) { invoke<Void>(0x254EFC806271B7A7, p0); } // 0x41350B4FC28E3941
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0x08FB11A1AA7022FD); } // 0x4B0311D3CDC4648F 0x35087963
	static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int p4) { invoke<Void>(0x04054B7A19109599, interior, x, y, z, p4); } // 0x59E727A1C9D3E31A 0x6F2626E1
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0x3BDC2752E9237B5C); } // 0xE81B7D2A3DAB2D81 0x39ABB10E
	static void _SET_PLAYER_BLIP_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0x6B717953B5D2007D, x, y); } // 0x77E2DD177910E1CF 0x54E75C7D
	static Any _0x9049FE339D5F6F6F() { return invoke<Any>(0x39B7D16D8ACAAFF0); } // 0x9049FE339D5F6F6F 0x199DED14
	static void _DISABLE_RADAR_THIS_FRAME() { invoke<Void>(0x084AD48033322CE9); } // 0x5FBAE526203990C9 0x1A4318F7
	static void _0x20FE7FDFEEAD38C0() { invoke<Void>(0xA99235588FE83568); } // 0x20FE7FDFEEAD38C0 0xCE36E3FE
	static void _CENTER_PLAYER_ON_RADAR_THIS_FRAME() { invoke<Void>(0x6D2011DE158C5334); } // 0x6D14BFDC33B34F55 0x334EFD46
	static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0x9402F636D272723E, p0); } // 0xC3B07BA00A83B0F1 0xF016E08F
	static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0x55090263925F0545, toggle); } // 0x276B6CE369C33678 0x489FDD41
	static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0x95A22226A2F6FD1A, toggle); } // 0x96DEC8D5430208B7 0x0049DF83
	static void _0x170F541E1CADD1DE(BOOL p0) { invoke<Void>(0x9A0C0911F0EDCB56, p0); } // 0x170F541E1CADD1DE
	static void _SET_SINGLEPLAYER_HUD_CASH(int pocketcash, int bankcash) { invoke<Void>(0x1AF4BBEB54CABCE1, pocketcash, bankcash); } // 0x0772DF77852C2E30
	static void DISPLAY_AMMO_THIS_FRAME(BOOL p0) { invoke<Void>(0x8AE33A339B48FA7A, p0); } // 0xA5E78BA2B1331C55 0x60693CEE
	static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0xE5D1D20E2BDBE6D5); } // 0x73115226F4814E62 0xBC6C73CB
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xB477A2D8CA963C52); } // 0x719FF505F097FD20 0xB75D4AD2
	static void _0xE67C6DFD386EA5E7(BOOL p0) { invoke<Void>(0x4FCC80820608ACD4, p0); } // 0xE67C6DFD386EA5E7 0x5476B9FD
	static void _0xC2D15BEF167E27BC() { invoke<Void>(0xB41549928C936316); } // 0xC2D15BEF167E27BC 0xF4F3C796
	static void _0x95CF81BD06EE1887() { invoke<Void>(0x9C9954650F5F11C2); } // 0x95CF81BD06EE1887 0x7BFFE82F
	static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x8CFA02BF31FBF46B); } // 0xDD21B55DF695CD0A 0x2C842D03
	static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xA7AB0CC586F4631E); } // 0xC7C6789AA1CFEDD0 0x728B4EF4
	static void SET_MULTIPLAYER_HUD_CASH(int p0, int p1) { invoke<Void>(0x0A75ED563B43BA89, p0, p1); } // 0xFD1D220394BCB824 0xA8DB435E
	static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0x4F74A56FDEE8DBC8); } // 0x968F270E39141ECA 0x07BF4A7D
	static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0x8D2BC9240C67A1F4); } // 0xD46923FC481CA285 0xF3807BED
	static void DISPLAY_HELP_TEXT_THIS_FRAME(char* message, BOOL p1) { invoke<Void>(0x58CC3788DF029867, message, p1); } // 0x960C9FF8F616E41C 0x18E3360A
	static void _SHOW_WEAPON_WHEEL(BOOL forcedShow) { invoke<Void>(0xDFAA7F67E1F5FA79, forcedShow); } // 0xEB354E5376BC81A7 0x1EFFB02A
	static void _0x0AFC4AF510774B47() { invoke<Void>(0xC7099732AAF0BC77); } // 0x0AFC4AF510774B47 0xB26FED2B
	static Hash _0xA48931185F0536FE() { return invoke<Hash>(0xD0A9673E59C15E68); } // 0xA48931185F0536FE 0x22E9F555
	static void _0x72C1056D678BB7D8(Any p0) { invoke<Void>(0x1353BE0F90BA0432, p0); } // 0x72C1056D678BB7D8 0x83B608A0
	static Any _0xA13E93403F26C812(Any p0) { return invoke<Any>(0xEBA2C56DE68A3267, p0); } // 0xA13E93403F26C812
	static void _0x14C9FDCC41F81F63(BOOL p0) { invoke<Void>(0xBE822C53D4436A6F, p0); } // 0x14C9FDCC41F81F63 0xE70D1F43
	static void SET_GPS_FLAGS(Any p0, float p1) { invoke<Void>(0x4D9D0D4F153D56C7, p0, p1); } // 0x5B440763A4C8D15B 0x60539BAB
	static void CLEAR_GPS_FLAGS() { invoke<Void>(0x1C4281CB2F4CDC53); } // 0x21986729D6A3A830 0x056AFCE6
	static void _0x1EAC5F91BCBC5073(BOOL p0) { invoke<Void>(0x2CB8DA3A02AEDFAF, p0); } // 0x1EAC5F91BCBC5073 0xFB9BABF5
	static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0x9DDF39E150EE775A); } // 0x7AA5B4CE533C858B 0x40C59829
	static void _0xDB34E8D56FC13B08(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x0AE72808011A3D75, p0, p1, p2); } // 0xDB34E8D56FC13B08 0x7F93799B
	static void _0x311438A071DD9B1A(Any p0, Any p1, Any p2) { invoke<Void>(0x2A35D10FB2492B1E, p0, p1, p2); } // 0x311438A071DD9B1A 0xEEBDFE55
	static void _0x900086F371220B6F(BOOL p0, Any p1, Any p2) { invoke<Void>(0xD34D777AF650CF72, p0, p1, p2); } // 0x900086F371220B6F 0xDA0AF00E
	static void _0xE6DE0561D9232A64() { invoke<Void>(0x0B025FDD78A059E1); } // 0xE6DE0561D9232A64 0xCF2E3E24
	static void _0x3D3D15AF7BCAAF83(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x827C4C95D36EB081, p0, p1, p2); } // 0x3D3D15AF7BCAAF83 0xC3DCBEDB
	static void _0xA905192A6781C41B(float x, float y, float z) { invoke<Void>(0x02DD99BDC5E8D616, x, y, z); } // 0xA905192A6781C41B 0xFE485135
	static void _0x3DDA37128DD1ACA8(BOOL p0) { invoke<Void>(0x1150AE74ED88A928, p0); } // 0x3DDA37128DD1ACA8 0xE87CBE4C
	static void _0x67EEDEA1B9BAFD94() { invoke<Void>(0xF8B3F0961E40A7B4); } // 0x67EEDEA1B9BAFD94 0x0D9969E4
	static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0x232ABA9CD481AF80); } // 0xFF4FB7C8CDFA3DA7 0x0B9C7FC2
	static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xB829AD4114B0C932, toggle); } // 0x320D0E0D936A0E9B 0xE991F733
	static void _0x7B21E0BB01E8224A(Any p0) { invoke<Void>(0x31ECA636B667BA8D, p0); } // 0x7B21E0BB01E8224A
	static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0x07FD940F5798C7D3); } // 0xF2DD778C22B15BDA 0xB8359952
	static void _0x6B1DE27EE78E6A19(Any p0) { invoke<Void>(0x686D16EC20FAB1B3, p0); } // 0x6B1DE27EE78E6A19 0x79A6CAF6
	static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0x2A8B885DE3C63D79, toggle); } // 0x6AFDFB93754950C7 0xC68D47C4
	static void KEY_HUD_COLOUR(BOOL p0, Any p1) { invoke<Void>(0xF8A474BB9664C440, p0, p1); } // 0x1A5CD7752DD28CD3 0xD5BFCADB
	static void SET_MISSION_NAME(BOOL p0, char* name) { invoke<Void>(0xA57E42D9C41110A9, p0, name); } // 0x5F28ECF5FC84772F 0x68DCAE10
	static void _0xE45087D85F468BC2(BOOL p0, Any* p1) { invoke<Void>(0x2D28C28AA9FAF41A, p0, p1); } // 0xE45087D85F468BC2 0x8D9A1734
	static void _0x817B86108EB94E51(BOOL p0, Any* p1, Any* p2, Any* p3, Any* p4, Any* p5, Any* p6, Any* p7, Any* p8) { invoke<Void>(0x747180C6C37D57CB, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x817B86108EB94E51 0xD2161E77
	static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL p0) { invoke<Void>(0x4FCDF11B8FC87258, p0); } // 0x58FADDED207897DC 0xA41C3B62
	static void _SET_DRAW_MAP_VISIBLE(BOOL toggle) { invoke<Void>(0xC6290615805E08C9, toggle); } // 0x9133955F1A2DA957 0x02F5F1D1
	static void _0xF8DEE0A5600CBB93(BOOL p0) { invoke<Void>(0x4183EA7B428C3BCB, p0); } // 0xF8DEE0A5600CBB93 0xD8D77733
	static Any _0xE0130B41D3CF4574() { return invoke<Any>(0x2236E951557CE53F); } // 0xE0130B41D3CF4574 0xA4098ACC
	static BOOL _0x6E31B91145873922(float p0, float p1, float p2) { return invoke<BOOL>(0x2FE76A504D4662F2, p0, p1, p2); } // 0x6E31B91145873922 0x65B705F6
	static void _0x62E849B7EB28E770(BOOL p0) { invoke<Void>(0xB6A06856CF9A17F1, p0); } // 0x62E849B7EB28E770
	static void _0x0923DBF87DFF735E(float x, float y, float z) { invoke<Void>(0xFF4F842647E1746A, x, y, z); } // 0x0923DBF87DFF735E 0xE010F081
	static void _0x71BDB63DBAF8DA59(Any p0) { invoke<Void>(0x77CE04301D8C253F, p0); } // 0x71BDB63DBAF8DA59 0x5133A750
	static void _0x35EDD5B2E3FF01C0() { invoke<Void>(0x5874EC1A7ED2CCC0); } // 0x35EDD5B2E3FF01C0 0x20FD3E87
	static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0x377612FC5E288817, angle); } // 0x299FAEBB108AE05B 0xDEC733E4
	static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0xB6F2C69FDFCE8F6A); } // 0x8183455E16C42E3A 0x742043F9
	static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0x1311A0638852AD3E, x, y); } // 0x1279E861A329E73F 0xB9632A91
	static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0xC052720BE807AD1E); } // 0x3E93E06DB8EF1F30 0x5E8E6F54
	static void _SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(float p0, Any p1) { invoke<Void>(0x92510317AEA86B4D, p0, p1); } // 0xD201F3FF917A506D 0x0308EDF6
	static void _0x3F5CC444DCAAA8F2(Any p0, Any p1, BOOL p2) { invoke<Void>(0x4ACD27AC6CE16E2E, p0, p1, p2); } // 0x3F5CC444DCAAA8F2 0x7FB6FB2A
	static void _0x975D66A0BC17064C(Any p0) { invoke<Void>(0x446043C7A279F8F2, p0); } // 0x975D66A0BC17064C 0xF07D8CEF
	static void _0x06A320535F5F0248(Any p0) { invoke<Void>(0xB7C7B6346C660024, p0); } // 0x06A320535F5F0248 0x827F14DE
	static void _SET_RADAR_BIGMAP_ENABLED(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xCBCBB7F0129444F3, toggleBigMap, showFullMap); } // 0x231C8F89D0539D8F 0x08EB83D2
	static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xDF0A567606A15203, id); } // 0xBC4C9EA5391ECC0D 0x6214631F
	static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0x719465EEFB8840B4, id); } // 0xDD100EB17A94FF65 0x2B86F382
	static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xCED06D052E449DF1, id); } // 0xE374C498D8BADC14 0x31ABA127
	static BOOL _0x09C0403ED9A751C2(Any p0) { return invoke<BOOL>(0xBEC43C24DE38CA94, p0); } // 0x09C0403ED9A751C2 0xE8C8E535
	static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x7ABD1B29E6C2963D, id); } // 0x6806C51AD12B83B8 0xDB2D0762
	static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xE1AD3170DEAE4333, id); } // 0x0B4DF1FA60C0E664 0x95E1546E
	static void _0xA4DEDE28B1814289() { invoke<Void>(0x192B7BF5EC8B3808); } // 0xA4DEDE28B1814289 0x52746FE1
	static void RESET_RETICULE_VALUES() { invoke<Void>(0x569C0694ED1B2E60); } // 0x12782CE0A636E9F0 0xBE27AA3F
	static void RESET_HUD_COMPONENT_VALUES(Any p0) { invoke<Void>(0xC667A7C5CE24C569, p0); } // 0x450930E616475D0D 0xD15B46DA
	static void SET_HUD_COMPONENT_POSITION(Any p0, float p1, float p2) { invoke<Void>(0x9EAFA57A34157CEF, p0, p1, p2); } // 0xAABB1F56E2A17CED 0x2F3A0D15
	static Vector3 GET_HUD_COMPONENT_POSITION(Any p0) { return invoke<Vector3>(0x0A05FDA055C1B4DD, p0); } // 0x223CA69A8C4417FD 0x080DCED6
	static void _0xB57D8DD645CFA2CF() { invoke<Void>(0xC099D1DEF6374B6A); } // 0xB57D8DD645CFA2CF 0x5BBCC934
	static Any _0xF9904D11F1ACBEC3(float x, float y, float z, Any* p3, Any* p4) { return invoke<Any>(0x5BD16898F97C10AF, x, y, z, p3, p4); } // 0xF9904D11F1ACBEC3 0xFE9A39F8
	static void _0x523A590C1A3CC0D3() { invoke<Void>(0x81055A28441DD97C); } // 0x523A590C1A3CC0D3 0x10DE5150
	static void _0xEE4C0E6DBC6F2C6F() { invoke<Void>(0xC2A91170638DA711); } // 0xEE4C0E6DBC6F2C6F 0x67649EE0
	static Any _0x9135584D09A3437E() { return invoke<Any>(0x75701FCB265F1122); } // 0x9135584D09A3437E 0x9D2C94FA
	static BOOL _0x2432784ACA090DA4(Any p0) { return invoke<BOOL>(0xB8062C3C4BE95491, p0); } // 0x2432784ACA090DA4 0x45472FD5
	static void _0x7679CC1BCEBE3D4C(Any p0, float p1, float p2) { invoke<Void>(0x511916C3D4C9050D, p0, p1, p2); } // 0x7679CC1BCEBE3D4C 0x198F32D7
	static void _0x784BA7E0ECEB4178(Any p0, float x, float y, float z) { invoke<Void>(0xE75E0143B8F86984, p0, x, y, z); } // 0x784BA7E0ECEB4178 0x93045157
	static void _0xB094BC1DB4018240(Any p0, Any p1, float p2, float p3) { invoke<Void>(0xC7FB1E85898BCB70, p0, p1, p2, p3); } // 0xB094BC1DB4018240 0x18B012B7
	static void _0x788E7FD431BD67F1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xBDE72C26622FA1E4, p0, p1, p2, p3, p4, p5); } // 0x788E7FD431BD67F1 0x97852A82
	static void CLEAR_FLOATING_HELP(Any p0, BOOL p1) { invoke<Void>(0x436DCF1E1ED3DA7A, p0, p1); } // 0x50085246ABD3FEFA 0xB181F88F
	static void _0x6DD05E9D83EFA4C9(int headDisplayId, char* username, BOOL pointedClanTag, BOOL isRockstarClan, char* clanTag, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xB3752193C6FA254D, headDisplayId, username, pointedClanTag, isRockstarClan, clanTag, p5, p6, p7, p8); } // 0x6DD05E9D83EFA4C9 0xC969F2D0
	static BOOL _0x6E0EB3EB47C8D7AA() { return invoke<BOOL>(0xA44980AD997BD4CB); } // 0x6E0EB3EB47C8D7AA 0xEFD2564A
	static int _CREATE_HEAD_DISPLAY(Ped ped, char* username, BOOL pointedClanTag, BOOL isRockstarClan, char* clanTag, Any p5) { return invoke<int>(0x7EC48C5903ED1E9A, ped, username, pointedClanTag, isRockstarClan, clanTag, p5); } // 0xBFEFE3321A3F5015 0xF5CD2AA4
	static void _0x31698AA80E0223F8(int headDisplayId) { invoke<Void>(0x0183DC01931AFE2E, headDisplayId); } // 0x31698AA80E0223F8 0x3D081FE4
	static BOOL _HAS_HEAD_DISPLAY_LOADED(int headDisplayId) { return invoke<BOOL>(0xAF24D11D67119A57, headDisplayId); } // 0x4E929E7A5796FD26 0x60118951
	static BOOL ADD_TREVOR_RANDOM_MODIFIER(int headDisplayId) { return invoke<BOOL>(0x04F5A7BB51DB12FC, headDisplayId); } // 0x595B5178E412E199 0x63959059
	static void _SET_HEAD_DISPLAY_FLAG(int headDisplayId, int sprite, BOOL enabled) { invoke<Void>(0xF3B575E46E32A11D, headDisplayId, sprite, enabled); } // 0x63BB75ABEDC1F6A0 0xD41DF479
	static void _0xEE76FF7E6A0166B0(int headDisplayId, BOOL p1) { invoke<Void>(0xFB265AAAAB3217AD, headDisplayId, p1); } // 0xEE76FF7E6A0166B0 0x767DED29
	static void _0xA67F9C46D612B6F1(int headDisplayId, BOOL p1) { invoke<Void>(0x2AF8D274585B79A4, headDisplayId, p1); } // 0xA67F9C46D612B6F1 0xB01A5434
	static void _0x613ED644950626AE(int headDisplayId, Any p1, int flag) { invoke<Void>(0xA7082B91CA5DD92E, headDisplayId, p1, flag); } // 0x613ED644950626AE 0x7E3AA40A
	static void _0x3158C77A7E888AB4(int headDisplayId, Any p1) { invoke<Void>(0x10B4DC349BA665CE, headDisplayId, p1); } // 0x3158C77A7E888AB4 0x5777EC77
	static void _0xD48FE545CD46F857(int headDisplayId, Any p1, Any p2) { invoke<Void>(0xE3B08914F1239DCE, headDisplayId, p1, p2); } // 0xD48FE545CD46F857 0xF4418611
	static void _SET_HEAD_DISPLAY_WANTED(int headDisplayId, int wantedlvl) { invoke<Void>(0xF482EF5D81B5C16F, headDisplayId, wantedlvl); } // 0xCF228E2AA03099C3 0x0EBB003F
	static void _SET_HEAD_DISPLAY_STRING(int headDisplayId, char* string) { invoke<Void>(0x19DADB7CFF414F30, headDisplayId, string); } // 0xDEA2B8283BAA3944 0x627A559B
	static BOOL _0xEB709A36958ABE0D(int headDisplayId) { return invoke<BOOL>(0x17F281EAFC1955E4, headDisplayId); } // 0xEB709A36958ABE0D 0xF11414C4
	static void _0x7B7723747CCB55B6(int headDisplayId, char* string) { invoke<Void>(0x4DE206779B088AAC, headDisplayId, string); } // 0x7B7723747CCB55B6 0x939218AB
	static Any _0x01A358D9128B7A86() { return invoke<Any>(0x29F90097BBE056D3); } // 0x01A358D9128B7A86 0xAB5B7C18
	static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xB77665708C11B0DC); } // 0x97D47996FC48CBAD 0x42A55B14
	static Any _0xE3B05614DCE1D014(Any p0) { return invoke<Any>(0xCD746BA9F7E698B8, p0); } // 0xE3B05614DCE1D014 0xD217EE7E
	static void _0xB99C4E4D9499DF29(BOOL p0) { invoke<Void>(0x2B68099BFA222A25, p0); } // 0xB99C4E4D9499DF29
	static Any _0xAF42195A42C63BBA() { return invoke<Any>(0x8F1E5C1424BAD7EB); } // 0xAF42195A42C63BBA
	static void SET_WARNING_MESSAGE(char* entryLine1, int instructionalKey, char* entryLine2, BOOL p3, Any p4, Any* p5, Any* p6, BOOL background) { invoke<Void>(0x7B1776B3B53F8D74, entryLine1, instructionalKey, entryLine2, p3, p4, p5, p6, background); } // 0x7B1776B3B53F8D74 0xBE699BDE
	static void _SET_WARNING_MESSAGE_2(char* entryHeader, char* entryLine1, int instructionalKey, char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL background) { invoke<Void>(0xDC38CC1E35B6A5D7, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, background); } // 0xDC38CC1E35B6A5D7 0x2DB9EAB5
	static void _SET_WARNING_MESSAGE_3(char* entryHeader, char* entryLine1, Any instructionalKey, char* entryLine2, BOOL p4, Any p5, Any p6, Any* p7, Any* p8, BOOL p9) { invoke<Void>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8, p9); } // 0x701919482C74B5AB 0x749929D3
	static BOOL _0x0C5A80A9E096D529(Any p0, Any* p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x0C5A80A9E096D529, p0, p1, p2, p3, p4, p5); } // 0x0C5A80A9E096D529
	static BOOL _0xDAF87174BE7454FF(Any p0) { return invoke<BOOL>(0xBAE3775C470967DE, p0); } // 0xDAF87174BE7454FF
	static void _0x6EF54AB721DC6242() { invoke<Void>(0x0A0E087B80DA42C1); } // 0x6EF54AB721DC6242
	static BOOL _0xE18B138FABC53103() { return invoke<BOOL>(0xCD755B20D2481736); } // 0xE18B138FABC53103 0x94C834AD
	static void _0x7792424AA0EAC32E() { invoke<Void>(0x85A8C24B0C3E47DD); } // 0x7792424AA0EAC32E 0x2F9A309C
	static void _0x5354C5BA2EA868A4(BOOL p0) { invoke<Void>(0x22B0A0C55D16C545, p0); } // 0x5354C5BA2EA868A4 0xE4FD20D8
	static void _0x1EAE6DD17B7A5EFA(Any p0) { invoke<Void>(0x0B6E4112979D3583, p0); } // 0x1EAE6DD17B7A5EFA 0x13E7A5A9
	static Any _0x551DF99658DB6EE8(float p0, float p1, float p2) { return invoke<Any>(0x8ECFF407DC3EA740, p0, p1, p2); } // 0x551DF99658DB6EE8 0x786CA0A2
	static void _0x2708FC083123F9FF() { invoke<Void>(0xFFBF811B7D4578BD); } // 0x2708FC083123F9FF 0xCBEC9369
	static Any _0x1121BFA1A1A522A8() { return invoke<Any>(0xE3223A7B49A29563); } // 0x1121BFA1A1A522A8 0x3F4AFB13
	static void _0x82CEDC33687E1F50(BOOL p0) { invoke<Void>(0xAFAB958641F8EDCE, p0); } // 0x82CEDC33687E1F50 0x2F28F0A6
	static void _0x211C4EF450086857() { invoke<Void>(0x715F11F136683948); } // 0x211C4EF450086857 0x801D0D86
	static void _0xBF4F34A85CA2970C() { invoke<Void>(0x4BE4684009008F8F); } // 0xBF4F34A85CA2970C 0x317775DF
	static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL p1, int p2) { invoke<Void>(0x719FCE72B632D066, menuhash, p1, p2); } // 0xEF01D36B9C9D0C7B 0x01D83872
	static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0x1E3CD83087B82F8B, menuHash, p1); } // 0x10706DC6AD2D49C0 0xB07DAF98
	static Hash _0x2309595AD6145265() { return invoke<Hash>(0xDEA1673721A8B909); } // 0x2309595AD6145265 0x33D6868F
	static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0x8281AD939D8485BB, toggle); } // 0xDF47FC56C71569CF 0x1DCD878E
	static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0x9873DF493A2EBB18); } // 0x6D3465A73092F0E6 0xD86A029E
	static void _0xBA751764F0821256() { invoke<Void>(0x4A2693B9CCBA9709); } // 0xBA751764F0821256 0x7F349900
	static void _0xCC3FDDED67BCFC63() { invoke<Void>(0x94195668AFC82341); } // 0xCC3FDDED67BCFC63 0x630CD8EE
	static void SET_FRONTEND_ACTIVE(BOOL p0) { invoke<Void>(0xB142E94AE869ED94, p0); } // 0x745711A75AB09277 0x81E1AD32
	static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0x84C71F36E7D97756); } // 0xB0034A223497FFCB 0xD3600591
	static Any _0x2F057596F2BD0061() { return invoke<Any>(0xE67F53688772941C); } // 0x2F057596F2BD0061 0xC85C4487
	static int GET_PAUSE_MENU_STATE() { return invoke<int>(0xAD490CD811854704); } // 0x272ACD84970869C5 0x92F50134
	static Vector3 _0x5BFF36D6ED83E0AE() { return invoke<Vector3>(0x1786EF4FB90CCA30); } // 0x5BFF36D6ED83E0AE
	static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0x5EBE37F8A57415F6); } // 0x1C491717107431C7 0x3C4CF4D9
	static void _0x2162C446DFDF38FD(Any p0) { invoke<Void>(0x821D03B4FC56D5FC, p0); } // 0x2162C446DFDF38FD 0x2DFD35C7
	static void _0x77F16B447824DA6C(Any p0) { invoke<Void>(0xB42D37E27796DBC8, p0); } // 0x77F16B447824DA6C 0x0A89336C
	static void _0xCDCA26E80FAECB8F() { invoke<Void>(0x6D05CBCCE8A725A6); } // 0xCDCA26E80FAECB8F 0xC84BE309
	static void _0xDD564BDD0472C936(Hash hash) { invoke<Void>(0xB3D65EB851744F28, hash); } // 0xDD564BDD0472C936 0x9FE8FD5E
	static void OBJECT_DECAL_TOGGLE(Hash hash) { invoke<Void>(0x2099DD912801B1F4, hash); } // 0x444D8CF241EC25C5 0x0029046E
	static BOOL _0x84698AB38D0C6636(Any p0) { return invoke<BOOL>(0x7645014AAA2B6DDF, p0); } // 0x84698AB38D0C6636 0xC51BC42F
	static Any _0x2A25ADC48F87841F() { return invoke<Any>(0x7771865EB0E9A1B2); } // 0x2A25ADC48F87841F 0x016D7AF9
	static Any _0xDE03620F8703A9DF() { return invoke<Any>(0xE5DA2DE2DBF4A8FA); } // 0xDE03620F8703A9DF
	static Any _0x359AF31A4B52F5ED() { return invoke<Any>(0x7F2CEF920A70690A); } // 0x359AF31A4B52F5ED
	static Any _0x13C4B962653A5280() { return invoke<Any>(0xA3D18FEE67110E1F); } // 0x13C4B962653A5280
	static BOOL _0xC8E1071177A23BE5(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xAAEF954E96A4A78D, p0, p1, p2); } // 0xC8E1071177A23BE5
	static void ENABLE_DEATHBLOOD_SEETHROUGH(BOOL p0) { invoke<Void>(0xC564BD91A72E0EA9, p0); } // 0x4895BDEA16E7C080 0x15B24768
	static void _0xC78E239AC5B2DDB9(BOOL p0, Any p1, Any p2) { invoke<Void>(0x981A05074599804B, p0, p1, p2); } // 0xC78E239AC5B2DDB9 0x6C67131A
	static void _0xF06EBB91A81E09E3(BOOL p0) { invoke<Void>(0x0258221D73D9D732, p0); } // 0xF06EBB91A81E09E3 0x11D09737
	static Any _0x3BAB9A4E4F2FF5C7() { return invoke<Any>(0xE67F281B7D417C6C); } // 0x3BAB9A4E4F2FF5C7 0xD3BF3ABD
	static void _0xEC9264727EEC0F28() { invoke<Void>(0x59B0B251095F79E1); } // 0xEC9264727EEC0F28 0xC06B763D
	static void _0x14621BB1DF14E2B2() { invoke<Void>(0x3572ADD5B99600BC); } // 0x14621BB1DF14E2B2 0xB9392CE7
	static Any _0x66E7CB63C97B7D20() { return invoke<Any>(0x41B3277F51ADC6A4); } // 0x66E7CB63C97B7D20 0x92DAFA78
	static Any _0x593FEAE1F73392D4() { return invoke<Any>(0x15B53AD71AFC2CF8); } // 0x593FEAE1F73392D4 0x22CA9F2A
	static Any _0x4E3CD0EF8A489541() { return invoke<Any>(0x769910670178E9BE); } // 0x4E3CD0EF8A489541 0xDA7951A2
	static Any _0xF284AC67940C6812() { return invoke<Any>(0xC2533A106FE8154B); } // 0xF284AC67940C6812 0x7D95AFFF
	static Any _0x2E22FEFA0100275E() { return invoke<Any>(0x09DE2E550331D077); } // 0x2E22FEFA0100275E 0x96863460
	static void _0x0CF54F20DE43879C(Any p0) { invoke<Void>(0x6922CB1E575D1611, p0); } // 0x0CF54F20DE43879C
	static void _0x36C1451A88A09630(Any* p0, Any* p1) { invoke<Void>(0x90311DD32AB68E82, p0, p1); } // 0x36C1451A88A09630 0x8543AAC8
	static void _0x7E17BE53E1AAABAF(Any* p0, Any* p1, Any* p2) { invoke<Void>(0xAABAF601DBFAD3B3, p0, p1, p2); } // 0x7E17BE53E1AAABAF 0x6025AA2F
	static BOOL _0xA238192F33110615(int* p0, int* p1, int* p2) { return invoke<BOOL>(0xFDEDBE64C8B874E5, p0, p1, p2); } // 0xA238192F33110615 0x46794EB2
	static BOOL SET_USERIDS_UIHIDDEN(Any p0, Any* p1) { return invoke<BOOL>(0xD41D4BD377CE5BAF, p0, p1); } // 0xEF4CED81CEBEDC6D 0x4370999E
	static BOOL _0xCA6B2F7CE32AB653(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xD95343052D7D24EA, p0, p1, p2); } // 0xCA6B2F7CE32AB653
	static BOOL _0x90A6526CF0381030(Any p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xA7F68C6D4C8DD271, p0, p1, p2, p3); } // 0x90A6526CF0381030 0xD6CC4766
	static BOOL _0x24A49BEAF468DC90(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x00C10B7E3A3251A5, p0, p1, p2, p3, p4); } // 0x24A49BEAF468DC90
	static BOOL _0x5FBD7095FE7AE57F(Any p0, Any* p1) { return invoke<BOOL>(0x6895B98755FD0093, p0, p1); } // 0x5FBD7095FE7AE57F 0x51972B04
	static BOOL _0x8F08017F9D7C47BD(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xF2A3464369C6DA17, p0, p1, p2); } // 0x8F08017F9D7C47BD
	static BOOL _0x052991E59076E4E4(Hash p0, Any* p1) { return invoke<BOOL>(0x0E83737974722FA5, p0, p1); } // 0x052991E59076E4E4 0xD43BB56D
	static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0x2282DF24E36946DC); } // 0x5E62BE5DC58E9E06 0x28058ACF
	static void GIVE_PED_TO_PAUSE_MENU(Any p0, Any p1) { invoke<Void>(0x0458F38713943A60, p0, p1); } // 0xAC0BFBDC3BE00E14 0x2AD2C9CE
	static void _0x3CA6050692BC61B0(BOOL p0) { invoke<Void>(0x312C3310E20E7F93, p0); } // 0x3CA6050692BC61B0 0x127310EB
	static void _0xECF128344E9FF9F1(BOOL p0) { invoke<Void>(0x9311F706C15682A8, p0); } // 0xECF128344E9FF9F1 0x8F45D327
	static void _SHOW_SOCIAL_CLUB_LEGAL_SCREEN() { invoke<Void>(0x19718566D0BE994D); } // 0x805D7CBB36FD6C4C 0x19FCBBB2
	static Any _0xF13FE2A80C05C561() { return invoke<Any>(0x6BE00D4A3B1F81FD); } // 0xF13FE2A80C05C561 0x850690FF
	static Any _0x6F72CD94F7B5B68C() { return invoke<Any>(0x7C38C975D5325D2B); } // 0x6F72CD94F7B5B68C 0x9D4934F4
	static void _0x75D3691713C3B05A() { invoke<Void>(0xEB0E53201DA3859C); } // 0x75D3691713C3B05A 0x57218529
	static void _0xD2B32BE3FC1626C6() { invoke<Void>(0x1C20EEF16A82E76C); } // 0xD2B32BE3FC1626C6 0x5F86AA39
	static void _0x9E778248D6685FE0(char* p0) { invoke<Void>(0xA51450F672876A02, p0); } // 0x9E778248D6685FE0 0x7AD67C95
	static Any _0xC406BE343FC4B9AF() { return invoke<Any>(0x70CD60F80346F728); } // 0xC406BE343FC4B9AF 0xD4DA14EF
	static void _0x1185A8087587322C(BOOL p0) { invoke<Void>(0x7431A0E65BF3B009, p0); } // 0x1185A8087587322C
	static void _0x8817605C2BA76200() { invoke<Void>(0x127713C7915FA2A5); } // 0x8817605C2BA76200
	static BOOL _IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0xBC685E99987F211B); } // 0xB118AF58B5F332A1
	static void _ABORT_TEXT_CHAT() { invoke<Void>(0x4C4F2AB84F51F0CF); } // 0x1AC8F4AD40E22127
	static void _SET_TEXT_CHAT_UNK(BOOL p0) { invoke<Void>(0x24245835AAB56123, p0); } // 0x1DB21A44B09E8BA3
	static void _0xCEF214315D276FD1(BOOL p0) { invoke<Void>(0x081FD7290A57F152, p0); } // 0xCEF214315D276FD1 0xFF06772A
	static void _0xD30C50DF888D58B5(Any p0, BOOL p1) { invoke<Void>(0x2E0880CA20A96DBE, p0, p1); } // 0xD30C50DF888D58B5 0x96C4C4DD
	static BOOL DOES_PED_HAVE_AI_BLIP(Any p0) { return invoke<BOOL>(0x86998240179B9048, p0); } // 0x15B8ECF844EE67ED 0x3BE1257F
	static void _0xE52B8E7F85D39A08(Any p0, Any p1) { invoke<Void>(0xE632D58AA6B26F2D, p0, p1); } // 0xE52B8E7F85D39A08 0xD8E31B1A
	static void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(Any p0, BOOL p1) { invoke<Void>(0x71CB3379ED1310DF, p0, p1); } // 0x3EED80DFF7325CAA 0x872C2CFB
	static void _0x0C4BBF625CA98C4E(Any p0, BOOL p1) { invoke<Void>(0xC6458FBC206C61F2, p0, p1); } // 0x0C4BBF625CA98C4E 0xFFDF46F0
	static void _0x97C65887D4B37FA9(Any p0, float p1) { invoke<Void>(0xB1EB57004481ED5D, p0, p1); } // 0x97C65887D4B37FA9 0xF9DC2AF7
	static Any _0x7CD934010E115C2C(Any p0) { return invoke<Any>(0x968B07E3B24F8761, p0); } // 0x7CD934010E115C2C 0x06349065
	static Any _0x56176892826A4FE8(Any p0) { return invoke<Any>(0x165B5F1F7F703B2D, p0); } // 0x56176892826A4FE8 0xCA52CF43
	static Any _0xA277800A9EAE340E() { return invoke<Any>(0x590109625D94E8DA); } // 0xA277800A9EAE340E
	static void _0x2632482FD6B9AB87() { invoke<Void>(0x691D10E330BE3DAA); } // 0x2632482FD6B9AB87
	static void _0x808519373FD336A3(BOOL p0) { invoke<Void>(0xD36A0E3C963CA79E, p0); } // 0x808519373FD336A3
	static void _0x04655F9D075D0AE5(BOOL p0) { invoke<Void>(0x42A3BF44AD562FC9, p0); } // 0x04655F9D075D0AE5
}

namespace GRAPHICS
{
	static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0x81C8659022413FE4, enabled); } // 0x175B6BFC15CDD0C5 0x1418CA37
	static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x46B73FAB8FE8A19F, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x7FDFADE676AA3CB0 0xABF783AB
	static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0x952173F2EA797FE5, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); } // 0xD8B9A8AC5608FF94 0xE8BFF632
	static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int r, int g, int b, int alpha) { invoke<Void>(0xABA9FA99EF205C0E, x, y, z, radius, r, g, b, alpha); } // 0xAAD68E1AB39DA632 0x304D0EEF
	static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x46B73FAB8FE8A19F, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x083A2CA4F2E573BD 0x8524A848
	static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int r, int g, int b, int alpha) { invoke<Void>(0x96E897E2C2CB4CC9, x, y, z, size, r, g, b, alpha); } // 0x73B1189623049839 0xB6DF3709
	static void DRAW_DEBUG_TEXT(char* text, float x, float y, float z, int r, int g, int b, int alpha) { invoke<Void>(0x73528CE2C11028F7, text, x, y, z, r, g, b, alpha); } // 0x3903E216620488E8 0x269B006F
	static void DRAW_DEBUG_TEXT_2D(char* text, float x, float y, float z, int r, int g, int b, int alpha) { invoke<Void>(0xEAAACF3402024FE8, text, x, y, z, r, g, b, alpha); } // 0xA3BB2E9555C05A8F 0x528B973B
	static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x505E0EC505B6996F, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x6B7256074AE34680 0xB3426BCC
	static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int r, int g, int b, int alpha) { invoke<Void>(0xD358D4727B50F736, x1, y1, z1, x2, y2, z2, x3, y3, z3, r, g, b, alpha); } // 0xAC26716048436851 0xABD19253
	static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x8F1BDD8C4D8DFCB6, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0xD3A9971CADAC7252 0xCD4D9DD5
	static void _0x23BA6B0C2AD7B0D3(BOOL p0) { invoke<Void>(0x9C31F12196017B43, p0); } // 0x23BA6B0C2AD7B0D3 0xC44C2F44
	static Any _0x1DD2139A9A20DCE8() { return invoke<Any>(0x32B8D04AAC13F9A9); } // 0x1DD2139A9A20DCE8 0xBA9AD458
	static Any _0x90A78ECAA4E78453() { return invoke<Any>(0x809B0655847EAD16); } // 0x90A78ECAA4E78453 0xADBBA287
	static void _0x0A46AF8A78DC5E0A() { invoke<Void>(0x18835F827E1ACEEB); } // 0x0A46AF8A78DC5E0A 0x9E553002
	static BOOL _0x4862437A486F91B0(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xA92DDFD054CF59A7, p0, p1, p2, p3); } // 0x4862437A486F91B0 0x56C1E488
	static int _0x1670F8D05056F257(Any* p0) { return invoke<int>(0xA0CE7C73914BF3E2, p0); } // 0x1670F8D05056F257 0x226B08EA
	static Any _0x7FA5D82B8F58EC06() { return invoke<Any>(0xBE1EE395CD21E59E); } // 0x7FA5D82B8F58EC06 0x1F3CADB0
	static Any _0x5B0316762AFD4A64() { return invoke<Any>(0x4A4F640003799592); } // 0x5B0316762AFD4A64 0xA9DC8558
	static void _0x346EF3ECAAAB149E() { invoke<Void>(0xD375136FC363ED53); } // 0x346EF3ECAAAB149E 0x88EAF398
	static Any _0xA67C35C56EB1BD9D() { return invoke<Any>(0xCE3D356EEB03B113); } // 0xA67C35C56EB1BD9D 0x47B0C137
	static Any _0x0D6CA79EEEBD8CA3() { return invoke<Any>(0xF7CBE41138F609A1); } // 0x0D6CA79EEEBD8CA3 0x65376C9B
	static void _0xD801CC02177FA3F1() { invoke<Void>(0x1C5F1EAD464EA72F); } // 0xD801CC02177FA3F1 0x9CBA682A
	static void _0x1BBC135A4D25EDDE(BOOL p0) { invoke<Void>(0xA2A523E3BB132B06, p0); } // 0x1BBC135A4D25EDDE
	static Any _0x3DEC726C25A11BAC(int p0) { return invoke<Any>(0x62966B69CA396762, p0); } // 0x3DEC726C25A11BAC 0x3B15D33C
	static Any _0x0C0C4E81E1AC60A0() { return invoke<Any>(0x25208156708FCDC6); } // 0x0C0C4E81E1AC60A0 0xEC5D0317
	static BOOL _0x759650634F07B6B4(Any p0) { return invoke<BOOL>(0x5AD4024571E97623, p0); } // 0x759650634F07B6B4 0x25D569EB
	static Any _0xCB82A0BF0E3E3265(Any p0) { return invoke<Any>(0x022CF21ECF64F87E, p0); } // 0xCB82A0BF0E3E3265 0xCFCDC518
	static void _0x6A12D88881435DCA() { invoke<Void>(0x2EABAFFCF17E1E52); } // 0x6A12D88881435DCA 0x108F36CC
	static void _0x1072F115DAB0717E(BOOL p0, BOOL p1) { invoke<Void>(0x3B21CA2F785A4CB2, p0, p1); } // 0x1072F115DAB0717E 0xE9F2B68F
	static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xA4EB8864999F64E4); } // 0x34D23450F028B0BF 0x727AA63F
	static Any _0xDC54A7AF8B3A14EF() { return invoke<Any>(0xDC882C74B7DE7403); } // 0xDC54A7AF8B3A14EF 0x239272BD
	static Any _0x473151EBC762C6DA() { return invoke<Any>(0x279AA2C25A21C610); } // 0x473151EBC762C6DA 0x21DBF0C9
	static Any _0x2A893980E96B659A(Any p0) { return invoke<Any>(0x992F4AFC5BA52B73, p0); } // 0x2A893980E96B659A 0x199FABF0
	static Any _0xF5BED327CEA362B1(Any p0) { return invoke<Any>(0xEC672F23962FFE62, p0); } // 0xF5BED327CEA362B1 0x596B900D
	static void _0x4AF92ACD3141D96C() { invoke<Void>(0x3CED9A09E07FD10E); } // 0x4AF92ACD3141D96C 0xC9EF81ED
	static Any _0xE791DF1F73ED2C8B(Any p0) { return invoke<Any>(0xE8D7A5C9E649A4C4, p0); } // 0xE791DF1F73ED2C8B 0x9D84554C
	static Any _0xEC72C258667BE5EA(Any p0) { return invoke<Any>(0x2390E96F8596C3F2, p0); } // 0xEC72C258667BE5EA 0x9C106AD9
	static Any _0x40AFB081F8ADD4EE(Any p0) { return invoke<Any>(0xBC5507F7F5D76982, p0); } // 0x40AFB081F8ADD4EE 0x762E5C5F
	static void _DRAW_LIGHT_WITH_RANGE_WITH_SHADOW(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0xADACB2E27623F6F3, x, y, z, r, g, b, range, intensity, shadow); } // 0xF49E9A9716A04595
	static void DRAW_LIGHT_WITH_RANGE(float x, float y, float z, int r, int g, int b, float range, float intensity) { invoke<Void>(0x1232E0A97E0A00F0, x, y, z, r, g, b, range, intensity); } // 0xF2A1B2771A01DBD4 0x6A396E9A
	static void DRAW_SPOT_LIGHT(float x, float y, float z, float dirVectorX, float dirVectorY, float dirVectorZ, int r, int g, int b, float distance, float brightness, float roundness, float radius, float fadeout) { invoke<Void>(0x25EB9EFC7CE73AB5, x, y, z, dirVectorX, dirVectorY, dirVectorZ, r, g, b, distance, brightness, roundness, radius, fadeout); } // 0xD0F64B265C8C8B33 0xBDBC410C
	static void _DRAW_SPOT_LIGHT_WITH_SHADOW(float x, float y, float z, float dirVectorX, float dirVectorY, float dirVectorZ, int r, int g, int b, float distance, float brightness, float roundness, float radius, float fadeout, float shadow) { invoke<Void>(0x3FEE876355231BEA, x, y, z, dirVectorX, dirVectorY, dirVectorZ, r, g, b, distance, brightness, roundness, radius, fadeout, shadow); } // 0x5BCA583A583194DB 0x32BF9598
	static void _0xC9B18B4619F48F7B(float p0) { invoke<Void>(0xC14106B65E528CE7, p0); } // 0xC9B18B4619F48F7B 0x93628786
	static void _0xDEADC0DEDEADC0DE(Object object) { invoke<Void>(0x397B479648248547, object); } // 0xDEADC0DEDEADC0DE
	static void DRAW_MARKER(int type, float x, float y, float z, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int colorR, int colorG, int colorB, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, char* textureDict, char* textureName, BOOL drawOnEnts) { invoke<Void>(0xA75B05D6DFDD8308, type, x, y, z, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, colorR, colorG, colorB, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x28477EC23D892089 0x48D84A02
	static Any CREATE_CHECKPOINT(int Type, float x, float y, float z, float x2, float y2, float z2, float radius, int R, int G, int B, int Alpha, int p12) { return invoke<Any>(0x2BB16D7D5E344EE4, Type, x, y, z, x2, y2, z2, radius, R, G, B, Alpha, p12); } // 0x0134F0835AB6BFCB 0xF541B690
	static void _0x4B5B4DA5D79F1943(Any p0, float p1) { invoke<Void>(0x342FF90A520EC349, p0, p1); } // 0x4B5B4DA5D79F1943 0x80151CCF
	static void SET_CHECKPOINT_CYLINDER_HEIGHT(Any checkpoint, float nearHeight, float farHeight, float scaleRadius) { invoke<Void>(0x3C28BAFDFB7DEEF4, checkpoint, nearHeight, farHeight, scaleRadius); } // 0x2707AAE9D9297D89 0xFF0F9B22
	static void SET_CHECKPOINT_RGBA(Any checkpoint, int colorR, int colorG, int colorB, int alpha) { invoke<Void>(0x6AED8EE219E00131, checkpoint, colorR, colorG, colorB, alpha); } // 0x7167371E8AD747F7 0xEF9C8CB3
	static void _SET_CHECKPOINT_ICON_RGBA(Any checkpoint, int colorR, int colorG, int colorB, int colorA) { invoke<Void>(0x8A2018F520EA19F8, checkpoint, colorR, colorG, colorB, colorA); } // 0xB9EA40907C680580 0xA5456DBB
	static void _0xF51D36185993515D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x40A97844F210A5CA, p0, p1, p2, p3, p4, p5, p6); } // 0xF51D36185993515D 0x20EABD0F
	static void _0x615D3925E87A3B26(Any p0) { invoke<Void>(0xADB35B0E1C8BA13A, p0); } // 0x615D3925E87A3B26 0x1E3A3126
	static void DELETE_CHECKPOINT(Any checkpoint) { invoke<Void>(0x756D6F50061C0122, checkpoint); } // 0xF5ED37F54CD4D52E 0xB66CF3CA
	static void _0x22A249A53034450A(BOOL p0) { invoke<Void>(0x5923E12E92A75CDD, p0); } // 0x22A249A53034450A 0x932FDB81
	static void _0xDC459CFA0CCE245B(BOOL p0) { invoke<Void>(0x9F5D927CE1A4AFDC, p0); } // 0xDC459CFA0CCE245B 0x7E946E87
	static void REQUEST_STREAMED_TEXTURE_DICT(char* textureDict, BOOL toggle) { invoke<Void>(0xC41E276F33F448DD, textureDict, toggle); } // 0xDFA2EF8E04127DD5 0x4C9B035F
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(char* textureDict) { return invoke<BOOL>(0xC04F047A523E9370, textureDict); } // 0x0145F696AAAAD2E4 0x3F436EEF
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(char* textureDict) { invoke<Void>(0xB14EE32074164477, textureDict); } // 0xBE2CACCF5A8AA805 0xF07DDA38
	static void DRAW_RECT(float posX, float posY, float width, float height, int R, int G, int B, int A) { invoke<Void>(0x676A3D7F15838EEA, posX, posY, width, height, R, G, B, A); } // 0x3A618A217E5154F0 0xDD2BFC77
	static void _0xC6372ECD45D73BCD(BOOL p0) { invoke<Void>(0x6F6B42957DC01968, p0); } // 0xC6372ECD45D73BCD 0xF8FBCC25
	static void _0x61BB1D9B3A95D802(int layer) { invoke<Void>(0x1373E5003F76E429, layer); } // 0x61BB1D9B3A95D802 0xADF81D24
	static void _SET_SCREEN_DRAW_POSITION(int x, int y) { invoke<Void>(0xCF4C2CE3511D92EA, x, y); } // 0xB8A850F20A067EB6 0x228A2598
	static void _0xE3A3DB414A373DAB() { invoke<Void>(0x9AA8EEC80385B281); } // 0xE3A3DB414A373DAB 0x3FE33BD6
	static void _0xF5A2C681787E579D(float p0, float p1, float p2, float p3) { invoke<Void>(0x9EB94F4B302F02C5, p0, p1, p2, p3); } // 0xF5A2C681787E579D 0x76C641E4
	static void _0x6DD8F5AA635EB4B2(float p0, float p1, Any* p2, Any* p3) { invoke<Void>(0x01B50A0EA91F8229, p0, p1, p2, p3); } // 0x6DD8F5AA635EB4B2
	static Any GET_SAFE_ZONE_SIZE() { return invoke<Any>(0x005F4304A67F7593); } // 0xBAF107B6BB2C97F0 0x3F0D1A6F
	static void DRAW_SPRITE(char* textureDict, char* textureName, float screenX, float screenY, float scaleX, float scaleY, float heading, int colorR, int colorG, int colorB, int colorA) { invoke<Void>(0xBD42180765457DB6, textureDict, textureName, screenX, screenY, scaleX, scaleY, heading, colorR, colorG, colorB, colorA); } // 0xE7FFAE5EBF23D890 0x1FEC16B0
	static Any ADD_ENTITY_ICON(Entity entity, char* icon) { return invoke<Any>(0xE3A55FE51A8D1EE8, entity, icon); } // 0x9CD43EEE12BF4DD0 0xF3027D21
	static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xDCCA7FECC85CF23E, entity, toggle); } // 0xE0E8BEECCA96BA31 0xD1D2FD52
	static void SET_ENTITY_ICON_COLOR(Entity entity, int r, int g, int b, int a) { invoke<Void>(0xB1D1C0182B488480, entity, r, g, b, a); } // 0x1D5F595CCAE2E238 0x6EE1E946
	static void SET_DRAW_ORIGIN(float x, float y, float z, Any p3) { invoke<Void>(0xA775B9ECF181FB89, x, y, z, p3); } // 0xAA0008F3BBB8F416 0xE10198D5
	static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0x0D1287C47B0BC548); } // 0xFF0B610F6BE0D7AF 0xDD76B263
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0x2960C0EB0A391094, entity); } // 0x845BAD77CC770633 0x784944DB
	static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0x39A23F23BFCC4B3F, toggle); } // 0x113D2C5DC57E1774 0x2E0DFA35
	static Any LOAD_MOVIE_MESH_SET(Any* p0) { return invoke<Any>(0xFBF534EEC37E720F, p0); } // 0xB66064452270E8F1 0x9627905C
	static void RELEASE_MOVIE_MESH_SET(Any p0) { invoke<Void>(0x53B19BF8E44477FE, p0); } // 0xEB119AA014E89183 0x4FA5501D
	static Any _0x9B6E70C5CEEF4EEB(Any p0) { return invoke<Any>(0x663959F1BF67A275, p0); } // 0x9B6E70C5CEEF4EEB 0x9D5D9B38
	static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xB1F1D8A3052317AC, x, y); } // 0x888D57E407E63624 0x29F3572F
	static void _GET_SCREEN_ACTIVE_RESOLUTION(int* x, int* y) { invoke<Void>(0x28EBEB55C44FD509, x, y); } // 0x873C9F3104101DD3
	static float _GET_SCREEN_ASPECT_RATIO(BOOL b) { return invoke<float>(0x900671749E93DC05, b); } // 0xF1307EF624A80D87
	static Any _0xB2EBE8CBC58B90E9() { return invoke<Any>(0xEC3A1E232D6CF2EE); } // 0xB2EBE8CBC58B90E9
	static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0x626C2E82CA013B68); } // 0x30CF4BDA4FCB1905 0xEC717AEF
	static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xF7CE14B2A724EA38); } // 0x84ED31191CC5D2C9 0x1C340359
	static void _0xEFABC7722293DA7C() { invoke<Void>(0xDE8AE9A8A77DE2D2); } // 0xEFABC7722293DA7C
	static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0x70655A357D84D490, toggle); } // 0x18F621F7A5B1F85D 0xD1E5565F
	static Any _0x35FB78DC42B7BD21() { return invoke<Any>(0xA479458B6F88648A); } // 0x35FB78DC42B7BD21
	static BOOL _IS_NIGHTVISION_INACTIVE() { return invoke<BOOL>(0x0B55E0BF05EEDCB5); } // 0x2202A3F42C8E5F79 0x62619061
	static void _0xEF398BEEE4EF45F9(BOOL p0) { invoke<Void>(0x157D8C80CC5E9591, p0); } // 0xEF398BEEE4EF45F9
	static void SET_NOISEOVERIDE(BOOL p0) { invoke<Void>(0xF9BAB5F112AD7A1C, p0); } // 0xE787BF1C5CF823C9 0xD576F5DD
	static void SET_NOISINESSOVERIDE(float p0) { invoke<Void>(0xB6DA4FC23DEEE38F, p0); } // 0xCB6A7C3BB17A0C67 0x046B62D9
	static BOOL _WORLD3D_TO_SCREEN2D(float x3d, float y3d, float z3d, float* x2d, float* y2d) { return invoke<BOOL>(0xC728AE3A8209ED5C, x3d, y3d, z3d, x2d, y2d); } // 0x34E82F05DF2974F5 0x1F950E4B
	static Vector3 GET_TEXTURE_RESOLUTION(char* textureDict, char* textureName) { return invoke<Vector3>(0x4F70A6A4752B71C7, textureDict, textureName); } // 0x35736EE65BD00C11 0x096DAA4D
	static void _0xE2892E7E55D7073A(float p0) { invoke<Void>(0xAB60F56EAAE86C31, p0); } // 0xE2892E7E55D7073A 0x455F1084
	static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0x57114D3641BC6192, p0, p1, fadeIn, duration, fadeOut); } // 0x0AB84296FED9CFC6 0x7E55A1EE
	static void _0x3669F1B198DCAA4F() { invoke<Void>(0xB1F03929BF12E064); } // 0x3669F1B198DCAA4F 0x0DCC0B8B
	static void _SET_BLACKOUT(BOOL enable) { invoke<Void>(0xF15C0A94F7E32923, enable); } // 0x1268615ACE24D504 0xAA2A0EAF
	static void _0xC35A6D07C93802B2() { invoke<Void>(0x1E462BF6C635C5C7); } // 0xC35A6D07C93802B2
	static Object CREATE_TRACKED_POINT() { return invoke<Object>(0x4CE5F03ABB013D14); } // 0xE2C9439ED45DEA60 0x3129C31A
	static void SET_TRACKED_POINT_INFO(Object point, float x, float y, float z, float radius) { invoke<Void>(0x00EDDCD7B6DD91AA, point, x, y, z, radius); } // 0x164ECBB3CF750CB0 0x28689AA4
	static BOOL IS_TRACKED_POINT_VISIBLE(Object point) { return invoke<BOOL>(0xC829453EC9F8AC97, point); } // 0xC45CCDAAC9221CA8 0x0BFC4F64
	static void DESTROY_TRACKED_POINT(Object point) { invoke<Void>(0x4E3957C6F21DB5A9, point); } // 0xB25DC90BAD56CA42 0x14AC675F
	static Any _0xBE197EAA669238F4(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x41C7F2AF7E95A424, p0, p1, p2, p3); } // 0xBE197EAA669238F4
	static void _0x61F95E5BB3E0A8C6(Any p0) { invoke<Void>(0xD1F045BC375C4E41, p0); } // 0x61F95E5BB3E0A8C6
	static void _0xAE51BC858F32BA66(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0x255D2A2EA17F07D7, p0, p1, p2, p3, p4); } // 0xAE51BC858F32BA66
	static void _0x649C97D52332341A(Any p0) { invoke<Void>(0xD8968C12CB5B3F2F, p0); } // 0x649C97D52332341A
	static Any _0x2C42340F916C5930(Any p0) { return invoke<Any>(0xF5C49742AF2BDFC1, p0); } // 0x2C42340F916C5930
	static void _0x14FC5833464340A8() { invoke<Void>(0xE07ED4E9BD52FE1C); } // 0x14FC5833464340A8
	static void _0x0218BA067D249DEA() { invoke<Void>(0x57E961BCCB06453B); } // 0x0218BA067D249DEA
	static void _0x1612C45F9E3E0D44() { invoke<Void>(0x7206F999EDC7199A); } // 0x1612C45F9E3E0D44
	static void _0x5DEBD9C4DC995692() { invoke<Void>(0xE0E657C8A0BDCAA9); } // 0x5DEBD9C4DC995692
	static void _0x6D955F6A9E0295B1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x9B4C69D5600BF5CA, p0, p1, p2, p3, p4, p5, p6); } // 0x6D955F6A9E0295B1
	static void _0x302C91AB2D477F7E() { invoke<Void>(0xB64FC7EFD524FE55); } // 0x302C91AB2D477F7E
	static void _0x03FC694AE06C5A20() { invoke<Void>(0xF100005CC9E0A614); } // 0x03FC694AE06C5A20 0x48F16186
	static void _0xD2936CAB8B58FCBD(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0x44A0D0A48A6C0CA8, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD2936CAB8B58FCBD
	static void _0x5F0F3F56635809EF(float p0) { invoke<Void>(0xF11974AE5BFDED72, p0); } // 0x5F0F3F56635809EF 0x13D4ABC0
	static void _0x5E9DAF5A20F15908(float p0) { invoke<Void>(0x030CDDC30CA5C1CD, p0); } // 0x5E9DAF5A20F15908 0xD2157428
	static void _0x36F6626459D91457(float p0) { invoke<Void>(0xBE7559E2981A93A2, p0); } // 0x36F6626459D91457 0xC07C64C9
	static void _SET_FAR_SHADOWS_SUPPRESSED(BOOL toggle) { invoke<Void>(0xE0CE22BA0F7E91BE, toggle); } // 0x80ECBC0C856D3B0B 0xFE903D0F
	static void _0x25FC3E33A31AD0C9(BOOL p0) { invoke<Void>(0x062EB05CC2F93E0D, p0); } // 0x25FC3E33A31AD0C9
	static void _0xB11D94BC55F41932(char* p0) { invoke<Void>(0xAF99B24DE2CD67FF, p0); } // 0xB11D94BC55F41932 0xDE10BA1F
	static void _0x27CB772218215325() { invoke<Void>(0x7AB09D0C4BF0D665); } // 0x27CB772218215325
	static void _0x6DDBF9DFFC4AC080(BOOL p0) { invoke<Void>(0xC59AD26A38C3A2FB, p0); } // 0x6DDBF9DFFC4AC080 0x9F470BE3
	static void _0xD39D13C9FEBF0511(BOOL p0) { invoke<Void>(0x877CEAE657303145, p0); } // 0xD39D13C9FEBF0511 0x4A124267
	static void _0x02AC28F3A01FA04A(float p0) { invoke<Void>(0x2B6132FB7EEB0463, p0); } // 0x02AC28F3A01FA04A 0xB19B2764
	static void _0x0AE73D8DF3A762B2(BOOL p0) { invoke<Void>(0x2C9B6886E7A1F87A, p0); } // 0x0AE73D8DF3A762B2 0x342FA2B4
	static void _0xA51C4B86B71652AE(BOOL p0) { invoke<Void>(0x6060D9B26EF81537, p0); } // 0xA51C4B86B71652AE 0x5D3BFFC9
	static void _0x312342E1A4874F3F(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xDB3E750953B302CA, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x312342E1A4874F3F 0xD9653728
	static void _0x2485D34E50A22E84(float p0, float p1, float p2) { invoke<Void>(0xFEEE29DA603B6D61, p0, p1, p2); } // 0x2485D34E50A22E84 0x72BA8A14
	static void _0x12995F2E53FFA601(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x3D669553D914321D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x12995F2E53FFA601 0x804F444C
	static void _0xDBAA5EC848BA2D46(Any p0, Any p1) { invoke<Void>(0x7572582D79539194, p0, p1); } // 0xDBAA5EC848BA2D46 0xBB1A1294
	static void _0xC0416B061F2B7E5E(BOOL p0) { invoke<Void>(0x299F227D1087DCD2, p0); } // 0xC0416B061F2B7E5E 0x1A1A72EF
	static void _0xB1BB03742917A5D6(int type, float x, float y, float z, float p4, int r, int g, int b, int a) { invoke<Void>(0x665B0EC99BC5440C, type, x, y, z, p4, r, g, b, a); } // 0xB1BB03742917A5D6 0x3BB12B75
	static void _0x9CFDD90B2B844BF7(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0x6061DB434EBD730E, p0, p1, p2, p3, p4); } // 0x9CFDD90B2B844BF7 0x4EA70FB4
	static void _0x06F761EA47C1D3ED(BOOL p0) { invoke<Void>(0xB626817B795F4949, p0); } // 0x06F761EA47C1D3ED 0x0D830DC7
	static Any _0xA4819F5E23E2FFAD() { return invoke<Any>(0x2EF4D848EA6AE828); } // 0xA4819F5E23E2FFAD 0xA08B46AD
	static Vector3 _0xA4664972A9B8F8BA(Any p0) { return invoke<Vector3>(0x550F8B9F2997C026, p0); } // 0xA4664972A9B8F8BA 0xECD470F0
	static void SET_SEETHROUGH(BOOL Toggle) { invoke<Void>(0xFC6A60ACD625D929, Toggle); } // 0x7E08924259E08CE0 0x74D4995C
	static BOOL _IS_SEETHROUGH_ACTIVE() { return invoke<BOOL>(0xF79ECADFDFD77007); } // 0x44B80ABAB9D80BD3 0x1FE547F2
	static void _0xD7D0B00177485411(Any p0, float p1) { invoke<Void>(0xA242A792057EF526, p0, p1); } // 0xD7D0B00177485411 0x654F0287
	static void _0xB3C641F3630BF6DA(float p0) { invoke<Void>(0x99C451A9DC37F53F, p0); } // 0xB3C641F3630BF6DA 0xF6B837F0
	static Any _0xE59343E9E96529E7() { return invoke<Any>(0xCC1190FBD95F1A9C); } // 0xE59343E9E96529E7 0xD906A3A9
	static void _0xE63D7C6EECECB66B(BOOL p0) { invoke<Void>(0x0086967541C89C89, p0); } // 0xE63D7C6EECECB66B 0xD34A6CBA
	static void _0xE3E2C1B4C59DBC77(Any p0) { invoke<Void>(0x0062776E9EA8BF87, p0); } // 0xE3E2C1B4C59DBC77 0xD8CC7221
	static BOOL _TRANSITION_TO_BLURRED(float transitionTime) { return invoke<BOOL>(0x11A35947BC43265E, transitionTime); } // 0xA328A24AAA6B7FDC 0x5604B890
	static BOOL _TRANSITION_FROM_BLURRED(float transitionTime) { return invoke<BOOL>(0xD56CF2EE41614CF5, transitionTime); } // 0xEFACC8AEF94430D5 0x46617502
	static void _0xDE81239437E8C5A8() { invoke<Void>(0x808EE6B1C469A92D); } // 0xDE81239437E8C5A8 0xDB7AECDA
	static float IS_PARTICLE_FX_DELAYED_BLINK() { return invoke<float>(0x87A94895B7496A8E); } // 0x5CCABFFCA31DDE33 0xEA432A94
	static Any _0x7B226C785A52A0A9() { return invoke<Any>(0x452FBE945385AA5F); } // 0x7B226C785A52A0A9 0x926B8734
	static void _SET_FROZEN_RENDERING_DISABLED(BOOL enabled) { invoke<Void>(0x3E5CF2983CC5621D, enabled); } // 0xDFC252D8A3E15AB7 0x30ADE541
	static Any _0xEB3DAC2C86001E5E() { return invoke<Any>(0x5C272CC29A25F810); } // 0xEB3DAC2C86001E5E
	static void _0xE1C8709406F2C41C() { invoke<Void>(0x61230F41DCA1B2B3); } // 0xE1C8709406F2C41C 0x0113EAE4
	static void _0x851CD923176EBA7C() { invoke<Void>(0x22CD2FEB918A3823); } // 0x851CD923176EBA7C 0xDCBA251B
	static void _0xBA3D65906822BED5(BOOL p0, BOOL p1, float p2, float p3, float p4, float p5) { invoke<Void>(0x9FCEA1F9CD7C4121, p0, p1, p2, p3, p4, p5); } // 0xBA3D65906822BED5 0x513D444B
	static BOOL _0x7AC24EAB6D74118D(BOOL p0) { return invoke<BOOL>(0x9F750EDBF364679A, p0); } // 0x7AC24EAB6D74118D 0xB2410EAB
	static Any _0xBCEDB009461DA156() { return invoke<Any>(0xD9A19FC06D13EE6D); } // 0xBCEDB009461DA156 0x5AB94128
	static BOOL _0x27FEB5254759CDE3(char* textureDict, BOOL p1) { return invoke<BOOL>(0x4D72F3F9E91DF973, textureDict, p1); } // 0x27FEB5254759CDE3 0xD63FCB3E
	static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL p8, BOOL p9, BOOL p10) { return invoke<BOOL>(0x5A125A4D9259F396, effectName, x, y, z, xRot, yRot, zRot, scale, p8, p9, p10); } // 0x25129531F77B9ED3 0xDD79D679
	static BOOL _START_PARTICLE_FX_NON_LOOPED_AT_COORD_2(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL p8, BOOL p9, BOOL p10) { return invoke<BOOL>(0x5D3A110B82110B58, effectName, x, y, z, xRot, yRot, zRot, scale, p8, p9, p10); } // 0xF56B8137DF10135D 0x633F8C48
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<BOOL>(0x4DF55B9DE5D2DC1F, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0x0E7E72961BA18619 0x53DAEF4E
	static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<BOOL>(0xB86B890F79448331, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xA41B6A43642AC2CF 0x161780C1
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0x9B614DAFE05884CA, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0x0D53A3B8DA0809D2 0x9604DAD4
	static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0xA5C37BA469D3A028, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0xC95EB1DB6E92113D
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0xD5874EDA26E7C0FF, r, g, b); } // 0x26143A59EF48B262 0x7B689E20
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0xCC35EF56C1B8AE2B, alpha); } // 0x77168D722C58B2FC 0x497EAFF2
	static void _SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0x2E3844783CDCF4A4, p0); } // 0x8CDE909A0370BB3A
	static Any START_PARTICLE_FX_LOOPED_AT_COORD(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { return invoke<Any>(0x2840813F3B2D3D77, effectName, x, y, z, xRot, yRot, zRot, scale, p8, p9, p10, p11); } // 0xE184F4F0DC5910E7 0xD348E3E6
	static Any START_PARTICLE_FX_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<Any>(0xB6F19AF488B66A97, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xF28DA9F38CD1787C 0xF8FC196F
	static Any START_PARTICLE_FX_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<Any>(0xB2B9DC57FF1CFE82, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0x1AE42C1660FD6517 0x0D06FF62
	static Any _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<Any>(0x315068F8329ED0FD, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xC6EB449E33977F0B
	static Any _START_PARTICLE_FX_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<Any>(0x78A2D2260BE4310C, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0x6F60E89A7B64EE1D 0x110752B2
	static Any _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<Any>(0xBC2F5A9F0B23D57C, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xDDE23F30CC5A0F03
	static void STOP_PARTICLE_FX_LOOPED(Any p0, BOOL p1) { invoke<Void>(0x5C256D4AC568031F, p0, p1); } // 0x8F75998877616996 0xD245455B
	static void REMOVE_PARTICLE_FX(Any p0, BOOL p1) { invoke<Void>(0xD303611C64F7C003, p0, p1); } // 0xC401503DFE8D53CF 0x6BA48C7E
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Any p0) { invoke<Void>(0x50C8F37816C977CE, p0); } // 0xB8FEAEEBCC127425 0xCEDE52E9
	static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0xEE1FF61B97C76DFD, X, Y, Z, radius); } // 0xDD19FA1C6D657305 0x7EB8F275
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0x8290003927BC6478, ptfxHandle); } // 0x74AFEF0D2E1E409B 0xCBF91D2A
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0x06994CCF94CEBFC7, ptfxHandle, x, y, z, rotX, rotY, rotZ); } // 0xF7DDEBEC43483C43 0x641F7790
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, char* propertyName, float amount, BOOL p3) { invoke<Void>(0x14A3CAD442B7C1F6, ptfxHandle, propertyName, amount, p3); } // 0x5F0C4B5B1C393BE2 0x1CBC1373
	static void SET_PARTICLE_FX_LOOPED_COLOUR(Any ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0x6A8FF95884E542CC, ptfxHandle, r, g, b, p4); } // 0x7F8F65877F88783B 0x5219D530
	static void SET_PARTICLE_FX_LOOPED_ALPHA(Any p0, float p1) { invoke<Void>(0x665DCA56832B58BE, p0, p1); } // 0x726845132380142E 0x5ED49BE1
	static void SET_PARTICLE_FX_LOOPED_SCALE(Any p0, float p1) { invoke<Void>(0x252710E15B7AF2A7, p0, p1); } // 0xB44250AAA456492D 0x099B8B49
	static void _SET_PARTICLE_FX_LOOPED_RANGE(Any ptfxHandle, float range) { invoke<Void>(0xE4C0E65FB384F0C3, ptfxHandle, range); } // 0xDCB194B85EF7B541 0x233DE879
	static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0xA1EA93263E8ED276, p0); } // 0xEEC4047028426510 0x19EC0001
	static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Any p0, BOOL p1) { invoke<Void>(0xABC7E6DB39307A09, p0, p1); } // 0xACEE6F360FC1F6B6 0x6B125A02
	static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0x61DE902EE39CC23E, p0); } // 0x96EF97DAEB89BEF5 0xD938DEE0
	static void SET_PARTICLE_FX_BLOOD_SCALE(BOOL p0) { invoke<Void>(0xAFE081AEC8EF3241, p0); } // 0x5F6DF3D92271E8A1 0x18136DE0
	static void ENABLE_CLOWN_BLOOD_VFX(BOOL p0) { invoke<Void>(0xE1485B57C3A07E8D, p0); } // 0xD821490579791273 0xC61C75E9
	static void ENABLE_ALIEN_BLOOD_VFX(BOOL p0) { invoke<Void>(0x13E293E322B0CB06, p0); } // 0x9DCE1F0F78260875 0xCE8B8748
	static void _0x27E32866E9A5C416(float p0) { invoke<Void>(0x2D68391F6BE696EF, p0); } // 0x27E32866E9A5C416
	static void _0xBB90E12CAC1DAB25(float p0) { invoke<Void>(0xCC1395A254836A30, p0); } // 0xBB90E12CAC1DAB25
	static void _0xCA4AE345A153D573(BOOL p0) { invoke<Void>(0xE935E33480340535, p0); } // 0xCA4AE345A153D573
	static void _0x54E22EA2C1956A8D(float p0) { invoke<Void>(0x4860BE578A972E6C, p0); } // 0x54E22EA2C1956A8D
	static void _0x949F397A288B28B3(float p0) { invoke<Void>(0x90B63D8AB5F95921, p0); } // 0x949F397A288B28B3
	static void _0x9B079E5221D984D3(BOOL p0) { invoke<Void>(0x14720578735F0E7A, p0); } // 0x9B079E5221D984D3
	static void _SET_PTFX_ASSET_NEXT_CALL(char* name) { invoke<Void>(0xA3E9902FB70C25B3, name); } // 0x6C38AF3693A69A91 0x9C720B61
	static void _SET_PTFX_ASSET_OLD_TO_NEW(char* Old, char* New) { invoke<Void>(0x09F8F9D7FF8C0F95, Old, New); } // 0xEA1E2D93F6F75ED9
	static void _0x89C8553DD3274AAE(char* name) { invoke<Void>(0x82A5870AADF0D809, name); } // 0x89C8553DD3274AAE
	static void _0xA46B73FAA3460AE1(BOOL p0) { invoke<Void>(0x5F3B36E2FFB0F40B, p0); } // 0xA46B73FAA3460AE1
	static void _0xF78B803082D4386F(float p0) { invoke<Void>(0x761D0F4901F1ABB2, p0); } // 0xF78B803082D4386F
	static void WASH_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x24836D2C496918FC, p0, p1, p2, p3, p4); } // 0x9C30613D50A6ADEF 0xDEECBC57
	static void WASH_DECALS_FROM_VEHICLE(Any p0, float p1) { invoke<Void>(0x6BCF444181456126, p0, p1); } // 0x5B712761429DBC14 0x2929F11A
	static void FADE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xC14E1B32536755F0, p0, p1, p2, p3, p4); } // 0xD77EDADB0420E6E0 0xF81E884A
	static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0xCB45A4A2C96B5917, x, y, z, range); } // 0x5D6B2D4830A67C62 0x06A619A0
	static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0x90F12A347328A327, obj); } // 0xCCF71CBDDF5B6CB9 0x8B67DCA7
	static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0x41DBE4D791DC2DA1, obj, x, y, z); } // 0xA6F6F70FDC6D144C 0xF4999A55
	static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0x22FEBB74839CB566, vehicle); } // 0xE91F1B65F2B48D57 0x831D06CA
	static Any ADD_DECAL(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, BOOL p17, BOOL p18, BOOL p19) { return invoke<Any>(0xDDCD96747E437A72, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); } // 0xB302244A1839BDAD 0xEAD0C412
	static Any ADD_PETROL_DECAL(float x, float y, float z, float Groundlvl, float Width, float Transparency) { return invoke<Any>(0xAA9AC8784C8A4ABA, x, y, z, Groundlvl, Width, Transparency); } // 0x4F5212C7AD880DF8 0x1259DF42
	static void _0x99AC7F0D8B9C893D(float p0) { invoke<Void>(0xD0912370DFA3BC46, p0); } // 0x99AC7F0D8B9C893D 0xE3938B0B
	static void _0x967278682CB6967A(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE87AB07FF786978E, p0, p1, p2, p3); } // 0x967278682CB6967A 0xBAEC6ADD
	static void _0x0A123435A26C36CD() { invoke<Void>(0x6FE379AD9F5BE3C4); } // 0x0A123435A26C36CD 0xCCCA6855
	static void REMOVE_DECAL(Any p0) { invoke<Void>(0xBA74B9910994C906, p0); } // 0xED3F346429CCD659 0xA4363188
	static BOOL IS_DECAL_ALIVE(Any p0) { return invoke<BOOL>(0x80B78FF6EC54F967, p0); } // 0xC694D74949CAFD0C 0xCDD4A61A
	static float GET_DECAL_WASH_LEVEL(Any p0) { return invoke<float>(0x2E135348B8F4D9EC, p0); } // 0x323F647679A09103 0x054448EF
	static void _0xD9454B5752C857DC() { invoke<Void>(0x64F5FFE041955304); } // 0xD9454B5752C857DC 0xEAB6417C
	static void _0x27CFB1B1E078CB2D() { invoke<Void>(0x74DC45B8CFF8A74F); } // 0x27CFB1B1E078CB2D 0xC2703B88
	static void _0x4B5CFC83122DF602() { invoke<Void>(0x3027BF4B7EE780CD); } // 0x4B5CFC83122DF602 0xA706E84D
	static BOOL _0x2F09F7976C512404(float xCoord, float yCoord, float zCoord, float p3) { return invoke<BOOL>(0x2A2F75DC44E632BC, xCoord, yCoord, zCoord, p3); } // 0x2F09F7976C512404 0x242C6A04
	static void _0x8A35C742130C6080(Any p0, Any* p1, Any* p2) { invoke<Void>(0x571EAD3FE76C803E, p0, p1, p2); } // 0x8A35C742130C6080 0x335695CF
	static void _0xB7ED70C49521A61D(Any p0) { invoke<Void>(0xCA93EC159E8B0F67, p0); } // 0xB7ED70C49521A61D 0x7B786555
	static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0x1BB0D43734749441, p0, p1); } // 0x84C8D7C2D30D3280 0xCE9E6CF2
	static BOOL _ADD_CLAN_DECAL_TO_VEHICLE(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0x6EEA8C1F1B8AC341, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); } // 0x428BDCB9DA58DA53 0x12077738
	static void _0xD2300034310557E4(Any p0, Any p1) { invoke<Void>(0x3BD7F2C6A984AE2A, p0, p1); } // 0xD2300034310557E4 0x667046A8
	static Any _0xFE26117A5841B2FF(Any p0, Any p1) { return invoke<Any>(0xD5E621B67B76AF33, p0, p1); } // 0xFE26117A5841B2FF 0x4F4D76E8
	static BOOL _HAS_VEHICLE_GOT_DECAL(Vehicle vehicle, Any p1) { return invoke<BOOL>(0xA24589903C9634D8, vehicle, p1); } // 0x060D935D3981A275 0x6D58F73B
	static void _0x0E4299C549F0D1F1(BOOL p0) { invoke<Void>(0xDFBA6F722AC76ABD, p0); } // 0x0E4299C549F0D1F1 0x9BABCBA4
	static void _0x02369D5C8A51FDCF(BOOL p0) { invoke<Void>(0x6945DBA90BF4ABA8, p0); } // 0x02369D5C8A51FDCF 0xFDF6D8DA
	static void _0x46D1A61A21F566FC(float p0) { invoke<Void>(0x77D993BE315B98F0, p0); } // 0x46D1A61A21F566FC 0x2056A015
	static void _0x2A2A52824DB96700(Any* p0) { invoke<Void>(0x1E957BC8360EA292, p0); } // 0x2A2A52824DB96700 0x0F486429
	static void _0x1600FD8CF72EBC12(float p0) { invoke<Void>(0xB6B60D66FAED307D, p0); } // 0x1600FD8CF72EBC12 0xD87CC710
	static void _0xEFB55E7C25D3B3BE() { invoke<Void>(0xDDE36A9671AF93F6); } // 0xEFB55E7C25D3B3BE 0xE29EE145
	static void _0xA44FF770DFBC5DAE() { invoke<Void>(0xD2C58E8AAEC1F560); } // 0xA44FF770DFBC5DAE
	static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0xB006483A46C933D3, toggle); } // 0xC9F98AC1884E73A2 0x7CFAE36F
	static void _0x03300B57FCAC6DDB(BOOL p0) { invoke<Void>(0x07F9504AFB05BA5C, p0); } // 0x03300B57FCAC6DDB 0x60F72371
	static void _0x98EDF76A7271E4F2() { invoke<Void>(0x2C449EFCE07ACF10); } // 0x98EDF76A7271E4F2
	static void _SET_FORCE_PED_FOOTSTEPS_TRACKS(BOOL enabled) { invoke<Void>(0x5CF0807451050DD5, enabled); } // 0xAEEDAD1420C65CC0
	static void _SET_FORCE_VEHICLE_TRAILS(BOOL enabled) { invoke<Void>(0xD4C416B7024729B9, enabled); } // 0x4CC7F0FEA5283FE0
	static void _0xD7021272EB0A451E(char* p0) { invoke<Void>(0xD652B0520760A612, p0); } // 0xD7021272EB0A451E
	static void SET_TIMECYCLE_MODIFIER(char* modifierName) { invoke<Void>(0x4C7432C4305D9BE4, modifierName); } // 0x2C933ABF17A1DF41 0xA81F3638
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0xF90EE8ED9E205936, strength); } // 0x82E7FFCD5B2326B3 0x458F4F45
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(char* modifierName, float transition) { invoke<Void>(0x921948E3E12DAFB6, modifierName, transition); } // 0x3BCF567485E1971C 0xBB2BA72A
	static void _0x1CBA05AE7BD7EE05(float p0) { invoke<Void>(0x9F27FAF28742F0F5, p0); } // 0x1CBA05AE7BD7EE05 0x56345F6B
	static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0x5A58126D345E3A13); } // 0x0F07E7745A236711 0x8D8DF8EE
	static Any GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<Any>(0x8E565AC3E8559D14); } // 0xFDF3D97C674AFB66 0x594FEEC4
	static Any _0x459FD2C8D0AB78BC() { return invoke<Any>(0x5AFA3A506B8EFE7E); } // 0x459FD2C8D0AB78BC 0x03C44E4B
	static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0x46461D7D66A2498D); } // 0x58F735290861E6B4 0x7E082045
	static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0xF60D0861A627008F); } // 0x3C8938D7D872211E 0x79D7D235
	static void _0xBBF327DED94E4DEB(Any* p0) { invoke<Void>(0xCCE18767E2590409, p0); } // 0xBBF327DED94E4DEB 0x85BA15A4
	static void _0xBDEB86F4D5809204(float p0) { invoke<Void>(0xCA911A1A2FD67255, p0); } // 0xBDEB86F4D5809204 0x9559BB38
	static void _0xBF59707B3E5ED531(Any* p0) { invoke<Void>(0x8454DEE1D87260E9, p0); } // 0xBF59707B3E5ED531 0x554BA16E
	static void _0x1A8E2C8B9CF4549C(Any* p0, Any* p1) { invoke<Void>(0x3B630C44A11560D2, p0, p1); } // 0x1A8E2C8B9CF4549C 0xE8F538B5
	static void _0x15E33297C3E8DC60(Any p0) { invoke<Void>(0xF6AC078DFA9DF14E, p0); } // 0x15E33297C3E8DC60 0x805BAB08
	static void _0x5096FD9CCB49056D(Any* p0) { invoke<Void>(0xC83EECEE1FFD5FD1, p0); } // 0x5096FD9CCB49056D 0x908A335E
	static void _0x92CCC17A7A2285DA() { invoke<Void>(0x507E84F0494541A4); } // 0x92CCC17A7A2285DA 0x6776720A
	static Any _0xBB0527EC6341496D() { return invoke<Any>(0x179B65F0E968A4C5); } // 0xBB0527EC6341496D
	static void _0x2C328AF17210F009(float p0) { invoke<Void>(0xD6007A4B638C8874, p0); } // 0x2C328AF17210F009
	static void _0x2BF72AD5B41AA739() { invoke<Void>(0xAD4B130795553547); } // 0x2BF72AD5B41AA739
	static Any REQUEST_SCALEFORM_MOVIE(char* scaleformName) { return invoke<Any>(0x7CA16FCCB262AEFA, scaleformName); } // 0x11FE353CF9733E6F 0xC67E3DCB
	static Any REQUEST_SCALEFORM_MOVIE_INSTANCE(char* scaleformName) { return invoke<Any>(0x8CFF714440510D0B, scaleformName); } // 0xC514489CFB8AF806 0x7CC8057D
	static Any _REQUEST_SCALEFORM_MOVIE3(char* scaleformName) { return invoke<Any>(0xD02B7364CA275A59, scaleformName); } // 0xBD06C611BB9048C2
	static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleform) { return invoke<BOOL>(0x1E3F61C2C1E29520, scaleform); } // 0x85F01B8D5B90570E 0xDDFB6448
	static BOOL _0x0C1C5D756FB5F337(Any* p0) { return invoke<BOOL>(0x401FD556FEC996EE, p0); } // 0x0C1C5D756FB5F337
	static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int handle) { return invoke<BOOL>(0xFA6E031A22D908BC, handle); } // 0x8217150E1217EBFD 0x1DFE8D8A
	static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformPtr) { invoke<Void>(0xA12A0D38735CCBF2, scaleformPtr); } // 0x1D132D614DD86811 0x5FED3BA1
	static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0x06302D2B6727CD1F, scaleform, toggle); } // 0x6D8EB211944DCE08 0x18C9DE8D
	static void DRAW_SCALEFORM_MOVIE(int handle, float posX, float posY, float width, float height, int red, int green, int blue, int alpha, int unkb) { invoke<Void>(0x04F50370A3D0809C, handle, posX, posY, width, height, red, green, blue, alpha, unkb); } // 0x54972ADAF0294A93 0x48DA6A58
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, Any unkb) { invoke<Void>(0x0F83039847376F53, scaleform, red, green, blue, alpha, unkb); } // 0x0DF606929C105BE1 0x7B48E696
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0x551AD06FD51E5AB7, scaleform1, scaleform2, red, green, blue, alpha); } // 0xCF537FDE4FBD4CE5 0x9C59FC06
	static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0xB3B35EA184128E72, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); } // 0x87D51D72255D4E78 0xC4F63A89
	static void _DRAW_SCALEFORM_MOVIE_3D_NON_ADDITIVE(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0xBCBF446C1CB0A6B3, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); } // 0x1CE592FDC749D6F5 0x899933C8
	static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, char* method) { invoke<Void>(0x67454FDA361D6831, scaleform, method); } // 0xFBD96D87AC96D533 0x7AB77B57
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(int scaleform, char* functionName, float p2, float p3, float p4, float p5, float p6) { invoke<Void>(0xB74EEA927DA2E7A7, scaleform, functionName, p2, p3, p4, p5, p6); } // 0xD0837058AE2E4BEE 0x557EDA1D
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(int scaleform, char* functionName, char* param1, char* param2, char* param3, char* param4, char* param5) { invoke<Void>(0xB00447E2964C2B27, scaleform, functionName, param1, param2, param3, param4, param5); } // 0x51BC1ED3CC44E8F7 0x91A7FCEB
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(int scaleform, char* functionName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, char* stringParam1, char* stringParam2, char* stringParam3, char* stringParam4, char* stringParam5) { invoke<Void>(0x577907B883D7941C, scaleform, functionName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); } // 0xEF662D8D57E290B1 0x6EAF56DE
	static BOOL _PUSH_SCALEFORM_MOVIE_FUNCTION_FROM_HUD_COMPONENT(int hudComponent, char* functionName) { return invoke<BOOL>(0x349EE50DA837B389, hudComponent, functionName); } // 0x98C494FD5BDFBFD5 0x5D66CE1E
	static BOOL _PUSH_SCALEFORM_MOVIE_FUNCTION(int scaleform, char* functionName) { return invoke<BOOL>(0xB9D4F4DE7E7EC038, scaleform, functionName); } // 0xF6E48914C7A8694E 0x215ABBE8
	static BOOL _0xAB58C27C2E6123C6(char* functionName) { return invoke<BOOL>(0xB6A9AC5C40E1D647, functionName); } // 0xAB58C27C2E6123C6 0xF6015178
	static BOOL _0xB9449845F73F5E9C(char* functionName) { return invoke<BOOL>(0x123244C7C9432573, functionName); } // 0xB9449845F73F5E9C 0x5E219B67
	static void _POP_SCALEFORM_MOVIE_FUNCTION_VOID() { invoke<Void>(0xE73340DA551C95E1); } // 0xC6796A8FFA375E53 0x02DBF2D7
	static Any _POP_SCALEFORM_MOVIE_FUNCTION() { return invoke<Any>(0xC23FC7D89C4FAF05); } // 0xC50AA39A577AF886 0x2F38B526
	static BOOL _0x768FF8961BA904D6(Any funcData) { return invoke<BOOL>(0x6F61AEBF81DF1A16, funcData); } // 0x768FF8961BA904D6 0x5CD7C3C0
	static int _0x2DE7EFA66B906036(Any funcData) { return invoke<int>(0xD93E20F39826C097, funcData); } // 0x2DE7EFA66B906036 0x2CFB0E6D
	static char* SITTING_TV(Any scaleform) { return invoke<char*>(0x934F8464378F566F, scaleform); } // 0xE1E258829A885245 0x516862EB
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(int value) { invoke<Void>(0x7CBFB9F4AF33C67E, value); } // 0xC3D0841A0CC546A6 0x716777CB
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(float value) { invoke<Void>(0x0FFE3C1DBBA72236, value); } // 0xD69736AAE04DB51A 0x9A01FFDA
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(BOOL value) { invoke<Void>(0x5CC02BB872FEF340, value); } // 0xC58424BA936EB458 0x0D4AE8CB
	static void _BEGIN_TEXT_COMPONENT(char* componentType) { invoke<Void>(0x709662CF2BD061A4, componentType); } // 0x80338406F3475E55 0x3AC9CB55
	static void _END_TEXT_COMPONENT() { invoke<Void>(0x1E77BE8F4283FA05); } // 0x362E2D3FE93A9959 0x386CE0B8
	static void _0xAE4E8157D9ECF087() { invoke<Void>(0x5F75018699610F7A); } // 0xAE4E8157D9ECF087 0x2E80DB52
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(char* value) { invoke<Void>(0x256E5E9EBF5975E9, value); } // 0xBA7148484BD90365 0x4DAAD55B
	static void _0xE83A3E3557A56640(char* p0) { invoke<Void>(0x481EA0389B099920, p0); } // 0xE83A3E3557A56640 0xCCBF0334
	static BOOL _0x5E657EF1099EDD65(Any p0) { return invoke<BOOL>(0x8A681298DF6E9D78, p0); } // 0x5E657EF1099EDD65 0x91A081A1
	static void _0xEC52C631A1831C03(Any p0) { invoke<Void>(0xBC79900FDF7DB2C0, p0); } // 0xEC52C631A1831C03 0x83A9811D
	static void _REQUEST_HUD_SCALEFORM(int hudComponent) { invoke<Void>(0x0023ED83F71AFFCB, hudComponent); } // 0x9304881D6F6537EA 0x7AF85862
	static BOOL _HAS_HUD_SCALEFORM_LOADED(int hudComponent) { return invoke<BOOL>(0x4FB7A338EFB2394D, hudComponent); } // 0xDF6E5987D2B4D140 0x79B43255
	static void _0xF44A5456AC3F4F97(Any p0) { invoke<Void>(0x758B5B4C2052E841, p0); } // 0xF44A5456AC3F4F97 0x03D87600
	static BOOL _0xD1C7CB175E012964(Any p0) { return invoke<BOOL>(0x15B852F1A176BB1F, p0); } // 0xD1C7CB175E012964 0xE9183D3A
	static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xBAAA4C575E12F9B7, channel); } // 0xBAABBB23EB6E484E 0x41A8A627
	static int GET_TV_CHANNEL() { return invoke<int>(0xEF534FE84D072DD3); } // 0xFC1E275A90D39995 0x6B96145A
	static void SET_TV_VOLUME(float volume) { invoke<Void>(0xA5C49CE9D5E01120, volume); } // 0x2982BF73F66E9DDC 0xF3504F4D
	static float GET_TV_VOLUME() { return invoke<float>(0x6D1A703D1814F3E8); } // 0x2170813D3DD8661B 0x39555CF0
	static void DRAW_TV_CHANNEL(float posX, float posY, float scaleX, float scaleY, float rotation, int r, int g, int b, int a) { invoke<Void>(0x13472B1D17A65906, posX, posY, scaleX, scaleY, rotation, r, g, b, a); } // 0xFDDC2B4ED3C69DF0 0x8129EF89
	static void _0xF7B38B8305F1FE8B(int p0, char* p1, BOOL p2) { invoke<Void>(0xC221329F297F1AC4, p0, p1, p2); } // 0xF7B38B8305F1FE8B 0xB262DE67
	static void _0x2201C576FACAEBE8(Any p0, Any* p1, Any p2) { invoke<Void>(0x8E0FF05D036E99F4, p0, p1, p2); } // 0x2201C576FACAEBE8 0x78C4DCBE
	static void _0xBEB3D46BB7F043C0(Any p0) { invoke<Void>(0x15AAF1E36C5ABCDB, p0); } // 0xBEB3D46BB7F043C0 0xCBE7068F
	static BOOL _0x0AD973CA1E077B60(Any p0) { return invoke<BOOL>(0xD7E64C4C946C67EA, p0); } // 0x0AD973CA1E077B60 0x4D1EB0FB
	static void _0x74C180030FDE4B69(BOOL p0) { invoke<Void>(0x408EA0B9CECF390F, p0); } // 0x74C180030FDE4B69 0x796DE696
	static void _0xD1C55B110E4DF534(Any p0) { invoke<Void>(0x57686A7AFB3B000A, p0); } // 0xD1C55B110E4DF534 0xD99EC000
	static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0x2BA7E53C36F6CEBA, toggle); } // 0x873FA65C778AD970 0xC2DEBA3D
	static Any _0xD3A10FC7FD8D98CD() { return invoke<Any>(0xE3183C380567119B); } // 0xD3A10FC7FD8D98CD 0xE40A0F1A
	static BOOL _0xF1CEA8A4198D8E9A(Any* p0) { return invoke<BOOL>(0xC9B8280213607BED, p0); } // 0xF1CEA8A4198D8E9A 0x2E7D9B98
	static BOOL _0x98C4FE6EC34154CA(Any* p0, Ped pedHandle, Any p2, float posX, float posY, float posZ) { return invoke<BOOL>(0xE21AB692831FA99F, p0, pedHandle, p2, posX, posY, posZ); } // 0x98C4FE6EC34154CA 0x9A0E3BFE
	static void _0x7A42B2E236E71415() { invoke<Void>(0x8DE59B858D7F26B6); } // 0x7A42B2E236E71415 0x431AA036
	static void _0x108BE26959A9D9BB(BOOL p0) { invoke<Void>(0x37E77E7B196CAC98, p0); } // 0x108BE26959A9D9BB 0x24A7A7F6
	static void _0xA356990E161C9E65(BOOL p0) { invoke<Void>(0xA09CFAE7881645D6, p0); } // 0xA356990E161C9E65 0xA1CB6C94
	static void _0x1C4FC5752BCD8E48(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) { invoke<Void>(0xD6AA97754A402F6C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x1C4FC5752BCD8E48 0x3B637AA7
	static void _0x5CE62918F8D703C7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x3FB6FDC08D228C00, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x5CE62918F8D703C7 0xDF552973
	static void _START_SCREEN_EFFECT(char* effectName, int playLength, BOOL loop) { invoke<Void>(0xFF4920BAFCB15F65, effectName, playLength, loop); } // 0x2206BF9A37B7F724 0x1D980479
	static void _STOP_SCREEN_EFFECT(char* effectName) { invoke<Void>(0x33F96CD17F6BA7BD, effectName); } // 0x068E835A1D0DC0E3 0x06BB5CDA
	static int _GET_SCREEN_EFFECT_IS_ACTIVE(Vehicle screeen) { return invoke<int>(0x32448AE9368CC171, screeen); } // 0x36AD3E690DA5ACEB 0x089D5921
	static void _STOP_ALL_SCREEN_EFFECTS() { invoke<Void>(0xB3E7356FE9A1BA9D); } // 0xB4EDDC19532BFB85 0x4E6D875B
	static void _0xD2209BE128B5418C(Any* p0) { invoke<Void>(0x26C8ECD4B15E57F0, p0); } // 0xD2209BE128B5418C
}

namespace STATS
{
	static Any STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<Any>(0x63A5A7B613C07015, statSlot); } // 0xEB0A72181D4AA4AD 0x84BDD475
	static BOOL STAT_LOAD(Any p0) { return invoke<BOOL>(0xEFF61508B90DE0DE, p0); } // 0xA651443F437B1CE6 0x9E5629F4
	static BOOL STAT_SAVE(int p0, BOOL p1, int p2) { return invoke<BOOL>(0xE1147A407949C3BE, p0, p1, p2); } // 0xE07BCA305B82D2FD 0xE10A7CA4
	static void _0x5688585E6D563CD8(Any p0) { invoke<Void>(0x42CE919A0064BD98, p0); } // 0x5688585E6D563CD8 0xC62406A6
	static BOOL STAT_LOAD_PENDING(Any p0) { return invoke<BOOL>(0x6A8E624EAAC1FD15, p0); } // 0xA1750FFAFA181661 0x4E9AC983
	static Any STAT_SAVE_PENDING() { return invoke<Any>(0x4100CD10730B66A4); } // 0x7D3A583856F2C5AC 0xC3FD3822
	static Any STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<Any>(0xE8DC31C334346FFF); } // 0xBBB6AD006F1BBEA3 0xA3407CA3
	static Any STAT_DELETE_SLOT(Any p0) { return invoke<Any>(0xC2616DDFD0241CC1, p0); } // 0x49A49BED12794D70 0x2F171B94
	static BOOL STAT_SLOT_IS_LOADED(Any p0) { return invoke<BOOL>(0x780C82A5FB0E714F, p0); } // 0x0D0A9F0E7BD91E3C 0x7A299C13
	static BOOL _0x7F2C4CDF2E82DF4C(Any p0) { return invoke<BOOL>(0x0CE134574A43C497, p0); } // 0x7F2C4CDF2E82DF4C 0x0BF0F4B2
	static Any _0xE496A53BA5F50A56(Any p0) { return invoke<Any>(0xE7FD3AA755280FDB, p0); } // 0xE496A53BA5F50A56 0xCE6B62B5
	static void _0xF434A10BA01C37D0(BOOL p0) { invoke<Void>(0x5E1755C280E6D5B1, p0); } // 0xF434A10BA01C37D0 0xCE7A2411
	static BOOL _0x7E6946F68A38B74F(Any p0) { return invoke<BOOL>(0xCEFB2771FC264504, p0); } // 0x7E6946F68A38B74F 0x22804C20
	static void _0xA8733668D1047B51(Any p0) { invoke<Void>(0xC5B55FAE3DBA5B48, p0); } // 0xA8733668D1047B51 0x395D18B1
	static Any _0xECB41AC6AB754401() { return invoke<Any>(0x8565E7F8B5D2C779); } // 0xECB41AC6AB754401 0xED7000C8
	static void _0x9B4BD21D69B1E609() { invoke<Void>(0x54E4790FAB4A15C2); } // 0x9B4BD21D69B1E609
	static Any _0xC0E0D686DDFC6EAE() { return invoke<Any>(0x8FDD86B7E7E3D5A8); } // 0xC0E0D686DDFC6EAE 0x099FCC86
	static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0x10CE8769EE2626C7, statName, value, save); } // 0xB3271D7AB655B441 0xC9CC1C5C
	static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0xA88E0F84F0E0949F, statName, value, save); } // 0x4851997F37FE9B3C 0x6CEA96F2
	static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0xA75D835C91B77269, statName, value, save); } // 0x4B33C4243DE0C432 0x55D79DFB
	static BOOL STAT_SET_GXT_LABEL(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xCD3B0D635B3FE533, statName, value, save); } // 0x17695002FD8B2AE0 0xC1224AA7
	static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0x8C426CFB4EA60D8B, statName, value, numFields, save); } // 0x2C29BFB64F4FCBE4 0x36BE807B
	static BOOL STAT_SET_STRING(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xE3C55E2DC11131A1, statName, value, save); } // 0xA87B2335D12531D7 0xB1EF2E21
	static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0xA6F28AA8CDEB16D9, statName, x, y, z, save); } // 0xDB283FDE680FE72E 0x1192C9A3
	static BOOL STAT_SET_MASKED_INT(Hash statName, Any p1, Any p2, int p3, BOOL save) { return invoke<BOOL>(0xD0BD93DA65E5EE25, statName, p1, p2, p3, save); } // 0x7BBB1B54583ED410 0x2CBAA739
	static BOOL STAT_SET_USER_ID(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xA479EF2A641E3EBB, statName, value, save); } // 0x8CDDF1E452BABE11 0xDBE78ED7
	static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0x2BF1AD1FF369E1C9, statName, p1); } // 0xC2F84B7F9C4D0C61 0xA286F015
	static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0x8A3351ECF43DB941, statHash, outValue, p2); } // 0x767FBC2AC802EF3D 0x1C6FE43E
	static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0x85D6B1DA793E0431, statHash, outValue, p2); } // 0xD7AE6C9C9C6AC54C 0xFCBDA612
	static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0x80FB5712A7C4B4B8, statHash, outValue, p2); } // 0x11B5E6D2AE73F48E 0x28A3DD2B
	static BOOL STAT_GET_DATE(Hash statHash, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x2F9D37CD8149C9F2, statHash, p1, p2, p3); } // 0x8B0FACEFC36C824B 0xD762D16C
	static BOOL STAT_GET_STRING(Hash statHash, char* outValue) { return invoke<BOOL>(0x2111EA6661834353, statHash, outValue); } // 0xE50384ACC2C3DB74 0x10CE4BDE
	static BOOL STAT_GET_POS(Any p0, Any* p1, Any* p2, Any* p3, Any p4) { return invoke<BOOL>(0x98700C20FAF65B4F, p0, p1, p2, p3, p4); } // 0x350F82CCB186AA1B 0xC846ECCE
	static BOOL STAT_GET_MASKED_INT(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x43577EDB73960877, p0, p1, p2, p3, p4); } // 0x655185A06D9EEAAB 0xE9D9B70F
	static Any STAT_GET_USER_ID(Any p0) { return invoke<Any>(0x3CA324EE4C8B2486, p0); } // 0x2365C388E393BBE2 0xE2E8B6BA
	static char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<char*>(0x7173AE9F876A0955, statName); } // 0x5473D4195058B2E4 0x1544B29F
	static BOOL STAT_SET_LICENSE_PLATE(Hash statName, char* str) { return invoke<BOOL>(0xACA460F897F3E48B, statName, str); } // 0x69FF13266D7296DA 0x3507D253
	static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0xD3363C33C5D52A45, statName, value); } // 0x9B5A68C6489E9909 0xDFC5F71E
	static BOOL _0x5A556B229A169402() { return invoke<BOOL>(0xB680C12136A968C7); } // 0x5A556B229A169402 0x46F21343
	static BOOL _0xB1D2BB1E1631F5B1() { return invoke<BOOL>(0x1C77317B534A52D6); } // 0xB1D2BB1E1631F5B1 0x02F283CE
	static BOOL _0xBED9F5693F34ED17(Hash statName, Any p1, Any* p2) { return invoke<BOOL>(0xB287E5D25738BF07, statName, p1, p2); } // 0xBED9F5693F34ED17 0xC4110917
	static void _0x26D7399B9587FE89(int p0) { invoke<Void>(0x920C3A33AA8E902D, p0); } // 0x26D7399B9587FE89 0x343B27E2
	static void _0xA78B8FA58200DA56(int p0) { invoke<Void>(0x8E3BEC3E02A48CD5, p0); } // 0xA78B8FA58200DA56 0xE3247582
	static Any _0xE0E854F5280FB769(Any p0) { return invoke<Any>(0xFBDE889918368201, p0); } // 0xE0E854F5280FB769 0xFD66A429
	static Any _0xF2D4B2FE415AAFC3(Any p0) { return invoke<Any>(0xB635FCCDAD70FDB7, p0); } // 0xF2D4B2FE415AAFC3 0x9B431236
	static Any _0x7583B4BE4C5A41B5(Any p0) { return invoke<Any>(0x846ACF240CBB6E44, p0); } // 0x7583B4BE4C5A41B5 0x347B4436
	static Any _0x2CE056FF3723F00B(Any p0) { return invoke<Any>(0xED528A07199F0184, p0); } // 0x2CE056FF3723F00B 0x2C1D6C31
	static void _STAT_SET_PROFILE_SETTING(int profileSetting, int value) { invoke<Void>(0x115CB8A742D80D14, profileSetting, value); } // 0x68F01422BE1D838F 0x24DD4929
	static Any _0xF4D8E7AC2A27758C(Any p0) { return invoke<Any>(0x192746D863D6540E, p0); } // 0xF4D8E7AC2A27758C 0xDFC25D66
	static Any _0x94F12ABF9C79E339(Any p0) { return invoke<Any>(0x19A1C45894374F65, p0); } // 0x94F12ABF9C79E339 0xCA160BCC
	static Any _0x80C75307B1C42837(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0x344F27C22302C47F, p0, p1, p2, p3); } // 0x80C75307B1C42837 0xB5BF87B2
	static Any _0x61E111E323419E07(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0xDED84488A87A6A63, p0, p1, p2, p3); } // 0x61E111E323419E07 0x1F938864
	static Any _0xC4BB08EE7907471E(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0x2E64726ED5C96D3A, p0, p1, p2, p3); } // 0xC4BB08EE7907471E 0x3F8E893B
	static Any _0xD16C2AD6B8E32854(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0x8312E74D8EF16836, p0, p1, p2, p3); } // 0xD16C2AD6B8E32854 0xFB93C5A2
	static Any _0xBA52FF538ED2BC71(Any p0, BOOL p1, BOOL p2, Any p3, Any* p4) { return invoke<Any>(0x04FF7BB1F97500D5, p0, p1, p2, p3, p4); } // 0xBA52FF538ED2BC71
	static Any _0x2B4CDCA6F07FF3DA(Any p0, BOOL p1, BOOL p2, Any p3, Any* p4) { return invoke<Any>(0xC32C9C14231E969A, p0, p1, p2, p3, p4); } // 0x2B4CDCA6F07FF3DA
	static BOOL STAT_GET_BOOL_MASKED(Hash statName, Any p1, Any p2) { return invoke<BOOL>(0xFC12D914F6DEEF7B, statName, p1, p2); } // 0x10FE3F1B79F9B071 0x6ACE1B7D
	static BOOL STAT_SET_BOOL_MASKED(Hash statName, BOOL p1, Any p2, BOOL save) { return invoke<BOOL>(0x12CAB63E316BE0B5, statName, p1, p2, save); } // 0x5BC62EC1937B9E5B 0x7842C4D6
	static void _0x5009DFD741329729(char* p0, Any p1) { invoke<Void>(0x7E5712AC01EE5F64, p0, p1); } // 0x5009DFD741329729 0x61ECC465
	static void PLAYSTATS_NPC_INVITE(Any* p0) { invoke<Void>(0x5DC56ABED0216E01, p0); } // 0x93054C88E6AA7C44 0x598C06F3
	static void PLAYSTATS_AWARD_XP(Any p0, Any p1, Any p2) { invoke<Void>(0x726276BAB6518437, p0, p1, p2); } // 0x46F917F6B4128FE4 0x8770017B
	static void PLAYSTATS_RANK_UP(Any p0) { invoke<Void>(0x32E377F60D6F038F, p0); } // 0xC7F2DE41D102BFB4 0x56AFB9F5
	static void _0x098760C7461724CD() { invoke<Void>(0x0AA44C0A35DBA318); } // 0x098760C7461724CD 0x896CDF8D
	static void _0xA071E0ED98F91286(Any p0, Any p1) { invoke<Void>(0x60CA0D104534829E, p0, p1); } // 0xA071E0ED98F91286 0x1A66945F
	static void _0xC5BE134EC7BA96A0(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x57D1203C927445F3, p0, p1, p2, p3, p4); } // 0xC5BE134EC7BA96A0 0xC960E161
	static void PLAYSTATS_MISSION_STARTED(Any* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xE4FD630E9165FB5C, p0, p1, p2, p3); } // 0xC19A2925C34D2231 0x3AAB699C
	static void PLAYSTATS_MISSION_OVER(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x6013749680B4A6E9, p0, p1, p2, p3, p4, p5); } // 0x7C4BB33A8CED7324 0x5B90B5FF
	static void PLAYSTATS_MISSION_CHECKPOINT(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0x77C4120A79EE3365, p0, p1, p2, p3); } // 0xC900596A63978C1D 0xCDC52280
	static void _0x71862B1D855F32E1(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6C6B822764300FD2, p0, p1, p2, p3); } // 0x71862B1D855F32E1 0xAC2C7C63
	static void _0x121FB4DDDC2D5291(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0x2F62C73FE55EF7FF, p0, p1, p2, p3); } // 0x121FB4DDDC2D5291 0x413539BC
	static void PLAYSTATS_RACE_CHECKPOINT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x5FBEEA8415A66B05, p0, p1, p2, p3, p4); } // 0x9C375C315099DDE4 0x580D5508
	static BOOL _0x6DEE77AFF8C21BD1(Any* p0, Any* p1) { return invoke<BOOL>(0xB21EB307350F5CA1, p0, p1); } // 0x6DEE77AFF8C21BD1 0x489E27E7
	static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x38377F58727D4FD7, p0, p1, p2, p3, p4, p5, p6); } // 0xBC80E22DED931E3D 0x2BDE85C1
	static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x5F0F8080F7F03458, p0, p1, p2, p3, p4); } // 0x176852ACAAC173D1 0xA4746384
	static void _0x1CAE5D2E3F9A07F0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x3E470A528AEF4202, p0, p1, p2, p3, p4, p5); } // 0x1CAE5D2E3F9A07F0 0x6602CED6
	static void _0xAFC7E5E075A96F46(float p0, float p1, float p2) { invoke<Void>(0xD6201B3B6F4EBF94, p0, p1, p2); } // 0xAFC7E5E075A96F46
	static void _0xCB00196B31C39EB1(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDB86208CF3AFC8A1, p0, p1, p2, p3); } // 0xCB00196B31C39EB1 0x759E0EC9
	static void _0x2B69F5074C894811(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xABE6F3E6B2113965, p0, p1, p2, p3); } // 0x2B69F5074C894811 0x62073DF7
	static void _0x7EEC2A316C250073(Any p0, Any p1, Any p2) { invoke<Void>(0x3B3591F2C75ABE05, p0, p1, p2); } // 0x7EEC2A316C250073 0x30558CFD
	static void _0xADDD1C754E2E2914(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x614666B166285EF6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xADDD1C754E2E2914 0x06CE3692
	static void _0x79AB33F0FBFAC40C(Any p0) { invoke<Void>(0x7CC58BDB2809FB4A, p0); } // 0x79AB33F0FBFAC40C 0x8D5C7B37
	static void _0xDDF24D535060F811(Hash p0, int p1) { invoke<Void>(0x4E2F02EAC86B8B8F, p0, p1); } // 0xDDF24D535060F811 0x37D152BB
	static void PLAYSTATS_FRIEND_ACTIVITY(Any p0, Any p1) { invoke<Void>(0x488782C5280B6124, p0, p1); } // 0x0F71DE29AB2258F1 0xD1FA1BDB
	static void PLAYSTATS_ODDJOB_DONE(Any p0, Any p1, Any p2) { invoke<Void>(0xBDB0B475DF6B7548, p0, p1, p2); } // 0x69DEA3E9DB727B4C 0xFE14A8EA
	static void PLAYSTATS_PROP_CHANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xEDDCE1B8EF2C6060, p0, p1, p2, p3); } // 0xBA739D6D5A05D6E7 0x25740A1D
	static void PLAYSTATS_CLOTH_CHANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x85A00D600007FC16, p0, p1, p2, p3, p4); } // 0x34B973047A2268B9 0x3AFF9E58
	static void _0xE95C8A1875A02CA4(Any p0, Any p1, Any p2) { invoke<Void>(0x57EB1AC3D8397C6E, p0, p1, p2); } // 0xE95C8A1875A02CA4 0x79716890
	static void PLAYSTATS_CHEAT_APPLIED(char* cheat) { invoke<Void>(0x15428070A3E24A8A, cheat); } // 0x6058665D72302D3F 0x345166F3
	static void _0xF8C54A461C3E11DC(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x40B2157366BF2A07, p0, p1, p2, p3); } // 0xF8C54A461C3E11DC 0x04181752
	static void _0xF5BB8DAC426A52C0(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x59D52B8F5BB158DB, p0, p1, p2, p3); } // 0xF5BB8DAC426A52C0
	static void _0xA736CF7FB7C5BFF4(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x658DBCB1D06E675D, p0, p1, p2, p3); } // 0xA736CF7FB7C5BFF4 0x31002201
	static void _0x14E0B2D1AD1044E0(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x6EECF4AC9B720AAC, p0, p1, p2, p3); } // 0x14E0B2D1AD1044E0 0xDDD1F1F3
	static void _0x90D0622866E80445(Any p0, Any* p1) { invoke<Void>(0x716B56D94EB0C8AA, p0, p1); } // 0x90D0622866E80445 0x66FEB701
	static void _0x5DA3A8DE8CB6226F(Any p0) { invoke<Void>(0x725D00A0E03BD9B5, p0); } // 0x5DA3A8DE8CB6226F 0x9E2B9522
	static void _0xD1032E482629049E(BOOL p0) { invoke<Void>(0x8721D97E9E587B85, p0); } // 0xD1032E482629049E
	static void _0xF4FF020A08BC8863(Any p0, Any p1) { invoke<Void>(0x717F731EBFCA52C0, p0, p1); } // 0xF4FF020A08BC8863
	static void _0x46326E13DA4E0546(Any* p0) { invoke<Void>(0xC1CE215D4B8A0245, p0); } // 0x46326E13DA4E0546
	static Any LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Any p0, Any p1) { return invoke<Any>(0xD3879A8B853C2C94, p0, p1); } // 0x117B45156D7EFF2E 0x0A56EE34
	static Any LEADERBOARDS_GET_COLUMN_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0xB0A2FF600FD104F2, p0, p1, p2); } // 0xC4B5467A1886EA7E 0x3821A334
	static Any LEADERBOARDS_GET_COLUMN_TYPE(Any p0, Any p1, Any p2) { return invoke<Any>(0xCDDA154D91A1E547, p0, p1, p2); } // 0xBF4FEF46DB7894D3 0x6F2820F4
	static Any LEADERBOARDS_READ_CLEAR_ALL() { return invoke<Any>(0x58318F8BC3456B13); } // 0xA34CB6E6F0DF4A0B 0x233E058A
	static Any LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<Any>(0xA069CE61DB43C441, p0, p1, p2); } // 0x7CCE5C737A665701 0x7090012F
	static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x26E30C2BF60E01E2, p0, p1, p2); } // 0xAC392C8483342AC2 0xEEB8BF5C
	static Any _0xA31FD15197B192BD() { return invoke<Any>(0x8880FCE9B872D6D2); } // 0xA31FD15197B192BD 0x1789437B
	static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xA59B1164C28B553D, p0, p1, p2); } // 0x2FB19228983E832C 0x3AC5B2F1
	static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5); } // 0x918B101666F9CB83 0xBD91B136
	static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0xDCD68DF6CC13B1EB, p0, p1); } // 0xC30713A383BFBF0E 0x6B553408
	static BOOL LEADERBOARDS2_READ_BY_ROW(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return invoke<BOOL>(0xA9CDB1E3F0A49883, p0, p1, p2, p3, p4, p5, p6); } // 0xA9CDB1E3F0A49883 0xCA931F34
	static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xE72BDF6BB1322B76, p0, p1, p2); } // 0xBA2C7DB0C129449A 0x1B03F59F
	static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xA3F42D50D431CFF5, p0, p1, p2); } // 0x5CE587FB5A42C8C4 0xC5B7E685
	static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x99D608A154558F16, p0, p1, p2); } // 0x7EEC7E4F6984A16A 0xAC020C18
	static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0x7B1CB2ADB74D72DF, p0, p1, p2); } // 0xE662C8B759D08F3C 0xC678B29F
	static BOOL _0xC38DC1E90D22547C(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x9E5C9B86A900CFB7, p0, p1, p2); } // 0xC38DC1E90D22547C 0x9BEC3401
	static BOOL _0xF1AE5DCDBFCA2721(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xB753663E19AF0920, p0, p1, p2); } // 0xF1AE5DCDBFCA2721
	static BOOL _0xA0F93D5465B3094D(Any* p0) { return invoke<BOOL>(0x13A7880674DC9CAB, p0); } // 0xA0F93D5465B3094D 0xC977D6E2
	static void _0x71B008056E5692D6() { invoke<Void>(0x375658A51D6A76FE); } // 0x71B008056E5692D6 0xF2DB6A82
	static BOOL _0x34770B9CE0E03B91(Any p0, Any* p1) { return invoke<BOOL>(0xEF0A04EA2ED9634F, p0, p1); } // 0x34770B9CE0E03B91 0x766A74FE
	static Any _0x88578F6EC36B4A3A(Any p0, Any p1) { return invoke<Any>(0xF711E3ACDF97677F, p0, p1); } // 0x88578F6EC36B4A3A 0x6B90E730
	static float _0x38491439B6BA7F7D(Any p0, Any p1) { return invoke<float>(0x2BDF04EC97B58318, p0, p1); } // 0x38491439B6BA7F7D 0x509A286F
	static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0x1D73017C0F6AC577, p0); } // 0xAE2206545888AE49 0x5F9DF634
	static void _0x0BCA1D2C47B0D269(Any p0, Any p1, float p2) { invoke<Void>(0xD5B7442BE4C49CDB, p0, p1, p2); } // 0x0BCA1D2C47B0D269 0x7524E27B
	static void _0x2E65248609523599(Any p0, Any p1, Any p2) { invoke<Void>(0x69FDD7715C4E2907, p0, p1, p2); } // 0x2E65248609523599 0x1C5CCC3A
	static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0x8BDF4177E5A094E7, p0); } // 0xB9BB18E2C40142ED 0x44F7D82B
	static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0xA028B15AC8E64991); } // 0xD4B02A6B476E1FDC 0x87F498C1
	static void _0x8EC74CEB042E7CFF(Any p0) { invoke<Void>(0x443E60D32C56B088, p0); } // 0x8EC74CEB042E7CFF 0x88AE9667
	static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0xA2A087EAC619EA35, p0); } // 0x9C51349BE6CDFE2C 0xFC8A71F3
	static Any LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<Any>(0xD60DD04CC038CEC0, p0); } // 0xF04C1C27DA35F6C8 0xEDF02302
	static Any _0x58A651CD201D89AD(Any p0) { return invoke<Any>(0x673D845702DBE3DF, p0); } // 0x58A651CD201D89AD 0xCE7CB520
	static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x0AE57125A1E6DC67, p0, p1, p2); } // 0x9120E8DBA3D69273 0xA11289EC
	static void _0x11FF1C80276097ED(Any p0, Any p1, Any p2) { invoke<Void>(0xE8AB1AD861EA93C1, p0, p1, p2); } // 0x11FF1C80276097ED 0x4AC39C6C
	static void _0x30A6614C1F7799B8(Any p0, float p1, Any p2) { invoke<Void>(0x8BA674664D8D8864, p0, p1, p2); } // 0x30A6614C1F7799B8 0x3E69E7C3
	static void _0x6483C25849031C4F(Any p0, Any p1, Any p2, Any* p3) { invoke<Void>(0x7F4EE83CF11C47C1, p0, p1, p2, p3); } // 0x6483C25849031C4F 0x2FFD2FA5
	static BOOL _0x5EAD2BF6484852E4() { return invoke<BOOL>(0x1C665439DD61A7B7); } // 0x5EAD2BF6484852E4 0x23D70C39
	static void _0xC141B8917E0017EC() { invoke<Void>(0xA976D15E16CABA6C); } // 0xC141B8917E0017EC 0x0AD43306
	static void _0xB475F27C6A994D65() { invoke<Void>(0x00CFB3F6DAEA884E); } // 0xB475F27C6A994D65 0xC7DE5C30
	static void _0xF1A1803D3476F215(int value) { invoke<Void>(0x40F660F6A79A7639, value); } // 0xF1A1803D3476F215 0xA3DAC790
	static void _0x38BAAA5DD4C9D19F(int value) { invoke<Void>(0x1D22A3FA2504D485, value); } // 0x38BAAA5DD4C9D19F 0x726FAE66
	static void _0x55384438FC55AD8E(int value) { invoke<Void>(0xFFEA435F7A2AB22D, value); } // 0x55384438FC55AD8E 0xF03895A4
	static void _0x723C1CE13FBFDB67(Any p0, Any p1) { invoke<Void>(0x9460FEB503073236, p0, p1); } // 0x723C1CE13FBFDB67 0x4C39CF10
	static void _0x0D01D20616FC73FB(Any p0, Any p1) { invoke<Void>(0x170331538F4BC9C4, p0, p1); } // 0x0D01D20616FC73FB 0x2180AE13
	static void _0x428EAF89E24F6C36(Any p0, float p1) { invoke<Void>(0xFC92144AFDABE393, p0, p1); } // 0x428EAF89E24F6C36 0xEE292B91
	static void _0x047CBED6F6F8B63C() { invoke<Void>(0x8DCBDDB88592378C); } // 0x047CBED6F6F8B63C 0xA063CABD
	static BOOL _0xC980E62E33DF1D5C(Any* p0, Any* p1) { return invoke<BOOL>(0x01EBE2A4D8AB7C0D, p0, p1); } // 0xC980E62E33DF1D5C 0x62C19A3D
	static void _0x6F361B8889A792A3() { invoke<Void>(0x609DC0357AC78316); } // 0x6F361B8889A792A3 0x3B4EF322
	static void _0xC847B43F369AC0B5() { invoke<Void>(0x51F6B99F3171F138); } // 0xC847B43F369AC0B5
	static BOOL _0xA5C80D8E768A9E66(Any* p0) { return invoke<BOOL>(0xECD4121374DA7B08, p0); } // 0xA5C80D8E768A9E66
	static Any _0x9A62EC95AE10E011() { return invoke<Any>(0x56FD4D64CD6BC199); } // 0x9A62EC95AE10E011
	static Any _0x4C89FE2BDEB3F169() { return invoke<Any>(0x43B6DD6DA88F8F54); } // 0x4C89FE2BDEB3F169
	static Any _0xC6E0E2616A7576BB() { return invoke<Any>(0x1B1894DC23402EA2); } // 0xC6E0E2616A7576BB
	static Any _0x5BD5F255321C4AAF(Any p0) { return invoke<Any>(0x1EA8A1A89AC5B371, p0); } // 0x5BD5F255321C4AAF
	static Any _0xDEAAF77EB3687E97(Any p0, Any* p1) { return invoke<Any>(0x661399AFF281D63B, p0, p1); } // 0xDEAAF77EB3687E97
	static Any _0xC70DDCE56D0D3A99() { return invoke<Any>(0x6BC271E2D1FFD171); } // 0xC70DDCE56D0D3A99 0x54E775E0
	static Any _0x886913BBEACA68C1(Any* p0) { return invoke<Any>(0x57B4CCDF8F17B774, p0); } // 0x886913BBEACA68C1 0xE3F0D62D
	static Any _0x4FEF53183C3C6414() { return invoke<Any>(0x7EDAD1B2C6E81210); } // 0x4FEF53183C3C6414
	static Any _0x567384DFA67029E6() { return invoke<Any>(0x2DB8BB09EF57CF3D); } // 0x567384DFA67029E6
	static BOOL _0x3270F67EED31FBC1(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x1D361361566A4399, p0, p1, p2); } // 0x3270F67EED31FBC1
	static Any _0xCE5AA445ABA8DEE0(Any* p0) { return invoke<Any>(0x55FD188BE835551D, p0); } // 0xCE5AA445ABA8DEE0
	static void _0x98E2BC1CA26287C3() { invoke<Void>(0xED349C4421184C01); } // 0x98E2BC1CA26287C3
	static void _0x629526ABA383BCAA() { invoke<Void>(0x6B2DA610FBC30804); } // 0x629526ABA383BCAA
	static Any _0xB3DA2606774A8E2D() { return invoke<Any>(0x131ED248A6F66D2F); } // 0xB3DA2606774A8E2D
	static void _0xDAC073C7901F9E15(Any p0) { invoke<Void>(0xDA842F3F06329D8C, p0); } // 0xDAC073C7901F9E15
	static void _0xF6792800AC95350D(Any p0) { invoke<Void>(0x09FC0D2C1F4EB3DE, p0); } // 0xF6792800AC95350D
}

namespace BRAIN
{
	static void ADD_SCRIPT_TO_RANDOM_PED(char* name, Hash model, float p2, float p3) { invoke<Void>(0x542F40CA5900036E, name, model, p2, p3); } // 0x4EE5367468A65CCC 0xECC76C3D
	static void REGISTER_OBJECT_SCRIPT_BRAIN(char* scriptName, Hash p1, int p2, float p3, int p4, int p5) { invoke<Void>(0x6A576633FABDA083, scriptName, p1, p2, p3, p4, p5); } // 0x0BE84C318BA6EC22 0xB6BCC608
	static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0x9AB41624168E4453, object); } // 0xCCBA154209823057 0xBA4CAA56
	static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(Any* p0, float p1, Any p2) { invoke<Void>(0x573395498D0DD733, p0, p1, p2); } // 0x3CDC7136613284BD 0x725D91F7
	static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0x43045253AC4C7FF5); } // 0xC5042CC6F5E3D450 0x2CF305A0
	static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0x0C3B56B3CC791C21, brainSet); } // 0x67AA4D73F0CFA86B 0x2765919F
	static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xFD5EF0FE701292AF, brainSet); } // 0x14D8518E9760F08F 0xFBD13FAD
	static void _0x0B40ED49D7D6FF84() { invoke<Void>(0x424900BB01596FE2); } // 0x0B40ED49D7D6FF84 0x19B27825
	static void _0x4D953DF78EBF8158() { invoke<Void>(0x4FEC69CCB3051E90); } // 0x4D953DF78EBF8158 0xF3A3AB08
	static void _0x6D6840CEE8845831(char* action) { invoke<Void>(0xE0B4800BAEDEC1F7, action); } // 0x6D6840CEE8845831 0x949FE53E
	static void _0x6E91B04E08773030(char* action) { invoke<Void>(0xD105A0A62A23A079, action); } // 0x6E91B04E08773030 0x29CE8BAA
}

namespace MOBILE
{
	static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0x14842F52085AEF87, phoneType); } // 0xA4E8E696C532FBC7 0x5BBC5E23
	static void DESTROY_MOBILE_PHONE() { invoke<Void>(0xA392DA3C7223BC9F); } // 0x3BC861DF703E5097 0x1A65037B
	static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0x25D2C09C216F111E, scale); } // 0xCBDD322A73D6D932 0x09BCF1BE
	static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0x222F4890F7AA7AD6, rotX, rotY, rotZ, p3); } // 0xBB779C0CA917E865 0x209C28CF
	static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Any p1) { invoke<Void>(0x1FB56391BC31C285, rotation, p1); } // 0x1CEFB61F193070AE 0x17A29F23
	static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0x6D68EB69A9260608, posX, posY, posZ); } // 0x693A5C6D6734085B 0x841800B3
	static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0x4788913DF846A969, position); } // 0x584FDFDA48805B86 0xB2E1E1A0
	static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0xC1B9339960A48E6A, toggle); } // 0xF511F759238A5122 0x29828690
	static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xE433D9AB4591725F); } // 0xC4E2813898C97A4B 0x5F978584
	static void _MOVE_FINGER(int p0) { invoke<Void>(0x8F24B7634E2C72BC, p0); } // 0x95C9E72F3D7DEC9B
	static void _SET_PHONE_LEAN(BOOL Toggle) { invoke<Void>(0x1D4D254951F74442, Toggle); } // 0x44E44169EF70138E
	static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0x59C51CE36969EDE5, p0, p1); } // 0xFDE8F069C542D126 0x234C1AE9
	static void _0x015C49A93E3E086E(BOOL p0) { invoke<Void>(0xC99D8A3B5BE50C1E, p0); } // 0x015C49A93E3E086E 0x4479B304
	static void _0xA2CCBE62CD4C91A4(BOOL toggle) { invoke<Void>(0xDB435D3A31C452A8, toggle); } // 0xA2CCBE62CD4C91A4 0xC273BB4D
	static void _0x1B0B4AEED5B9B41C(float p0) { invoke<Void>(0x94C4AA6E3353EB1E, p0); } // 0x1B0B4AEED5B9B41C
	static void _0x53F4892D18EC90A4(float p0) { invoke<Void>(0x81465147C623A216, p0); } // 0x53F4892D18EC90A4
	static void _0x3117D84EFA60F77B(float p0) { invoke<Void>(0xE4C2BCAB0B8B2A01, p0); } // 0x3117D84EFA60F77B
	static void _0x15E69E2802C24B8D(float p0) { invoke<Void>(0xE8D3D88AC748F627, p0); } // 0x15E69E2802C24B8D
	static void _0xAC2890471901861C(float p0) { invoke<Void>(0x8C5214A738044087, p0); } // 0xAC2890471901861C
	static void _0xD6ADE981781FCA09(float p0) { invoke<Void>(0x6E7177B675352B96, p0); } // 0xD6ADE981781FCA09
	static void _0xF1E22DC13F5EEBAD(float p0) { invoke<Void>(0x51B8947DC9740712, p0); } // 0xF1E22DC13F5EEBAD
	static void _0x466DA42C89865553(float p0) { invoke<Void>(0xED2F239BF63E9E2C, p0); } // 0x466DA42C89865553 0x66DCD9D2
	static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0x515065C4969FEF76, entity); } // 0x439E9BC95B7E7FBE 0xBEA88097
	static void GET_MOBILE_PHONE_RENDER_ID(Any* renderId) { invoke<Void>(0xBCDB24809FDAC52E, renderId); } // 0xB4A53E05F68B6FA1 0x88E4FECE
	static BOOL _0xBD4D7EAF8A30F637(char* name) { return invoke<BOOL>(0x756748A3E72BE5C1, name); } // 0xBD4D7EAF8A30F637
	static BOOL _0x247F0F73A182EA0B(Hash hash) { return invoke<BOOL>(0xA3BCC2671B49FEB3, hash); } // 0x247F0F73A182EA0B
}

namespace APP
{
	static BOOL APP_DATA_VALID() { return invoke<BOOL>(0x87F161D4B58F39CB); } // 0x846AA8E7D55EE5B6 0x72BDE002
	static int APP_GET_INT(char* property) { return invoke<int>(0xF0A6DA2FC3978404, property); } // 0xD3A58A12C77D9D4B 0x2942AAD2
	static float APP_GET_FLOAT(char* property) { return invoke<float>(0x85213E49801AAA21, property); } // 0x1514FB24C02C2322 0xD87F3A1C
	static char* APP_GET_STRING(char* property) { return invoke<char*>(0x57CAE371FACE0601, property); } // 0x749B023950D2311C 0x849CEB80
	static void APP_SET_INT(char* property, int value) { invoke<Void>(0x105BF0617B8F34C7, property, value); } // 0x607E8E3D3E4F9611 0x1B509C32
	static void APP_SET_FLOAT(char* property, float value) { invoke<Void>(0x978273504E9EC862, property, value); } // 0x25D7687C68E0DAA4 0xF3076135
	static void APP_SET_STRING(char* property, char* value) { invoke<Void>(0x25AA7B2900B234C8, property, value); } // 0x3FF2FCEC4B7721B4 0x23DF19A8
	static void APP_SET_APP(char* appName) { invoke<Void>(0x3CCCBA161FD8CD2A, appName); } // 0xCFD0406ADAF90D2B 0x8BAC4146
	static void APP_SET_BLOCK(char* blockName) { invoke<Void>(0x6C0BFF5B9651BE18, blockName); } // 0x262AB456A3D21F93 0xC2D54DD9
	static void APP_CLEAR_BLOCK() { invoke<Void>(0x319063CB4D22A88E); } // 0x5FE1DF3342DB7DBA 0xDAB86A18
	static void APP_CLOSE_APP() { invoke<Void>(0xE16CEA006AE44A1D); } // 0xE41C65E07A5F05FC 0x03767C7A
	static void APP_CLOSE_BLOCK() { invoke<Void>(0x052AFDC086B24354); } // 0xE8E3FCF72EAC0EF8 0xED97B202
	static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0x331AF8FD25441A7C); } // 0x71EEE69745088DA0 0xD368BA15
	static BOOL APP_HAS_SYNCED_DATA(char* appName) { return invoke<BOOL>(0x0D0870CB2A6AA360, appName); } // 0xCA52279A7271517F 0x1DE2A63D
	static void APP_SAVE_DATA() { invoke<Void>(0x52C6235A14D52A77); } // 0x95C5D356CDA6E85F 0x84A3918D
	static Any APP_GET_DELETED_FILE_STATUS() { return invoke<Any>(0xF0DD79949303B706); } // 0xC9853A2BE3DED1A6 0x784D550B
	static BOOL APP_DELETE_APP_DATA(char* appName) { return invoke<BOOL>(0x45D1FA5DFF498093, appName); } // 0x44151AEA95C8A003 0x2A2FBD1C
}

namespace TIME
{
	static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xE69E781F3FBD3528, hour, minute, second); } // 0x47C3B5848C3E45D8 0x26F6AF14
	static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0x4A26E9F380CB5474, toggle); } // 0x4055E40BD2DBEC1D 0xB02D6124
	static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0x089D3C02A1B0F26F, hour, minute, second); } // 0xC8CA9670B9D83B3B 0x57B8DA7C
	static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0x7B02B29C32E842C2, hours, minutes, seconds); } // 0xD716F30D8C8980E2 0xCC40D20D
	static int GET_CLOCK_HOURS() { return invoke<int>(0x7C42343912622BB6); } // 0x25223CA6B4D20B7F 0x7EF8316F
	static int GET_CLOCK_MINUTES() { return invoke<int>(0x4A29A51562AC24A5); } // 0x13D2B8ADD79640F2 0x94AAC486
	static int GET_CLOCK_SECONDS() { return invoke<int>(0x8A1006B6887A61DE); } // 0x494E97C2EF27C470 0x099C927E
	static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xBDA86BB26600213F, day, month, year); } // 0xB096419DF0D06CE7 0x96891C94
	static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0x11C9C43658A1D6F0); } // 0xD972E4BD7AEB235F 0x84E4A289
	static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0x5EE1E0D1EBF5F7F6); } // 0x3D10BC92A4DB1D35 0xC7A5ACB7
	static int GET_CLOCK_MONTH() { return invoke<int>(0x55ED786EB10EA740); } // 0xBBC72712E80257A1 0x3C48A3D5
	static int GET_CLOCK_YEAR() { return invoke<int>(0x3258DF33389FB224); } // 0x961777E64BDAF717 0xB8BECF15
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0x48DCBD1CC6671BDC); } // 0x2F8B4D1C595B11DB 0x3B74095C
	static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xBC33A7C3E3917F90, year, month, day, hour, minute, second); } // 0xDA488F299A5B164E 0xE15A5281
	static void _GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xF9547444F636B495, year, month, day, hour, minute, second); } // 0x8117E09A19EEF4D3
	static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0x32CE4424423D3F0E, year, month, day, hour, minute, second); } // 0x50C7A99057A69748 0x124BCFA2
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown1, BOOL unknown2) { invoke<Void>(0x965CFA6E4E433BDE, x1, y1, z1, x2, y2, z2, unknown1, unknown2); } // 0xBF1A602B5BA52FEE 0xEBC7B918
	static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0xC4B3EC24D2EFC927, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3); } // 0x1A5AA1208AF5DB59 0xBD088F4B
	static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { invoke<Void>(0x6CC6C8E74EBB04E4, x1, y1, z1, x2, y2, z2, unknown); } // 0x34F060F4BF92E018 0x2148EA84
	static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0x1F69106BA5C5442C, x, y, z, onGround, outPosition, flags); } // 0xB61C8E878A4199CA 0xB370270A
	static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) { return invoke<BOOL>(0x465CE27F53C0F56E, x, y, z, outPosition, nodeType, p5, p6); } // 0x240A18690AE96513 0x6F5F1E6C
	static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, int unknown2) { return invoke<BOOL>(0x00B119AD16AB45EB, x, y, z, outPosition, unknown1, unknown2); } // 0x2EABE3B06F58C1BE 0x04B5F15B
	static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) { return invoke<BOOL>(0xDB90294334B411BD, x, y, z, outPosition, outHeading, nodeType, p6, p7); } // 0xFF071FB798B803B0 0x8BD5759B
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, Any unknown1, Any unknown2, Any unknown3) { return invoke<BOOL>(0x3E1E1E768BE3A2F4, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); } // 0xE50E52416CCF948B 0xF125BFCC
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, Any p3, Any p4, float p5, float p6) { return invoke<int>(0x5F7378BEEB11E682, x, y, z, p3, p4, p5, p6); } // 0x22D7275A79FE8215 0x3F358BEA
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4) { return invoke<BOOL>(0xBE5432549D1D244B, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2, unknown3, unknown4); } // 0x80CA6A8B6C094CC4 0x7349C856
	static Any GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float outHeading, Any p6, float p7, float p8) { return invoke<Any>(0xD2275328A6FD3845, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8); } // 0x6448050E9C2A7207 0xC1AEB88D
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int p9, Any p10, Any p11) { return invoke<BOOL>(0x085A1C0707F0E88A, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, p9, p10, p11); } // 0x45905BE8654AE067 0x928A4DEC
	static BOOL GET_VEHICLE_NODE_PROPERTIES(float p0, float p1, float p2, Any* p3, Any* p4) { return invoke<BOOL>(0xC54D87D649D77D84, p0, p1, p2, p3, p4); } // 0x0568566ACBB5DEDC 0xCC90110B
	static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0xE25FC54E624B820E, vehicleNodeId); } // 0x1EAF30FCFBF5AF74 0x57DFB1EF
	static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0x5D5210831D45D0A6, nodeId, outPosition); } // 0x703123E5E7D429C2 0xE38E252D
	static BOOL _GET_SUPPORTS_GPS_ROUTE_FLAG(int nodeID) { return invoke<BOOL>(0xABEAA77F123D36FA, nodeID); } // 0xA2AE5C478B96E3B6 0xEE4B1219
	static BOOL _GET_IS_SLOW_ROAD_FLAG(int nodeID) { return invoke<BOOL>(0x722521C5827377D3, nodeID); } // 0x4F5070AA58F69279 0x56737A3C
	static Any GET_CLOSEST_ROAD(float x, float y, float z, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<Any>(0x6FCAA52DD2D987DE, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x132F52BBA570FE92 0x567B0E11
	static BOOL LOAD_ALL_PATH_NODES(BOOL p0) { return invoke<BOOL>(0x7A7709F383A047D6, p0); } // 0x80E4A6EDDB0BE8D9 0xC66E28C3
	static void _0x228E5C6AD4D74BFD(BOOL p0) { invoke<Void>(0x92E006821FF308BA, p0); } // 0x228E5C6AD4D74BFD 0xD6A3B458
	static BOOL _0xF7B79A50B905A30D(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x34302C240EA1F13B, p0, p1, p2, p3); } // 0xF7B79A50B905A30D 0x86E80A17
	static BOOL _0x07FB139B592FA687(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x33E1C85069157293, p0, p1, p2, p3); } // 0x07FB139B592FA687 0x2CDA5012
	static void SET_ROADS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x5D4C739EF48A09AE, p0, p1, p2, p3, p4, p5); } // 0x1EE7063B80FFC77C 0x86AC4A85
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6) { invoke<Void>(0x1757D2CC022D31AD, x1, y1, z1, x2, y2, z2, p6); } // 0x0027501B9F3B407E 0x9DB5D209
	static void _0x0B919E1FB47CC4E0(float p0) { invoke<Void>(0x3E003D4B7B7C0BDC, p0); } // 0x0B919E1FB47CC4E0 0x3C5085E4
	static void _0xAA76052DDA9BFC3E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x24176B06E31896D8, p0, p1, p2, p3, p4, p5, p6); } // 0xAA76052DDA9BFC3E 0xD0F51299
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x900EE3A4DBB8D930, p0, p1, p2, p3, p4, p5); } // 0xE04B48F2CC926253 0x3F1ABDA4
	static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, float* heading) { return invoke<BOOL>(0xA79B6C29362AD139, x, y, z, radius, p4, p5, p6, outPosition, heading); } // 0x93E0DB8440B73A7D 0xAD1476EA
	static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0x868838CEA572631F, x, y, z, streetName, crossingRoad); } // 0x2EB41072B4C1E4C0 0xDEBEEFCF
	static Any GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, Any p3, Any p4, Vehicle* vehicle, Any p6) { return invoke<Any>(0x507930696A6102FC, x, y, z, p3, p4, vehicle, p6); } // 0xF90125F1F79ECDF8 0xED35C094
	static void SET_IGNORE_NO_GPS_FLAG(BOOL p0) { invoke<Void>(0x83B08DFA662C5453, p0); } // 0x72751156E7678833 0xB72CF194
	static void _0x1FC289A0C3FF470F(BOOL p0) { invoke<Void>(0x8168E3EECEB4BF8E, p0); } // 0x1FC289A0C3FF470F 0x90DF7A4C
	static void SET_GPS_DISABLED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEEA8F3795DFAFEC6, p0, p1, p2, p3, p4, p5); } // 0xDC20483CD3DD5201 0x720B8073
	static Any _0xBBB45C3CF5C8AA85() { return invoke<Any>(0x1A09A96EE595B577); } // 0xBBB45C3CF5C8AA85 0x4B770634
	static Any _0x869DAACBBE9FA006() { return invoke<Any>(0x056F50E9DC801343); } // 0x869DAACBBE9FA006 0x286F82CC
	static Any _0x16F46FB18C8009E4(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x4FC9101F95D6654F, p0, p1, p2, p3, p4); } // 0x16F46FB18C8009E4 0xF6422F9A
	static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Entity entity) { return invoke<BOOL>(0xA65AD002E10723B4, x, y, z, entity); } // 0x125BF4ABFC536B09 0xCF198055
	static Any _0xD3A6A0EF48823A8C() { return invoke<Any>(0x7ED8E3E482A070A8); } // 0xD3A6A0EF48823A8C
	static void _0xD0BC1C6FB18EE154(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x6A87DF13AF380623, p0, p1, p2, p3, p4, p5, p6); } // 0xD0BC1C6FB18EE154
	static void _0x2801D0012266DF07(Any p0) { invoke<Void>(0xBB6AD68E5E3AE033, p0); } // 0x2801D0012266DF07
	static void ADD_NAVMESH_REQUIRED_REGION(float p0, float p1, float p2) { invoke<Void>(0x16F6A7785C574F64, p0, p1, p2); } // 0x387EAD7EE42F6685 0x12B086EA
	static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0xEB410F2073890250); } // 0x916F0A3CDEC3445E 0x637BB680
	static void DISABLE_NAVMESH_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xCE895389126CF8FD, p0, p1, p2, p3, p4, p5, p6); } // 0x4C8872D8CDBE1B8B 0x6E37F132
	static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0x276CCB2040B5D34C); } // 0x8415D95B194A3AEA 0x34C4E789
	static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x6C8BF826062EB578, x1, y1, z1, x2, y2, z2); } // 0xF813C7E63F9062A5 0x4C2BA99E
	static Any _0x01708E8DD3FF8C65(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x53F8FDAE3EB94B2D, p0, p1, p2, p3, p4, p5); } // 0x01708E8DD3FF8C65
	static Any ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<Any>(0x9A431E8DC976B09F, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFCD5C8E06E502F5A 0x2952BA56
	static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0x7FCC12B8E26FC594, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x109E99373F290687 0x4E9776D0
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0x30469355CB7C8815, p0); } // 0x46399A7895957C0E 0x098602B0
	static BOOL _0x0EAEB0DB4B132399(Any p0) { return invoke<BOOL>(0x869816C3F838804B, p0); } // 0x0EAEB0DB4B132399 0x4B67D7EE
	static float _0x29C24BFBED8AB8FB(float p0, float p1) { return invoke<float>(0xA5C31803C6ABDD53, p0, p1); } // 0x29C24BFBED8AB8FB 0x3FE8C5A0
	static float _0x8ABE8608576D9CE3(float p0, float p1, float p2, float p3) { return invoke<float>(0xF71AD8664223AFBE, p0, p1, p2, p3); } // 0x8ABE8608576D9CE3 0x3ED21C90
	static float _0x336511A34F2E5185(float p0, float p1) { return invoke<float>(0xC879663D55C76F10, p0, p1); } // 0x336511A34F2E5185 0xA07C5B7D
	static float _0x3599D741C9AC6310(float p0, float p1, float p2, float p3) { return invoke<float>(0x0863C026B867B269, p0, p1, p2, p3); } // 0x3599D741C9AC6310 0x76751DD4
	static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x30378B07C2A17568, x1, y1, z1, x2, y2, z2); } // 0xADD95C7005C4A197 0xB114489B
}

namespace CONTROLS
{
	static BOOL IS_CONTROL_ENABLED(int index, int control) { return invoke<BOOL>(0x89F20B2FA4613913, index, control); } // 0x1CEA6BFDF248E5D9 0x9174AF84
	static BOOL IS_CONTROL_PRESSED(int index, int control) { return invoke<BOOL>(0x7F6103BD34B839B0, index, control); } // 0xF3A21BCD95725A4A 0x517A4384
	static BOOL IS_CONTROL_RELEASED(int index, int control) { return invoke<BOOL>(0x17A2220FAE907F77, index, control); } // 0x648EE3E7F38877DD 0x1F91A06E
	static BOOL IS_CONTROL_JUST_PRESSED(int index, int control) { return invoke<BOOL>(0x2A57AED61E15C7C7, index, control); } // 0x580417101DDB492F 0x4487F579
	static BOOL IS_CONTROL_JUST_RELEASED(int index, int control) { return invoke<BOOL>(0x382DB2E6C29D0F23, index, control); } // 0x50F940259D3841E6 0x2314444B
	static int GET_CONTROL_VALUE(int index, int control) { return invoke<int>(0xCEA3D75B69A1A87E, index, control); } // 0xD95E79E8686D2C27 0xC526F3C6
	static float GET_CONTROL_NORMAL(int index, int control) { return invoke<float>(0x6822B498C2270E88, index, control); } // 0xEC3C9B8D5327B563 0x5DE226A5
	static void _0x5B73C77D9EB66E24(BOOL p0) { invoke<Void>(0xE27C28EF3F6A97B8, p0); } // 0x5B73C77D9EB66E24
	static float _0x5B84D09CEC5209C5(Any p0, Any p1) { return invoke<float>(0x18A824B369093E50, p0, p1); } // 0x5B84D09CEC5209C5 0xC49343BB
	static BOOL _SET_CONTROL_NORMAL(int index, int control, float amount) { return invoke<BOOL>(0x4D3F19748BC05B0A, index, control, amount); } // 0xE8A25867FBA3B05E
	static BOOL IS_DISABLED_CONTROL_PRESSED(int index, int control) { return invoke<BOOL>(0xFEB2816B7220E998, index, control); } // 0xE2587F8CBBD87B1D 0x32A93544
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int index, int control) { return invoke<BOOL>(0x5E429C409D2CBD68, index, control); } // 0x91AEF906BCA88877 0xEE6ABD32
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int index, int control) { return invoke<BOOL>(0x7682E36A3D0D896F, index, control); } // 0x305C8DCD79DA8B0F 0xD6A679E1
	static float GET_DISABLED_CONTROL_NORMAL(int control, int variable) { return invoke<float>(0x7648D90D868BBF55, control, variable); } // 0x11E65974A982637C 0x66FF4FAA
	static float _0x4F8A26A890FD62FB(Any p0, Any p1) { return invoke<float>(0xBC901F1C15EF7F84, p0, p1); } // 0x4F8A26A890FD62FB 0xF2A65A4C
	static Any _0xD7D22F5592AED8BA(Any p0) { return invoke<Any>(0x318B4A76BC808F5A, p0); } // 0xD7D22F5592AED8BA 0x0E8EF929
	static BOOL _GET_LAST_INPUT_METHOD(int index) { return invoke<BOOL>(0x4255B5ECB9D34344, index); } // 0xA571D46727E2B718
	static BOOL _0x13337B38DB572509(Any p0) { return invoke<BOOL>(0xF3C67EB69BFA8F67, p0); } // 0x13337B38DB572509
	static BOOL _0xFC695459D4D0E219(float p0, float p1) { return invoke<BOOL>(0xAB3C5FCC37C7F637, p0, p1); } // 0xFC695459D4D0E219
	static BOOL _0x23F09EADC01449D6(Any p0) { return invoke<BOOL>(0x76EC6148B0460AE0, p0); } // 0x23F09EADC01449D6
	static Any _0x6CD79468A1E595C6(Any p0) { return invoke<Any>(0xFF9B577A7F80CFDD, p0); } // 0x6CD79468A1E595C6
	static char* _GET_CONTROL_ACTION_NAME(int index, int control, BOOL p2) { return invoke<char*>(0x62B1FF1B5EE703A7, index, control, p2); } // 0x0499D7B09FC9B407 0x3551727A
	static Any _0x80C2FD58D720C801(Any p0, Any p1, BOOL p2) { return invoke<Any>(0x611F82FE2F038F7C, p0, p1, p2); } // 0x80C2FD58D720C801 0x3EE71F6A
	static void _0x8290252FFF36ACB5(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3ADC24EF2B7C37BD, p0, p1, p2, p3); } // 0x8290252FFF36ACB5
	static void _0xCB0360EFEFB2580D(Any p0) { invoke<Void>(0x961B8688256397F8, p0); } // 0xCB0360EFEFB2580D
	static void SET_PAD_SHAKE(int p0, int duration, int frequency) { invoke<Void>(0x24816268735E001E, p0, duration, frequency); } // 0x48B3886C1358D0D5 0x5D38BD2F
	static void _0x14D29BB12D47F68C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xDE830455FD7B572D, p0, p1, p2, p3, p4); } // 0x14D29BB12D47F68C
	static void STOP_PAD_SHAKE(Any p0) { invoke<Void>(0xA156F67657A3D98B, p0); } // 0x38C16A305E8CDC8D 0x8F75657E
	static void _0xF239400E16C23E08(Any p0, Any p1) { invoke<Void>(0x02EC2FA817C3D7F8, p0, p1); } // 0xF239400E16C23E08 0x7D65EB6E
	static void _0xA0CEFCEA390AAB9B(Any p0) { invoke<Void>(0x7150EE02BA28F9B1, p0); } // 0xA0CEFCEA390AAB9B
	static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xE761C96558F7D51E); } // 0x77B612531280010D 0x313434B2
	static Any _0xE1615EC03B3BB4FD() { return invoke<Any>(0x1C49F15E8235C041); } // 0xE1615EC03B3BB4FD
	static Any GET_LOCAL_PLAYER_AIM_STATE() { return invoke<Any>(0x666918BF44D91346); } // 0xBB41AFBBBC0A0287 0x81802053
	static Any _0x59B9A7AF4C95133C() { return invoke<Any>(0x94340783DBA67B4E); } // 0x59B9A7AF4C95133C
	static Any _0x0F70731BACCFBB96() { return invoke<Any>(0x4270038682A5EB1C); } // 0x0F70731BACCFBB96
	static Any _0xFC859E2374407556() { return invoke<Any>(0x4A315CB706AE736B); } // 0xFC859E2374407556
	static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL p0) { invoke<Void>(0x934E5182792B6FE2, p0); } // 0x798FDEB5B1575088 0xA86BD91F
	static void SET_INPUT_EXCLUSIVE(int controlGroup, int control) { invoke<Void>(0xCEEF85C0FC6A898F, controlGroup, control); } // 0xEDE476E5EE29EDB1 0x4E8E29E6
	static void DISABLE_CONTROL_ACTION(int controlGroup, int control, BOOL disable) { invoke<Void>(0xABC36CFE4F3421A0, controlGroup, control, disable); } // 0xFE99B66D079CF6BC 0x3800C0DC
	static void ENABLE_CONTROL_ACTION(int controlGroup, int control, BOOL enable) { invoke<Void>(0xFF61FA1A24898079, controlGroup, control, enable); } // 0x351220255D64C155 0xD2753551
	static void DISABLE_ALL_CONTROL_ACTIONS(int controlGroup) { invoke<Void>(0xB5E011E673BCDF2D, controlGroup); } // 0x5F4B6931816E599B 0x16753CF4
	static void ENABLE_ALL_CONTROL_ACTIONS(int controlGroup) { invoke<Void>(0x8BF8336942CC18B9, controlGroup); } // 0xA5FFE9B05F199DE7 0xFC2F119F
	static BOOL _0x3D42B92563939375(char* p0) { return invoke<BOOL>(0x0B2A7A28BA9820E3, p0); } // 0x3D42B92563939375 0xD2C80B2E
	static BOOL _0x4683149ED1DDE7A1(char* p0) { return invoke<BOOL>(0xF747E9B6F2C3DE0F, p0); } // 0x4683149ED1DDE7A1 0xBBFC9050
	static void _0x643ED62D5EA3BEBD() { invoke<Void>(0xE3D68BC1DAA3679B); } // 0x643ED62D5EA3BEBD 0x42140FF9
	static void _0x7F4724035FDCA1DD(int index) { invoke<Void>(0xCA675B7DACB84571, index); } // 0x7F4724035FDCA1DD 0x2CEDE6C5
}

namespace DATAFILE
{
	static void _0xAD6875BBC0FC899C(Any p0) { invoke<Void>(0x2DC0DF5A362EF86B, p0); } // 0xAD6875BBC0FC899C 0x621388FF
	static void _0x6CC86E78358D5119() { invoke<Void>(0x8F366FF2BDD5F80D); } // 0x6CC86E78358D5119
	static BOOL _0xFCCAE5B92A830878(Any p0) { return invoke<BOOL>(0xCD0596AA59524368, p0); } // 0xFCCAE5B92A830878
	static BOOL _0x15FF52B809DB2353(Any p0) { return invoke<BOOL>(0xA01937EC1118BD06, p0); } // 0x15FF52B809DB2353
	static BOOL _0xF8CC1EBE0B62E29F(Any p0) { return invoke<BOOL>(0x78B67E4F22FA0C8A, p0); } // 0xF8CC1EBE0B62E29F
	static BOOL _0x22DA66936E0FFF37(Any p0) { return invoke<BOOL>(0x190D42D62F406949, p0); } // 0x22DA66936E0FFF37 0xB41064A4
	static BOOL _0x8F5EA1C01D65A100(Any p0) { return invoke<BOOL>(0x68A93B99DA27BA14, p0); } // 0x8F5EA1C01D65A100 0x9DB63CFF
	static BOOL _0xC84527E235FCA219(char* p0, BOOL p1, char* p2, Any* p3, Any* p4, char* type, BOOL p6) { return invoke<BOOL>(0xB9277C87B1CA11AF, p0, p1, p2, p3, p4, type, p6); } // 0xC84527E235FCA219 0xF09157B0
	static BOOL _0xA5EFC3E847D60507(char* p0, char* p1, char* p2, char* p3, BOOL p4) { return invoke<BOOL>(0x8132684724AD16DA, p0, p1, p2, p3, p4); } // 0xA5EFC3E847D60507 0xD96860FC
	static BOOL _0x648E7A5434AF7969(char* p0, Any* p1, BOOL p2, Any* p3, Any* p4, Any* p5, char* type) { return invoke<BOOL>(0x1F0B1353E19FE117, p0, p1, p2, p3, p4, p5, type); } // 0x648E7A5434AF7969 0x459F2683
	static BOOL _0x4645DE9980999E93(char* p0, char* p1, char* p2, char* p3, char* type) { return invoke<BOOL>(0xB0C276E930D00F8F, p0, p1, p2, p3, type); } // 0x4645DE9980999E93 0xDBB83E2B
	static BOOL _0x692D808C34A82143(char* p0, float p1, char* type) { return invoke<BOOL>(0x96A36AF9C091B433, p0, p1, type); } // 0x692D808C34A82143 0xBB6321BD
	static BOOL _0xA69AC4ADE82B57A4(int p0) { return invoke<BOOL>(0x56FC6A7D8D4BEE67, p0); } // 0xA69AC4ADE82B57A4 0xE8D56DA2
	static BOOL _0x9CB0BFA7A9342C3D(int p0, BOOL p1) { return invoke<BOOL>(0x35691E6BA48C66D6, p0, p1); } // 0x9CB0BFA7A9342C3D 0xCB6A351E
	static BOOL _0x52818819057F2B40(int p0) { return invoke<BOOL>(0xBADE376DB96EF51E, p0); } // 0x52818819057F2B40 0xA4D1B30E
	static BOOL _0x01095C95CD46B624(int p0) { return invoke<BOOL>(0x522247A74A5E24DB, p0); } // 0x01095C95CD46B624 0xB8515B2F
	static BOOL _LOAD_UGC_FILE(char* filename) { return invoke<BOOL>(0x40C8244ED0CAE8DE, filename); } // 0xC5238C011AF405E4 0x660C468E
	static void DATAFILE_CREATE() { invoke<Void>(0x8978B074DD72DF22); } // 0xD27058A1CA2B13EE 0x95F8A221
	static void DATAFILE_DELETE() { invoke<Void>(0x4177D875818DE411); } // 0x9AB9C1CFC8862DFB 0xDEF31B0A
	static void _0x2ED61456317B8178() { invoke<Void>(0x4A55F71335D5501D); } // 0x2ED61456317B8178 0x4E03F632
	static void _0xC55854C7D7274882() { invoke<Void>(0x1778C432CDD40B4D); } // 0xC55854C7D7274882 0xF11F956F
	static Any* _0x906B778CA1DC72B6() { return invoke<Any*>(0x3B1556D715F2C85D); } // 0x906B778CA1DC72B6 0x86DDF9C2
	static BOOL _0x83BCCE3224735F05(char* filename) { return invoke<BOOL>(0xDFA3841C394DAF43, filename); } // 0x83BCCE3224735F05 0x768CBB35
	static BOOL _0x4DFDD9EB705F8140(Any* p0) { return invoke<BOOL>(0x2CC33B0E4D45963F, p0); } // 0x4DFDD9EB705F8140 0x0B4087F7
	static BOOL _0xBEDB96A7584AA8CF() { return invoke<BOOL>(0x426131BF5A0B35D2); } // 0xBEDB96A7584AA8CF 0x5DCD0796
	static void _OBJECT_VALUE_ADD_BOOLEAN(Any* objectData, char* key, BOOL value) { invoke<Void>(0xB030165E9148731A, objectData, key, value); } // 0x35124302A556A325 0x9B29D99B
	static void _OBJECT_VALUE_ADD_INTEGER(Any* objectData, char* key, int value) { invoke<Void>(0x5ED1FE95F4FC6A18, objectData, key, value); } // 0xE7E035450A7948D5 0xEFCF554A
	static void _OBJECT_VALUE_ADD_FLOAT(Any* objectData, char* key, float value) { invoke<Void>(0x5A640113505AD813, objectData, key, value); } // 0xC27E1CC2D795105E 0xE972CACF
	static void _OBJECT_VALUE_ADD_STRING(Any* objectData, char* key, char* value) { invoke<Void>(0x09E9781DD1324A5F, objectData, key, value); } // 0x8FF3847DADD8E30C 0xD437615C
	static void _OBJECT_VALUE_ADD_VECTOR3(Any* objectData, char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0x7FFDE14CD081D2BE, objectData, key, valueX, valueY, valueZ); } // 0x4CD49B76338C7DEE 0x75FC6C3C
	static Any* _OBJECT_VALUE_ADD_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0x86F42A4E88A389E4, objectData, key); } // 0xA358F56F10732EE1 0x96A8E05F
	static Any* _OBJECT_VALUE_ADD_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0x36D94D4FC7B0A2CD, objectData, key); } // 0x5B11728527CA6E5F 0x03939B8D
	static BOOL _OBJECT_VALUE_GET_BOOLEAN(Any* objectData, char* key) { return invoke<BOOL>(0x891D0AEE12B2452B, objectData, key); } // 0x1186940ED72FFEEC 0x8876C872
	static int _OBJECT_VALUE_GET_INTEGER(Any* objectData, char* key) { return invoke<int>(0x9C70ABDC70E0A0CF, objectData, key); } // 0x78F06F6B1FB5A80C 0xA6C68693
	static float _OBJECT_VALUE_GET_FLOAT(Any* objectData, char* key) { return invoke<float>(0xCB33F3C96453C329, objectData, key); } // 0x06610343E73B9727 0xA92C1AF4
	static char* _OBJECT_VALUE_GET_STRING(Any* objectData, char* key) { return invoke<char*>(0x2A1C48CBD532E1D8, objectData, key); } // 0x3D2FD9E763B24472 0x942160EC
	static Vector3 _OBJECT_VALUE_GET_VECTOR3(Any* objectData, char* key) { return invoke<Vector3>(0x3D4621E99B9FFBE0, objectData, key); } // 0x46CD3CB66E0825CC 0xE84A127A
	static Any* _OBJECT_VALUE_GET_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0x458C2A004F0678D0, objectData, key); } // 0xB6B9DDC412FCEEE2 0xC9C13D8D
	static Any* _OBJECT_VALUE_GET_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0x94A922605867FB40, objectData, key); } // 0x7A983AA9DA2659ED 0x1F2F7D00
	static int _OBJECT_VALUE_GET_TYPE(Any* objectData, char* key) { return invoke<int>(0xD44C5C9A5AB591EF, objectData, key); } // 0x031C55ED33227371 0x2678342A
	static void _ARRAY_VALUE_ADD_BOOLEAN(Any* arrayData, BOOL value) { invoke<Void>(0xBD72483AD55E8447, arrayData, value); } // 0xF8B0F5A43E928C76 0x08174B90
	static void _ARRAY_VALUE_ADD_INTEGER(Any* arrayData, int value) { invoke<Void>(0x72B16E3D0298CCAE, arrayData, value); } // 0xCABDB751D86FE93B 0xF29C0B36
	static void _ARRAY_VALUE_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0x0162D33B1226B7CB, arrayData, value); } // 0x57A995FD75D37F56 0xE4302123
	static void _ARRAY_VALUE_ADD_STRING(Any* arrayData, char* value) { invoke<Void>(0xD95D5E783F1FA32C, arrayData, value); } // 0x2F0661C155AEEEAA 0xF3C01350
	static void _ARRAY_VALUE_ADD_VECTOR3(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0x84A134DE6493E4D2, arrayData, valueX, valueY, valueZ); } // 0x407F8D034F70F0C2 0x16F464B6
	static Any* _ARRAY_VALUE_ADD_OBJECT(Any* arrayData) { return invoke<Any*>(0x755B46537A33B69A, arrayData); } // 0x6889498B3E19C797 0xC174C71B
	static BOOL _ARRAY_VALUE_GET_BOOLEAN(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0xEEF837380BC73B2C, arrayData, arrayIndex); } // 0x50C1B2874E50C114 0xA2E5F921
	static int _ARRAY_VALUE_GET_INTEGER(Any* arrayData, int arrayIndex) { return invoke<int>(0x7A66412A2B47CF10, arrayData, arrayIndex); } // 0x3E5AE19425CD74BE 0xBB120CFC
	static float _ARRAY_VALUE_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xE00906876D6244A2, arrayData, arrayIndex); } // 0xC0C527B525D7CFB5 0x08AD2CC2
	static char* _ARRAY_VALUE_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<char*>(0xFC74DD7217B3E5DB, arrayData, arrayIndex); } // 0xD3F2FFEB8D836F52 0x93F985A6
	static Vector3 _ARRAY_VALUE_GET_VECTOR3(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0x219E9678C4D55F3E, arrayData, arrayIndex); } // 0x8D2064E5B64A628A 0x80E3DA55
	static Any* _ARRAY_VALUE_GET_OBJECT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0xAFD3CCDC2E7D3A37, arrayData, arrayIndex); } // 0x8B5FADCC4E3A145F 0xECE81278
	static int _ARRAY_VALUE_GET_SIZE(Any* arrayData) { return invoke<int>(0x697D8F5133F938AB, arrayData); } // 0x065DB281590CEA2D 0xA8A21766
	static int _ARRAY_VALUE_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0x5F76836A544DA961, arrayData, arrayIndex); } // 0x3A0014ADB172A3C5 0xFA2402C8
}

namespace FIRE
{
	static Any START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<Any>(0xB4EBDCD0E8036141, X, Y, Z, maxChildren, isGasFire); } // 0x6B83617E04503888 0xE7529357
	static void REMOVE_SCRIPT_FIRE(Any scriptHandle) { invoke<Void>(0x6BF3187D0559FD26, scriptHandle); } // 0x7FF548385680673F 0x6B21FE26
	static Any START_ENTITY_FIRE(Entity entity) { return invoke<Any>(0xD84ACB0F384B8C2F, entity); } // 0xF6A9D9708F6F23DF 0x8928428E
	static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0x95A08EFA6E1CA482, entity); } // 0x7F0DD2EBBB651AFF 0xCE8C9066
	static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0x601CCD1205C6523F, entity); } // 0x28D3FED7190D3A0B 0x8C73E64F
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0xB4FB8C52530E7D65, x, y, z, radius); } // 0x50CAD495A460B305 0x654D93B7
	static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0xBD04C1F04667E915, x, y, z, radius); } // 0x056A8A219B8E829F 0x725C7205
	static BOOL GET_CLOSEST_FIRE_POS(Entity* fire, float x, float y, float z) { return invoke<BOOL>(0xDE1CD91CF223460D, fire, x, y, z); } // 0x352A9F6BCF90081F 0xC4977B47
	static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x7AA0DACDC0A1EDA3, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0xE3AD2BDBAEE269AC 0x10AF5258
	static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xE6B8F9D702AE80A3, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x172AA1B624FA1013 0x27EE0D67
	static void _ADD_SPECFX_EXPLOSION(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x4B899659281BA5E1, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); } // 0x36DD3FE58B5E5212 0xCF358946
	static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x5C34581AE9065414, explosionType, x1, y1, z1, x2, y2, z2); } // 0x2E2EBA0EE7CED0E0 0xFB40075B
	static Any _0x6070104B699B2EF4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x70812638F6F5ACFE, p0, p1, p2, p3, p4, p5, p6); } // 0x6070104B699B2EF4
	static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xA0BE515094F295FB, explosionType, x, y, z, radius); } // 0xAB0F816885B0E483 0xD455A7F3
	static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) { return invoke<BOOL>(0x4E0DC3559352AE96, explosionType, x1, y1, z1, x2, y2, z2, angle); } // 0xA079A6C51525DC4B 0x0128FED9
	static Entity _GET_PED_INSIDE_EXPLOSION_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0xC4953DC5209D40EB, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0x14BA4BA137AF6CEC 0xAEC0D176
}

namespace DECISIONEVENT
{
	static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0x4CB2D5888F9AA8B8, ped, name); } // 0xB604A2942ADED0EE 0x19CEAC9E
	static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int type) { invoke<Void>(0x18C6F117DBBBEBBC, name, type); } // 0x4FC9381A7AEE8968 0x07ABD94D
	static void BLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0x02B10B2504BA55B8, name, type); } // 0xE42FCDFD0E4196F7 0x57506EA6
	static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0xF9A6A84677FEA2DC, name, type); } // 0xD7CD9CF34F2C99E8 0x62A3161D
	static ScrHandle ADD_SHOCKING_EVENT_AT_POSITION(int type, float x, float y, float z, float duration) { return invoke<ScrHandle>(0x40613A37889C363B, type, x, y, z, duration); } // 0xD9F8455409B525E9 0x0B30F779
	static ScrHandle ADD_SHOCKING_EVENT_FOR_ENTITY(int type, Entity entity, float duration) { return invoke<ScrHandle>(0x52449354AD7E8846, type, entity, duration); } // 0x7FD8F3BE76F89422 0xA81B5B71
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int type, float x, float y, float z, float radius) { return invoke<BOOL>(0x310855B068690064, type, x, y, z, radius); } // 0x1374ABB7C15BAB92 0x2F98823E
	static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0xBD619CF588AECEF1, event); } // 0x2CDA538C44C6CCE5 0xF82D5A87
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0x2D67E398C79AF621, p0); } // 0xEAABE8FDFA21274C 0x64DF6282
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xC54BCF28E59B8051); } // 0x340F1415B68AEADE 0xA0CE89C8
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0x7E4B20CEA698E6CA); } // 0x2F9A292AD0A3BD89 0x4CC674B5
	static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int type) { invoke<Void>(0x0A7650008E8E1D4F, type); } // 0x3FD2EC8BF1F1CF30 0xA0FDCB82
	static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0xADBC03D643D4F581); } // 0x5F3B7749C112D552 0x80340396
}

namespace ZONE
{
	static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0xE55F0E14909E44BE, x, y, z); } // 0x27040C25DE6CB2F4 0xC9018181
	static int GET_ZONE_FROM_NAME_ID(char* zoneName) { return invoke<int>(0xC8F46E20F25E68E1, zoneName); } // 0x98CD1D2934B76CC1 0x8EC68304
	static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0xEE8A58F70BABCB5D, zoneId); } // 0x4334BC40AA0CB4BB 0x20AB2FC9
	static char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<char*>(0x2AA75709EA32A2D9, x, y, z); } // 0xCD90657D4C30E1CA 0x7875CE91
	static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0x96ED558C5025B7D6, zoneId, toggle); } // 0xBA5ECEEA120E5611 0x04E21B03
	static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0x9F961771EC57E301, zoneId); } // 0x5F7B268D15BA0739 0xB2FB5C4C
	static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0x562608AFDB74F461, scheduleId, vehicleHash); } // 0x5F7D596BAC2E7777 0x3F0A3680
	static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0x3D946277325EE898, scheduleId); } // 0x5C0DE367AA0D911C 0x7A72A24E
	static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0x5B1A5C6975097B83, x, y, z); } // 0x7EE64D51E8498728 0xB5C5C99B
}

namespace ROPE
{
	static Object ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<Object>(0x89EBDF3D1E292255, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr); } // 0xE832D760399EB220 0xA592EC74
	static void DELETE_ROPE(Object* rope) { invoke<Void>(0x609BC95637027209, rope); } // 0x52B4829281364649 0x748D72AF
	static void DELETE_CHILD_ROPE(Object rope) { invoke<Void>(0x2E8A949F97D967CF, rope); } // 0xAA5D6B1888E4DB20 0xB19B4706
	static BOOL DOES_ROPE_EXIST(Object* rope) { return invoke<BOOL>(0xEE859D3B428E4630, rope); } // 0xFD5448BE3111ED96 0x66E4A3AC
	static void ROPE_DRAW_SHADOW_ENABLED(Object* rope, BOOL toggle) { invoke<Void>(0xF090C8FF02C57183, rope, toggle); } // 0xF159A63806BB5BA8 0x51523B8C
	static void LOAD_ROPE_DATA(Object rope, char* rope_preset) { invoke<Void>(0x88436D11135C9374, rope, rope_preset); } // 0xCBB203C04D1ABD27 0x9E8F1644
	static void PIN_ROPE_VERTEX(Object rope, int vertex, float x, float y, float z) { invoke<Void>(0x5E2C0A9DEF4538AA, rope, vertex, x, y, z); } // 0x2B320CF14146B69A 0xAE1D101B
	static void UNPIN_ROPE_VERTEX(Object rope, int vertex) { invoke<Void>(0x522BE59DEF6ED332, rope, vertex); } // 0x4B5AE2EEE4A8F180 0xB30B552F
	static int GET_ROPE_VERTEX_COUNT(Object rope) { return invoke<int>(0xBDA5987B7E40F57C, rope); } // 0x3655F544CD30F0B5 0x5131CD2C
	static void ATTACH_ENTITIES_TO_ROPE(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0x864A95041C3DD2CB, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); } // 0x3D95EC8B6D940AC3 0x7508668F
	static void ATTACH_ROPE_TO_ENTITY(Any rope, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xC3761E888B2952EA, rope, entity, x, y, z, p5); } // 0x4B490A6832559A65 0xB25D9536
	static void DETACH_ROPE_FROM_ENTITY(Any rope, Entity entity) { invoke<Void>(0x2A43F334C2134EFE, rope, entity); } // 0xBCF3026912A8647D 0x3E720BEE
	static void ROPE_SET_UPDATE_PINVERTS(Object rope) { invoke<Void>(0x1616A3D4E0A5AA22, rope); } // 0xC8D667EE52114ABA 0xEAF291A0
	static void _0xDC57A637A20006ED(Any p0, Any p1) { invoke<Void>(0x34D1CE28DC1474F8, p0, p1); } // 0xDC57A637A20006ED 0x80DB77A7
	static void _0x36CCB9BE67B970FD(Any p0, BOOL p1) { invoke<Void>(0x36982FB3D351C46F, p0, p1); } // 0x36CCB9BE67B970FD 0xC67D5CF6
	static BOOL _0x84DE3B5FB3E666F0(Any* p0) { return invoke<BOOL>(0x03DBFD73532A3729, p0); } // 0x84DE3B5FB3E666F0 0x7A18BB9C
	static Vector3 GET_ROPE_LAST_VERTEX_COORD(Object rope) { return invoke<Vector3>(0x43533A5EC6ECB54D, rope); } // 0x21BB0FBD3E217C2D 0x91F6848B
	static Vector3 GET_ROPE_VERTEX_COORD(Object rope, int vertex) { return invoke<Vector3>(0xFA9CFE395964DDFE, rope, vertex); } // 0xEA61CA8E80F09E4D 0x84374452
	static void START_ROPE_WINDING(Object rope) { invoke<Void>(0x9FA4EB83430313FF, rope); } // 0x1461C72C889E343E 0x5187BED3
	static void STOP_ROPE_WINDING(Object rope) { invoke<Void>(0x1B1D9E83B8CAD934, rope); } // 0xCB2D4AB84A19AA7C 0x46826B53
	static void START_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0x2A825C055137E2BA, rope); } // 0x538D1179EC1AA9A9 0xFC0DB4C3
	static void STOP_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0xABDF3D097D6C1D52, rope); } // 0xFFF3A50779EFBBB3 0x2EEDB18F
	static void ROPE_CONVERT_TO_SIMPLE(Object rope) { invoke<Void>(0x52E0B60436500C99, rope); } // 0x5389D48EFA2F079A 0x43E92628
	static void ROPE_LOAD_TEXTURES() { invoke<Void>(0xDC88F66E1F54EC67); } // 0x9B9039DBF2D258C1 0xBA97CE91
	static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xA44B301C4A44A477); } // 0xF2D0E6A75CC05597 0x5FDC1047
	static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0x3B866E565687AB58); } // 0x6CE36C35C1AC8163 0x584463E0
	static BOOL _0x271C9D3ACA5D6409(Object rope) { return invoke<BOOL>(0x28B7F8C2AEC5275F, rope); } // 0x271C9D3ACA5D6409
	static void _0xBC0CE682D4D05650(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0x8C4A48768DD60B7B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xBC0CE682D4D05650 0x106BA127
	static void _0xB1B6216CA2E7B55E(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB9C2F4076417177D, p0, p1, p2); } // 0xB1B6216CA2E7B55E 0x7C6F7668
	static void _0xB743F735C03D7810(Any p0, Any p1) { invoke<Void>(0x41FEFA255C416686, p0, p1); } // 0xB743F735C03D7810 0x686672DD
	static float _GET_ROPE_LENGTH(Object rope) { return invoke<float>(0xD34E06AA416093D8, rope); } // 0x73040398DFF9A4A6 0xFD309DC8
	static void ROPE_FORCE_LENGTH(Object rope, float length) { invoke<Void>(0x5D3C0521507A7E8A, rope, length); } // 0xD009F759A723DB1B 0xABF3130F
	static void ROPE_RESET_LENGTH(Object rope, BOOL length) { invoke<Void>(0x1782A2CEA7295298, rope, length); } // 0xC16DE94D9BEA14A0 0xC8A423A3
	static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0x588342EB886E74FD, posX, posY, posZ, vecX, vecY, vecZ, impulse); } // 0xE37F721824571784 0xA2A5C9FE
	static void SET_DAMPING(Object rope, int vertex, float value) { invoke<Void>(0x83FD72246E466B48, rope, vertex, value); } // 0xEEA3B200A6FEB65B 0xCFB37773
	static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0x64EB89F75844C12B, entity); } // 0x710311ADF0E20730 0x031711B8
	static void SET_CGOFFSET(Object rope, float x, float y, float z) { invoke<Void>(0x6E614E1157B35316, rope, x, y, z); } // 0xD8FA3908D7B86904 0x59910AB2
	static Vector3 GET_CGOFFSET(Object rope) { return invoke<Vector3>(0x65B00BBDB78A2603, rope); } // 0x8214A4B5A7A33612 0x49A11F0D
	static void SET_CG_AT_BOUNDCENTER(Object rope) { invoke<Void>(0x146556B2DCE8181B, rope); } // 0xBE520D9761FF811F 0xA5B55421
	static void BREAK_ENTITY_GLASS(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xB53038A7D9A093DA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x2E648D16F6E308F3 0xD0E0402F
	static void SET_DISABLE_BREAKING(Object rope, BOOL enabled) { invoke<Void>(0x945D4C63494ACAAE, rope, enabled); } // 0x5CEC1A84620E7D5B 0xEE77C326
	static void _0xCC6E963682533882(Any p0) { invoke<Void>(0x44050C13083BB658, p0); } // 0xCC6E963682533882
	static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0x3F06FE72F9722D79, object, toggle); } // 0x01BA3AED21C16CFB 0x97269DC8
}

namespace WATER
{
	static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0xF84812377ED44E5C, x, y, z, height); } // 0xF6829842C06AE524 0xD864E17C
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0xFB780B414ADB072F, x, y, z, height); } // 0x8EE6B53CE13A9794 0x262017F8
	static BOOL TEST_PROBE_AGAINST_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0x5A1306DD38D99DFB, p0, p1, p2, p3, p4, p5, p6); } // 0xFFA5D878809819DB 0xAA4AE00C
	static BOOL TEST_PROBE_AGAINST_ALL_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0xEF67494E18AD7C41, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8974647ED222EA5F 0x4A962D55
	static BOOL TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, Any p3, Any* p4) { return invoke<BOOL>(0x18AD39BB4873B00F, x, y, z, p3, p4); } // 0x2B3451FA1E3142E2 0x4C71D143
	static void MODIFY_WATER(float x, float y, float z, float height) { invoke<Void>(0x63A4914947FCB4B5, x, y, z, height); } // 0xC443FD757C3BA637 0xC49E005A
	static Any _0xFDBF4CDBC07E1706(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x5B693DEC96482018, p0, p1, p2, p3, p4); } // 0xFDBF4CDBC07E1706
	static void _0xB1252E3E59A82AAF(Any p0) { invoke<Void>(0xBED1B6A88D555B19, p0); } // 0xB1252E3E59A82AAF
	static void _0xB96B00E976BE977F(float p0) { invoke<Void>(0x0F55D8AB8E367A4B, p0); } // 0xB96B00E976BE977F
	static Any _0x2B2A2CC86778B619() { return invoke<Any>(0xC23A3A0420397C83); } // 0x2B2A2CC86778B619
	static void _0x5E5E99285AE812DB() { invoke<Void>(0x9D24A3A43AD44BC0); } // 0x5E5E99285AE812DB
}

namespace WORLDPROBE
{
	static int _0x7EE9F5D83DD4F90E(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x985511F0122BF34F, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x7EE9F5D83DD4F90E 0xEFAF4BA6
	static int _CAST_RAY_POINT_TO_POINT(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x08C67619D2B30F94, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x377906D8A31E5586 0x8251485D
	static Any _0x052837721A854EC7(Entity entity, int flags1, int flags2) { return invoke<Any>(0x7565EC90A34BEB4B, entity, flags1, flags2); } // 0x052837721A854EC7 0xCEEAD94B
	static Any _0xFE466162C4401D18(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x7FDA360F3B306CFA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xFE466162C4401D18 0x249BC876
	static Any _0x37181417CE7C8900(Entity entity, int flags1, int flags2) { return invoke<Any>(0xC21ED405E54ADAEE, entity, flags1, flags2); } // 0x37181417CE7C8900 0x13BC46C0
	static Any _CAST_3D_RAY_POINT_TO_POINT(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p8) { return invoke<Any>(0x3EE7B8C43D1211D3, x1, y1, z1, x2, y2, z2, radius, flags, entity, p8); } // 0x28579D1B8F8AAC80 0x591EA833
	static Any _0xE6AC6C45FBE83004(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x02174C444AE50381, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xE6AC6C45FBE83004 0x4559460A
	static Any _0xFF6BE494C7987F34(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x70451BBC1F684AA0, p0, p1, p2, p3, p4); } // 0xFF6BE494C7987F34
	static int _GET_RAYCAST_RESULT(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0x41C19A4A352B09E1, rayHandle, hit, endCoords, surfaceNormal, entityHit); } // 0x3D87450E15D98694 0xF3C2875A
	static int _GET_RAYCAST_RESULT_2(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* _materialHash, Entity* entityHit) { return invoke<int>(0xAB914368D5D23868, rayHandle, hit, endCoords, surfaceNormal, _materialHash, entityHit); } // 0x65287525D951F6BE 0x4301E10C
	static void _0x2B3334BCA57CD799(Entity p0) { invoke<Void>(0xC8BA54A8C6A48E7D, p0); } // 0x2B3334BCA57CD799 0xEC2AAF06
}

namespace NETWORK
{
	static Any NETWORK_IS_SIGNED_IN() { return invoke<Any>(0x446ED6C2B9B18A21); } // 0x054354A99211EB96 0xADD0B40F
	static Any NETWORK_IS_SIGNED_ONLINE() { return invoke<Any>(0x98C339BD475B043D); } // 0x1077788E268557C2 0x6E5BDCE2
	static Any _0xBD545D44CCE70597() { return invoke<Any>(0x192C1BF4B73AF080); } // 0xBD545D44CCE70597
	static Any _0xEBCAB9E5048434F4() { return invoke<Any>(0xE28266285781A2B5); } // 0xEBCAB9E5048434F4
	static Any _0x74FB3E29E6D10FA9() { return invoke<Any>(0x3DF89FB02EB88C29); } // 0x74FB3E29E6D10FA9
	static Any _0x7808619F31FF22DB() { return invoke<Any>(0x4E96E82032045503); } // 0x7808619F31FF22DB
	static Any _0xA0FA4EC6A05DA44E() { return invoke<Any>(0xEA20FC8F8CBA0BA1); } // 0xA0FA4EC6A05DA44E
	static Any _0x85443FF4C328F53B() { return invoke<Any>(0x941A660B39C95F30); } // 0x85443FF4C328F53B 0x3FB40673
	static Any _0x8D11E61A4ABF49CC() { return invoke<Any>(0xAE42983BFF78C61E); } // 0x8D11E61A4ABF49CC
	static Any NETWORK_IS_CLOUD_AVAILABLE() { return invoke<Any>(0x187CC7D5F9B002AA); } // 0x9A4CF4F48AD77302 0xC7FF5AFC
	static Any _0x67A5589628E0CFF6() { return invoke<Any>(0x1EC72E271ABEC1BA); } // 0x67A5589628E0CFF6 0x66EC713F
	static Any _0xBA9775570DB788CF() { return invoke<Any>(0x83F6D50D8765937E); } // 0xBA9775570DB788CF 0x358D1D77
	static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0x316E927686ECB233); } // 0x8DB296B814EDDA07 0xE46AC10F
	static Any _0xA306F470D1660581() { return invoke<Any>(0xA22D46492C1A3CF0); } // 0xA306F470D1660581
	static Any _0x4237E822315D8BA9() { return invoke<Any>(0xF0F8BA54ABDB1069); } // 0x4237E822315D8BA9
	static Any NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<Any>(0xF6AED1327F669066); } // 0x25CB5A9F37BFD063 0xEF63BFDF
	static Any _0x1353F87E89946207() { return invoke<Any>(0xA7F2473F08003D66); } // 0x1353F87E89946207
	static BOOL _0x72D918C99BCACC54(Any p0) { return invoke<BOOL>(0xED4DB0F2EFE02B37, p0); } // 0x72D918C99BCACC54 0x1F88819D
	static BOOL _0xAEEF48CDF5B6CE7C(Any p0, Any p1) { return invoke<BOOL>(0xBDDCB194366C769C, p0, p1); } // 0xAEEF48CDF5B6CE7C 0x2D817A5E
	static BOOL _0x78321BEA235FD8CD(Any p0, BOOL p1) { return invoke<BOOL>(0x2E792807B34E1D52, p0, p1); } // 0x78321BEA235FD8CD
	static BOOL _0x595F028698072DD9(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0x9584C2F535471638, p0, p1, p2); } // 0x595F028698072DD9 0xBB54AA3D
	static BOOL _0x83F28CE49FBBFFBA(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0x3B476FDEAF993346, p0, p1, p2); } // 0x83F28CE49FBBFFBA
	static Any _0x76BF03FADBF154F5() { return invoke<Any>(0xEAD46FA5CC88AD11); } // 0x76BF03FADBF154F5
	static Any _0x9614B71F8ADB982B() { return invoke<Any>(0x60254F8D86D3ADE9); } // 0x9614B71F8ADB982B
	static Any _0x5EA784D197556507() { return invoke<Any>(0xCDD6C6BBCCA8F4ED); } // 0x5EA784D197556507
	static Any _0xA8ACB6459542A8C8() { return invoke<Any>(0x6C8E92D4F56B150E); } // 0xA8ACB6459542A8C8
	static void _0x83FE8D7229593017() { invoke<Void>(0x1BBF7B8EB18A9F26); } // 0x83FE8D7229593017
	static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xC686439AFE82CCD6); } // 0x580CE4438479CC61 0x60E1FEDF
	static void NETWORK_BAIL() { invoke<Void>(0x080164CD93936B92); } // 0x95914459A87EBA28 0x87D79A04
	static void _0x283B6062A2C01E9B() { invoke<Void>(0xF18A03129E48FA64); } // 0x283B6062A2C01E9B 0x96E28FE2
	static BOOL _GET_MP_LOADING_STATE(int* loadingState) { return invoke<BOOL>(0xEFADBAC0FE5E8232, loadingState); } // 0xAF50DA1A3F8B1BA4 0xA520B982
	static Any _0x9747292807126EDA() { return invoke<Any>(0x6B9CDD36A1CE3A67); } // 0x9747292807126EDA 0x05518C0F
	static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0x9A9D03782F714F8B); } // 0x7E782A910C362C25 0x4A23B9C9
	static Any NETWORK_SESSION_ENTER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x36A44054443B4D06, p0, p1, p2, p3, p4, p5); } // 0x330ED4D05491934F 0x543CD2BE
	static BOOL _0x2CFC76E0D087C994(int p0, int p1, int max_Players, BOOL p3) { return invoke<BOOL>(0xF276F5A4C2AE92CA, p0, p1, max_Players, p3); } // 0x2CFC76E0D087C994 0x4E53202A
	static BOOL _0x94BC51E9449D917F(int p0, int p1, int p2, int max_Players, BOOL p4) { return invoke<BOOL>(0xF7DB05A0F8983C21, p0, p1, p2, max_Players, p4); } // 0x94BC51E9449D917F 0xD7624E6B
	static BOOL _0xBE3E347A87ACEB82(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x36B4DFA87ABF47B5, p0, p1, p2, p3); } // 0xBE3E347A87ACEB82 0x3F75CC38
	static BOOL NETWORK_SESSION_HOST(int p0, int max_Players, BOOL p2) { return invoke<BOOL>(0x55261C136083BCFB, p0, max_Players, p2); } // 0x6F3D4ED9BEE4E61D 0x6716460F
	static BOOL _0xED34C0C02C098BB7(int p0, int max_Players) { return invoke<BOOL>(0xAF8D6AFE0CE4C7EC, p0, max_Players); } // 0xED34C0C02C098BB7 0x8AC9EA19
	static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int max_Players) { return invoke<BOOL>(0xCA3EE3B1CB3C6B33, p0, max_Players); } // 0xB9CFD27A5D578D83 0x26864403
	static BOOL _0xFBCFA2EA2E206890() { return invoke<BOOL>(0x01F6BD16E5956BB1); } // 0xFBCFA2EA2E206890 0x56E75FE4
	static BOOL _0x74732C6CA90DA2B4() { return invoke<BOOL>(0x779C4262BB31C063); } // 0x74732C6CA90DA2B4 0xA95299B9
	static BOOL _0xF3929C2379B60CCE() { return invoke<BOOL>(0x364521DB2DFEAA2D); } // 0xF3929C2379B60CCE 0x3D2C1916
	static BOOL _0xCEF70AA5B3F89BA1() { return invoke<BOOL>(0x4E1E7050584F0E5B); } // 0xCEF70AA5B3F89BA1 0xDB67785D
	static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return invoke<BOOL>(0xB95C3EDFD89D6C77, p0, p1); } // 0xA02E59562D711006 0xBCACBEA2
	static void NETWORK_SESSION_KICK_PLAYER(_Player player) { invoke<Void>(0xF800E3193899B900, player); } // 0xFA8904DC5F304220 0x1E20138A
	static BOOL _NETWORK_SESSION_ARE_PLAYERS_VOTING_TO_KICK(_Player player) { return invoke<BOOL>(0x20EDCBB3C585FE31, player); } // 0xD6D09A6F32F49EF1 0x8A559D26
	static Any _0x59DF79317F85A7E0() { return invoke<Any>(0xDA2B7D713F984C7C); } // 0x59DF79317F85A7E0
	static Any _0xFFE1E5B792D92B34() { return invoke<Any>(0x0B1B26EEE66374D5); } // 0xFFE1E5B792D92B34
	static void _0x49EC8030F5015F8B(Any p0) { invoke<Void>(0xF9F66822147CA161, p0); } // 0x49EC8030F5015F8B 0x3C3E2AB6
	static void _0x8B6A4DD0AF9CE215(Any p0, Any p1) { invoke<Void>(0xF390B55C7BC55CDE, p0, p1); } // 0x8B6A4DD0AF9CE215 0x5F29A7E0
	static Any _0x56CE820830EF040B(Any p0) { return invoke<Any>(0xB68C1DD6840B3BED, p0); } // 0x56CE820830EF040B 0x36EAD960
	static void _0xCAE55F48D3D7875C(Any p0) { invoke<Void>(0x6F996C3657EAD438, p0); } // 0xCAE55F48D3D7875C 0x5BE529F7
	static void _0xF49ABC20D8552257(Any p0) { invoke<Void>(0x096C0D2CA3368DCE, p0); } // 0xF49ABC20D8552257 0x454C7B67
	static void _0x4811BBAC21C5FCD5(Any p0) { invoke<Void>(0x716943452443538B, p0); } // 0x4811BBAC21C5FCD5 0xE5961511
	static void _0x5539C3EBF104A53A(BOOL p0) { invoke<Void>(0xA547C51C569A6F12, p0); } // 0x5539C3EBF104A53A 0xAE396263
	static void _0x702BC4D605522539(Any p0) { invoke<Void>(0x81A30BC4DE46EBCE, p0); } // 0x702BC4D605522539 0x913FD7D6
	static void _0x3F52E880AAF6C8CA(BOOL p0) { invoke<Void>(0xC76BB12874FB5021, p0); } // 0x3F52E880AAF6C8CA 0xB3D9A67F
	static void _0xF1EEA2DDA9FFA69D(Any p0) { invoke<Void>(0xD739F99721A84B20, p0); } // 0xF1EEA2DDA9FFA69D 0x6CC062FC
	static void _0x1153FA02A659051C() { invoke<Void>(0xA11D52F4270D177C); } // 0x1153FA02A659051C 0x57F9BC83
	static void _0xC19F6C8E7865A6FF(BOOL p0) { invoke<Void>(0x291AD1278EDC22FB, p0); } // 0xC19F6C8E7865A6FF 0xF3768F90
	static void _0x236406F60CF216D6(Any* p0, Any p1) { invoke<Void>(0xF371479FB292CC14, p0, p1); } // 0x236406F60CF216D6 0x0EC62629
	static void _0x058F43EC59A8631A() { invoke<Void>(0x20A73BEAA86D074B); } // 0x058F43EC59A8631A 0x5E557307
	static void _0x6D03BFBD643B2A02(Any* p0, Any* p1, Any* p2) { invoke<Void>(0xC3F08F4C3929B976, p0, p1, p2); } // 0x6D03BFBD643B2A02 0x74E8C53E
	static void _0x600F8CB31C7AAB6E(Any p0) { invoke<Void>(0x455F1CCA1BDCCBDA, p0); } // 0x600F8CB31C7AAB6E 0x959E43A3
	static BOOL _0xE532D6811B3A4D2A(Any p0) { return invoke<BOOL>(0x22E6551C49B44248, p0); } // 0xE532D6811B3A4D2A 0x7771AB83
	static BOOL _0xF7B2CFDE5C9F700D(Any p0, float p1, float p2, float p3) { return invoke<BOOL>(0x899C435444094A3B, p0, p1, p2, p3); } // 0xF7B2CFDE5C9F700D 0xA13045D4
	static Any NETWORK_IS_FINDING_GAMERS() { return invoke<Any>(0x6C3624EF86EB3CCB); } // 0xDDDF64C91BFCF0AA 0xA6DAA79F
	static Any _0xF9B83B77929D8863() { return invoke<Any>(0x1F02DEFDA062A0AD); } // 0xF9B83B77929D8863 0xBEDC4503
	static Any NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<Any>(0xA0130B1444BAD1F4); } // 0xA1B043EE79A916FB 0xF4B80C7E
	static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0xF12A7F24C2564D0D, p0, p1); } // 0x9DCFF2AFB68B3476 0xA08C9141
	static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0x33AB4D999B9CF737); } // 0x6D14CCEE1B40381A 0x6AA9A154
	static BOOL _0x85A0EF54A500882C(Any* p0) { return invoke<BOOL>(0x09671AD0FBDE0C07, p0); } // 0x85A0EF54A500882C 0x42BD0780
	static Any _0x2CC848A861D01493() { return invoke<Any>(0xE04CCD78C4390DC7); } // 0x2CC848A861D01493 0xBEB98840
	static Any _0x94A8394D150B013A() { return invoke<Any>(0x426A906C567F1A46); } // 0x94A8394D150B013A 0x08029970
	static Any _0x5AE17C6B0134B7F1() { return invoke<Any>(0xEB788FE2C5F16D76); } // 0x5AE17C6B0134B7F1 0xC871E745
	static BOOL _0x02A8BEC6FD9AF660(Any* p0, Any p1) { return invoke<BOOL>(0x32D900C2262BB97F, p0, p1); } // 0x02A8BEC6FD9AF660 0xB5ABC4B4
	static void _0x86E0660E4F5C956D() { invoke<Void>(0x4D91E8C41AB857F2); } // 0x86E0660E4F5C956D 0x3F7EDBBD
	static void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { invoke<Void>(0xAD3D0D89F668B061); } // 0xC6F8AB8A4189CF3A 0x3D6360B5
	static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0x0BC88B0894F3E4F0); } // 0x2FBF47B1B36D36F9 0x20317535
	static void _0xA29177F7703B5644() { invoke<Void>(0x26975E50DAD93E7A); } // 0xA29177F7703B5644 0x3FD49D3B
	static Any NETWORK_HAS_PENDING_INVITE() { return invoke<Any>(0x230ACB3747B573C0); } // 0xAC8C7B9B88C4A668 0x0C207D6E
	static Any _0xC42DD763159F3461() { return invoke<Any>(0x31A184832780656B); } // 0xC42DD763159F3461 0xFBBAC350
	static Any _0x62A0296C1BB1CEB3() { return invoke<Any>(0x4DFC77E991FD0B81); } // 0x62A0296C1BB1CEB3 0x0907A6BF
	static Any _0x23DFB504655D0CE4() { return invoke<Any>(0x9938B063CF91B5CE); } // 0x23DFB504655D0CE4 0x6A0BEA60
	static void NETWORK_SESSION_GET_INVITER(Any* p0) { invoke<Void>(0xC8E35FEE8FD69A72, p0); } // 0xE57397B4A3429DD0 0xE9C6B3FD
	static Any _0xD313DE83394AF134() { return invoke<Any>(0xDAC4B741EC5EA4CF); } // 0xD313DE83394AF134 0x3EA9D44C
	static Any _0xBDB6F89C729CF388() { return invoke<Any>(0xDA4F1E3AEFF22453); } // 0xBDB6F89C729CF388
	static void NETWORK_SUPPRESS_INVITE(BOOL p0) { invoke<Void>(0x9A4CE35B7104F49E, p0); } // 0xA0682D67EF1FBA3D 0x323DC78C
	static void NETWORK_BLOCK_INVITES(BOOL p0) { invoke<Void>(0xA7BD7D3302D3F76C, p0); } // 0x34F9E9049454A7A0 0xD156FD1A
	static void _0xCFEB8AF24FC1D0BB(BOOL p0) { invoke<Void>(0x87123A15A60B7969, p0); } // 0xCFEB8AF24FC1D0BB
	static void _0xF814FEC6A19FD6E0() { invoke<Void>(0x0A06A9D2C2B39D82); } // 0xF814FEC6A19FD6E0 0x32B7A076
	static void _0x6B07B9CE4D390375(BOOL p0) { invoke<Void>(0x7CA68287834F9854, p0); } // 0x6B07B9CE4D390375 0x0FCE995D
	static void _0x7AC752103856FB20(BOOL p0) { invoke<Void>(0x8F1B594991B56630, p0); } // 0x7AC752103856FB20 0xA639DCA2
	static Any _0x74698374C45701D2() { return invoke<Any>(0x6A9AC7B7158D615E); } // 0x74698374C45701D2 0x70ED476A
	static void _0x140E6A44870A11CE() { invoke<Void>(0x36A2F8602C0C7DAE); } // 0x140E6A44870A11CE 0x50507BED
	static void NETWORK_SESSION_HOST_SINGLE_PLAYER(Any p0) { invoke<Void>(0x0C3B086541F06DF3, p0); } // 0xC74C33FCA52856D5 0xF3B1CA85
	static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0xB2B906F80DAF89CB); } // 0x3442775428FD2DAA 0xC692F86A
	static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0xA86CA03D9749EEB3); } // 0x10FAB35428CCC9D7 0x09B88E3E
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0x5ACFA11968631D90); } // 0xD83C2B94E7508980 0x715CB8C4
	static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xBB81832DD12D2E73); } // 0xCA97246103B63917 0x4BC4105E
	static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0x980952E2737F7CFA); } // 0x9DE624D2FC4B603F 0x9D854A37
	static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0xC9B48C1DDE5B7519); } // 0xF4435D66A8E2905E 0x8592152D
	static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0xC9065D2F2F0DB7CD); } // 0x4EEBC3694E49C572 0xE1FCCDBA
	static void _0x271CC6AB59EBF9A5(BOOL p0) { invoke<Void>(0x508925F4073448B7, p0); } // 0x271CC6AB59EBF9A5 0x7017257D
	static Any _0xBA416D68C631496A() { return invoke<Any>(0x870F52E0D5D0DC46); } // 0xBA416D68C631496A 0x4977AC28
	static void _0xA73667484D7037C3(BOOL p0) { invoke<Void>(0xB74536F6D4EBC285, p0); } // 0xA73667484D7037C3 0xE6EEF8AF
	static void _0xB4AB419E0D86ACAE(Any p0, Any p1) { invoke<Void>(0xAF6FC68810E2ABA6, p0, p1); } // 0xB4AB419E0D86ACAE 0x6BB93227
	static Any _0x53AFD64C6758F2F9() { return invoke<Any>(0x416527B1EDF4F791); } // 0x53AFD64C6758F2F9
	static void NETWORK_SESSION_VOICE_HOST() { invoke<Void>(0x0886FDD09A05F94F); } // 0x9C1556705F864230 0x345C2980
	static void NETWORK_SESSION_VOICE_LEAVE() { invoke<Void>(0x9DBE7B231DE55A00); } // 0x6793E42BE02B575D 0xE566C7DA
	static void _0xABD5E88B8A2D3DB2(Any* p0) { invoke<Void>(0xFF46711DD31366C2, p0); } // 0xABD5E88B8A2D3DB2 0x9DFD89E6
	static void NETWORK_SET_KEEP_FOCUSPOINT(BOOL p0, Any p1) { invoke<Void>(0x7725D39D4A27474D, p0, p1); } // 0x7F8413B7FC2AA6B9 0x075321B5
	static void _0x5B8ED3DB018927B1(Any p0) { invoke<Void>(0x48E32952CB1B0011, p0); } // 0x5B8ED3DB018927B1 0x6EFC2FD0
	static Any _0x855BC38818F6F684() { return invoke<Any>(0xA9FB2CCA53EFF610); } // 0x855BC38818F6F684 0x60AA4AA1
	static Any _0xB5D3453C98456528() { return invoke<Any>(0xEBF6E88D34EA843B); } // 0xB5D3453C98456528
	static Any _0xEF0912DDF7C4CB4B() { return invoke<Any>(0xADF8F3CA9AE46784); } // 0xEF0912DDF7C4CB4B 0x132CA01E
	static Any NETWORK_SEND_TEXT_MESSAGE(char* message, int* playerHandle) { return invoke<Any>(0xF2D8305DAF600809, message, playerHandle); } // 0x3A214F2EC889B100 0xAFFEA720
	static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0x319E9789C5BE7FA8, toggle); } // 0x75138790B4359A74 0xFC9AD060
	static Any NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<Any>(0xEE385E70BC15CC88); } // 0x12103B9E0C9F92FB 0xAF329720
	static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(Any p0) { invoke<Void>(0xBB1F2FC2AB33F31D, p0); } // 0x9D277B76D1D12222 0x74E0BC0A
	static Any NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<Any>(0xF29BB76CD4B9BDDC, p0); } // 0x73E2B500410DA5A2 0x31F951FD
	static Any NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any* p0) { return invoke<Any>(0xA4465B751526B8E9, p0); } // 0x2763BBAA72A7BCB9 0x58F1DF7D
	static Any NETWORK_HOST_TRANSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x6C700B79E95D5D6B, p0, p1, p2, p3, p4, p5); } // 0xA60BB5CE242BB254 0x146764FB
	static BOOL _0x71FB0EBCD4915D56(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x21F8B2DD95D23FFF, p0, p1, p2, p3); } // 0x71FB0EBCD4915D56 0x2FF65C0B
	static BOOL _0xA091A5E44F0072E5(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xB529814973E6A86E, p0, p1, p2, p3); } // 0xA091A5E44F0072E5 0x47D61C99
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5) { return invoke<BOOL>(0xE787C2488323FC4E, p0, p1, p2, p3, p4, p5); } // 0x9C4AB58491FDC98A 0x5CE60A11
	static Any _0xA06509A691D12BE4() { return invoke<Any>(0x4CA78F7BD16B1D20); } // 0xA06509A691D12BE4 0x0D7E5CF9
	static void _0xB13E88E655E5A3BC() { invoke<Void>(0x15D910C2CBCA2813); } // 0xB13E88E655E5A3BC 0x36A5F2DA
	static Any _0x6512765E3BE78C50() { return invoke<Any>(0x807491363600A835); } // 0x6512765E3BE78C50
	static Any _0x0DBD5D7E3C5BEC3B() { return invoke<Any>(0xE25755B8ADE57E2A); } // 0x0DBD5D7E3C5BEC3B
	static Any _0x5DC577201723960A() { return invoke<Any>(0xFC7F3DA0441E0E93); } // 0x5DC577201723960A
	static Any _0x5A6AA44FF8E931E6() { return invoke<Any>(0x2A85B028591651D5); } // 0x5A6AA44FF8E931E6
	static void _0x261E97AD7BCF3D40(BOOL p0) { invoke<Void>(0x68EC5697748433A8, p0); } // 0x261E97AD7BCF3D40 0x7EF353E1
	static void _0x39917E1B4CB0F911(BOOL p0) { invoke<Void>(0x90FDA7298FBAB818, p0); } // 0x39917E1B4CB0F911 0xF60986FC
	static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0x809BD78301854AAC, p0); } // 0xEF26739BCD9907D5 0x1DD01FE7
	static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0x696FBCAC7636A7DD); } // 0xFB3272229A82C759 0x8BB336F7
	static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0x16F5C9722A185086, p0, p1); } // 0x4A595C32F77DFF76 0x5332E645
	static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* p0) { invoke<Void>(0x30F39A03C0CBD025, p0); } // 0xCA2C8073411ECDB6 0x17F1C69D
	static Any NETWORK_LEAVE_TRANSITION() { return invoke<Any>(0xD1816FB0D7AD9539); } // 0xD23A1A815D21DB19 0x3A3599B7
	static Any NETWORK_LAUNCH_TRANSITION() { return invoke<Any>(0xC5C648E32020FA49); } // 0x2DCF46CB1A4F0884 0xE3570BA2
	static void _0xA2E9C1AB8A92E8CD(BOOL p0) { invoke<Void>(0xC02FE1405E24E98A, p0); } // 0xA2E9C1AB8A92E8CD
	static void NETWORK_BAIL_TRANSITION() { invoke<Void>(0x2527F1C2CB08356C); } // 0xEAA572036990CD1B 0xB59D74CA
	static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int max_Players) { return invoke<BOOL>(0x6A34AFD5386F38CB, p0, max_Players); } // 0x3E9BB38102A589B0 0x1B2114D2
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int max_Players, BOOL p2) { return invoke<BOOL>(0x3AB7B1BACF95266B, p0, max_Players, p2); } // 0x4665F51EFED00034 0x58AFBE63
	static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0xBDF9104F02944276, p0, p1, p2, players, p4); } // 0x3AAD8B2FCA1E289F 0xC7CB8ADF
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0x382830EB054EEAA9, p0, p1, p2, p3, p4, p5); } // 0x9E80A5BA8109F974 0xAD13375E
	static Any NETWORK_IS_TRANSITION_TO_GAME() { return invoke<Any>(0xFC18717AC3670086); } // 0x9D7696D8F4FA6CB7 0x17146B2B
	static Any NETWORK_GET_TRANSITION_MEMBERS(Any* p0, Any p1) { return invoke<Any>(0x5924BE3FF9FDD02C, p0, p1); } // 0x73B000F7FBC55829 0x31F19263
	static void _0x521638ADA1BA0D18(Any p0, Any p1) { invoke<Void>(0xBF9685EDDF709FF9, p0, p1); } // 0x521638ADA1BA0D18 0xCEE79711
	static void _0xEBEFC2E77084F599(Any p0, Any* p1, BOOL p2) { invoke<Void>(0x0AF8D7DADB89F004, p0, p1, p2); } // 0xEBEFC2E77084F599 0xE0C28DB5
	static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(_Player* playerHandle, char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0x148613E33DEC4FE3, playerHandle, p1, p2, p3, p4); } // 0x31D1D2B858D25E6B 0x468B0884
	static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xD1650C8DD6685033, p0); } // 0x5728BB6D63E3FF1D 0x03383F57
	static Any NETWORK_IS_TRANSITION_HOST() { return invoke<Any>(0x9FB35D7C1AAF91B1); } // 0x0B824797C9BF2159 0x0C0900BC
	static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any* p0) { return invoke<BOOL>(0x17C673453BE08803, p0); } // 0x6B5C83BA3EFE6A10 0x0E2854C4
	static BOOL NETWORK_GET_TRANSITION_HOST(Any* p0) { return invoke<BOOL>(0x0D8D92EC59980AD1, p0); } // 0x65042B9774C4435E 0x73098D40
	static Any NETWORK_IS_IN_TRANSITION() { return invoke<Any>(0x232025B5B68B7DE1); } // 0x68049AEFF83D8F0A 0xC3CDB626
	static Any NETWORK_IS_TRANSITION_STARTED() { return invoke<Any>(0xFEDB0AF7BB97B311); } // 0x53FA83401D9C07FE 0x7917E111
	static Any NETWORK_IS_TRANSITION_BUSY() { return invoke<Any>(0x0F63ADF34100C41C); } // 0x520F3282A53D26B7 0xA357A2C6
	static Any _0x292564C735375EDF() { return invoke<Any>(0x59184BC0F098406D); } // 0x292564C735375EDF 0x8262C70E
	static Any _0xC571D0E77D8BBC29() { return invoke<Any>(0xC7C1AEF79ABD16FC); } // 0xC571D0E77D8BBC29
	static void _0x2B3A8F7CA3A38FDE() { invoke<Void>(0x96454D8F0A0A487F); } // 0x2B3A8F7CA3A38FDE 0xC71E607B
	static void _0x43F4DBA69710E01E() { invoke<Void>(0x66BB76AE5F52680E); } // 0x43F4DBA69710E01E 0x82D32D07
	static Any _0x37A4494483B9F5C9() { return invoke<Any>(0x28DBF6C049378F82); } // 0x37A4494483B9F5C9 0xC901AA9F
	static void _0x0C978FDA19692C2C(BOOL p0, BOOL p1) { invoke<Void>(0x1D211DCB0A00CF7F, p0, p1); } // 0x0C978FDA19692C2C
	static Any _0xD0A484CB2F829FBE() { return invoke<Any>(0x8E75A7B2119A3F24); } // 0xD0A484CB2F829FBE
	static void _0x30DE938B516F0AD2(Any p0) { invoke<Void>(0x1B88DA0CB14ECBE3, p0); } // 0x30DE938B516F0AD2 0xCCA9C022
	static void _0xEEEDA5E6D7080987(Any p0, Any p1) { invoke<Void>(0xF3A24056E06D3529, p0, p1); } // 0xEEEDA5E6D7080987 0x1E5F6AEF
	static void _0x973D76AA760A6CB6(BOOL p0) { invoke<Void>(0x15BCF3D68495D4B7, p0); } // 0x973D76AA760A6CB6 0x0532DDD2
	static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Any p0) { return invoke<BOOL>(0x0DB37B9FC698D13A, p0); } // 0x9AC9CCBFA8C29795 0x4ABD1E59
	static BOOL _0x2615AA2A695930C1(Any p0) { return invoke<BOOL>(0x5D561C5CF2890B9B, p0); } // 0x2615AA2A695930C1 0xCDEBCCE7
	static BOOL NETWORK_JOIN_TRANSITION(Any p0) { return invoke<BOOL>(0x7D72F76113246435, p0); } // 0x9D060B08CD63321A 0xB054EC4B
	static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0x0F2146D026A37CFE, p0); } // 0x7284A47B3540E6CF 0x4F41DF6B
	static BOOL _0x3F9990BF5F22759C(Any* p0) { return invoke<BOOL>(0x659BE024105D32B5, p0); } // 0x3F9990BF5F22759C
	static Any NETWORK_IS_ACTIVITY_SESSION() { return invoke<Any>(0x1504F110F2576375); } // 0x05095437424397FA 0x577DAA8A
	static void _0x4A9FDE3A5A6D0437(Any p0) { invoke<Void>(0x5B1993E843D757DB, p0); } // 0x4A9FDE3A5A6D0437 0x18F03AFD
	static BOOL _0xC3C7A6AFDB244624(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xB1C52C6B24CF12AA, p0, p1, p2, p3); } // 0xC3C7A6AFDB244624 0x8B99B72B
	static BOOL _0xC116FF9B4D488291(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x1AAE0060D8AD9F09, p0, p1, p2, p3); } // 0xC116FF9B4D488291 0x877C0E1C
	static BOOL _0x1171A97A3D3981B6(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x1AB37A565A7FC258, p0, p1, p2, p3); } // 0x1171A97A3D3981B6
	static Any _0x742B58F723233ED9(Any p0) { return invoke<Any>(0x37C2AADC89071CC7, p0); } // 0x742B58F723233ED9 0x5E832444
	static Any _0xCEFA968912D0F78D() { return invoke<Any>(0x0212D842D0B28377); } // 0xCEFA968912D0F78D 0x3FDA00F3
	static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0x70AF698C0989B327, p0); } // 0xFA91550DF9318B22 0xE5DA4CED
	static BOOL _0xF0210268DB0974B1(Any p0) { return invoke<BOOL>(0xEFAE27076F85E069, p0); } // 0xF0210268DB0974B1 0x93C665FA
	static Any NETWORK_GET_PRESENCE_INVITE_ID(Any p0) { return invoke<Any>(0x857D50DB44E3D585, p0); } // 0xDFF09646E12EC386 0xD50DF46C
	static Any NETWORK_GET_PRESENCE_INVITE_INVITER(Any p0) { return invoke<Any>(0x422D2729D7749972, p0); } // 0x4962CC4AA2F345B7 0x19EC65D9
	static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0xAA3C0884B8F62727, p0, p1); } // 0x38D5B0FEBB086F75 0xB2451429
	static Any _0x26E1CD96B0903D60(Any p0) { return invoke<Any>(0x2A136800AE39E55C, p0); } // 0x26E1CD96B0903D60 0xC5E0C989
	static Any _0x24409FC4C55CB22D(Any p0) { return invoke<Any>(0x9237BED02010B98E, p0); } // 0x24409FC4C55CB22D 0xA4302183
	static Any _0xD39B3FFF8FFDD5BF(Any p0) { return invoke<Any>(0xCFD7E6579FEEE697, p0); } // 0xD39B3FFF8FFDD5BF 0x51B2D848
	static Any _0x728C4CC7920CD102(Any p0) { return invoke<Any>(0x46165211FD7828B9, p0); } // 0x728C4CC7920CD102 0x4677C656
	static BOOL _0x3DBF2DF0AEB7D289(Any p0) { return invoke<BOOL>(0x7141256355903624, p0); } // 0x3DBF2DF0AEB7D289 0xF5E3401C
	static BOOL _0x8806CEBFABD3CE05(Any p0) { return invoke<BOOL>(0xB99A4E8AEB85DCEF, p0); } // 0x8806CEBFABD3CE05 0x7D593B4C
	static Any _0x76D9B976C4C09FDE() { return invoke<Any>(0xE882B4D4A57BA270); } // 0x76D9B976C4C09FDE 0xE96CFE7D
	static Any _0xC88156EBB786F8D5() { return invoke<Any>(0x3B1A11F5695E3621); } // 0xC88156EBB786F8D5 0xAB969F00
	static Any _0x439BFDE3CD0610F6() { return invoke<Any>(0x43A8B0D3F9416A79); } // 0x439BFDE3CD0610F6 0x3242F952
	static void _0xEBF8284D8CADEB53() { invoke<Void>(0x515BE962887CC70B); } // 0xEBF8284D8CADEB53 0x9773F36A
	static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0xFA772141520D6FFA, p0); } // 0x7524B431B2E6F7EE 0xFDE84CB7
	static void _0x726E0375C7A26368() { invoke<Void>(0x33CDBD30703DCDC8); } // 0x726E0375C7A26368 0xF7134E73
	static void _0xF083835B70BA9BFE() { invoke<Void>(0x434A07CAE7435BE1); } // 0xF083835B70BA9BFE 0xC47352E7
	static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xEBAE4ABFC998B924, p0, p1, p2, p3); } // 0x9D80CD1D0E6327DE 0x52FB8074
	static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0xF1C2F48E17B9F779, p0); } // 0x4D86CD31E8976ECE 0xEC651BC0
	static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0x67564D4AA75E4455, p0); } // 0x74881E6BCAE2327C 0x72BA00CE
	static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xB195EDE662DA15ED, p0); } // 0x7206F674F2A3B1BB 0xFD95899E
	static void _0x66F010A4B031A331(Any* p0) { invoke<Void>(0x0A1B825256DC35E7, p0); } // 0x66F010A4B031A331
	static BOOL _0x44B37CDCAE765AAE(Any p0, Any* p1) { return invoke<BOOL>(0x9CBE0FB57C57F6E5, p0, p1); } // 0x44B37CDCAE765AAE
	static void _0x0D77A82DC2D0DA59(Any* p0, Any* p1) { invoke<Void>(0x0E764E8F457D533F, p0, p1); } // 0x0D77A82DC2D0DA59 0x0808D4CC
	static BOOL FILLOUT_PM_PLAYER_LIST(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x5E910495C7B66237, p0, p1, p2); } // 0xCBBD7C4991B64809 0xCE40F423
	static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xBAA95DB15168A17F, p0, p1, p2, p3); } // 0x716B6DB9D1886106 0xB8DF604E
	static BOOL USING_NETWORK_WEAPONTYPE(Any p0) { return invoke<BOOL>(0xC7546AB33EDABB9E, p0); } // 0xE26CCFF8094D8C74 0xF49C1533
	static BOOL _0x796A87B3B68D1F3D(Any* p0) { return invoke<BOOL>(0xCF53A8E98CB4F982, p0); } // 0x796A87B3B68D1F3D
	static Any _0x2FC5650B0271CB57() { return invoke<Any>(0xDB0B29203D08691F); } // 0x2FC5650B0271CB57 0xA812B6CB
	static Any _0x01ABCE5E7CBDA196() { return invoke<Any>(0x080C7E975C59EB0C); } // 0x01ABCE5E7CBDA196
	static Any _0x120364DE2845DAF8(Any* p0, Any p1) { return invoke<Any>(0x77A1256D8CD69680, p0, p1); } // 0x120364DE2845DAF8 0xF30E5814
	static Any _0xFD8B834A8BA05048() { return invoke<Any>(0x9148927C48C4FF30); } // 0xFD8B834A8BA05048 0xC6609191
	static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Any* p0) { return invoke<BOOL>(0x25380C003C899D53, p0); } // 0x8DE9945BCC9AEC52 0x51367B34
	static Any NETWORK_IS_IN_PARTY() { return invoke<Any>(0x5146484549889EEA); } // 0x966C2BC2A7FE3F30 0xF9D7D67D
	static Any NETWORK_IS_PARTY_MEMBER(Any p0) { return invoke<Any>(0x5146484549889EEA, p0); } // 0x676ED266AADD31E0 0x1D0C929D
	static Any _0x2BF66D2E7414F686() { return invoke<Any>(0x2447E2F214B47AA1); } // 0x2BF66D2E7414F686 0x9156EFC0
	static Any _0x14922ED3E38761F0() { return invoke<Any>(0xF1029615EDEC5E3A); } // 0x14922ED3E38761F0 0x8FA6EE0E
	static void _0xFA2888E3833C8E96() { invoke<Void>(0x265BBF9E8772472D); } // 0xFA2888E3833C8E96 0x7F70C15A
	static void _0x25D990F8E0E3F13C() { invoke<Void>(0x95A5FF78788E7618); } // 0x25D990F8E0E3F13C
	static void _0x77FADDCBE3499DF7(Any p0) { invoke<Void>(0x5146484549889EEA, p0); } // 0x77FADDCBE3499DF7 0x8179C48A
	static void _0xF1B84178F8674195(Any p0) { invoke<Void>(0x7B1E2F299BCCDBF9, p0); } // 0xF1B84178F8674195 0x41702C8A
	static Any _0x599E4FA1F87EB5FF() { return invoke<Any>(0x9DA4B68EF818AFBF); } // 0x599E4FA1F87EB5FF 0x208DD848
	static Any _0xE30CF56F1EFA5F43(Any p0, Any p1) { return invoke<Any>(0x1BF92BFAA0188E6F, p0, p1); } // 0xE30CF56F1EFA5F43 0xF9B6426D
	static Any NETWORK_PLAYER_IS_CHEATER() { return invoke<Any>(0x6951A73024DC7FBB); } // 0x655B91F1495A9090 0xA51DC214
	static Any _0x172F75B6EE2233BA() { return invoke<Any>(0xCCE9F45757F034E7); } // 0x172F75B6EE2233BA 0x1720ABA6
	static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0x3928EE7698204996); } // 0x19D8DA0E5A68045A 0xA19708E3
	static BOOL _0x46FB3ED415C7641C(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xBB4CFEEB670DA56C, p0, p1, p2); } // 0x46FB3ED415C7641C 0xF9A51B92
	static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x21C3EEC79946CE7D, p0, p1, p2); } // 0xEC5E3AF5289DCA81 0x4C2C6B6A
	static void _0xE66C690248F11150(Any p0, Any p1) { invoke<Void>(0x4BCFCDD2230C62C6, p0, p1); } // 0xE66C690248F11150 0x4818ACD0
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { invoke<Void>(0x786FDD765D4157F4, p0, p1, p2); } // 0x1CA59E306ECB80A5 0x470810ED
	static BOOL _0xD1110739EEADB592(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0x2A9F0C89FF7C81F3, p0, p1, p2); } // 0xD1110739EEADB592
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0x391BEA92ECF1B445); } // 0x2910669969E9535E 0xD9BF6549
	static int _NETWORK_GET_NUM_PARTICIPANTS_HOST() { return invoke<int>(0xE5697AB254094B0D); } // 0xA6C90FBC38E395EE 0xCCD8C02D
	static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0x8BCACDC751B3961A); } // 0x18D0456E86604654 0x3E25A3C5
	static Any NETWORK_GET_SCRIPT_STATUS() { return invoke<Any>(0xF30F4D3B526CD5C2); } // 0x57D158647A6BFABF 0x2BE9235A
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Any* p0, Any p1) { invoke<Void>(0x4331DF6C42BE352E, p0, p1); } // 0x3E9B2F01C50DF595 0xDAF3B0AE
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Any* p0, Any p1) { invoke<Void>(0xCCA45C9E00D2BC01, p0, p1); } // 0x3364AA97340CA215 0xBE3D32B4
	static void _0x64F62AFB081E260D() { invoke<Void>(0x7EBBBB0B580197F3); } // 0x64F62AFB081E260D 0xA71A1D2A
	static Any _0x5D10B3795F3FC886() { return invoke<Any>(0x7DEEE0ED76EAAD72); } // 0x5D10B3795F3FC886 0x0B739F53
	static Any NETWORK_GET_PLAYER_INDEX(Ped PedHandle) { return invoke<Any>(0xF3B8A064D228878B, PedHandle); } // 0x24FB80D107371267 0xBE1C1506
	static Any NETWORK_GET_PARTICIPANT_INDEX(Any p0) { return invoke<Any>(0x9259DE19D910276C, p0); } // 0x1B84DF6AF2A46938 0xC4D91094
	static _Player _NETWORK_GET_PLAYER_FROM_PED(Ped ped) { return invoke<_Player>(0xA43666ACD375E339, ped); } // 0x6C0E2E0125610278 0x40DBF464
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xDC98F6A3C09A979F); } // 0xA4A79DD2D9600654 0xF7952E62
	static BOOL NETWORK_IS_PLAYER_CONNECTED(Any p0) { return invoke<BOOL>(0x7C504E3DE6EB3B84, p0); } // 0x93DC1BE4E1ABE9D1 0x168EE2C2
	static Any _0xCF61D4B4702EE9EB() { return invoke<Any>(0x6AC3C3A7CD358D90); } // 0xCF61D4B4702EE9EB 0xF4F13B06
	static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(Any p0) { return invoke<BOOL>(0x1489FFC2CBA39486, p0); } // 0x6FF8FF40B6357D45 0x4E2C348B
	static BOOL NETWORK_IS_PLAYER_ACTIVE(int playerID) { return invoke<BOOL>(0xCB129F9A01D14082, playerID); } // 0xB8DFD30D6973E135 0x43657B17
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Any p0) { return invoke<BOOL>(0x3F3C7C3B52DD0ECA, p0); } // 0x3CA58F6CB7CBD784 0xB08B6992
	static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0xD9E8CA806A80203D); } // 0x83CD99A1E6061AB5 0x6970BA94
	static Any NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Any>(0xF8A8E20BC7D94A26); } // 0xC7B4D79B01FA7A5C 0x89EA7B54
	static int NETWORK_GET_HOST_OF_SCRIPT(char* scriptName, int p1, Any p2) { return invoke<int>(0xC2CF02E3462D1EAA, scriptName, p1, p2); } // 0x1D6A14F1F9A736FC 0x9C95D0BB
	static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0x5A84D21EFCBD53FD); } // 0x3B3D11CD9FFCDFC9 0x3083FAD7
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(Any* p0, Any p1, BOOL p2, Any p3) { return invoke<BOOL>(0x712B9E0F5CC8AE72, p0, p1, p2, p3); } // 0x9D40DF90FAD26098 0x4A65250C
	static Any _0x3658E8CD94FC121A(Any* p0, Any p1, Any p2) { return invoke<Any>(0xE49D22679873C0C3, p0, p1, p2); } // 0x3658E8CD94FC121A 0x8F7D9F46
	static Any _0x638A3A81733086DB() { return invoke<Any>(0x434A417780753DD9); } // 0x638A3A81733086DB 0xDB8B5D71
	static BOOL _0x1AD5B71586B94820(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0x05D53E8262695692, p0, p1, p2); } // 0x1AD5B71586B94820 0xCEA55F4C
	static void _0x2302C0264EA58D31() { invoke<Void>(0xBCBE2329B85B96C0); } // 0x2302C0264EA58D31 0x8DCFE77D
	static void _0x741A3D8380319A81() { invoke<Void>(0x41E3935F2F4B4FFB); } // 0x741A3D8380319A81 0x331D9A27
	static int PARTICIPANT_ID() { return invoke<int>(0xA00C21A2AE68AB7B); } // 0x90986E8876CE0A83 0x9C35A221
	static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0x848AF823A8EA3C62); } // 0x57A3BDDAD8E5AA0A 0x907498B0
	static Any NETWORK_GET_DESTROYER_OF_NETWORK_ID(Any p0, Any* p1) { return invoke<Any>(0x1F86C8C27A772A49, p0, p1); } // 0x7A1ADEEF01740A24 0x4FCA6436
	static BOOL _0x4CACA84440FA26F6(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xF78BA9E6CC3CD891, p0, p1, p2); } // 0x4CACA84440FA26F6 0x28A45454
	static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(_Player player, Hash* weaponHash) { return invoke<Entity>(0xCE4E0FC8FB459884, player, weaponHash); } // 0x42B2DAA6B596F5F8 0xA7E7E04F
	static void NETWORK_RESURRECT_LOCAL_PLAYER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x343DA7FD5E88F976, p0, p1, p2, p3, p4, p5); } // 0xEA23C49EAA83ACFB 0xF1F9D4B4
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0x4269C64134076C5F, time); } // 0x2D95C7E2D7E07307 0xFEA9B85C
	static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0x88B08FD0E471377A); } // 0x8A8694B48715B000 0x8DE13B36
	static void _0x9DD368BF06983221(Any p0, BOOL p1) { invoke<Void>(0x1D9272EDCAAF76DC, p0, p1); } // 0x9DD368BF06983221 0x8D27280E
	static void _0x524FF0AEFF9C3973(Any p0) { invoke<Void>(0xB3078A2BCB1F482D, p0); } // 0x524FF0AEFF9C3973 0xB72F086D
	static BOOL _0xB07D3185E11657A5(Any p0) { return invoke<BOOL>(0xF9F5CAD1EAD2B987, p0); } // 0xB07D3185E11657A5 0xEDA68956
	static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xA440D2EFB5105848, entity); } // 0xA11700682F3AD45C 0x9E35DAB6
	static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int NetworkID) { return invoke<Entity>(0xDC7AE732617BBDEF, NetworkID); } // 0xCE4E5D9B0A4FF560 0x5B912C3F
	static BOOL _0xC7827959479DCC78(Any p0) { return invoke<BOOL>(0x6B8DF4084A1CD2DC, p0); } // 0xC7827959479DCC78 0xD7F934F4
	static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Any p0) { return invoke<BOOL>(0x7DF3EE9F5A826186, p0); } // 0x0991549DE4D64762 0x813353ED
	static void _0x06FAACD625D80CAA(Any p0) { invoke<Void>(0xAAE665FE2383A360, p0); } // 0x06FAACD625D80CAA 0x31A630A4
	static void _0x7368E683BB9038D6(Any p0) { invoke<Void>(0x0BDAE38BB5DBD8E9, p0); } // 0x7368E683BB9038D6 0x5C645F64
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netID) { return invoke<BOOL>(0x0E091C9F3918F674, netID); } // 0x38CE16C96BD11344 0xB8D2C99E
	static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Entity entity) { return invoke<BOOL>(0x3CF373660FCFAFCE, entity); } // 0x18A47D074708FD68 0x1E2E3177
	static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netID) { return invoke<BOOL>(0xDC64FA270C733B30, netID); } // 0xA670B3662FAFFBD0 0x9262A60A
	static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netID) { return invoke<BOOL>(0xB480350E4250D92A, netID); } // 0x4D36070FE0215186 0x92E77D21
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x33E20212DBE504C2, entity); } // 0xB69317BF5E782347 0xA05FEBD7
	static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(Any p0) { return invoke<BOOL>(0x389829FE87FF866E, p0); } // 0x870DDFD5A4A796E4 0xF60DAAF6
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x775F8FFC8E29F525, entity); } // 0x01BF60A500E28887 0x005FD797
	static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Any p0) { return invoke<BOOL>(0xF30687F11F81DF2C, p0); } // 0x5BC9495F0B3B6FA6 0xF7784FC8
	static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Any p0) { return invoke<BOOL>(0x9461EC9F8CB84B91, p0); } // 0xCB3C68ADB06195DF 0x136326EC
	static BOOL _0xC01E93FAC20C3346(Any p0) { return invoke<BOOL>(0x8882F4EE0D8D8A0E, p0); } // 0xC01E93FAC20C3346
	static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xDD3500FFBBCB3F3B, vehicle); } // 0xB4C94523F023419C 0xF17634EB
	static int PED_TO_NET(Ped ped) { return invoke<int>(0x9ED2AEF3CEBC2436, ped); } // 0x0EDEC3C276198689 0x86A0B759
	static int OBJ_TO_NET(Object object) { return invoke<int>(0xDA9308553DFB8112, object); } // 0x99BFDC94A603E541 0x1E05F29F
	static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0x15F0E6D5AC2852F1, netHandle); } // 0x367B936610BA360C 0x7E02FAEA
	static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0x564EAE6038A81C07, netHandle); } // 0xBDCD95FC216A8B3E 0x87717DD4
	static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0x9C16D1E97E386176, netHandle); } // 0xD8515F5FEA14CB3F 0x27AA14D8
	static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0x63CE7A3848B84093, netHandle); } // 0xBFFEAB45A9A9094A 0x5E149683
	static void NETWORK_GET_LOCAL_HANDLE(Any* p0, Any p1) { invoke<Void>(0xAF68FD535DBD6441, p0, p1); } // 0xE86051786B66CD8E 0x08023B16
	static void NETWORK_HANDLE_FROM_USER_ID(Any* p0, Any* p1, Any p2) { invoke<Void>(0x4A4169A57E08C334, p0, p1, p2); } // 0xDCD51DD8F87AEC5C 0x74C2C1B7
	static void NETWORK_HANDLE_FROM_MEMBER_ID(Any* p0, Any* p1, Any p2) { invoke<Void>(0x0A1C143212EFF423, p0, p1, p2); } // 0xA0FD21BED61E5C4C 0x9BFC9FE2
	static void NETWORK_HANDLE_FROM_PLAYER(_Player player, int* handle, int p2) { invoke<Void>(0xCA4A074601307AB8, player, handle, p2); } // 0x388EB2B86C73B6B3 0xD3498917
	static Any _0xBC1D768F2F5D6C05(Any p0) { return invoke<Any>(0x6B4E789705EC21F2, p0); } // 0xBC1D768F2F5D6C05
	static Any _0x58575AC3CF2CA8EC(Any* p0) { return invoke<Any>(0xCCEE9FAB5CD1BF53, p0); } // 0x58575AC3CF2CA8EC
	static void NETWORK_HANDLE_FROM_FRIEND(Any p0, Any* p1, Any p2) { invoke<Void>(0x71183557E2634E47, p0, p1, p2); } // 0xD45CB817D7E177D2 0x3B0BB3A3
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* p0) { return invoke<BOOL>(0xF18B86FD6BB47376, p0); } // 0x9F0C0A981D73FA56 0xEBA00C2A
	static Any NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<Any>(0xDFDC2A1D9DF080EA); } // 0xB071E27958EF4CF0 0xF000828E
	static Any NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<Any>(0x1D78E092ABEAD004); } // 0xFD00798DBA7523DD 0x89C2B5EA
	static char* NETWORK_GET_GAMERTAG_FROM_HANDLE(int* handle) { return invoke<char*>(0x31710BC5A1432E93, handle); } // 0x426141162EBE5CDB 0xA18A1B26
	static int _0xD66C9E72B3CC4982(Any* p0, Any p1) { return invoke<int>(0xB36E0B09EB90DE01, p0, p1); } // 0xD66C9E72B3CC4982
	static Any _0x58CC181719256197(Any p0, Any p1, Any p2) { return invoke<Any>(0x5E2632DBFDA6F6E5, p0, p1, p2); } // 0x58CC181719256197
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* p0, Any* p1) { return invoke<BOOL>(0xC82CFAC71F470026, p0, p1); } // 0x57DBA049E110F217 0x45975AE3
	static BOOL NETWORK_IS_HANDLE_VALID(int* p0, int p1) { return invoke<BOOL>(0xD478D67F6AAE84CA, p0, p1); } // 0x6F79B93B0A8E4133 0xF0996C6E
	static Any NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* p0) { return invoke<Any>(0xB3B61CF8D3DF8EB9, p0); } // 0xCE5F689CF5A0A49D 0x2E96EF1E
	static Any NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any* p0) { return invoke<Any>(0xC00BF392B5CBCD38, p0); } // 0xC82630132081BB6F 0x62EF0A63
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* p0) { return invoke<BOOL>(0x1B93DF2247DCC570, p0); } // 0x0F10B05DDF8D16E9 0x59127716
	static void NETWORK_SHOW_PROFILE_UI(_Player* playerHandle) { invoke<Void>(0xBA8A6BD440CCF331, playerHandle); } // 0x859ED1CEA343FCA8 0xF00A20B0
	static char* NETWORK_PLAYER_GET_NAME(_Player player) { return invoke<char*>(0xD6904D9981467292, player); } // 0x7718D2E2060837D2 0xCE48F260
	static char* _NETWORK_PLAYER_GET_USER_ID(_Player player, Any* userID) { return invoke<char*>(0xC088F50D658C74FE, player, userID); } // 0x4927FC39CD0869A0 0x4EC0D983
	static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(_Player player) { return invoke<BOOL>(0x82A9B289A654EBFD, player); } // 0x544ABDDA3B409B6D 0xF6659045
	static BOOL _0x565E430DB3B05BEC(Any p0) { return invoke<BOOL>(0xA5E156432260D203, p0); } // 0x565E430DB3B05BEC 0xD265B049
	static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0xA5A6ADE53432BFBA, p0); } // 0x7E58745504313A2E 0x95481343
	static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0x8A114698D6B55690); } // 0xAFEBB0D5D8F687D2 0x048171BC
	static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xAAA965014060997C); } // 0x203F1CFD823B27A4 0xA396ACDE
	static char* NETWORK_GET_FRIEND_NAME(_Player player) { return invoke<char*>(0xE4A87FF89CCC1891, player); } // 0xE11EBBB2A783FE8B 0x97420B6D
	static char* _NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<char*>(0x85885467F123CBD8, friendIndex); } // 0x4164F227D052E293
	static BOOL NETWORK_IS_FRIEND_ONLINE(Any* p0) { return invoke<BOOL>(0x5DE7601164C44498, p0); } // 0x425A44533437B64D 0xE0A42430
	static BOOL _0x87EB7A3FFCB314DB(Any* p0) { return invoke<BOOL>(0x51AC18677CE955C2, p0); } // 0x87EB7A3FFCB314DB
	static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(Any* p0) { return invoke<BOOL>(0x232E1B2D9290D408, p0); } // 0x2EA9A3BEDF3F17B8 0xC54365C2
	static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(Any* p0) { return invoke<BOOL>(0xE1D1410846EA11E9, p0); } // 0x57005C18827F3A28 0x400BDDD9
	static BOOL NETWORK_IS_FRIEND(int* player) { return invoke<BOOL>(0x74A87F4BE7FE0199, player); } // 0x1A24A179F9B31654 0x2DA4C282
	static Any NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<Any>(0x5DAEB96330D80FEB, p0); } // 0x0BE73DA6984A6E33 0x5C85FF81
	static Any NETWORK_IS_ADDING_FRIEND() { return invoke<Any>(0x3E888319CF64D20F); } // 0x6EA101606F6E4D81 0xBB7EC8C4
	static BOOL NETWORK_ADD_FRIEND(Any* p0, Any* p1) { return invoke<BOOL>(0x3165D2C2985829ED, p0, p1); } // 0x8E02D73914064223 0x20E5B3EE
	static BOOL _0xBAD8F2A42B844821(int friendIndex) { return invoke<BOOL>(0xDB28ED044E7D3457, friendIndex); } // 0xBAD8F2A42B844821 0x94AE7172
	static void _0x1B857666604B1A74(BOOL p0) { invoke<Void>(0x57FA95501E37763C, p0); } // 0x1B857666604B1A74
	static BOOL _0x82377B65E943F72D(Any p0) { return invoke<BOOL>(0x08B025391F1D1053, p0); } // 0x82377B65E943F72D 0xB802B671
	static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xDADAC23E1206B0BC); } // 0xC927EC229934AF60 0x009E68F3
	static Any _0xB309EBEA797E001F(Any p0) { return invoke<Any>(0x1DCBA447919E0B4C, p0); } // 0xB309EBEA797E001F 0x5C0AB2A9
	static Any _0x26F07DD83A5F7F98() { return invoke<Any>(0xE91130FA22EF0DDA); } // 0x26F07DD83A5F7F98 0x9A176B6E
	static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0x49CB54E9774A75CB); } // 0xE870F9F1F7B4F1FA 0xA7DC5657
	static void _0x7D395EA61622E116(BOOL p0) { invoke<Void>(0x507F92CBAA2705FA, p0); } // 0x7D395EA61622E116 0x5C05B7E1
	static Any _0xC0D2AF00BCC234CA() { return invoke<Any>(0xAD01381E7E2BEDEE); } // 0xC0D2AF00BCC234CA
	static BOOL NETWORK_GAMER_HAS_HEADSET(Any* p0) { return invoke<BOOL>(0x1AD02CDB4DB2040F, p0); } // 0xF2FD55CB574BCC55 0xD036DA4A
	static BOOL NETWORK_IS_GAMER_TALKING(int* p0) { return invoke<BOOL>(0x0E815ECD60F5CF3E, p0); } // 0x71C33B22606CD88A 0x99B58DBC
	static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(int* p0) { return invoke<BOOL>(0xA25BF6B301600C75, p0); } // 0xA150A4F065806B1F 0xD05EB7F6
	static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(int* p0) { return invoke<BOOL>(0xBB824ACC814BB18A, p0); } // 0xCE60DE011B6C7978 0x001B4046
	static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* p0) { return invoke<BOOL>(0x3B56801BE1DCE8AB, p0); } // 0xDF02A2C93F1F26DA 0x7685B333
	static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* p0) { return invoke<BOOL>(0xCE240013E73117E4, p0); } // 0xE944C4F5AF1B5883 0x3FDCC8D7
	static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* p0) { return invoke<BOOL>(0x71D8211F41A73B84, p0); } // 0x15337C7C268A27B2 0xD19B312C
	static BOOL _0xB57A49545BA53CE7(Any* p0) { return invoke<BOOL>(0x6F4E1F8D329BC4EC, p0); } // 0xB57A49545BA53CE7
	static BOOL _0xCCA4318E1AB03F1F(Any* p0) { return invoke<BOOL>(0x81FBEC429CADB131, p0); } // 0xCCA4318E1AB03F1F
	static BOOL _0x07DD29D5E22763F1(Any* p0) { return invoke<BOOL>(0x1D0BE4F88F32B5FC, p0); } // 0x07DD29D5E22763F1
	static BOOL _0x135F9B7B7ADD2185(Any* p0) { return invoke<BOOL>(0x00974C4369D54407, p0); } // 0x135F9B7B7ADD2185
	static BOOL NETWORK_IS_PLAYER_TALKING(_Player player) { return invoke<BOOL>(0x0A58BD5213EC48EB, player); } // 0x031E11F3D447647E 0xDA9FD9DB
	static BOOL NETWORK_PLAYER_HAS_HEADSET(_Player player) { return invoke<BOOL>(0x63BEAEF6A8A856EB, player); } // 0x3FB99A8B08D18FD6 0x451FB6B6
	static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(_Player player) { return invoke<BOOL>(0x64DF5AE52581188F, player); } // 0x8C71288AE68EDE39 0x7A21050E
	static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(_Player player) { return invoke<BOOL>(0x5E9A5E7623F91ED1, player); } // 0x9D6981DFC91A8604 0xE128F2B0
	static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(_Player player) { return invoke<BOOL>(0x87E8A0685CAD279D, player); } // 0x57AF1F8E27483721 0xAE4F4560
	static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(_Player player) { return invoke<BOOL>(0x6D28E3A8AE4676C8, player); } // 0x87F395D957D4353D 0x953EF45E
	static float NETWORK_GET_PLAYER_LOUDNESS(Any p0) { return invoke<float>(0xECB0E857C80A4156, p0); } // 0x21A1684A25C2867F 0xF2F67014
	static void NETWORK_SET_TALKER_PROXIMITY(float p0) { invoke<Void>(0x2F0BC247C05B0D28, p0); } // 0xCBF12D65F95AD686 0x67555C66
	static Any NETWORK_GET_TALKER_PROXIMITY() { return invoke<Any>(0xF864EAB38CC4555C); } // 0x84F0F13120B4E098 0x19991ADD
	static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0xED51F0C0B305BF08, toggle); } // 0xBABEC9E69A91C57B 0x8011247F
	static void _0xCFEB46DCD7D8D5EB(BOOL p0) { invoke<Void>(0xD64A69B7602E0DE3, p0); } // 0xCFEB46DCD7D8D5EB 0x1A3EA6CD
	static void _0xAF66059A131AA269(BOOL p0) { invoke<Void>(0x31D5A906A707788F, p0); } // 0xAF66059A131AA269 0xCAB21090
	static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0xE563C5648E461B2E, toggle); } // 0xD5B4883AC32F24C3 0x3813019A
	static void _0x6F697A66CE78674E(Any p0, Any p1) { invoke<Void>(0xD14E21626907AE76, p0, p1); } // 0x6F697A66CE78674E 0xC8CC9E75
	static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0x02FF16B6D311529D, toggle); } // 0x70DA3BF8DACD3210 0xA0FD42D3
	static void _0x3C5C1E2C2FF814B1(BOOL p0) { invoke<Void>(0xB6988A33803A880E, p0); } // 0x3C5C1E2C2FF814B1 0xC9DDA85B
	static void _0x9D7AFCBF21C51712(BOOL p0) { invoke<Void>(0xDD2068A0E1CE0C56, p0); } // 0x9D7AFCBF21C51712
	static void _0xF46A1E03E8755980(BOOL p0) { invoke<Void>(0x359ED266A55CEB85, p0); } // 0xF46A1E03E8755980 0xD33AFF79
	static void _0x6A5D89D7769A40D8(BOOL p0) { invoke<Void>(0x8EF111FE54F7EF24, p0); } // 0x6A5D89D7769A40D8 0x4FFEFE43
	static void _0x3039AE5AD2C9C0C4(Any p0, BOOL p1) { invoke<Void>(0x4C43A46A39485FB8, p0, p1); } // 0x3039AE5AD2C9C0C4 0x74EE2D8B
	static void _0x97DD4C5944CC2E6A(Any p0, Any p1) { invoke<Void>(0x340E521EC0EDCA76, p0, p1); } // 0x97DD4C5944CC2E6A
	static void _0x57B192B4D4AD23D5(BOOL p0) { invoke<Void>(0x56FDA88E4471FB95, p0); } // 0x57B192B4D4AD23D5 0x2F98B405
	static void _0xDDF73E2B1FEC5AB4(Any p0, Any p1) { invoke<Void>(0xFC72F0443F6A717D, p0, p1); } // 0xDDF73E2B1FEC5AB4 0x95F1C60D
	static void _0x0FF2862B61A58AF9(BOOL p0) { invoke<Void>(0xF505D28D0FF66054, p0); } // 0x0FF2862B61A58AF9 0x1BCD3DDF
	static void NETWORK_SET_VOICE_CHANNEL(Any p0) { invoke<Void>(0xF033941CF3CB8354, p0); } // 0xEF6212C2EFEF1A23 0x3974879F
	static void _0xE036A705F989E049() { invoke<Void>(0x6E30C0051C4B28C2); } // 0xE036A705F989E049 0x9ECF722A
	static void IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(Any p0, Any p1, Any p2) { invoke<Void>(0x7D66C5CF07C808C0, p0, p1, p2); } // 0xDBD2056652689917 0xF1E84832
	static void _0xF03755696450470C() { invoke<Void>(0x0B2080B6F5515DCF); } // 0xF03755696450470C 0x7F9B9052
	static void _0x5E3AA4CA2B6FB0EE(Any p0) { invoke<Void>(0xCDAC7F1B710886EF, p0); } // 0x5E3AA4CA2B6FB0EE 0x7BBEA8CF
	static void _0xCA575C391FEA25CC(Any p0) { invoke<Void>(0x7AE3A01254C2D739, p0); } // 0xCA575C391FEA25CC 0xE797A4B6
	static void _0xADB57E5B663CCA8B(_Player p0, float* p1, float* p2) { invoke<Void>(0x94711CA776D1F8BE, p0, p1, p2); } // 0xADB57E5B663CCA8B 0x92268BB5
	static BOOL _NETWORK_IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0x04781D6F82022E77); } // 0x5FCF4D7069B09026
	static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0x0C44C88C00AD91B0); } // 0x593850C16A36B692 0x92B7351C
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0x83CDA1F1ADCD9582, toggle); } // 0xF808475FA571D823 0x6BAF95FA
	static void NETWORK_SET_RICH_PRESENCE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFF5A30D59D34CC43, p0, p1, p2, p3); } // 0x1DCCACDCFC569362 0x932A6CED
	static void _0x3E200C2BCF4164EB(Any p0, Any p1) { invoke<Void>(0xD50C1D58B20E7291, p0, p1); } // 0x3E200C2BCF4164EB 0x017E6777
	static Any _0x5ED0356A0CE3A34F() { return invoke<Any>(0xAC98E1C6B9BEB0E4); } // 0x5ED0356A0CE3A34F 0xE1F86C6A
	static void _0x9769F811D1785B03(Any p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { invoke<Void>(0x0B4F2C75D2AA5929, p0, p1, p2, p3, p4, p5); } // 0x9769F811D1785B03 0xBE6A30C3
	static void _0xBF22E0F32968E967(Any p0, BOOL p1) { invoke<Void>(0xCCBEC30FCC197A6A, p0, p1); } // 0xBF22E0F32968E967 0x22E03AD0
	static void _0x715135F4B82AC90D(Entity entity) { invoke<Void>(0x22ED74D4524CE2F4, entity); } // 0x715135F4B82AC90D 0xCEAE5AFC
	static BOOL _NETWORK_PLAYER_IS_IN_CLAN() { return invoke<BOOL>(0x46E4D0D0168391A1); } // 0x579CCED0265D4896 0xF5F4BD95
	static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(ScrHandle* netHandle) { return invoke<BOOL>(0xC1B41A655437AD93, netHandle); } // 0xB124B57F571D8F18 0xAB8319A3
	static BOOL NETWORK_CLAN_PLAYER_GET_DESC(ScrHandle* description, int p1, ScrHandle* netHandle) { return invoke<BOOL>(0x0ADE2D0C6811DC70, description, p1, netHandle); } // 0xEEE6EACBE8874FBA 0x6EE4A282
	static Any _0x7543BB439F63792B(Any p0, Any p1) { return invoke<Any>(0xF337AAE985EE065E, p0, p1); } // 0x7543BB439F63792B 0x54E79E9C
	static void _0xF45352426FF3A4F0(Any* p0, Any p1, Any* p2) { invoke<Void>(0x05F539CDDCE2A2C6, p0, p1, p2); } // 0xF45352426FF3A4F0 0xF633805A
	static Any _0x1F471B79ACC90BEF() { return invoke<Any>(0x319E6C6F7A0FD247); } // 0x1F471B79ACC90BEF 0x807B3450
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* p0, Any p1) { return invoke<BOOL>(0xCCDF5AD490E56BCC, p0, p1); } // 0x48DE78AF2C8885B8 0x3369DD1F
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* p0) { return invoke<BOOL>(0xC78B4BAABFD80FE9, p0); } // 0xA989044E70010ABE 0x8E8CB520
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0x35FF2CAB35C11BB6, p0); } // 0x5B9E023DC6EBEDC0 0x1FDB590F
	static Any _0xB3F64A6A91432477() { return invoke<Any>(0xC752F3A761294862); } // 0xB3F64A6A91432477 0x83ED8E08
	static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(Any* p0) { return invoke<BOOL>(0x75FD4BDD228DD1D3, p0); } // 0xBB6E6FEE99D866B2 0x40202867
	static Any NETWORK_CLAN_GET_MEMBERSHIP_COUNT(Any* p0) { return invoke<Any>(0x549EA03CD64BAF5A, p0); } // 0xAAB11F6C4ADBC2C1 0x25924010
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(Any* p0, Any p1) { return invoke<BOOL>(0x3CC6DA403C15D8BA, p0, p1); } // 0x48A59CF88D43DF0E 0x48914F6A
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP(Any* p0, Any* p1, Any p2) { return invoke<BOOL>(0xDBDF5E91AF1ED9B3, p0, p1, p2); } // 0xC8BC2011F67B3411 0xCDC4A590
	static Any NETWORK_CLAN_JOIN(Any clanHandle) { return invoke<Any>(0x3F9645F82F513F29, clanHandle); } // 0x9FAAA4F4FC71F87F 0x79C916C5
	static BOOL _0x729E3401F0430686(Any* p0, Any* p1) { return invoke<BOOL>(0xE0A68E07CDCDEE2B, p0, p1); } // 0x729E3401F0430686 0xBDA90BAC
	static BOOL _0x2B51EDBEFC301339(Any p0, Any* p1) { return invoke<BOOL>(0x02E941CF95EED55E, p0, p1); } // 0x2B51EDBEFC301339 0x8E952B12
	static Any _0xC32EA7A2F6CA7557() { return invoke<Any>(0x4FEE6ED10F10401F); } // 0xC32EA7A2F6CA7557 0x966C90FD
	static BOOL _0x5835D9CD92E83184(Any* p0, Any* p1) { return invoke<BOOL>(0xFD20D4DB68C4280F, p0, p1); } // 0x5835D9CD92E83184 0xBA672146
	static BOOL _0x13518FF1C6B28938(Any p0) { return invoke<BOOL>(0x884DF91B245ECB5C, p0); } // 0x13518FF1C6B28938 0x7963FA4D
	static BOOL _0xA134777FF7F33331(Any p0, Any* p1) { return invoke<BOOL>(0x9A4E620BECF18D8A, p0, p1); } // 0xA134777FF7F33331 0x88B13CDC
	static void _0x113E6E3E50E286B0(Any p0) { invoke<Void>(0xB69B1846965CC1A5, p0); } // 0x113E6E3E50E286B0 0xD6E3D5EA
	static Any _0x9AA46BADAD0E27ED() { return invoke<Any>(0xBA63B561E67F7E56); } // 0x9AA46BADAD0E27ED 0xE22445DA
	static void _0x042E4B70B93E6054() { invoke<Void>(0xD01E6CA23FA20E86); } // 0x042E4B70B93E6054 0x455DDF5C
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xE7EA6923AE7BCE0F, p0, p1); } // 0xCE86D8191B762107 0x89DB0EC7
	static Any _0xB5074DB804E28CE7() { return invoke<Any>(0xD0D591A64894FF4D); } // 0xB5074DB804E28CE7 0xA4EF02F3
	static Any _0x5B4F04F19376A0BA() { return invoke<Any>(0x388F4DEBAE8A5FB4); } // 0x5B4F04F19376A0BA 0x068A054E
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xFE0CFC127E499FBB, p0, p1); } // 0xC080FF658B2E41DA 0x9B8631EB
	static void SET_NETWORK_ID_CAN_MIGRATE(Any p0, BOOL p1) { invoke<Void>(0xEFD6AB7E46D990EE, p0, p1); } // 0x299EEB23175895FC 0x47C8E5FF
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int NetID, BOOL DoesExist) { invoke<Void>(0x748B0DC6DACDF341, NetID, DoesExist); } // 0xE05E81A888FA63C8 0x68D486B2
	static void _0xA8A024587329F36A(int netID, _Player player, BOOL p2) { invoke<Void>(0x731472D13E83EB4E, netID, player, p2); } // 0xA8A024587329F36A 0x4D15FDB1
	static void NETWORK_SET_ENTITY_CAN_BLEND(Any p0, BOOL toggle) { invoke<Void>(0xFDCA2C6B35C87FBA, p0, toggle); } // 0xD830567D88A1E873 0xDE8C0DB8
	static void _0xF1CA12B18AEF5298(Any p0, BOOL p1) { invoke<Void>(0x8DB521D4465B4F80, p0, p1); } // 0xF1CA12B18AEF5298 0x09CBC4B0
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xA7F7ED1501684EA8, p0, p1, p2); } // 0xA6928482543022B4 0x199E75EF
	static void _0xAAA553E7DD28A457(BOOL p0) { invoke<Void>(0x5E74D9C6DBFBE6C5, p0); } // 0xAAA553E7DD28A457
	static void _0x3FA36981311FA4FF(Any p0, BOOL p1) { invoke<Void>(0x4A80B46F64C971CD, p0, p1); } // 0x3FA36981311FA4FF 0x00AE4E17
	static BOOL _0xA1607996431332DF(int netId) { return invoke<BOOL>(0x2042D9774DF3D324, netId); } // 0xA1607996431332DF 0xEA5176C0
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xB83D8731C188F55F, p0, p1); } // 0xD1065D68947E7B6E 0x59F3479B
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0x1D7224E7E81D1727, p0); } // 0xE5F773C1A1D9D168 0x764F6222
	static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0xAB282C4606901DCC, p0); } // 0x7619364C82D3BF14 0x324B56DB
	static void SET_PLAYER_INVISIBLE_LOCALLY(Any p0, BOOL p1) { invoke<Void>(0x3AE8A6CE50F72B57, p0, p1); } // 0x12B37D54667DB0B8 0x18227209
	static void SET_PLAYER_VISIBLE_LOCALLY(Any p0, BOOL p1) { invoke<Void>(0xA0C4A275434AA4FF, p0, p1); } // 0xFAA10F1FAFB11AF2 0xBA2BB4B4
	static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0x0B82F22B8E9EE07C, p0); } // 0x416DBD4CD6ED8DD2 0x8FA7CEBD
	static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0x3E5EC048A1245FD5, entity, p1, p2); } // 0xDE564951F95E09ED 0x47EDEE56
	static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL p1) { invoke<Void>(0x93399EEBD0090AD6, entity, p1); } // 0x1F4ED342ACEFE62D 0x9B9FCD02
	static BOOL _0x631DC5DFF4B110E3(Any p0) { return invoke<BOOL>(0xED684F7CE195F913, p0); } // 0x631DC5DFF4B110E3
	static BOOL _0x422F32CC7E56ABAD(Any p0) { return invoke<BOOL>(0x63EC60556AC9F739, p0); } // 0x422F32CC7E56ABAD
	static BOOL IS_PLAYER_IN_CUTSCENE(_Player player) { return invoke<BOOL>(0x77A44752A079AAB3, player); } // 0xE73092F4157CD126 0xE0A619BD
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD6044A2427C913F4, p0, p1, p2); } // 0xE0031D3C8F36AB82 0xDBFB067B
	static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0x3A033ABB1D48E781, entity); } // 0xE135A9FF3F5D05D8 0x51ADCC5F
	static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0xFB46942295643570, entity); } // 0x241E289B5C059EDC 0x235A57B3
	static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0x56B1540F9EC5F812, netID); } // 0x6E192E33AD436366 0x597063BA
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL p1) { invoke<Void>(0xDDA2B67F3860CB4F, netID, p1); } // 0xD45B1FFCCD52FF19 0x95D07BA5
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x9CC24B83BC45E6FF, p0, p1, p2, p3); } // 0xD82CF8E64C8729D8 0x23C5274E
	static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x1B882D0481F52988, p0, p1, p2, p3, p4); } // 0xDC3A310219E5DA62 0xE9FCFB32
	static void RESERVE_NETWORK_MISSION_OBJECTS(Any p0) { invoke<Void>(0x861EA6260F5D252A, p0); } // 0x4E5C93BD0C32FBF8 0x391DF4F3
	static void RESERVE_NETWORK_MISSION_PEDS(Any p0) { invoke<Void>(0xF2797029E839595C, p0); } // 0xB60FEBA45333D36F 0x54998C37
	static void RESERVE_NETWORK_MISSION_VEHICLES(Any p0) { invoke<Void>(0x23DFD22869618226, p0); } // 0x76B02E21ED27A469 0x5062875E
	static BOOL CAN_REGISTER_MISSION_OBJECTS(Any p0) { return invoke<BOOL>(0x3F3BAB8BAD281B17, p0); } // 0x800DD4721A8B008B 0x7F85DFDE
	static BOOL CAN_REGISTER_MISSION_PEDS(Any p0) { return invoke<BOOL>(0x0C863D3ED919983C, p0); } // 0xBCBF4FEF9FA5D781 0xCCAA5CE9
	static BOOL CAN_REGISTER_MISSION_VEHICLES(Any p0) { return invoke<BOOL>(0xD28B39973EB5D6B4, p0); } // 0x7277F1F2E085EE74 0x818B6830
	static BOOL CAN_REGISTER_MISSION_ENTITIES(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x420841F5621E7397, p0, p1, p2, p3); } // 0x69778E7564BADE6D 0x83794008
	static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xD647AEF519458F05, p0); } // 0xAA81B5F10BC43AC2 0x16A80CD6
	static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0) { return invoke<int>(0x12FCC59A8F519B65, p0); } // 0x1F13D5AE5CB17E17 0x6C25975C
	static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0x6A3DEBF89FDFEB17, p0); } // 0xCF3A965906452031 0xA9A308F3
	static Any _0x12B6281B6C6706C0(BOOL p0) { return invoke<Any>(0x2386AB69D23DE0C4, p0); } // 0x12B6281B6C6706C0 0x603FA104
	static Any _0xCB215C4B56A7FAE7(BOOL p0) { return invoke<Any>(0x6A8543D72105975A, p0); } // 0xCB215C4B56A7FAE7 0xD8FEC4F8
	static Any _0x0CD9AB83489430EA(BOOL p0) { return invoke<Any>(0xF9B4BEDB78277D56, p0); } // 0x0CD9AB83489430EA 0x20527695
	static Any _0xC7BE335216B5EC7C() { return invoke<Any>(0x14447AD5275C125E); } // 0xC7BE335216B5EC7C 0x8687E285
	static Any _0x0C1F7D49C39D2289() { return invoke<Any>(0xF35BF3071D66A53D); } // 0x0C1F7D49C39D2289 0x744AC008
	static Any _0x0AFCE529F69B21FF() { return invoke<Any>(0x70ABFEE37A521CA1); } // 0x0AFCE529F69B21FF 0xC3A12135
	static Any _0xA72835064DD63E4C() { return invoke<Any>(0xBF1912F59558B1D8); } // 0xA72835064DD63E4C 0x6A036061
	static int GET_NETWORK_TIME() { return invoke<int>(0x4B50AAB32FBE0483); } // 0x7A5487FE9FAA6B48 0x998103C2
	static Any _0x89023FBBF9200E9F() { return invoke<Any>(0xB3FCCA0C64473451); } // 0x89023FBBF9200E9F 0x98AA48E5
	static Any _0x46718ACEEDEAFC84() { return invoke<Any>(0x54F6D19A69E959DB); } // 0x46718ACEEDEAFC84 0x4538C4A2
	static int GET_TIME_OFFSET(int a, int b) { return invoke<int>(0x992BA56254396683, a, b); } // 0x017008CCDAD48503 0x2E079AE6
	static BOOL _SUBTRACT_B_FROM_A_AND_CHECK_IF_NEGATIVE(int a, int b) { return invoke<BOOL>(0xC099AB04552E978B, a, b); } // 0xCB2CF5148012C8D0 0x50EF8FC6
	static BOOL _SUBTRACT_A_FROM_B_AND_CHECK_IF_NEGATIVE(int a, int b) { return invoke<BOOL>(0x91F80F771D9795C5, a, b); } // 0xDE350F8651E4346C 0xBBB6DF61
	static int _ARE_INTEGERS_EQUAL(int a, int b) { return invoke<int>(0xF4800D7B15190894, a, b); } // 0xF5BC95857BD6D512 0x8B4D1C06
	static int GET_TIME_DIFFERENCE(int a, int b) { return invoke<int>(0xDDEA1623E4BFD71B, a, b); } // 0xA2C6FC031D46FFF0 0x5666A837
	static char* _FORMAT_TIME(int time) { return invoke<char*>(0x7CF1B0838C54E5E8, time); } // 0x9E23B1777A927DAD 0x8218944E
	static int _GET_POSIX_TIME() { return invoke<int>(0x39E54E7BC7452169); } // 0x9A73240B49945C76 0xF2FDF2E0
	static void _GET_DATE_AND_TIME_FROM_UNIX_EPOCH(int unixEpoch, Any* timeStructure) { invoke<Void>(0x9962203F85B21CA5, unixEpoch, timeStructure); } // 0xAC97AF97FA68E5D5 0xBB7CCE49
	static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL p0, Any p1) { invoke<Void>(0xF2574D9F8B5159B8, p0, p1); } // 0x423DE3854BB50894 0x5C4C8458
	static void _0x419594E137637120(BOOL p0, Any p1, BOOL p2) { invoke<Void>(0x3754868039CBCDA6, p0, p1, p2); } // 0x419594E137637120 0x54058F5F
	static void _0xFC18DB55AE19E046(BOOL p0) { invoke<Void>(0x7CC0A7FC363E51CB, p0); } // 0xFC18DB55AE19E046 0xA7E36020
	static void _0x5C707A667DF8B9FA(BOOL p0, Any p1) { invoke<Void>(0x11EF1A9E2DA189ED, p0, p1); } // 0x5C707A667DF8B9FA 0x64235620
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0x1FE227B71FE815EC); } // 0x048746E388762E11 0x3EAD9DB8
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0x3E2462666E08F4C9, p0, p1); } // 0x9CA5DE655269FEC4 0x8434CB43
	static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0xA012E3A84A2B2F1A); } // 0x6CC27C9FA2040220 0x4BB33316
	static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(_Player player) { return invoke<BOOL>(0xAADF264238014E81, player); } // 0x63F9EE203C3619F2 0x56F961E4
	static void SET_NETWORK_VEHICLE_RESPOT_TIMER(Any p0, Any p1) { invoke<Void>(0x1AE7B5D8C06B0277, p0, p1); } // 0xEC51713AB6EC36E8 0x2C30912D
	static void _0x6274C4712850841E(Any p0, BOOL p1) { invoke<Void>(0x16AA9C658BD84397, p0, p1); } // 0x6274C4712850841E 0xEA235081
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0x9066E5B82BC6B02C, toggle); } // 0x5FFE9B4144F9712F 0x4DD46DAE
	static BOOL _0x21D04D7BC538C146(Any p0) { return invoke<BOOL>(0x9792E83A415B1434, p0); } // 0x21D04D7BC538C146
	static void _0x77758139EC9B66C7(BOOL p0) { invoke<Void>(0x8C6C7E8C41FB5A9D, p0); } // 0x77758139EC9B66C7
	static Any NETWORK_CREATE_SYNCHRONISED_SCENE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0xEB30FF1DBE2A8B1E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7CD6BC4C2BBDD526 0xB06FE3FE
	static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Any p0, Any p1, Any* p2, Any* p3, float p4, float p5, Any p6, Any p7, float p8, Any p9) { invoke<Void>(0xBE7F8D6FC34B9646, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x742A637471BCECD9 0xB386713E
	static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Any p0, Any p1, Any* p2, Any* p3, float p4, float p5, Any p6) { invoke<Void>(0x8DDAEFC9296CFD12, p0, p1, p2, p3, p4, p5, p6); } // 0xF2404D68CBC855FA 0x10DD636C
	static void _0xCF8BD3B0BD6D42D7(Any p0, Any* p1, Any* p2) { invoke<Void>(0x6AB59A33A97788CC, p0, p1, p2); } // 0xCF8BD3B0BD6D42D7 0xBFFE8B5C
	static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0xAD3E1D35A49F08F3, p0, p1, p2); } // 0x478DCBD2A98B705A 0x3FE5B222
	static void NETWORK_START_SYNCHRONISED_SCENE(Any p0) { invoke<Void>(0xB83A243EE68452E6, p0); } // 0x9A1B3FCDB36C8697 0xA9DFDC40
	static void NETWORK_STOP_SYNCHRONISED_SCENE(Any p0) { invoke<Void>(0x5841FC4CB598D781, p0); } // 0xC254481A4574CB2F 0x97B1CDF6
	static Any _0x02C40BF885C567B6(Any p0) { return invoke<Any>(0x7E968231FBCD5712, p0); } // 0x02C40BF885C567B6 0x16AED87B
	static void _0xC9B43A33D09CADA7(Any p0) { invoke<Void>(0x4274598A2020D714, p0); } // 0xC9B43A33D09CADA7
	static Any _0xFB1F9381E80FA13F(Any p0, Any p1) { return invoke<Any>(0x4C925BD262106A27, p0, p1); } // 0xFB1F9381E80FA13F 0x0679CE71
	static BOOL _0x5A6FFA2433E2F14C(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { return invoke<BOOL>(0x0DE79F7115B066B5, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x5A6FFA2433E2F14C 0xC62E77B3
	static BOOL _0x4BA92A18502BCA61(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, Any p11) { return invoke<BOOL>(0xFA59F0132C359136, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x4BA92A18502BCA61 0x74D6B13C
	static Any _0x3C891A251567DFCE(Any* p0) { return invoke<Any>(0x0F504DBF486342DE, p0); } // 0x3C891A251567DFCE 0x90700C7D
	static void _0xFB8F2A6F3DF08CBE() { invoke<Void>(0x58F8817BD61C43C0); } // 0xFB8F2A6F3DF08CBE 0x44BFB619
	static void NETWORK_GET_RESPAWN_RESULT(Any p0, int* p1, int* p2) { invoke<Void>(0x6978871734C62314, p0, p1, p2); } // 0x371EA43692861CF1 0xDDFE9FBC
	static Any _0x6C34F1208B8923FD(Any p0) { return invoke<Any>(0xDE715EE1001849E6, p0); } // 0x6C34F1208B8923FD 0x03287FD2
	static void _0x17E0198B3882C2CB() { invoke<Void>(0x4A5BF72D6219B5E2); } // 0x17E0198B3882C2CB 0x408A9436
	static void _0xFB680D403909DC70(Any p0, Any p1) { invoke<Void>(0xBE612A05D7409D87, p0, p1); } // 0xFB680D403909DC70 0xFFB2ADA1
	static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xBA257C434C60E241); } // 0xD0AFAFF5A51D72F7 0xBA57E53E
	static Any NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<Any>(0x8188FDE7090D3AF6); } // 0xADA24309FE08DACF 0x34DD7B28
	static Any _0xB37E4E6A2388CA7B() { return invoke<Any>(0xDC0649ED9D278F95); } // 0xB37E4E6A2388CA7B 0x755A2B3E
	static Any _0x35F0B98A8387274D() { return invoke<Any>(0x7437A5536711AE6C); } // 0x35F0B98A8387274D 0xA003C40B
	static Any _0x3B39236746714134(Any p0) { return invoke<Any>(0xA14AD80F3ADC58B7, p0); } // 0x3B39236746714134 0x5E1020CC
	static BOOL _0x9DE986FC9A87C474(Any p0, Any p1) { return invoke<BOOL>(0x0C67E8DCA323B26C, p0, p1); } // 0x9DE986FC9A87C474 0xE66A0B40
	static void _0xBBDF066252829606(Any p0, BOOL p1) { invoke<Void>(0xC8C7FBE3099F31C8, p0, p1); } // 0xBBDF066252829606 0x72052DB3
	static BOOL _0x919B3C98ED8292F9(Any p0) { return invoke<BOOL>(0xE4546050B122CD2A, p0); } // 0x919B3C98ED8292F9 0xB0313590
	static void NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { invoke<Void>(0xE696B2ED0A88B548, Hours, Minutes, Seconds); } // 0xE679E3E06E363892 0xC077BCD6
	static void _0xD972DF67326F966E() { invoke<Void>(0x6A053E57415F1C4F); } // 0xD972DF67326F966E 0xC4AEAF49
	static Any _0xD7C95D322FF57522() { return invoke<Any>(0x924533C269AA0190); } // 0xD7C95D322FF57522 0x2465296D
	static Any NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x3052C239D724043B, p0, p1, p2, p3, p4, p5); } // 0x494C8FB299290269 0x51030E5B
	static Any _0x376C6375BA60293A(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0xE2E61DFDA4284DC7, p0, p1, p2, p3, p4, p5, p6); } // 0x376C6375BA60293A
	static Any _0x25B99872D588A101(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x821FC819559DD7F2, p0, p1, p2, p3, p4, p5); } // 0x25B99872D588A101 0x4C2C2B12
	static BOOL NETWORK_REMOVE_ENTITY_AREA(Any p0) { return invoke<BOOL>(0xEADC755C72CA1A07, p0); } // 0x93CF869BAA0C4874 0xEAB97F25
	static BOOL _0xE64A3CA08DFA37A9(Any p0) { return invoke<BOOL>(0xD4F93C8B74AF0B32, p0); } // 0xE64A3CA08DFA37A9 0x69956127
	static BOOL _0x4DF7CFFF471A7FB1(Any p0) { return invoke<BOOL>(0xB78A2BE8140860EB, p0); } // 0x4DF7CFFF471A7FB1 0xCB1CD6D3
	static BOOL _0x4A2D4E8BF4265B0F(Any p0) { return invoke<BOOL>(0x670DD68CBB8CD4D0, p0); } // 0x4A2D4E8BF4265B0F 0xC6D53AA0
	static void _0x2B1813ABA29016C5(Any p0, BOOL p1) { invoke<Void>(0x3F89C3F9EE5B7F99, p0, p1); } // 0x2B1813ABA29016C5 0x155465EE
	static BOOL _DOWNLOAD_BG_SCRIPT_RPF() { return invoke<BOOL>(0x3B4BACBCFD683215); } // 0x924426BFFD82E915 0x29532731
	static BOOL _HAS_BG_SCRIPT_BEEN_DOWNLOADED() { return invoke<BOOL>(0x005C894ED34250AD); } // 0x8132C0EB8B2B3293
	static void _DOWNLOAD_TUNABLES() { invoke<Void>(0x5C25F4CE2BFBA403); } // 0x42FB3B532D526E6C 0xD760CAD5
	static BOOL _HAS_TUNABLES_BEEN_DOWNLOADED() { return invoke<BOOL>(0xAEECC9DAFCB41E47); } // 0x0467C11ED88B7D28
	static Any _0x10BD227A753B0D84() { return invoke<Any>(0x90FCAC8048C0349B); } // 0x10BD227A753B0D84 0x231CFD12
	static BOOL NETWORK_DOES_TUNABLE_EXIST(char* tunableContext, char* tunableName) { return invoke<BOOL>(0x361AA9B62AE4A832, tunableContext, tunableName); } // 0x85E5F8B9B898B20A 0x9FCE9C9A
	static BOOL NETWORK_ACCESS_TUNABLE_INT(char* tunableContext, char* tunableName, int* value) { return invoke<BOOL>(0x75BC13983FA9C99F, tunableContext, tunableName, value); } // 0x8BE1146DFD5D4468 0xE4B3726A
	static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(char* tunableContext, char* tunableName, float* value) { return invoke<BOOL>(0xD43A52264EC5C764, tunableContext, tunableName, value); } // 0xE5608CA7BC163A5F 0x41E8912A
	static BOOL NETWORK_ACCESS_TUNABLE_BOOL(char* tunableContext, char* tunableName) { return invoke<BOOL>(0x3C1935030A0354A4, tunableContext, tunableName); } // 0xAA6A47A573ABB75A 0x8A04E1FE
	static BOOL _NETWORK_DOES_TUNABLE_EXIST_HASH(Hash TunbaleContext, Hash TunableName) { return invoke<BOOL>(0x0C2DCC62FC52D021, TunbaleContext, TunableName); } // 0xE4E53E1419D81127
	static BOOL _NETWORK_ACCESS_TUNABLE_INT_HASH(Hash TunableContext, Hash TunableNameHash, int* OutputVal) { return invoke<BOOL>(0x539837BA2DE63D09, TunableContext, TunableNameHash, OutputVal); } // 0x40FCE03E50E8DBE8
	static BOOL _NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash TunableContext, Hash TunableName, float* OutputVal) { return invoke<BOOL>(0x202518489D5341FE, TunableContext, TunableName, OutputVal); } // 0x972BC203BBC4C4D5
	static BOOL _NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash TunableContext, Hash TunableName) { return invoke<BOOL>(0x2E9AF0C034615F70, TunableContext, TunableName); } // 0xEA16B69D93D71A45
	static BOOL _NETWORK_ACCESS_TUNABLE_BOOL_HASH_FAIL_VAL(Hash TunableContext, Hash TunableName, BOOL ReturnVal) { return invoke<BOOL>(0x5C463D978CCECDEB, TunableContext, TunableName, ReturnVal); } // 0xC7420099936CE286
	static BOOL _0x187382F8A3E0A6C3(Hash p0) { return invoke<BOOL>(0x9C63FAC13921634C, p0); } // 0x187382F8A3E0A6C3 0xA78571CA
	static Any _0x7DB53B37A2F211A0() { return invoke<Any>(0x90E28CEE99A31278); } // 0x7DB53B37A2F211A0 0x053BB329
	static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xDA7BAA796A26B32E); } // 0x72433699B4E6DD64 0x3914463F
	static Any _0xD38C4A6D047C019D() { return invoke<Any>(0x6C7B1D05745DBE05); } // 0xD38C4A6D047C019D 0x17CBC608
	static BOOL _0x2E0BF682CC778D49(Any p0) { return invoke<BOOL>(0xC7F3D64426332947, p0); } // 0x2E0BF682CC778D49 0xBFAA349B
	static BOOL _0x0EDE326D47CD0F3E(Any p0, Any p1) { return invoke<BOOL>(0x0E187494DAEAA6BC, p0, p1); } // 0x0EDE326D47CD0F3E 0xBEB7281A
	static Any NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<Any>(0x8286505D1FF300DC, vehicle, p1, p2, p3); } // 0x301A42153C9AD707 0x0E1B38AE
	static void _0xCD71A4ECAB22709E(Any p0) { invoke<Void>(0xB9C3C673F42D98E5, p0); } // 0xCD71A4ECAB22709E 0xBC54371B
	static void _0xA7E30DE9272B6D49(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xDC08997828A8C907, p0, p1, p2, p3, p4); } // 0xA7E30DE9272B6D49 0x644141C5
	static void _0x407091CF6037118E(Any p0) { invoke<Void>(0x923950E92F2F1031, p0); } // 0x407091CF6037118E
	static void NETWORK_SET_PROPERTY_ID(Any p0) { invoke<Void>(0xC6EC0E0461BC1479, p0); } // 0x1775961C2FBBCB5C 0x5A74E873
	static void _0xC2B82527CA77053E() { invoke<Void>(0x611DDD410D93D738); } // 0xC2B82527CA77053E 0x38BC35C8
	static void _0x367EF5E2F439B4C6(Any p0) { invoke<Void>(0xDE81604B550B9417, p0); } // 0x367EF5E2F439B4C6 0x53C9563C
	static void _0x94538037EE44F5CF(BOOL p0) { invoke<Void>(0x1DD3155F57E1CCBE, p0); } // 0x94538037EE44F5CF 0x6B97075B
	static void _0xBD0BE0BFC927EAC1() { invoke<Void>(0xD4DD8C44B5C2773E); } // 0xBD0BE0BFC927EAC1
	static BOOL _0x237D5336A9A54108(Any p0) { return invoke<BOOL>(0x96FC0822DD907EF4, p0); } // 0x237D5336A9A54108
	static BOOL _0x99B72C7ABDE5C910(Any p0, Any p1) { return invoke<BOOL>(0x3D7C7FC35D7A3214, p0, p1); } // 0x99B72C7ABDE5C910
	static Any _0xF2EAC213D5EA0623() { return invoke<Any>(0x0F7A479DC8FCDFA7); } // 0xF2EAC213D5EA0623 0x965EA007
	static Any _0xEA14EEF5B7CD2C30() { return invoke<Any>(0xAB3373AF5A1939EB); } // 0xEA14EEF5B7CD2C30 0xEEFC8A55
	static void _0xB606E6CC59664972(Any p0) { invoke<Void>(0x1900A81361444272, p0); } // 0xB606E6CC59664972 0x866D1B67
	static Any _0x1D4DC17C38FEAFF0() { return invoke<Any>(0x9512BBEA0BE8DEB1); } // 0x1D4DC17C38FEAFF0 0xED4A272F
	static Any _0x662635855957C411(Any p0) { return invoke<Any>(0x1A823CE598BF6C6D, p0); } // 0x662635855957C411 0x4ACF110C
	static Any _0xB4271092CA7EDF48(Any p0) { return invoke<Any>(0x822C7E43E912D372, p0); } // 0xB4271092CA7EDF48 0x1AA3A0D5
	static Any _0xCA94551B50B4932C(Any p0) { return invoke<Any>(0x4FF288DE2AAC333E, p0); } // 0xCA94551B50B4932C 0x37877757
	static Any _0x2A7776C709904AB0(Any p0) { return invoke<Any>(0xED8F768E798292DA, p0); } // 0x2A7776C709904AB0 0x1CF89DA5
	static Any _0x6F44CBF56D79FAC0(Any p0, Any p1) { return invoke<Any>(0x7FB75418F6F2EB60, p0, p1); } // 0x6F44CBF56D79FAC0 0x16E53875
	static void _0x58C21165F6545892(Any p0, Any p1) { invoke<Void>(0x0D4487CC36687472, p0, p1); } // 0x58C21165F6545892 0x365C50EE
	static Any _0x2EAC52B4019E2782() { return invoke<Any>(0x0BC39FA2C6867467); } // 0x2EAC52B4019E2782 0x25E2DBA9
	static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0xFBDF13753A19A025, toggle); } // 0x9641A9FF718E9C5E 0xC1F6443B
	static BOOL _0xA2F952104FC6DD4B(Any p0) { return invoke<BOOL>(0xC05EA621298CCA6C, p0); } // 0xA2F952104FC6DD4B 0x1FDC75DC
	static void _0x72D0706CD6CCDB58() { invoke<Void>(0xAFC1EEB15BB70231); } // 0x72D0706CD6CCDB58 0xCA7A0A49
	static Any _0x722F5D28B61C5EA8(Any p0) { return invoke<Any>(0x43EA5DE9F49613F3, p0); } // 0x722F5D28B61C5EA8 0x44A58B0A
	static Any _0x883D79C4071E18B3() { return invoke<Any>(0xA91462D80D70B1FD); } // 0x883D79C4071E18B3 0xD32FA11F
	static void _0x265635150FB0D82E() { invoke<Void>(0x28EF55C18F8ACF7C); } // 0x265635150FB0D82E 0xA7FA70AE
	static void _0x444C4525ECE0A4B9() { invoke<Void>(0xDEEEF960A91DCB9F); } // 0x444C4525ECE0A4B9 0xCC7DCE24
	static Any _0x59328EB08C5CEB2B() { return invoke<Any>(0x36A1474CF562DEFF); } // 0x59328EB08C5CEB2B 0x70F6D3AD
	static void _0xFAE628F1E9ADB239(Any p0, Any p1, Any p2) { invoke<Void>(0xBD42D851F02F1E97, p0, p1, p2); } // 0xFAE628F1E9ADB239
	static Any _0xC64DED7EF0D2FE37(Any* p0) { return invoke<Any>(0x5E3F98A6908591A4, p0); } // 0xC64DED7EF0D2FE37 0x2B7B57B3
	static BOOL _0x4C61B39930D045DA(Any p0) { return invoke<BOOL>(0xCFD528EC9DC8FEF3, p0); } // 0x4C61B39930D045DA 0xBAF52DD8
	static BOOL _0x3A3D5568AF297CD5(Any p0) { return invoke<BOOL>(0x0582CC04BF2C7DB2, p0); } // 0x3A3D5568AF297CD5 0x9B9AFFF1
	static void _0x4F18196C8D38768D() { invoke<Void>(0x49F2F6D54AEA36AC); } // 0x4F18196C8D38768D 0xC38E9DB0
	static Any _0xC7ABAC5DE675EE3B() { return invoke<Any>(0x3F3C06127C29B16F); } // 0xC7ABAC5DE675EE3B 0x32A4EB22
	static Any _0x0B0CC10720653F3B() { return invoke<Any>(0x63B284C60AE6410E); } // 0x0B0CC10720653F3B 0x9262744C
	static Any _0x8B0C2964BA471961() { return invoke<Any>(0xF956D746C38B40FC); } // 0x8B0C2964BA471961
	static Any _0x88B588B41FF7868E() { return invoke<Any>(0xDB3A9C63F912AF0E); } // 0x88B588B41FF7868E
	static Any _0x67FC09BC554A75E5() { return invoke<Any>(0xCFCF11B915F75612); } // 0x67FC09BC554A75E5
	static void _0x966DD84FB6A46017() { invoke<Void>(0xC7A62D2246F251AC); } // 0x966DD84FB6A46017
	static BOOL _0x152D90E4C1B4738A(Any* p0, Any* p1) { return invoke<BOOL>(0xBA79CCCEE1CB2090, p0, p1); } // 0x152D90E4C1B4738A 0x08243B79
	static Any _0x9FEDF86898F100E9() { return invoke<Any>(0x9B324019DACBD409); } // 0x9FEDF86898F100E9 0x798D6C27
	static Any _0x5E24341A7F92A74B() { return invoke<Any>(0x183062053E637E27); } // 0x5E24341A7F92A74B 0xE69E8D0D
	static Any _0x24E4E51FC16305F9() { return invoke<Any>(0x3630258CB93DE945); } // 0x24E4E51FC16305F9 0x742075FE
	static Any _0xFBC5E768C7A77A6A() { return invoke<Any>(0x66AE1F49282330B6); } // 0xFBC5E768C7A77A6A 0xCE569932
	static Any _0xC55A0B40FFB1ED23() { return invoke<Any>(0xD705F5B65B682D1D); } // 0xC55A0B40FFB1ED23 0x82146BE9
	static void _0x17440AA15D1D3739() { invoke<Void>(0xFCF3EBAA04BE7084); } // 0x17440AA15D1D3739 0x133FF2D5
	static BOOL _0x9BF438815F5D96EA(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x8E7A97C67D279194, p0, p1, p2, p3, p4, p5); } // 0x9BF438815F5D96EA 0xCBA7242F
	static BOOL _0x692D58DF40657E8C(Any p0, Any p1, Any p2, Any* p3, Any p4, BOOL p5) { return invoke<BOOL>(0xEBEC95B74FAFB44E, p0, p1, p2, p3, p4, p5); } // 0x692D58DF40657E8C
	static BOOL _0x158EC424F35EC469(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x4320BB821F0F53C3, p0, p1, p2); } // 0x158EC424F35EC469 0xDED82A6E
	static BOOL _0xC7397A83F7A2A462(Any* p0, Any p1, BOOL p2, Any* p3) { return invoke<BOOL>(0x2633BC3DB8BCCB08, p0, p1, p2, p3); } // 0xC7397A83F7A2A462
	static BOOL _0x6D4CB481FAC835E8(Any p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0x043F0ABCB3BCCD49, p0, p1, p2, p3); } // 0x6D4CB481FAC835E8 0x40CF0783
	static BOOL _0xD5A4B59980401588(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xAF456E73CD4DF9BC, p0, p1, p2, p3); } // 0xD5A4B59980401588 0x4609D596
	static BOOL _0x3195F8DD0D531052(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x1EF94C07B759C947, p0, p1, p2, p3); } // 0x3195F8DD0D531052 0x4C2C0D1F
	static BOOL _0xF9E1CCAE8BA4C281(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xD6F6DCAF501E402D, p0, p1, p2, p3); } // 0xF9E1CCAE8BA4C281 0x9EFBD5D1
	static BOOL _0x9F6E2821885CAEE2(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0x760C60D5751C5C11, p0, p1, p2, p3, p4); } // 0x9F6E2821885CAEE2 0xA6D8B798
	static BOOL _0x678BB03C1A3BD51E(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0x1CC58EC7183962C9, p0, p1, p2, p3, p4); } // 0x678BB03C1A3BD51E 0x67E74842
	static BOOL SET_BALANCE_ADD_MACHINE(Any* p0, Any* p1) { return invoke<BOOL>(0x3A3B8CD86B79B0ED, p0, p1); } // 0x815E5E3073DA1D67 0xE123C7AC
	static BOOL SET_BALANCE_ADD_MACHINES(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xE91C886B0A161DC7, p0, p1, p2); } // 0xB8322EEB38BE7C26 0x22C33603
	static BOOL _0xA7862BC5ED1DFD7E(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x2D5CBD0474819681, p0, p1, p2, p3); } // 0xA7862BC5ED1DFD7E 0x37F5BD93
	static BOOL _0x97A770BEEF227E2B(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x876E827080925AC5, p0, p1, p2, p3); } // 0x97A770BEEF227E2B 0x1CFB3F51
	static BOOL _0x5324A0E3E4CE3570(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x44312EB78CFC8DE3, p0, p1, p2, p3); } // 0x5324A0E3E4CE3570 0x87D1E6BD
	static void _0xE9B99B6853181409() { invoke<Void>(0x78AFEDC00709B71B); } // 0xE9B99B6853181409 0x021D5A94
	static Any _0xD53ACDBEF24A46E8() { return invoke<Any>(0x1FECB4AE5F7268BD); } // 0xD53ACDBEF24A46E8 0x4908A514
	static Any _0x02ADA21EA2F6918F() { return invoke<Any>(0x161DD964F13BF7F6); } // 0x02ADA21EA2F6918F 0x50296140
	static Any _0x941E5306BCD7C2C7() { return invoke<Any>(0xEA8C30A26FD38881); } // 0x941E5306BCD7C2C7 0x3970B0DA
	static Any _0xC87E740D9F3872CC() { return invoke<Any>(0x458489D68557DF0E); } // 0xC87E740D9F3872CC 0xC1487110
	static Any _0xEDF7F927136C224B() { return invoke<Any>(0xA776300BA6E5DD85); } // 0xEDF7F927136C224B 0xCC2356E3
	static Any _0xE0A6138401BCB837() { return invoke<Any>(0xFC067E57AE592CE2); } // 0xE0A6138401BCB837 0x2DE69817
	static Any _0x769951E2455E2EB5() { return invoke<Any>(0xACDA8466E6723D2B); } // 0x769951E2455E2EB5 0x81BD8D3B
	static Any _0x3A17A27D75C74887() { return invoke<Any>(0xAB12739B6088F34F); } // 0x3A17A27D75C74887 0x8E1D8F78
	static void _0xBA96394A0EECFA65() { invoke<Void>(0x656D1CB3A84ACE6B); } // 0xBA96394A0EECFA65 0x0D35DD93
	static Any _0xCD67AD041A394C9C(Any p0) { return invoke<Any>(0x3EA5DFB8CC193277, p0); } // 0xCD67AD041A394C9C 0x8F3137E6
	static BOOL _0x584770794D758C18(Any p0, Any* p1) { return invoke<BOOL>(0x0C91F6E546095BE6, p0, p1); } // 0x584770794D758C18
	static BOOL _0x8C8D2739BA44AF0F(Any p0) { return invoke<BOOL>(0xB26C2302EE729129, p0); } // 0x8C8D2739BA44AF0F
	static Any _0x703F12425ECA8BF5(Any p0) { return invoke<Any>(0x3A10831BB06988C2, p0); } // 0x703F12425ECA8BF5 0xB9137BA7
	static BOOL _0xAEAB987727C5A8A4(Any p0) { return invoke<BOOL>(0x90872B305F675E85, p0); } // 0xAEAB987727C5A8A4 0x9FEEAA9C
	static Any _0xA7BAB11E7C9C6C5A(Any p0) { return invoke<Any>(0xE309CC7AB7625FA6, p0); } // 0xA7BAB11E7C9C6C5A 0x5E8A7559
	static Any _0x55AA95F481D694D2(Any p0) { return invoke<Any>(0x9D31BF793B85169E, p0); } // 0x55AA95F481D694D2 0x331AEABF
	static Any _0xC0173D6BFF4E0348(Any p0) { return invoke<Any>(0x17E10681B09838B7, p0); } // 0xC0173D6BFF4E0348 0x0E5E8E5C
	static Any _0xBF09786A7FCAB582(Any p0) { return invoke<Any>(0x36B72F8AF752C1F3, p0); } // 0xBF09786A7FCAB582 0xA5A0C695
	static Any _0x7CF0448787B23758(Any p0) { return invoke<Any>(0xF6D1A660E8025778, p0); } // 0x7CF0448787B23758 0x91534C6E
	static Any _0xBAF6BABF9E7CCC13(Any p0, Any p1) { return invoke<Any>(0x8622F1C69F2AFFC2, p0, p1); } // 0xBAF6BABF9E7CCC13 0x744A9EA5
	static void _0xCFD115B373C0DF63(Any p0, Any* p1) { invoke<Void>(0xC50C66B50D75783C, p0, p1); } // 0xCFD115B373C0DF63 0xA19A238D
	static Any _0x37025B27D9B658B1(Any p0, Any p1) { return invoke<Any>(0x3381AB4606CD8164, p0, p1); } // 0x37025B27D9B658B1 0xFF7D44E6
	static BOOL _0x1D610EB0FEA716D9(Any p0) { return invoke<BOOL>(0x0FBB80E81582BC6B, p0); } // 0x1D610EB0FEA716D9
	static BOOL _0x7FCC39C46C3C03BD(Any p0) { return invoke<BOOL>(0x460A32A2E05C0209, p0); } // 0x7FCC39C46C3C03BD
	static Any _0x32DD916F3F7C9672(Any p0) { return invoke<Any>(0xB619CECF18FA6B00, p0); } // 0x32DD916F3F7C9672 0xA2C5BD9D
	static BOOL _0x3054F114121C21EA(Any p0) { return invoke<BOOL>(0xFB8721978BAEE721, p0); } // 0x3054F114121C21EA 0xA850DDE1
	static BOOL _0xA9240A96C74CCA13(Any p0) { return invoke<BOOL>(0xC896CF95141F38A2, p0); } // 0xA9240A96C74CCA13 0x8F6754AE
	static Any _0x1ACCFBA3D8DAB2EE(Any p0, Any p1) { return invoke<Any>(0xC09BFD51C1B64460, p0, p1); } // 0x1ACCFBA3D8DAB2EE 0x1E34953F
	static Any _0x759299C5BB31D2A9(Any p0, Any p1) { return invoke<Any>(0x019EBCC5545E343E, p0, p1); } // 0x759299C5BB31D2A9 0x771FE190
	static Any _0x87E5C46C187FE0AE(Any p0, Any p1) { return invoke<Any>(0xEB0A2EC9E0CF2246, p0, p1); } // 0x87E5C46C187FE0AE 0x3276D9D3
	static Any _0x4E548C0D7AE39FF9(Any p0, Any p1) { return invoke<Any>(0x564B5FE1D4129D47, p0, p1); } // 0x4E548C0D7AE39FF9 0x41A0FB02
	static BOOL _0x70EA8DA57840F9BE(Any p0) { return invoke<BOOL>(0x48D11B635E2B710D, p0); } // 0x70EA8DA57840F9BE 0x11DC0F27
	static BOOL _0x993CBE59D350D225(Any p0) { return invoke<BOOL>(0x60336C3CEF6AD6FD, p0); } // 0x993CBE59D350D225 0x0DEB3F5A
	static Any _0x171DF6A0C07FB3DC(Any p0, Any p1) { return invoke<Any>(0x171DF6A0C07FB3DC, p0, p1); } // 0x171DF6A0C07FB3DC 0x84315226
	static Any _0x7FD2990AF016795E(Any* p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x7FD2990AF016795E, p0, p1, p2, p3, p4); } // 0x7FD2990AF016795E 0x38FC2EEB
	static Any _0x5E0165278F6339EE(Any p0) { return invoke<Any>(0x047FF1AA6420E1DD, p0); } // 0x5E0165278F6339EE 0x1C4F9FDB
	static BOOL _0x2D5DC831176D0114(Any p0) { return invoke<BOOL>(0xF3ECDE622371E61D, p0); } // 0x2D5DC831176D0114 0xA69AE16C
	static BOOL _0xEBFA8D50ADDC54C4(Any p0) { return invoke<BOOL>(0x91FB8BE2C3E39CAF, p0); } // 0xEBFA8D50ADDC54C4 0xF50BC67A
	static BOOL _0x162C23CA83ED0A62(Any p0) { return invoke<BOOL>(0xD5FE5625EE005F2E, p0); } // 0x162C23CA83ED0A62 0xB3BBD241
	static Any _0x40F7E66472DF3E5C(Any p0, Any p1) { return invoke<Any>(0xC9755BB889515B3E, p0, p1); } // 0x40F7E66472DF3E5C 0x70A2845C
	static BOOL _0x5A34CD9C3C5BEC44(Any p0) { return invoke<BOOL>(0x114BC2E06D3E864C, p0); } // 0x5A34CD9C3C5BEC44 0x346B506C
	static void _0x68103E2247887242() { invoke<Void>(0x42567AED51B22FEF); } // 0x68103E2247887242 0x0095DB71
	static BOOL _0x1DE0F5F50D723CAA(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x52D4E4B73174F968, p0, p1, p2); } // 0x1DE0F5F50D723CAA 0xAD334B40
	static BOOL _0x274A1519DFC1094F(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x8BCC0E484DE56976, p0, p1, p2); } // 0x274A1519DFC1094F 0x980D45D7
	static BOOL _0xD05D1A6C74DA3498(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x645AF522D018A6F1, p0, p1, p2); } // 0xD05D1A6C74DA3498 0x48CCC328
	static Any _0x45E816772E93A9DB() { return invoke<Any>(0x175E5729A8CFC2B0); } // 0x45E816772E93A9DB 0x8E664EFD
	static Any _0x299EF3C576773506() { return invoke<Any>(0xE771BFDE588CAE50); } // 0x299EF3C576773506 0x611E0BE2
	static Any _0x793FF272D5B365F4() { return invoke<Any>(0xCEC2121DDC8B022C); } // 0x793FF272D5B365F4 0xF0211AC1
	static Any _0x5A0A3D1A186A5508() { return invoke<Any>(0x1C1E4A9360BFE6BC); } // 0x5A0A3D1A186A5508 0x1F0DD8AF
	static void _0xA1E5E0204A6FCC70() { invoke<Void>(0x44067BCEC68CECA1); } // 0xA1E5E0204A6FCC70 0x405ECA16
	static BOOL _0xB746D20B17F2A229(Any* p0, Any* p1) { return invoke<BOOL>(0xA658DCD43BCDEF94, p0, p1); } // 0xB746D20B17F2A229 0x9567392B
	static Any _0x63B406D7884BFA95() { return invoke<Any>(0x6FAD536B07384F02); } // 0x63B406D7884BFA95 0xF79FFF3C
	static Any _0x4D02279C83BE69FE() { return invoke<Any>(0xCB1D82589066A88B); } // 0x4D02279C83BE69FE 0xA7F3F82B
	static Any _0x597F8DBA9B206FC7() { return invoke<Any>(0x346B2F1A1BF7A3F7); } // 0x597F8DBA9B206FC7 0x410C61D1
	static BOOL _0x5CAE833B0EE0C500(Any p0) { return invoke<BOOL>(0x603E584687121091, p0); } // 0x5CAE833B0EE0C500 0x0D4F845D
	static void _0x61A885D3F7CFEE9A() { invoke<Void>(0xBEFF7D83F94DDC49); } // 0x61A885D3F7CFEE9A 0xE13C1F7F
	static void _0xF98DDE0A8ED09323(BOOL p0) { invoke<Void>(0x8BA68DACE7B76AA1, p0); } // 0xF98DDE0A8ED09323 0x213C6D36
	static void _0xFD75DABC0957BF33(BOOL p0) { invoke<Void>(0x6DB9FE225F5E6779, p0); } // 0xFD75DABC0957BF33 0x511E6F50
	static BOOL _0xF53E48461B71EECB(Any p0) { return invoke<BOOL>(0x5F893A1517F11B23, p0); } // 0xF53E48461B71EECB 0xB4668B23
	static BOOL _0x098AB65B9ED9A9EC(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x667F5DB2EFF7A506, p0, p1, p2); } // 0x098AB65B9ED9A9EC 0x30B51753
	static Any _0xDC48473142545431() { return invoke<Any>(0xDE712B539026DC21); } // 0xDC48473142545431 0x02DAD93F
	static BOOL _0x0AE1F1653B554AB9(Any p0) { return invoke<BOOL>(0x34C2421B21224320, p0); } // 0x0AE1F1653B554AB9 0x2D947814
	static Any _0x62B9FEC9A11F10EF() { return invoke<Any>(0xBD2AEA0A096D65BC); } // 0x62B9FEC9A11F10EF 0x37A28C26
	static Any _0xA75E2B6733DA5142() { return invoke<Any>(0xC9283647E6B79D10); } // 0xA75E2B6733DA5142 0x11E8B5CD
	static Any _0x43865688AE10F0D7() { return invoke<Any>(0x9DC381593E8D6BD2); } // 0x43865688AE10F0D7 0x429AEAB3
	static Any TEXTURE_DOWNLOAD_REQUEST(Any* p0, Any* p1, Any* p2, BOOL p3) { return invoke<Any>(0x7998491DD957D39A, p0, p1, p2, p3); } // 0x16160DA74A8E74A2 0xAD546CC3
	static Any _0x0B203B4AFDE53A4F(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0xA5BB0AD1A78B799E, p0, p1, p2); } // 0x0B203B4AFDE53A4F 0x1856D008
	static Any _0x308F96458B7087CC(Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5) { return invoke<Any>(0x46DAF9859B18A61C, p0, p1, p2, p3, p4, p5); } // 0x308F96458B7087CC 0x68C9AF69
	static void TEXTURE_DOWNLOAD_RELEASE(Any p0) { invoke<Void>(0xF7C48D68605AC38E, p0); } // 0x487EB90B98E9FB19 0xEE8D9E70
	static BOOL _0x5776ED562C134687(Any p0) { return invoke<BOOL>(0xE0FAF73FAC87FECE, p0); } // 0x5776ED562C134687 0xE4547765
	static Any TEXTURE_DOWNLOAD_GET_NAME(Any p0) { return invoke<Any>(0x78FF24CBF1F7E263, p0); } // 0x3448505B6E35262D 0xA40EF65A
	static Any _0x8BD6C6DEA20E82C6(Any p0) { return invoke<Any>(0xB460866086EE62C4, p0); } // 0x8BD6C6DEA20E82C6 0x03225BA3
	static Any _0x60EDD13EB3AC1FF3() { return invoke<Any>(0x2152270A0BA262FD); } // 0x60EDD13EB3AC1FF3 0x4DEBC227
	static Any _0xEFFB25453D8600F9() { return invoke<Any>(0x93061E2E1033837F); } // 0xEFFB25453D8600F9 0x5C065D55
	static Any _0x66B59CFFD78467AF() { return invoke<Any>(0x577FA1A6B03F7513); } // 0x66B59CFFD78467AF 0x0CA1167F
	static Any _0x606E4D3E3CCCF3EB() { return invoke<Any>(0xFB7715380BD0AF90); } // 0x606E4D3E3CCCF3EB 0x424C6E27
	static int _IS_ROCKSTAR_BANNED() { return invoke<int>(0xD9155E0AEC95578D); } // 0x8020A73847E0CA7D 0xD3BBE42F
	static int _IS_SOCIALCLUB_BANNED() { return invoke<int>(0xEDF3721A2D96B6A9); } // 0xA0AD7E2AF5349F61 0xBDBB5948
	static int _IS_PLAYER_BANNED() { return invoke<int>(0x28B9CF5EB81FB894); } // 0x5F91D5D0B36AA310 0x97287D68
	static Any _0x422D396F80A96547() { return invoke<Any>(0x5E3DBC95ECA07B6C); } // 0x422D396F80A96547 0xC6EA802E
	static BOOL _0xA699957E60D80214(Any p0) { return invoke<BOOL>(0xDCCF462CAE7FCE9D, p0); } // 0xA699957E60D80214 0xFD261E30
	static BOOL _0xC22912B1D85F26B1(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x9892E7D80B8826ED, p0, p1, p2); } // 0xC22912B1D85F26B1 0x8570DD34
	static Any _0x593570C289A77688() { return invoke<Any>(0x6FC368894467C692); } // 0x593570C289A77688
	static Any _0x91B87C55093DE351() { return invoke<Any>(0x28AB0A510FC49CA4); } // 0x91B87C55093DE351
	static Any _0x36391F397731595D(Any p0) { return invoke<Any>(0x10DA659EE73D49B8, p0); } // 0x36391F397731595D
	static Any _0xDEB2B99A1AF1A2A6(Any p0) { return invoke<Any>(0x6B709417FA22D8E5, p0); } // 0xDEB2B99A1AF1A2A6
	static void _0x9465E683B12D3F6B() { invoke<Void>(0x603D2823AABEDD00); } // 0x9465E683B12D3F6B 0x273C6180
	static void _0xB7C7F6AD6424304B() { invoke<Void>(0xD485E918F6FDDE4C); } // 0xB7C7F6AD6424304B 0x371BBA08
	static void _0xC505036A35AFD01B(BOOL p0) { invoke<Void>(0x81202DB1AA0A4D5D, p0); } // 0xC505036A35AFD01B 0xA100CC97
	static void _0x267C78C60E806B9A(Any p0, BOOL p1) { invoke<Void>(0xD517F8576DC05764, p0, p1); } // 0x267C78C60E806B9A 0xBB2D33D3
	static void _0x6BFF5F84102DF80A(Any p0) { invoke<Void>(0x7E182B7B60C5A0E9, p0); } // 0x6BFF5F84102DF80A
	static void _0x5C497525F803486B() { invoke<Void>(0x9C60A0E8838A762C); } // 0x5C497525F803486B
	static Any _0x6FB7BB3607D27FA2() { return invoke<Any>(0x3BC28FBAC05BE71B); } // 0x6FB7BB3607D27FA2
	static void _0x45A83257ED02D9BC() { invoke<Void>(0x5ECF2A47A72CA7DF); } // 0x45A83257ED02D9BC
}

namespace NETWORKCASH
{
	static void NETWORK_INITIALIZE_CASH(int p0, int p1) { invoke<Void>(0x2BB39EF4167687A6, p0, p1); } // 0x3DA5ECD1A56CBA6D 0x66DA9935
	static void NETWORK_DELETE_CHARACTER(int characterIndex, BOOL p1, BOOL p2) { invoke<Void>(0xC9D4A0C09DC0FA07, characterIndex, p1, p2); } // 0x05A50AF38947EB8D 0xA9F7E9C3
	static void _0xA921DED15FDF28F5(Any p0) { invoke<Void>(0xE316A88C76BC29F6, p0); } // 0xA921DED15FDF28F5 0x19F0C471
	static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, _Player* player) { invoke<Void>(0x1383681CF1213721, amount, player); } // 0xFB18DF9CB95E0105 0xC6047FDB
	static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int amount, _Player* player) { invoke<Void>(0xBD471BF78A0B7979, amount, player); } // 0x56A3B51944C50598 0x4ED71C1A
	static Any _0x1C2473301B1C66BA() { return invoke<Any>(0xFD43927F941C0A32); } // 0x1C2473301B1C66BA 0xA27B9FE8
	static void NETWORK_REFUND_CASH(int index, char* context, char* reason, BOOL unk) { invoke<Void>(0x258D6E1C5F0486E3, index, context, reason, unk); } // 0xF9C812CD7C46E817 0x07C92F21
	static BOOL _0x81404F3DC124FE5B(Any p0, BOOL p1, BOOL p2) { return invoke<BOOL>(0x0DC124CD2448AAF1, p0, p1, p2); } // 0x81404F3DC124FE5B 0x8474E6F0
	static BOOL _0x3A54E33660DED67F(Any p0) { return invoke<BOOL>(0x2D3976A4AE262889, p0); } // 0x3A54E33660DED67F 0xE3802533
	static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0x8FA27C7D94D06DC4, amount); } // 0xED1517D3AF17C698 0x70A0ED62
	static void _0xA03D4ACE0A3284CE(Any p0) { invoke<Void>(0x27CB6173CF4E15E3, p0); } // 0xA03D4ACE0A3284CE 0x33C20BC4
	static void _0xF514621E8EA463D0(Any p0) { invoke<Void>(0x78A5833D14C5BD2D, p0); } // 0xF514621E8EA463D0 0x30B3EC0A
	static void _0xB1CC1B9EC3007A2A(Any p0) { invoke<Void>(0x34ADE26B18775193, p0); } // 0xB1CC1B9EC3007A2A 0xEAF04923
	static void NETWORK_EARN_FROM_BETTING(int amount, char* p1) { invoke<Void>(0xC4EA433536F3EA27, amount, p1); } // 0x827A5BA1A44ACA6D 0xA0F7F07C
	static void NETWORK_EARN_FROM_JOB(int amount, char* p1) { invoke<Void>(0x12D7A56627AE110F, amount, p1); } // 0xB2CC4836834E8A98 0x0B6997FC
	static void _0x61326EE6DF15B0CA(Any p0, Any* p1) { invoke<Void>(0x05D378407A0E84F7, p0, p1); } // 0x61326EE6DF15B0CA 0x5E81F55C
	static void _0x2B171E6B2F64D8DF(Any p0, Any* p1, BOOL p2) { invoke<Void>(0x6548E29E616E918B, p0, p1, p2); } // 0x2B171E6B2F64D8DF 0x2BEFB6C4
	static void NETWORK_EARN_FROM_BOUNTY(Any p0, Any* p1, Any* p2, Any p3) { invoke<Void>(0x0103F19736DBE137, p0, p1, p2, p3); } // 0x131BB5DA15453ACF 0x127F2DAE
	static void NETWORK_EARN_FROM_IMPORT_EXPORT(Any p0, Any p1) { invoke<Void>(0xEF86B5C6DCA16553, p0, p1); } // 0xF92A014A634442D6 0xF11FC458
	static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0x259FB6CFB8A55AFE, amount); } // 0x45B8154E077D9E4D 0xE6B90E9C
	static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0x9FE74E3DB7C3F397, amount, propertyName); } // 0x849648349D77F5C5 0x9BE4F7E1
	static void _0x515B4A22E4D3C6D7(Any p0, Any p1) { invoke<Void>(0x324147E7C1060EB6, p0, p1); } // 0x515B4A22E4D3C6D7 0x866004A8
	static void _0x4337511FA8221D36(Any p0) { invoke<Void>(0x877122C161892DDE, p0); } // 0x4337511FA8221D36 0xCC068380
	static void NETWORK_EARN_FROM_ROCKSTAR(int amount) { invoke<Void>(0xE016FC5CE2BED56A, amount); } // 0x02CE1D6AC0FC73EA 0x5A3733CC
	static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x314BDA0BE8C0AC91, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB539BD8A4C1EECF8 0xF803589D
	static void _0x3F4D00167E41E0AD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x56A6744CF4DB6EE4, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x3F4D00167E41E0AD 0x96B8BEE8
	static void _0x6EA318C91C1A8786(Any p0, Any* p1, Any p2) { invoke<Void>(0x2C7B4B63C96C6947, p0, p1, p2); } // 0x6EA318C91C1A8786
	static void _0xFB6DB092FBAE29E6(int p0, char* p1, Any* p2) { invoke<Void>(0x62EA9E19007EE5C6, p0, p1, p2); } // 0xFB6DB092FBAE29E6
	static void _0x6816FB4416760775(Any p0, Any* p1, Any* p2) { invoke<Void>(0x30F50DB269E614D2, p0, p1, p2); } // 0x6816FB4416760775
	static BOOL _HAS_ITEM_BEEN_UNLOCKED(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x0ED33A640B511EDC, p0, p1, p2, p3, p4); } // 0xAB3CAA6B422164DA 0x5AA379D9
	static BOOL _0x7303E27CC6532080(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5) { return invoke<BOOL>(0xC65BBEA5B441A760, p0, p1, p2, p3, p4, p5); } // 0x7303E27CC6532080
	static void NETWORK_BUY_ITEM(Ped player, Hash item, Any p2, Any p3, BOOL p4, char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0x9ECAC72ACF3428C2, player, item, p2, p3, p4, item_name, p6, p7, p8, p9); } // 0xF0077C797F66A355 0xA07B6368
	static void NETWORK_SPENT_TAXI(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB40CBAAAA449F496, p0, p1, p2); } // 0x17C3A7D31EAE39F9 0x1F3DB3E3
	static void _0x5FD5ED82CBBE9989(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x50986B75EA2FDB5F, p0, p1, p2); } // 0x5FD5ED82CBBE9989 0xBE70849B
	static void _0xAFE08B35EC0C9EAE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x83347F6DA80B10EE, p0, p1, p2); } // 0xAFE08B35EC0C9EAE 0x451A2644
	static void _0x9346E14F2AF74D46(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0x513E8AF40977C14B, p0, p1, p2, p3); } // 0x9346E14F2AF74D46 0x224A3488
	static void NETWORK_SPENT_BETTING(Any p0, Any p1, Any* p2, BOOL p3, BOOL p4) { invoke<Void>(0xF8D7009AAAAB68C5, p0, p1, p2, p3, p4); } // 0x1C436FD11FFA692F 0xF8A07513
	static void _0xEE99784E4467689C(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0xF1061210D98AACCF, p0, p1, p2, p3); } // 0xEE99784E4467689C 0x8957038E
	static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xA4B79B123C035A67, cost, p1, p2); } // 0xD9B067E55253E3DD 0x832150E5
	static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xC712F7E4761C1CC2, cost, p1, p2); } // 0x763B4BD305338F19 0x40470683
	static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0x710EA7FB5015BED2, cost, p1, p2); } // 0x81AA4610E3FD3A69 0x047547D4
	static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x64379973EC3A4BE1, p0, p1, p2); } // 0xB162DC95C0A3317B 0x4B643076
	static void NETWORK_BUY_BOUNTY(int amount, _Player victim, BOOL p2, BOOL p3) { invoke<Void>(0x4D1E25374307218A, amount, victim, p2, p3); } // 0x7B718E197453F2D9 0xCB89CBE0
	static void NETWORK_BUY_PROPERTY(float propertyCost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0x65512476F8AF3E4D, propertyCost, propertyName, p2, p3); } // 0x650A08A280870AF6 0x7D479AAB
	static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB5571832C2527C50, p0, p1, p2); } // 0x7BF1D73DB2ECA492 0x27EEBCAB
	static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x5D263223BF62A42E, p0, p1, p2); } // 0x524EE43A37232C00 0xB241CABD
	static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x5FDEBE3413CB8BE8, p0, p1, p2); } // 0xA6DD8458CE24012C 0xDE7D398C
	static void NETWORK_SPENT_CASH_DROP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD57921BDB3231126, p0, p1, p2); } // 0x289016EC778D60E0 0x87BD1D11
	static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xCD96452BEF733EB1, p0, p1, p2); } // 0xE404BFB981665BF0 0xE792C4A5
	static void _0x995A65F15F581359(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x00018AD55E6EBEE5, p0, p1, p2); } // 0x995A65F15F581359 0xE6AAA0D5
	static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x55492892DF07DE07, p0, p1, p2); } // 0xE7B80E2BF9D80BD6 0x99CF02C4
	static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xF27B4B2F7E3AE856, p0, p1, p2, p3); } // 0xE1B13771A843C4F6 0xE7CB4F95
	static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xC30021C3F47D6428, p0, p1, p2); } // 0xA628A745E2275C5D 0x20DDCF2F
	static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x430C46BBEB273909, p0, p1, p2); } // 0x6E176F1B18BC0637 0x2F7836E2
	static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xF77D18FF085EBFB1, p0, p1, p2, p3, p4); } // 0xEC03C719DB2F4306 0x8283E028
	static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x011953A01EA1739F, p0, p1, p2, p3); } // 0x6B38ECB05A63A685 0x1100CAF5
	static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x6AEDB2DFF5652069, p0, p1, p2); } // 0x7FE61782AD94CC09 0xAE7FF044
	static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF0FDB2E6DD6CE381, p0, p1, p2); } // 0xD9B86B9872039763 0x1B3803B1
	static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x839AD6471830918E, p0, p1, p2); } // 0x6D3A430D1A809179 0x7E97C92C
	static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xDFF58D366CE78021, p0, p1, p2); } // 0xB21B89501CFAC79E 0x78436D07
	static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x53DB1A27E8B0E4D4, p0, p1, p2); } // 0x812F5488B1B2A299 0x5AEE2FC1
	static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Any p0, Any p1, Any* p2, BOOL p3, BOOL p4) { invoke<Void>(0x1C93363227663785, p0, p1, p2, p3, p4); } // 0x9FF28D88C766E3E8 0x4E665BB2
	static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xA422D669593E1D2C, p0, p1, p2, p3); } // 0xACDE7185B374177C 0x1A89B5FC
	static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x21E2B1148A51AC07, p0, p1, p2); } // 0x29B260B84947DFCC 0x3401FC96
	static void _0x6A445B64ED7ABEB5(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x3479D2C83074FFEC, p0, p1, p2); } // 0x6A445B64ED7ABEB5 0x54198922
	static Any _0x20194D48EAEC9A41(Any p0, Any p1, Any p2) { return invoke<Any>(0xD96BBBA17960DD73, p0, p1, p2); } // 0x20194D48EAEC9A41 0xC5D8B1E9
	static void _0x7C99101F7FCE2EE5(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x3017FFEF870FACC6, p0, p1, p2, p3); } // 0x7C99101F7FCE2EE5 0x3D96A21C
	static void _0xD5BB406F4E04019F(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xA23609CDAEC36531, p0, p1, p2); } // 0xD5BB406F4E04019F 0x2E51C61C
	static void _0x8204DA7934DF3155(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xCCEE98B2B0775DCD, p0, p1, p2); } // 0x8204DA7934DF3155 0xD57A5125
	static void _0x9D26502BB97BFE62(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE95DB9D72F544C9A, p0, p1, p2); } // 0x9D26502BB97BFE62
	static void _0x8A7B3952DD64D2B5(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x22D31445341977DB, p0, p1, p2, p3); } // 0x8A7B3952DD64D2B5 0xD9622D64
	static Any _0x7C4FCCD2E4DEB394() { return invoke<Any>(0x1790A09A3DA42CD4); } // 0x7C4FCCD2E4DEB394
	static Any _0x76EF28DA05EA395A() { return invoke<Any>(0xC4914549A395EF5E); } // 0x76EF28DA05EA395A 0x16184FB5
	static Any _0xA40F9C2623F6A8B5(Any p0) { return invoke<Any>(0x6F46EEAF5BB462EA, p0); } // 0xA40F9C2623F6A8B5 0x4F5B781C
	static Any _0x5CBAD97E059E1B94() { return invoke<Any>(0xAFC35AC5C5081223); } // 0x5CBAD97E059E1B94 0xADF8F882
	static Any _0xA6FA3979BED01B81() { return invoke<Any>(0x6698BB0C192E47EB); } // 0xA6FA3979BED01B81
	static BOOL _0xDC18531D7019A535(Any p0, Any p1) { return invoke<BOOL>(0x87BD0D0D571B894B, p0, p1); } // 0xDC18531D7019A535
	static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xA84EC13D431C8044, p0, p1, p2, p3); } // 0x5D17BE59D2123284 0x41F5F10E
	static Any _0xF70EFA14FE091429(Any p0) { return invoke<Any>(0x4AFBBD636CF236C1, p0); } // 0xF70EFA14FE091429 0x8B755993
	static BOOL _0xE260E0BB9CD995AC(Any p0) { return invoke<BOOL>(0x6F6B94CF5CF1E28E, p0); } // 0xE260E0BB9CD995AC 0x8F266745
	static Any _0xE154B48B68EF72BC(Any p0) { return invoke<Any>(0x4F458F4CD9C68793, p0); } // 0xE154B48B68EF72BC 0x531E4892
	static Any _0x6FCF8DDEA146C45B(Any p0) { return invoke<Any>(0x5E5875A17EDBACDF, p0); } // 0x6FCF8DDEA146C45B 0xB96C7ABE
}

namespace DLC1
{
	static int _0x278F76C3B0A8F109(int p0) { return invoke<int>(0x551AEBBC29744A31, p0); } // 0x278F76C3B0A8F109 0x71D0CF3E
	static BOOL _0xFF56381874F82086(int p0, int p1, Any* outComponent) { return invoke<BOOL>(0x907997B4F6C02D86, p0, p1, outComponent); } // 0xFF56381874F82086 0x2E9D628C
	static void INIT_SHOP_PED_COMPONENT(_Player outComponent) { invoke<Void>(0xD0EBA049E720BC01, outComponent); } // 0x1E8C308FD312C036 0xB818C7FC
	static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0x83EAE6BAFE9D3010, outProp); } // 0xEB0A2B758F7B850F 0xF5659E50
	static int _0x50F457823CE6EB5F(int p0, int p1, int p2, int p3) { return invoke<int>(0xC7A036486C6EF7BF, p0, p1, p2, p3); } // 0x50F457823CE6EB5F 0xC937FF3D
	static int _GET_NUM_PROPS_FROM_OUTFIT(int playerId, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0x971B2F96BDDB6FC3, playerId, p1, p2, p3, p4, componentId); } // 0x9BDF59818B1E38C1 0x594E862C
	static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0x2E5A43814090368C, componentId, outComponent); } // 0x249E310B2D920699 0xC0718904
	static void GET_SHOP_PED_COMPONENT(Any p0, Any* p1) { invoke<Void>(0x264669A6231D3DDE, p0, p1); } // 0x74C0E2A57EC66760 0xB39677C5
	static void GET_SHOP_PED_QUERY_PROP(Any p0, Any* p1) { invoke<Void>(0x80F3F410C9AC600C, p0, p1); } // 0xDE44A00999B2837D 0x1D3C1466
	static void _0x5D5CAFF661DDF6FC(Any p0, Any* p1) { invoke<Void>(0xBB7EACF68DCBD480, p0, p1); } // 0x5D5CAFF661DDF6FC
	static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0x1CB19F5BE62B1507, entity, componentId, drawableVariant, textureVariant); } // 0x0368B3A838070348 0xC8A4BF12
	static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0x9E60D659DC90A3AD, entity, componentId, propIndex, propTextureIndex); } // 0x5D6160275CAEC8DD 0x7D876DC0
	static int _0xC17AD0E5752BECDA(Hash componentHash) { return invoke<int>(0xBB220C54752E8D23, componentHash); } // 0xC17AD0E5752BECDA 0x159751B4
	static void GET_VARIANT_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0xB40E15EAFBFBD8D4, componentHash, componentId, p2, p3, p4); } // 0x6E11F282F11863B6 0xE4FF7103
	static int _GET_NUM_FORCED_COMPONENTS(Hash componentHash) { return invoke<int>(0xD07910368E9699ED, componentHash); } // 0xC6B9DB42C04DD8C3 0xCE70F183
	static Any _0x017568A8182D98A6(Any p0) { return invoke<Any>(0x3FC0B70D3FD3290D, p0); } // 0x017568A8182D98A6
	static void GET_FORCED_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x2F71B0DD77322882, componentHash, componentId, p2, p3, p4); } // 0x6C93ED8C2F74859B 0x382C70BE
	static void _0xE1CA84EBF72E691D(Any p0, Any p1, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x7E4863B4E9DF3327, p0, p1, p2, p3, p4); } // 0xE1CA84EBF72E691D
	static BOOL _0x341DE7ED1D2A1BFD(Hash componentHash, Hash drawableSlotHash, int p2) { return invoke<BOOL>(0xE2ADF4B06E90B1E2, componentHash, drawableSlotHash, p2); } // 0x341DE7ED1D2A1BFD 0x8E2C7FD5
	static int _0xF3FBE2D50A6A8C28(int character, BOOL p1) { return invoke<int>(0x131A3DCC2A5B3219, character, p1); } // 0xF3FBE2D50A6A8C28 0x1ECD23E7
	static void GET_SHOP_PED_QUERY_OUTFIT(Any p0, Any* p1) { invoke<Void>(0xEB6E38BF604C5089, p0, p1); } // 0x6D793F03A631FE56 0x2F8013A1
	static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0x82D8FD665643C309, p0, p1); } // 0xB7952076E444979D 0xCAFE9209
	static Any _0x073CA26B079F956E(Any p0) { return invoke<Any>(0x95A9EB55776F8432, p0); } // 0x073CA26B079F956E 0x2798F56F
	static BOOL _0xA9F9C2E0FDE11CBB(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x9AB44FC051F80331, p0, p1, p2); } // 0xA9F9C2E0FDE11CBB 0x6641A864
	static BOOL _GET_PROP_FROM_OUTFIT(Any outfit, Any slot, Any* item) { return invoke<BOOL>(0x74F4D60DDB9DCCA9, outfit, slot, item); } // 0x19F2A026EDF0013F 0x818534AC
	static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0x8BB2B23AB3E97230); } // 0xA7A866D21CD2329B 0x8EAF9CF6
	static Any GET_DLC_VEHICLE_MODEL(Any p0) { return invoke<Any>(0xF3D8C4DBFB15CAAB, p0); } // 0xECC01B7C5763333C 0xA2201E09
	static BOOL GET_DLC_VEHICLE_DATA(Any p0, Any* p1) { return invoke<BOOL>(0x0722C0B45A965936, p0, p1); } // 0x33468EDC08E371F6 0xCF428FA4
	static Any GET_DLC_VEHICLE_FLAGS(Any p0) { return invoke<Any>(0x7A4E9FAFFF106B22, p0); } // 0x5549EE11FA22FCF2 0xAB12738C
	static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xA9AB040C6EE0E9A9); } // 0xEE47635F352DA367 0x2B757E6C
	static BOOL GET_DLC_WEAPON_DATA(Any p0, Any* p1) { return invoke<BOOL>(0x526CCBCB3A687F81, p0, p1); } // 0x79923CD21BECE14E 0xD88EC8EA
	static int GET_NUM_DLC_WEAPON_COMPONENTS(Any p0) { return invoke<int>(0x025355D1D08BBE6A, p0); } // 0x405425358A7D61FE 0x476B23A9
	static BOOL GET_DLC_WEAPON_COMPONENT_DATA(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x4FFB2133277091F7, p0, p1, p2); } // 0x6CF598A2957C2BF8 0x4B83FCAF
	static BOOL _IS_OUTFIT_EMPTY(Any outfit) { return invoke<BOOL>(0x993E467B1CA23C2D, outfit); } // 0xD4D7B033C3AA243C 0x06396058
	static BOOL _0x0564B9FF9631B82C(Any p0) { return invoke<BOOL>(0xC1D9C068419ECDD5, p0); } // 0x0564B9FF9631B82C 0x35BCA844
	static Any _0xC098810437312FFF(Any p0) { return invoke<Any>(0x03B14A37B435C5EB, p0); } // 0xC098810437312FFF 0x59352658
}

namespace DLC2
{
	static BOOL IS_DLC_PRESENT(Hash DlcHash) { return invoke<BOOL>(0x6E373DDF41F95D44, DlcHash); } // 0x812595A0644CE1DE 0x1F321943
	static Any _0xF2E07819EF1A5289() { return invoke<Any>(0xAC540A0D5A619C70); } // 0xF2E07819EF1A5289 0x881B1FDB
	static Any _0x9489659372A81585() { return invoke<Any>(0xC882A594416DAC09); } // 0x9489659372A81585 0xC2169164
	static Any _0xA213B11DFF526300() { return invoke<Any>(0x3D680BE0C47EA7BF); } // 0xA213B11DFF526300 0xF79A97F5
	static Any _0x8D30F648014A92B5() { return invoke<Any>(0xEE223D63DCDA1872); } // 0x8D30F648014A92B5 0xF69B729C
	static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xDF6B1CC4584C36CE); } // 0x10D0A8F259E93EC9 0x517B601B
	static BOOL _NULLIFY(Any* variable, Any unused) { return invoke<BOOL>(0x308EBFED24E659B6, variable, unused); } // 0x46E2B844905BC5F0 0x6087C10C
	static void _LOAD_SP_DLC_MAPS() { invoke<Void>(0x02DA92B545D8BEBB); } // 0xD7C10C4A637992C9
	static void _LOAD_MP_DLC_MAPS() { invoke<Void>(0xC7E621DE28F5CD72); } // 0x0888C3502DBBEEF5
}

namespace SYSTEM
{
	static void WAIT(int ms) { invoke<Void>(0x4EDE34FBADD967A6, ms); } // 0x4EDE34FBADD967A6 0x7715C03B
	static int START_NEW_SCRIPT(char* scriptName, int stackSize) { return invoke<int>(0xE81651AD79516E48, scriptName, stackSize); } // 0xE81651AD79516E48 0x3F166D0E
	static int START_NEW_SCRIPT_WITH_ARGS(char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1 0x4A2100E4
	static int _START_NEW_STREAMED_SCRIPT(Hash scriptHash, int stackSize) { return invoke<int>(0xEB1C67C3A5333A92, scriptHash, stackSize); } // 0xEB1C67C3A5333A92 0x8D15BE5D
	static int _START_NEW_STREAMED_SCRIPT_WITH_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78 0xE38A3AD4
	static int TIMERA() { return invoke<int>(0x83666F9FB8FEBD4B); } // 0x83666F9FB8FEBD4B 0x45C8C188
	static int TIMERB() { return invoke<int>(0xC9D9444186B5A374); } // 0xC9D9444186B5A374 0x330A9C0C
	static void SETTIMERA(int value) { invoke<Void>(0xC1B1E9A034A63A62, value); } // 0xC1B1E9A034A63A62 0x35785333
	static void SETTIMERB(int value) { invoke<Void>(0x5AE11BC36633DE4E, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6
	static float TIMESTEP() { return invoke<float>(0x0000000050597EE2); } // 0x0000000050597EE2 0x50597EE2
	static float SIN(float value) { return invoke<float>(0x0BADBFA3B172435F, value); } // 0x0BADBFA3B172435F 0xBF987F58
	static float COS(float value) { return invoke<float>(0xD0FFB162F40A139C, value); } // 0xD0FFB162F40A139C 0x00238FE9
	static float SQRT(float value) { return invoke<float>(0x71D93B57D07F9804, value); } // 0x71D93B57D07F9804 0x145C7701
	static float POW(float base, float exponent) { return invoke<float>(0xE3621CC40F31FE2E, base, exponent); } // 0xE3621CC40F31FE2E 0x85D134F8
	static float VMAG(float p0, float p1, float p2) { return invoke<float>(0x652D2EEEF1D3E62C, p0, p1, p2); } // 0x652D2EEEF1D3E62C 0x1FCF1ECD
	static float VMAG2(float p0, float p1, float p2) { return invoke<float>(0xA8CEACB4F35AE058, p0, p1, p2); } // 0xA8CEACB4F35AE058 0xE796E629
	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5 0x3C08ECB7
	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47 0xC85DEF1F
	static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0xEDD95A39E5544DE8, value, bitShift); } // 0xEDD95A39E5544DE8 0x314CC6CD
	static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x97EF1E5BCE9DC075, value, bitShift); } // 0x97EF1E5BCE9DC075 0x352633CA
	static int FLOOR(float value) { return invoke<int>(0xF34EE736CF047844, value); } // 0xF34EE736CF047844 0x32E9BE04
	static int CEIL(float value) { return invoke<int>(0x11E019C8F43ACC8A, value); } // 0x11E019C8F43ACC8A 0xD536A1DF
	static int ROUND(float value) { return invoke<int>(0xF2DB717A73826179, value); } // 0xF2DB717A73826179 0x323B0E24
	static float TO_FLOAT(int value) { return invoke<float>(0xBBDA792448DB5A89, value); } // 0xBBDA792448DB5A89 0x67116627
}

namespace DECORATOR
{
	static BOOL DECOR_SET_TIME(Entity entity, char* propertyName, int value) { return invoke<BOOL>(0x779DB2F29DB88431, entity, propertyName, value); } // 0x95AED7B8E39ECAA4 0xBBAEEF94
	static BOOL DECOR_SET_BOOL(Entity entity, char* propertyName, BOOL value) { return invoke<BOOL>(0x6E48FDB1A085F319, entity, propertyName, value); } // 0x6B1E8E2ED1335B71 0x8E101F5C
	static BOOL _DECOR_SET_FLOAT(Entity entity, char* propertyName, float value) { return invoke<BOOL>(0x474E3296A60257A0, entity, propertyName, value); } // 0x211AB1DD8D0F363A
	static BOOL DECOR_SET_INT(Entity entity, char* propertyName, int value) { return invoke<BOOL>(0xB6E7BA5C3025C547, entity, propertyName, value); } // 0x0CE3AA5E1CA19E10 0xDB718B21
	static BOOL DECOR_GET_BOOL(Entity entity, char* propertyName) { return invoke<BOOL>(0x86DCF0A510F96A88, entity, propertyName); } // 0xDACE671663F2F5DB 0xDBCE51E0
	static float _DECOR_GET_FLOAT(Entity entity, char* propertyName) { return invoke<float>(0xCBD28EE76BD6B722, entity, propertyName); } // 0x6524A2F114706F43
	static int DECOR_GET_INT(Entity entity, char* propertyName) { return invoke<int>(0x96FB4818617F93B9, entity, propertyName); } // 0xA06C969B02A97298 0xDDDE59B5
	static BOOL DECOR_EXIST_ON(Entity entity, char* propertyName) { return invoke<BOOL>(0x4184E6D274FCBFF1, entity, propertyName); } // 0x05661B80A8C9165F 0x74EF9C40
	static BOOL DECOR_REMOVE(Entity entity, char* propertyName) { return invoke<BOOL>(0xC0950AA4244BE204, entity, propertyName); } // 0x00EE9F297C738720 0xE0E2640B
	static void DECOR_REGISTER(char* propertyName, int type) { invoke<Void>(0x2FDD23D33CFE8B3D, propertyName, type); } // 0x9FD90732F56403CE 0x68BD42A9
	static BOOL DECOR_IS_REGISTERED_AS_TYPE(char* propertyName, int type) { return invoke<BOOL>(0x71F81D3603710A43, propertyName, type); } // 0x4F14F9F870D6FBC8 0x7CF0971D
	static void DECOR_REGISTER_LOCK() { invoke<Void>(0x0D0B03FF99DB0609); } // 0xA9D14EEA259F9248 0x7F3F1C02
	static Any _0x241FCA5B1AA14F75() { return invoke<Any>(0xA35F0CC6A576EF50); } // 0x241FCA5B1AA14F75
}

namespace SOCIALCLUB
{
	static Any _0x03A93FF1A2CA0864() { return invoke<Any>(0x41AA850B171B5078); } // 0x03A93FF1A2CA0864 0x6BE5DF29
	static Any _0xBB8EA16ECBC976C4(Any p0) { return invoke<Any>(0x840BCF3567CD5A0B, p0); } // 0xBB8EA16ECBC976C4 0x5ECF955D
	static BOOL _0x93028F1DB42BFD08(Any p0) { return invoke<BOOL>(0x70B53174ADBAF841, p0); } // 0x93028F1DB42BFD08 0xD1ED1D48
	static BOOL _0x2C015348CF19CA1D(Any p0) { return invoke<BOOL>(0x01F281EFDE85590A, p0); } // 0x2C015348CF19CA1D 0x19EE0CCB
	static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x8F082C3911D33F2E, p0, p1, p2); } // 0xA00EFE4082C4056E 0x88068C7C
	static BOOL _0xFFE5C16F402D851D(Any p0, Any* p1) { return invoke<BOOL>(0x82229FC8B1AB1576, p0, p1); } // 0xFFE5C16F402D851D
	static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0xFDB3280C4D3EC91F, p0, p1, p2); } // 0x7572EF42FC6A9B6D 0x15607620
	static BOOL _0x9A2C8064B6C1E41A(Any p0) { return invoke<BOOL>(0x7ABFB0A4AD0F1E2F, p0); } // 0x9A2C8064B6C1E41A 0xEBE420A4
	static Any _0xF3E31D16CBDCB304(Any p0) { return invoke<Any>(0x36655DCE42F687FB, p0); } // 0xF3E31D16CBDCB304 0x2C959AF9
	static void _0xDA024BDBD600F44A(Any* p0) { invoke<Void>(0xB8F3B4738EADF707, p0); } // 0xDA024BDBD600F44A 0x0B9A3512
	static void _0xA68D3D229F4F3B06(Any* p0) { invoke<Void>(0xF8FADFC7368EEF7F, p0); } // 0xA68D3D229F4F3B06 0x75324674
	static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(Any p0, Any* p1) { return invoke<BOOL>(0x668875A8E0EEC5C9, p0, p1); } // 0x69D82604A1A5A254 0x88CA3BFC
	static BOOL _0x6AFD2CD753FEEF83(Any* p0) { return invoke<BOOL>(0xC3D9BC6920DAB509, p0); } // 0x6AFD2CD753FEEF83 0x628F489B
	static BOOL _0x87E0052F08BD64E6(Any p0, Any* p1) { return invoke<BOOL>(0xC01155C9387CC307, p0, p1); } // 0x87E0052F08BD64E6 0xAB3346B5
	static void _0x040ADDCBAFA1018A(Any p0, Any p1) { invoke<Void>(0x181BAC6382EC3A13, p0, p1); } // 0x040ADDCBAFA1018A
	static Any _0x16DA8172459434AA() { return invoke<Any>(0xC926C89B418E2DB1); } // 0x16DA8172459434AA
	static BOOL _0x4737980E8A283806(Any p0, Any* p1) { return invoke<BOOL>(0xC2004452E663CDB5, p0, p1); } // 0x4737980E8A283806
	static void _0x44ACA259D67651DB(Any* p0, Any p1) { invoke<Void>(0x6ADF202291C49BEB, p0, p1); } // 0x44ACA259D67651DB
	static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(_Player* player) { invoke<Void>(0xA900D05CD06E7C99, player); } // 0x2330C12A7A605D16 0x9A703A2B
	static void _0x55DF6DB45179236E() { invoke<Void>(0x6D817E21CB02621E); } // 0x55DF6DB45179236E 0xD094F11A
	static void _0x116FB94DC4B79F17(Any* p0) { invoke<Void>(0x3D64E060BC8B39F7, p0); } // 0x116FB94DC4B79F17 0xAF3C081B
	static void _0xBFA0A56A817C6C7D(BOOL p0) { invoke<Void>(0x31447867058F1245, p0); } // 0xBFA0A56A817C6C7D 0x2FB9F53C
	static Any _0xBC1CC91205EC8D6E() { return invoke<Any>(0x3718FF42B65B9408); } // 0xBC1CC91205EC8D6E 0x6C5738AB
	static Any _0xDF649C4E9AFDD788() { return invoke<Any>(0x3C13D5CED7AAFDB2); } // 0xDF649C4E9AFDD788 0x468668F0
	static BOOL _0x1F1E9682483697C7(Any p0, Any p1) { return invoke<BOOL>(0xD922502DE1EC7728, p0, p1); } // 0x1F1E9682483697C7 0x90C74343
	static BOOL _0x287F1F75D2803595(Any p0, Any* p1) { return invoke<BOOL>(0xE9D2975A66F81D7E, p0, p1); } // 0x287F1F75D2803595 0x3ACE6D6B
	static BOOL _0x487912FD248EFDDF(Any p0, float p1) { return invoke<BOOL>(0x31A285B4F27BC5DA, p0, p1); } // 0x487912FD248EFDDF 0x579B4510
	static BOOL _0x8416FE4E4629D7D7(Any* p0) { return invoke<BOOL>(0x30910DFC1150D93D, p0); } // 0x8416FE4E4629D7D7 0xDF45B2A7
	static BOOL _0x75632C5ECD7ED843(Any* p0, Any* p1) { return invoke<BOOL>(0x6096A8ED0584E961, p0, p1); } // 0x75632C5ECD7ED843 0xDF084A6B
	static BOOL _0x1753344C770358AE(Any p0) { return invoke<BOOL>(0xD697DEF4F5B18078, p0); } // 0x1753344C770358AE 0xFFED3676
	static Any _0x82E4A58BABC15AE7(Any p0) { return invoke<Any>(0xDC02E8B4C3EE867B, p0); } // 0x82E4A58BABC15AE7 0xA796D7A7
	static Any _0x85535ACF97FC0969(Any p0) { return invoke<Any>(0x17D61483FE2F5DEC, p0); } // 0x85535ACF97FC0969 0x09497F31
	static int _0x930DE22F07B1CCE3(Any p0) { return invoke<int>(0x267A6AB0C789F23E, p0); } // 0x930DE22F07B1CCE3 0x4D8A6521
	static BOOL _0xF6BAAAF762E1BF40(Any* p0, Any* p1) { return invoke<BOOL>(0x8DAA5D51583B912C, p0, p1); } // 0xF6BAAAF762E1BF40 0x7AA36406
	static BOOL _0xF22CA0FD74B80E7A(Any p0) { return invoke<BOOL>(0xE9521900949BC073, p0); } // 0xF22CA0FD74B80E7A 0xF379DCE4
	static Any _0x9237E334F6E43156(Any p0) { return invoke<Any>(0xC64898C97DBD15B6, p0); } // 0x9237E334F6E43156 0x65D84665
	static Any _0x700569DBA175A77C(Any p0) { return invoke<Any>(0x1F261EBC437E19CD, p0); } // 0x700569DBA175A77C
	static Any _0x1D4446A62D35B0D0(Any p0, Any p1) { return invoke<Any>(0xFE12AD83C0C56082, p0, p1); } // 0x1D4446A62D35B0D0
	static Any _0x2E89990DDFF670C3(Any p0, Any p1) { return invoke<Any>(0xF9EE63ECF7EDCB15, p0, p1); } // 0x2E89990DDFF670C3
	static BOOL _0xD0EE05FE193646EA(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xD774BD7BCC05820D, p0, p1, p2); } // 0xD0EE05FE193646EA
	static BOOL _0x1989C6E6F67E76A8(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x1242DBD2C83258A6, p0, p1, p2); } // 0x1989C6E6F67E76A8
	static Any _0x07C61676E5BB52CD(Any p0) { return invoke<Any>(0x6B15BA2553C38430, p0); } // 0x07C61676E5BB52CD
	static Any _0x8147FFF6A718E1AD(Any p0) { return invoke<Any>(0x6EC7D81BF9DE5CE7, p0); } // 0x8147FFF6A718E1AD
	static BOOL _0x0F73393BAC7E6730(Any* p0, Any* p1) { return invoke<BOOL>(0x8EA0720FC35BC75B, p0, p1); } // 0x0F73393BAC7E6730
	static Any _0xD302E99EDF0449CF(Any p0) { return invoke<Any>(0x304097432BF5E4F8, p0); } // 0xD302E99EDF0449CF
	static Any _0x5C4EBFFA98BDB41C(Any p0) { return invoke<Any>(0x0776A3E7D50BDC71, p0); } // 0x5C4EBFFA98BDB41C
	static Any _0xFF8F3A92B75ED67A() { return invoke<Any>(0x6C86A1C08845C3A9); } // 0xFF8F3A92B75ED67A 0xC96456BA
	static Any _0x4A7D6E727F941747(Any* p0) { return invoke<Any>(0x3D2FB9F274F59D58, p0); } // 0x4A7D6E727F941747 0x8E7AEEB7
	static BOOL _0x8CC469AB4D349B7C(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0xF36A7348F847ABA8, p0, p1, p2); } // 0x8CC469AB4D349B7C 0xE778B2A7
	static BOOL _0x699E4A5C8C893A18(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x00E39DE14F6200F9, p0, p1, p2); } // 0x699E4A5C8C893A18 0xCE7D50A8
	static BOOL _0x19853B5B17D77BCA(Any p0, Any* p1) { return invoke<BOOL>(0xF7451E98854DE8CC, p0, p1); } // 0x19853B5B17D77BCA 0xD26CCA46
	static BOOL _0x6BFB12CE158E3DD4(Any p0) { return invoke<BOOL>(0x8EF6F208D7168851, p0); } // 0x6BFB12CE158E3DD4 0x24D84334
	static BOOL _0xFE4C1D0D3B9CC17E(Any p0, Any p1) { return invoke<BOOL>(0x17992C1CEA4C7288, p0, p1); } // 0xFE4C1D0D3B9CC17E 0x8A023024
	static Any _0xD8122C407663B995() { return invoke<Any>(0x16253BB58D5BA731); } // 0xD8122C407663B995 0x1C65B038
	static BOOL _0x3001BEF2FECA3680() { return invoke<BOOL>(0xE6935A31851D6BCD); } // 0x3001BEF2FECA3680 0x4D4C37B3
	static BOOL _0x92DA6E70EF249BD1(char* p0, int* p1) { return invoke<BOOL>(0x0D7D400D0EE05C81, p0, p1); } // 0x92DA6E70EF249BD1 0xAED95A6F
	static void _0x675721C9F644D161() { invoke<Void>(0xC91ACEA739A322CF); } // 0x675721C9F644D161 0x486867E6
	static char* _SC_GET_NICKNAME() { return invoke<char*>(0x6617CA00F79C0C3E); } // 0x198D161F458ECC7F
	static BOOL _0x225798743970412B(int* p0) { return invoke<BOOL>(0xBB1675B96C5A0883, p0); } // 0x225798743970412B
	static BOOL _0x418DC16FAE452C1C(int p0) { return invoke<BOOL>(0xF889999E5D527A37, p0); } // 0x418DC16FAE452C1C
}

namespace UNK
{
	static int _RETURN_ZERO() { return invoke<int>(0xE3836512B5FAE547); } // 0xF2CA003F167E21D2 0x106C8317
	static BOOL _0xEF7D17BC6C85264C() { return invoke<BOOL>(0x5A542D292370B45A); } // 0xEF7D17BC6C85264C 0xD87F3A9E
	static void _GET_BROADCAST_FINSHED_LOS_SOUND(BOOL p0) { invoke<Void>(0x34E73F6CA53402D0, p0); } // 0xB0C56BD3D808D863 0xC0B971EA
	static Any _0x8AA464D4E0F6ACCD() { return invoke<Any>(0xB26F0106C6AA10BE); } // 0x8AA464D4E0F6ACCD 0x94BCAC7C
	static void _0xFC309E94546FCDB5(BOOL p0) { invoke<Void>(0x8E6FA16C402E2FA9, p0); } // 0xFC309E94546FCDB5 0x7D90EEE5
	static Any _0xC6DC823253FBB366() { return invoke<Any>(0xC69A8FA4B262760D); } // 0xC6DC823253FBB366 0x734CFEDA
	static void _0xC7E7181C09F33B69(BOOL p0) { invoke<Void>(0x089F06C552870673, p0); } // 0xC7E7181C09F33B69 0x8C227332
	static void _0xFA1E0E893D915215(BOOL p0) { invoke<Void>(0x90DDA796608E9241, p0); } // 0xFA1E0E893D915215 0x5C350D78
	static int _GET_UI_LANGUAGE_ID() { return invoke<int>(0x70C239EC67257485); } // 0x2BDD44CC428A7EAE
	static int _GET_USER_LANGUAGE_ID() { return invoke<int>(0x404CFD88BF6E9195); } // 0xA8AE43AEC1A61314
}

namespace UNK1
{
	static void _0x48621C9FCA3EBD28(BOOL p0) { invoke<Void>(0x6831F2B0AA3B6439, p0); } // 0x48621C9FCA3EBD28
	static void _0x81CBAE94390F9F89() { invoke<Void>(0x1CC5CFF0EB6C30A1); } // 0x81CBAE94390F9F89
	static void _0x13B350B8AD0EEE10() { invoke<Void>(0x8710581C0E6DF852); } // 0x13B350B8AD0EEE10
	static void _0x293220DA1B46CEBC(float p0, float p1, BOOL p2) { invoke<Void>(0xF649596310B097AF, p0, p1, p2); } // 0x293220DA1B46CEBC
	static void _0x208784099002BC30(char* p0, Any p1) { invoke<Void>(0x4C3EC3682F8AFD6F, p0, p1); } // 0x208784099002BC30
	static void _0xEB2D525B57F42B40() { invoke<Void>(0x527ED47EF44C8E1E); } // 0xEB2D525B57F42B40
	static void _0xF854439EFBB3B583() { invoke<Void>(0x24DD7CC556216311); } // 0xF854439EFBB3B583
	static void _0xAF66DCEE6609B148() { invoke<Void>(0xE94378B77A93516C); } // 0xAF66DCEE6609B148
	static void _0x66972397E0757E7A(Any p0, Any p1, Any p2) { invoke<Void>(0x92602A93567E05A9, p0, p1, p2); } // 0x66972397E0757E7A
	static void _SET_RECORDING_MODE(int mode) { invoke<Void>(0x3557961772A76C62, mode); } // 0xC3AC2FFF9612AC81
	static void _STOP_RECORDING_AND_SAVE_CLIP() { invoke<Void>(0x3C89F4E4D6D70466); } // 0x071A5197D6AFC8B3
	static void _STOP_RECORDING_AND_DISCARD_CLIP() { invoke<Void>(0xE3A93D0B4EE011D4); } // 0x88BB3507ED41A240
	static Any _0x644546EC5287471B() { return invoke<Any>(0x6028BF8283509DCA); } // 0x644546EC5287471B
	static BOOL _IS_RECORDING() { return invoke<BOOL>(0x008EF81A6E1932C8); } // 0x1897CA71995A90B4
	static Any _0xDF4B952F7D381B95() { return invoke<Any>(0xEBA5CEA3F709CA30); } // 0xDF4B952F7D381B95
	static Any _0x4282E08174868BE3() { return invoke<Any>(0xCC7148D42A3B9F3D); } // 0x4282E08174868BE3
	static BOOL _0x33D47E85B476ABCD(BOOL p0) { return invoke<BOOL>(0xC863A6F71AE9F3FA, p0); } // 0x33D47E85B476ABCD
}

namespace UNK2
{
	static void _0x7E2BD3EF6C205F09(Any p0, Any p1) { invoke<Void>(0x010E2EB38472EB53, p0, p1); } // 0x7E2BD3EF6C205F09
	static BOOL _IS_INTERIOR_RENDERING_DISABLED() { return invoke<BOOL>(0x7FD9827B229823AF); } // 0x95AB8B5C992C7B58
	static void _0x5AD3932DAEB1E5D3() { invoke<Void>(0xA9DAA909902806A9); } // 0x5AD3932DAEB1E5D3
	static void _0xE058175F8EAFE79A(BOOL p0) { invoke<Void>(0x96FC18882D498D0D, p0); } // 0xE058175F8EAFE79A
	static void _0x3353D13F09307691() { invoke<Void>(0xAEA13EB8CBFBA183); } // 0x3353D13F09307691
	static void _0x49DA8145672B2725() { invoke<Void>(0x348D60DD4147E3AE); } // 0x49DA8145672B2725
}

namespace UNK3
{
	static int _NETWORK_SHOP_GET_PRICE(Hash hash, Hash hash2, BOOL p2) { return invoke<int>(0xDC2FA472EA3A4874, hash, hash2, p2); } // 0xC27009422FCCA88D
	static Any _0x3C4487461E9B0DCB() { return invoke<Any>(0x1D339EC07E31AE46); } // 0x3C4487461E9B0DCB
	static Any _0x2B949A1E6AEC8F6A() { return invoke<Any>(0x5D7A07E2FDA644CD); } // 0x2B949A1E6AEC8F6A
	static Any _0x85F6C9ABA1DE2BCF() { return invoke<Any>(0x58D15851ADF5B0A9); } // 0x85F6C9ABA1DE2BCF
	static Any _0x357B152EF96C30B6() { return invoke<Any>(0x9BD5AC2457368202); } // 0x357B152EF96C30B6
	static BOOL _0xCF38DAFBB49EDE5E(Any* p0) { return invoke<BOOL>(0xA935FA6B4173AB99, p0); } // 0xCF38DAFBB49EDE5E
	static Any _0xE3E5A7C64CA2C6ED() { return invoke<Any>(0x4C39E8B5D1DB7D77); } // 0xE3E5A7C64CA2C6ED
	static BOOL _0x0395CB47B022E62C(Any* p0) { return invoke<BOOL>(0x49B0093461F7CBB5, p0); } // 0x0395CB47B022E62C
	static BOOL _0xA135AC892A58FC07(Any p0) { return invoke<BOOL>(0xEEA86E1B605D9428, p0); } // 0xA135AC892A58FC07
	static Any _0x72EB7BA9B69BF6AB() { return invoke<Any>(0x17B03499A72C8AC4); } // 0x72EB7BA9B69BF6AB
	static BOOL _0x170910093218C8B9(Any* p0) { return invoke<BOOL>(0x0EF98F5526DB1604, p0); } // 0x170910093218C8B9
	static BOOL _0xC13C38E47EA5DF31(Any* p0) { return invoke<BOOL>(0xD8EF9929AAF0064E, p0); } // 0xC13C38E47EA5DF31
	static BOOL _0xB24F0944DA203D9E(Any p0) { return invoke<BOOL>(0xFCE85827D6C3F47A, p0); } // 0xB24F0944DA203D9E
	static BOOL _0x74A0FD0688F1EE45(Any p0) { return invoke<BOOL>(0x1B3E04F76355FAB6, p0); } // 0x74A0FD0688F1EE45
	static BOOL _0x2F41D51BA3BCD1F1(Any p0) { return invoke<BOOL>(0x5C4765FBF1ECC341, p0); } // 0x2F41D51BA3BCD1F1
	static Any _0x810E8431C0614BF9() { return invoke<Any>(0x474B3F20E92EE4B9); } // 0x810E8431C0614BF9
	static BOOL _0x35A1B3E1D1315CFA(BOOL p0, BOOL p1) { return invoke<BOOL>(0x724B0E4B19B33904, p0, p1); } // 0x35A1B3E1D1315CFA
	static BOOL _0x897433D292B44130(Any* p0, Any* p1) { return invoke<BOOL>(0xAB4B07091F6F4A89, p0, p1); } // 0x897433D292B44130
	static BOOL _NETWORK_SHOP_BASKET_START(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x1AEB0F4B80342C09, p0, p1, p2, p3); } // 0x279F08B1A4B29B7E
	static Any _0xA65568121DF2EA26() { return invoke<Any>(0xEA242F92316777F2); } // 0xA65568121DF2EA26
	static Any _0xF30980718C8ED876(_Player p0, Object p1) { return invoke<Any>(0x2C3EC0DA35B5E83F, p0, p1); } // 0xF30980718C8ED876
	static Any _0x27F76CC6C55AD30E() { return invoke<Any>(0xECA5C1F4FE5628AD); } // 0x27F76CC6C55AD30E
	static BOOL _0xE1A0450ED46A7812(Any p0, Any* p1) { return invoke<BOOL>(0x876B7255396AFB9C, p0, p1); } // 0xE1A0450ED46A7812
	static BOOL _0x39BE7CEA8D9CC8E6(Any p0) { return invoke<BOOL>(0x1AF42FD94171E81B, p0); } // 0x39BE7CEA8D9CC8E6
	static BOOL _0x3C5FD37B5499582E(Any* p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x6B7B1963D4E447A1, p0, p1, p2, p3, p4, p5); } // 0x3C5FD37B5499582E
	static BOOL _0xE2A99A9B524BEFFF(Any p0) { return invoke<BOOL>(0xF107756B7C40D5BD, p0); } // 0xE2A99A9B524BEFFF
	static BOOL _0x51F1A8E48C3D2F6D(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0x6479FB9F072B4256, p0, p1, p2); } // 0x51F1A8E48C3D2F6D
	static Any _0x0A6D923DFFC9BD89() { return invoke<Any>(0x519FCCBEC1651003); } // 0x0A6D923DFFC9BD89
	static Any _0x112CEF1615A1139F() { return invoke<Any>(0x65DE59A92F2B9889); } // 0x112CEF1615A1139F
	static BOOL _0xD47A2C1BA117471D(Any p0, Any p1) { return invoke<BOOL>(0xC2955029C0B98757, p0, p1); } // 0xD47A2C1BA117471D
	static BOOL _0xC2F7FE5309181C7D(Any p0, Any p1) { return invoke<BOOL>(0x7BADEEA1BC3A0CED, p0, p1); } // 0xC2F7FE5309181C7D
	static Any _0x23789E777D14CE44() { return invoke<Any>(0x5B8A3A67C5A16A35); } // 0x23789E777D14CE44
	static Any _0x350AA5EBC03D3BD2() { return invoke<Any>(0x75E1B3BA68801A27); } // 0x350AA5EBC03D3BD2
	static Any _0x498C1E05CE5F7877() { return invoke<Any>(0xB91EB8C47F7ADDEA); } // 0x498C1E05CE5F7877
	static BOOL _0x9507D4271988E1AE(Any p0) { return invoke<BOOL>(0x5A74C1B5FA8AC1BF, p0); } // 0x9507D4271988E1AE
	static char* _GET_GAME_VERSION() { return invoke<char*>(0xB0BE6B5CBB12AB78); } // 0xFCA9373EF340AC0A
}