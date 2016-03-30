//This file defines all of the units used. To change to a new map you mostly only have to change this file.

/*
Known other changes occur in:
server\sys_cache\cacheLoadout.sqf
server\sys_vehicles\VBIED.sqf

*/

civilianType = "C_man_1";

homeEnemy = ["CUP_I_GUE_Soldier_AKM"];

AA_VEHICLE_TYPE = "CUP_I_DSHKM_NAPA";

AATeams = 4;
AATeam = ["CUP_I_GUE_Soldier_AKM", "CUP_I_GUE_Soldier_AA", "CUP_I_GUE_Soldier_AA"];

cacheBoxType = "Box_FIA_Wps_F";
cacheDefenseSquad = configfile >> "CfgGroups" >> "Indep" >> "CUP_I_NAPA" >> "Infantry" >> "CUP_I_NAPA_InfSquad";

smallTownSquad = ["CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM"];

townSpawn = ["CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM"];
townSquadWave = ["CUP_I_GUE_Soldier_AKM","CUP_I_GUE_Soldier_AT","CUP_I_GUE_Soldier_AKM"];

vehicleList = ["C_Offroad_01_F", "C_SUV_01_F", "C_Quadbike_01_F"];

townMarkerArray = ["AgiaMarina","AgiosCephas","AirStationMike","CampMaxwell","CampTempest","Girna","KaminoFireingRange","MilitaryBase","OldOutpost"];
publicVariable "townMarkerArray";

enemyTechnical = ["CUP_I_Datsun_PK"];