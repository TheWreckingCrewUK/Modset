params["_marker"];

hint format["Blufor has captured %1",_marker];
_marker setMarkerColor "colorWEST";

{ deleteVehicle _x } forEach allDead;

_enemyVehicle = nearestObjects [getMarkerPos _marker, ["Tank","Car","Truck","WeaponHolder","GroundWeaponHolder"], 1000];
{
	if((typeOf _x) in friendlyVehiclesArray) then{
		_enemyVehicle = _enemyVehicle - [_x];
	};
}forEach _enemyVehicle;

{
	deleteVehicle _x
}forEach _enemyVehicle;

_enemy = nearestObjects [getMarkerPos _marker, ["Man"], 1000];
{
	if((side _x) == WEST) then{
		_enemy = _enemy - [_x];
	};
}forEach _enemy;

{
	deleteVehicle _x
}forEach _enemy;

{
	deleteGroup _x
}forEach allGroups;

if ((_marker) in capturedArray) exitWith{};

capturedArray = capturedArray + [_marker];
publicVariable "capturedArray";

remainingArray = remainingArray - [_marker];
publicVariable "capturedArray";