/*
*
*
*/
params["_marker"];

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