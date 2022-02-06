/*
	File: fn_loadSave.sqf
	Author: Dom
	Description: Loads the current progress on the game
*/
private _timeStamp = diag_tickTime;
params [
	["_data",[],[[]]]
];

_data params ["_version","_date","_fobPositions","_resources","_civRep","_opforThreat","_intel","_bluforSectors","_logistics","_factories","_objects","_stats","_sectorDetails"];

setDate _date;
AW_fobDetails = _fobPositions;
publicVariable "AW_fobDetails";
AW_resourcesAvailable = _resources;
publicVariable "AW_resourcesAvailable";

AW_civRep = _civRep;
publicVariable "AW_civRep";
private _resistanceEnemy = [0,1] select (_civRep < 0);
private _resistanceFriendly = [0,1] select (_civRep > -1);
resistance setFriend [east,_resistanceEnemy];
east setFriend [resistance,_resistanceEnemy];
resistance setFriend [west,_resistanceFriendly];
west setFriend [resistance,_resistanceFriendly];

AW_opforThreat = _opforThreat;
publicVariable "AW_opforThreat";
AW_intel = _intel;
publicVariable "AW_intel";
AW_bluforSectors = _bluforSectors;
publicVariable "AW_bluforSectors";
{
	_x setMarkerColor "colorBLUFOR";
} forEach _bluforSectors;

if ((_logistics select 2) isNotEqualTo []) then { //restart routes
	_logistics params ["_trucksAvailable","_trucksInTransit","_currentRoutes"];
	{
		_x params ["","","","_startTransitTime","_endTransitTime"];
		private _fullTransitTime = _endTransitTime - _startTransitTime;
		_x set [3,CBA_missionTime];
		_x set [4,(CBA_missionTime + _fullTransitTime)];
	} forEach _currentRoutes;

	AW_logisticsHandle = [AW_fnc_logisticsLoop,10] call CBA_fnc_addPerFrameHandler;
};
AW_logisticsSetup = _logistics;
publicVariable "AW_logisticsSetup";
AW_factorySetup = _factories;
publicVariable "AW_factorySetup";
AW_mobileRespawns = [];
publicVariable "AW_mobileRespawns";

{
	_x params ["_className","_position","_direction","_up",["_damageArray",[]]];
	private _object = createVehicle [_className,_position,[],0,"CAN_COLLIDE"];
	_object setPosWorld _position;
	_object setVectorDirAndUp [_direction,_up];
	if (_damageArray isNotEqualTo []) then {
		{
			_object setHitIndex [_forEachIndex,_x,false];
		} forEach _damageArray;
	};

	[_object] call AW_fnc_initialiseObject;

	if (unitIsUAV _object) then {
		[_object] call AW_fnc_setupUAV;
	};
} forEach _objects;

_stats params ["_totalPlaytime","_sectorsTaken","_sectorsLost","_sideMissions","_secondaryComplete","_secondaryFailed","_bluforDeaths","_opforDeaths","_guerDeaths","_civDeaths","_bluforVehLost","_bluforArmourLost","_bluforNavalLost","_bluforAirLost","_opforVehLost","_opforArmourLost","_opforNavalLost","_opforAirLost","_guerVehLost","_civVehLost"];
AW_totalPlaytime = _totalPlaytime;
AW_sectorsTaken = _sectorsTaken;
AW_sectorsLost = _sectorsLost;
AW_sideMissionsSpawned = _sideMissions;
AW_secondaryMissionsCompleted = _secondaryComplete;
AW_secondaryMissionsFailed = _secondaryFailed;
AW_bluforDeaths = _bluforDeaths;
AW_opforDeaths = _opforDeaths;
AW_guerillaDeaths = _guerDeaths;
AW_civilianDeaths = _civDeaths;
AW_bluforVehiclesDestroyed = _bluforVehLost;
AW_bluforArmourDestroyed = _bluforArmourLost;
AW_bluforNavalDestroyed = _bluforNavalLost;
AW_bluforAirDestroyed = _bluforAirLost;
AW_opforVehiclesDestroyed = _opforVehLost;
AW_opforArmourDestroyed = _opforArmourLost;
AW_opforNavalDestroyed = _opforNavalLost;
AW_opforAirDestroyed = _opforAirLost;
AW_guerillaVehiclesDestroyed = _guerVehLost;
AW_civilianVehiclesDestroyed = _civVehLost;

AW_sectorDetails = _sectorDetails;

[format ["Game Loaded: Total execution time %1 seconds",(diag_tickTime - _timeStamp)]] call AW_fnc_logIt;