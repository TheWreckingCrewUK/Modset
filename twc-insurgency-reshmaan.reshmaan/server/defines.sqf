//This file defines all of the units used. To change to a new map you mostly only have to change this file.

/*
Known other changes occur in:
server\sys_cache\cacheLoadout.sqf
server\sys_vehicles\VBIED.sqf

*/

civilianType = "C_man_1";

homeEnemy = ["CUP_O_TK_INS_Soldier"];

AA_VEHICLE_TYPE = "CUP_O_ZU23_TK_INS";

AATeams = 6;
AATeam = ["CUP_O_TK_INS_Soldier", "CUP_O_TK_INS_Soldier_AA", "CUP_O_TK_INS_Soldier_AA", "CUP_O_TK_INS_Soldier_AA"];

cacheBoxType = "Box_FIA_Wps_F";
cacheDefenseSquad = configfile >> "CfgGroups" >> "East" >> "CUP_O_TK_MILITIA" >> "Infantry" >> "CUP_O_TK_MILITIA_Group";

smallTownSquad = ["CUP_O_TK_INS_Soldier_TL","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_MG"];

townSpawn = ["CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier"];

townSquadWave = ["CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier_MG","CUP_O_TK_INS_Soldier_MG","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier_MG","CUP_O_TK_INS_Soldier_MG","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier_MG","CUP_O_TK_INS_Soldier_MG"];

vehicleList = ["CUP_C_UAZ_Unarmed_TK_CIV", "CUP_C_Skoda_Blue_CIV", "CUP_C_Datsun_Plain", "CUP_C_Ural_Open_Civ_03"];

townMarkerArray = ["Kallista", "Farhannah", "Binnaz", "Afaf", "Temirah", "Asra", "Khaatir", "Usaimah", "Dimah", "Salimah",  "Labibah", "Derya", "Wahbiyah", "Dilshad", "Dahab", "Elmas", "Rufaidah", "Jabirah", "Ishfaq", "Ahlam", "Futun", "Efsane", "Ghufran", "Ghazal", "I'timad", "Kifah", "Yafiah", "Bahijah", "Adawiyah", "Najiba", "Johari", "Bushra", "Marzuqah", "Jalilah", "Karida Dam", "Kezban", "Ghadir", "Durrishahwar", "Rafi'ah", "Zaleekah Fields", "Zaleekah", "Hadassah", "Faaria", "Husna", "Sa´diyah", "Wadi'ah", "Yaprak"];
publicVariable "townMarkerArray";

enemyTechnical = ["CUP_O_LR_MG_TKM", "CUP_O_LR_SPG9_TKM", "CUP_O_LR_BTR40_MG_TKM"];

badTownList = ["Adawiyah","Afaf","Ahlam","Bahijah","Derya","Elmas","Ghazal","Ishfaq","Itimad","Kallista","Labibah","Rafiah","Rufaidah","Salimah","Temirah","Wahbiyah"];

specialTowns = [];