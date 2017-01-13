//This file defines all of the units used. To change to a new map you mostly only have to change this file.

/*
Known other changes occur in:
server\sys_cache\cacheLoadout.sqf
server\sys_vehicles\VBIED.sqf

*/

civilianType = "C_man_1";

homeEnemy = ["O_G_Soldier_F"];

cacheBoxType = "Box_FIA_Wps_F";
cacheDefenseSquad = configfile >> "CfgGroups" >> "West" >> "Guerilla" >> "Infantry" >> "IRG_InfSquad";

smallTownSquad = ["O_G_Soldier_TL_F","O_G_Soldier_LAT_F","O_G_Soldier_AR_F"];

townSpawn = ["O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F"];

townSquadWave = ["O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_AR_F","O_G_Soldier_AR_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_AR_F","O_G_Soldier_AR_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_AR_F","O_G_Soldier_AR_F"];

vehicleList = ["C_Offroad_01_F", "C_Quadbike_01_F", "C_SUV_01_F", "C_Van_01_transport_F","C_Van_01_box_F","C_Truck_02_transport_F"];

enemyTechnical = ["O_G_Offroad_01_armed_F"];

badTownList = ["Stratis Air Base","airfield","The Spartan","Pythos","Xiros","LZ Baldy","Kamino Coast"];

specialTowns = [];