/*
	File: fn_initialSetup.sqf
	Author: Dom
	Description: Runs the initial actions on a new mission
*/
profileNamespace setVariable ["AW_stopServerSave",false];

private _position = ["BluforFOB",[worldSize / 2,worldSize / 2]] call AW_fnc_findSafePosition;
while {_position isEqualTo []} do {
	_position = ["BluforFOB",[worldSize / 2,worldSize / 2]] call AW_fnc_findSafePosition;
};

private _fobBuildingClassname = getText(missionConfigFile >> "Blufor_Setup" >> "AW_fobBuilding");
private _fobBuilding = createVehicle [_fobBuildingClassname,_position];
_fobBuilding setPosATL _position;
_fobBuilding addEventHandler ["HandleDamage",{0}];
private _fobNames = getArray(missionConfigFile >> "Core_Settings" >> "AW_fobDefaultNames");
AW_fobDetails = [[_fobNames select 0,_position]];
publicVariable "AW_fobDetails";

AW_resourcesAvailable = getArray(missionConfigFile >> "Core_Settings" >> "AW_startingResources");
publicVariable "AW_resourcesAvailable";
AW_civRep = 0;
private _startingRep = getNumber(missionConfigFile >> "Core_Settings" >> "AW_startingCivRep");
[_startingRep] call AW_fnc_adjustCivRep;
AW_opforThreat = 0;
publicVariable "AW_opforThreat";
AW_intel = 0;
publicVariable "AW_intel";
AW_bluforSectors = [];
publicVariable "AW_bluforSectors";
AW_logisticsSetup = [0,0,[]];
publicVariable "AW_logisticsSetup";
AW_factorySetup = [];
publicVariable "AW_factorySetup";
AW_mobileRespawns = [];
publicVariable "AW_mobileRespawns";

AW_totalPlaytime = 0;
AW_sectorsTaken = 0;
AW_sectorsLost = 0;
AW_sideMissionsSpawned = 0;
AW_secondaryMissionsCompleted = 0;
AW_secondaryMissionsFailed = 0;
AW_bluforDeaths = 0;
AW_opforDeaths = 0;
AW_guerillaDeaths = 0;
AW_civilianDeaths = 0;
AW_bluforVehiclesDestroyed = 0;
AW_bluforArmourDestroyed = 0;
AW_bluforNavalDestroyed = 0;
AW_bluforAirDestroyed = 0;
AW_opforVehiclesDestroyed = 0;
AW_opforArmourDestroyed = 0;
AW_opforNavalDestroyed = 0;
AW_opforAirDestroyed = 0;
AW_guerillaVehiclesDestroyed = 0;
AW_civilianVehiclesDestroyed = 0;

AW_sectorDetails = [];
{
	AW_sectorDetails pushBack [_x,1,0]; //[sector,garrisonRatio,lostBuildings/radioTower] 0 is radio tower present, -1 is not
} forEach AW_allSectors;

call AW_fnc_saveGame;