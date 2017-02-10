//This file defines all of the units used. To change to a new map you mostly only have to change this file.

/*
Known other changes occur in:
server\sys_cache\cacheLoadout.sqf
server\sys_vehicles\VBIED.sqf

*/
//Classname of civilians for the mission
civilianType = "C_man_1";
//Classname of crate used as insurgent cache
cacheBoxType = "Box_FIA_Wps_F";
//Config classname of infantry squad that defends the cache
cacheDefenseSquad = configfile >> "CfgGroups" >> "West" >> "Guerilla" >> "Infantry" >> "IRG_InfSquad";
//Array of units that spawn as the town defenders
townSpawn = ["O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F"];
//Array of units that spawn in waves to move into the town
townSquadWave = ["O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_AR_F","O_G_Soldier_AR_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_AR_F","O_G_Soldier_AR_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_F","O_G_Soldier_LAT_F","O_G_Soldier_AR_F","O_G_Soldier_AR_F"];
aaTeam = ["O_G_Soldier_lite_F","O_G_Soldier_lite_F","O_G_Soldier_lite_F"];
//Civilian vehicles that are spawned
vehicleList = ["C_Offroad_01_F", "C_Quadbike_01_F", "C_SUV_01_F", "C_Van_01_transport_F","C_Van_01_box_F","C_Truck_02_transport_F"];
//Technical used by enemy forces when caches are destroyed
enemyTechnical = ["O_G_Offroad_01_armed_F"];
//Array of locations that should NOT spawn enemies. Such as the base or far off islands
_badTowns = ["Agia Marina","Stratis Air Base","airfield","The Spartan","Pythos","Xiros","LZ Baldy","Kamino Coast"];
//Gets the location data of bad town list:
_towns = nearestLocations [[worldSize/2,worldSize/2], ["NameVillage","NameCity","NameCityCapital","nameLocal"], (sqrt 2 *(worldSize / 2))];
//Builds array for what we should remove
badTownArray = [];
{
	if(text _x in _badTowns)then{
		badTownArray = badTownArray + [_x];
	};
}forEach _towns;