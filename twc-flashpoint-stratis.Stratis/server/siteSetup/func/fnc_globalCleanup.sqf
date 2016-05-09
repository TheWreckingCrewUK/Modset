hint "Running Map Wide Cleanup";
_start = diag_tickTime;


{ deleteVehicle _x } forEach allDead;

_enemy = nearestObjects [getMarkerPos "base", ["Tank","Car","Truck","Air","StaticWeapon","WeaponHolder","GroundWeaponHolder","Ship","ReammoBox"], 10000];
{
	deleteVehicle _x
}forEach _enemy;

_enemy = nearestObjects [getMarkerPos "base", ["Man"], 10000];
{
	deleteVehicle _x
}forEach _enemy;

hint format ["Server cleanup took %1 seconds",diag_tickTime - _start];