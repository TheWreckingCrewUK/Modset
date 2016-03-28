params["_marker"];

hint format["Redfor has captued %1", _marker];
execVM format["server\siteSetup\%1\init.sqf", _marker];

[_marker] call twc_basicLogistics;

_marker setMarkerColor "colorEAST";

{ deleteVehicle _x } forEach allDead;

_enemy = nearestObjects [getMarkerPos _marker, ["Tank","Car","Truck"], 1000];
{
	deleteVehicle _x
}forEach _enemy;

_enemy = nearestObjects [getMarkerPos _marker, ["Man"], 1000];
{
	deleteVehicle _x
}forEach _enemy;

capturedArray - [_marker];
publicVariable "capturedArray";

remainingArray + [_marker];
publicVariable "remainingArray";