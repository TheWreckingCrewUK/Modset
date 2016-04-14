//This file defines all of the units used. To change to a new map you mostly only have to change this file.

/*
Known other changes occur in:
server\sys_cache\cacheLoadout.sqf
server\sys_vehicles\VBIED.sqf

*/

civilianType = "C_man_1";

homeEnemy = ["CUP_O_TK_INS_Soldier"];

AA_VEHICLE_TYPE = ["CUP_I_ZU23_NAPA"];

AATeams = 4;
AATeam = ["CUP_O_TK_INS_Soldier", "CUP_O_TK_INS_Soldier_AA", "CUP_O_TK_INS_Soldier_AA"];

cacheBoxType = "Box_FIA_Wps_F";
cacheDefenseSquad = configfile >> "CfgGroups" >> "East" >> "CUP_O_TK_MILITIA" >> "Infantry" >> "CUP_O_TK_MILITIA_Group";

smallTownSquad = ["CUP_O_TK_INS_Soldier_TL","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier_MG"];

townSpawn = ["CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier"];
townSquadWave = ["CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier"];

vehicleList = ["C_Offroad_01_F", "C_SUV_01_F", "C_Quadbike_01_F"];

townMarkerArray = ["Adawiyah","Afaf","Ahlam","Bahijah","Derya","Elmas","Ghazal","Ishfaq","Itimad","Kallista","Labibah","Rafiah","Rufaidah","Salimah","Temirah","Wahbiyah"];
publicVariable "townMarkerArray";

enemyTechnical = ["CUP_O_LR_MG_TKM"];