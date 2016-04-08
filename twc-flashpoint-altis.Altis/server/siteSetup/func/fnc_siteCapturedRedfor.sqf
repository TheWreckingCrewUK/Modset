params["_marker"];

hint format["Redfor has captued %1", _marker];
execVM format["server\siteSetup\%1\init.sqf", _marker];
_marker setMarkerColor "colorEAST";
[_marker, "CREATED", true] spawn BIS_fnc_taskSetState;

[_marker] call twc_basicLogistics;

{
	deleteVehicle _x
} forEach allDead;

_enemy = nearestObjects [getMarkerPos _marker, ["Tank","Car","Tank"], 800];
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


if ((_marker) in remainingArray) exitWith{};

capturedArray = capturedArray - [_marker];
publicVariable "capturedArray";

remainingArray = remainingArray + [_marker];
publicVariable "remainingArray";