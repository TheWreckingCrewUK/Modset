params["_marker"];

hint format["Redfor has captued %1", _marker];
execVM format["server\siteSetup\%1\init.sqf", _marker];
_marker setMarkerColor "colorEAST";
[_marker, "CREATED", true] spawn BIS_fnc_taskSetState;
if (_marker == "airbase2")then {
	airbase2Respawn call BIS_fnc_removeRespawnPosition;
	boatRespawn = [west, "boatSpawn"] call BIS_fnc_addRespawnPosition;
	publicVariable "boatRespawn";
};

[_marker] call twc_basicLogistics;

{
	deleteVehicle _x
} forEach allDead;

_enemy = nearestObjects [getMarkerPos _marker, ["LandVehicle"], 800];
{
	deleteVehicle _x
}forEach _enemy;

_enemy = nearestObjects [getMarkerPos _marker, ["Man","WeaponHolder","GroundWeaponHolder"], 800];
{
	deleteVehicle _x
}forEach _enemy;

{
	deleteGroup _x
}forEach allGroups;

capturedArray = capturedArray - [_marker];
publicVariable "capturedArray";

if ((_marker) in remainingArray) exitWith{};

remainingArray = remainingArray + [_marker];
publicVariable "remainingArray";