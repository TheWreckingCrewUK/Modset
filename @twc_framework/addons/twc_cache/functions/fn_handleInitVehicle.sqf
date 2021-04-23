params ["_vehicle"];

if (hasInterface) exitWith {};
if !(local _vehicle) exitWith {};

// if there's no players in the group...
if (({isPlayer _x} count Units (group _vehicle) == 0)) then {
	// TODO: get debug status (cba setting)
	_debug = false;
	
	_cacheRange = _vehicle getVariable ["TWC_Cache_Vehicle_Range", (missionNameSpace getVariable ["TWC_Cache_Vehicle_Range", 1500])];
	[_debug, _vehicle, _cacheRange] call TWC_Cache_fnc_vehicleLoop;
};