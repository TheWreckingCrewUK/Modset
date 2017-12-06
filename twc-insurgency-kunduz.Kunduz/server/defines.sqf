//This file defines all of the units used. To change to a new map you mostly only have to change this file.

/*
Known other changes occur in:
server\sys_cache\cacheLoadout.sqf
server\sys_vehicles\VBIED.sqf
*/

civilianType = ["Tak_Civ_Men_KTL1", "CUP_C_TK_Man_04_Jack", "Tak_Civ_Men_KTL2","CUP_C_TK_Man_07_Coat", "Tak_Civ_Men_KTL3", "Tak_Civ_Men_KTL4", "Tak_Civ_Men_KTs1", "Tak_Civ_Men_KTs2", "Tak_Civ_Men_KTs3", "Tak_Civ_Men_KTs4",  "CUP_C_TK_Man_05_Jack", "Tak_Civ_Men_J1", "Tak_Civ_Men_J2", "Tak_Civ_Men_J3", "Tak_Civ_Men_KTL1", "Tak_Civ_Men_KTL2", "Tak_Civ_Men_KTL3", "Tak_Civ_Men_KTL4", "Tak_Civ_Men_KTs1", "Tak_Civ_Men_KTs2", "Tak_Civ_Men_KTs3", "Tak_Civ_Men_KTs4", "CUP_C_TK_Man_04_Jack", "CUP_C_TK_Man_07_Coat", "CUP_C_TK_Man_05_Jack", "Tak_Civ_Men_J1", "Tak_Civ_Men_J2"];

homeEnemy = ["CUP_O_TK_INS_Soldier"];

AA_VEHICLE_TYPE = "CUP_O_ZU23_TK_INS";
AATeams = 6;
AATeam = ["CUP_O_TK_INS_Soldier", "CUP_O_TK_INS_Soldier_AA", "CUP_O_TK_INS_Soldier_AA", "CUP_O_TK_INS_Soldier_AA"];

cacheBoxType = "Box_FIA_Wps_F";
cacheDefenseSquad = configfile >> "CfgGroups" >> "East" >> "CUP_O_TK_MILITIA" >> "Infantry" >> "CUP_O_TK_MILITIA_Group";

smallTownSquad = ["CUP_O_TK_INS_Soldier_TL","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier_MG"];

townSpawn = ["CUP_O_TK_INS_Soldier_AR","Tak_twc_ins_Men_R1","CUP_O_TK_INS_Soldier","Tak_twc_ins_Men_RPG1","CUP_O_TK_INS_Soldier_MG","Tak_twc_ins_Men_R2","Tak_twc_ins_Men_AR1","CUP_O_TK_INS_Soldier_AT","Tak_twc_ins_Men_MG1","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_a2","CUP_O_TK_INS_Soldier_TL","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier_AR","Tak_twc_ins_Men_B1","Tak_twc_ins_Men_B2","Tak_twc_ins_Men_R1","CUP_O_TK_INS_Soldier","Tak_twc_ins_Men_RPG1","CUP_O_TK_INS_Soldier_MG","Tak_twc_ins_Men_R2","Tak_twc_ins_Men_AR1","CUP_O_TK_INS_Soldier_AT","Tak_twc_ins_Men_MG1","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_a2","CUP_O_TK_INS_Soldier_TL","CUP_O_TK_INS_Soldier_AT"];

townSquadWave = ["CUP_O_TK_INS_Soldier_AR","Tak_twc_ins_Men_R1","CUP_O_TK_INS_Soldier","Tak_twc_ins_Men_RPG1","CUP_O_TK_INS_Soldier_MG","Tak_twc_ins_Men_R2","Tak_twc_ins_Men_AR1","CUP_O_TK_INS_Soldier_AT","Tak_twc_ins_Men_MG1","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_a2","CUP_O_TK_INS_Soldier_TL","CUP_O_TK_INS_Soldier_AT","CUP_O_TK_INS_Soldier_AR","Tak_twc_ins_Men_B1","Tak_twc_ins_Men_B2","Tak_twc_ins_Men_R1","CUP_O_TK_INS_Soldier","Tak_twc_ins_Men_RPG1","CUP_O_TK_INS_Soldier_MG","Tak_twc_ins_Men_R2","Tak_twc_ins_Men_AR1","CUP_O_TK_INS_Soldier_AT","Tak_twc_ins_Men_MG1","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_R3","Tak_twc_ins_Men_a2","CUP_O_TK_INS_Soldier_TL","CUP_O_TK_INS_Soldier_AT"];

vehicleList = ["CUP_C_UAZ_Unarmed_TK_CIV", "CUP_C_Skoda_Blue_CIV", "CUP_C_Datsun_Plain", "CUP_C_Ural_Open_Civ_03"];

//Run Jayman's location finder script and add towns here
townMarkerArray = ["Gozer Hala", "Al Ka", "Naqel", "Tal Gozar", "Bazaar", "Tabeed", "Taola", "Chahar Dara", "Tappeh Tark", "Darya Yu", "Tappeh Ka", "Tap Ka", "Kar Shek", "Shek Ka", "Tal Kar", "Ka Mala", "Kar Shek Ark", "Pradesh", "Kamar", "Andi", "Tanpeh", "Taher", "Gerdan", "Anbar Tappeh", "Tahre Ti", "Anbar Beed", "Darreh Farm", "Darreh"];
publicVariable "townMarkerArray";

enemyTechnical = ["CUP_O_LR_MG_TKM"];

//Enemy will not spawn in these towns
badTownList = ["Tappeh Fields"];

//Towns specified with a marker
specialTowns = [];