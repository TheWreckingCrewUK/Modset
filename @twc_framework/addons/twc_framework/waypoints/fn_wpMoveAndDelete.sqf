params [["_group", grpNull, [grpNull]], ["_position", [0, 0, 0], [[]], 3]];

_vehicle = vehicle leader _group;
_commander = effectiveCommander _vehicle;
_commander doMove _position;
waitUntil {_vehicle distance2D _position < 100};
_vehicleArray = [];
{
	_toAdd = vehicle _x;
	_vehicleArray = _vehicleArray - _toAdd;
	_vehicleArray pushback _toAdd;
	deleteVehicle _x;
}forEach (units _group);
{
	deleteVehicle _x;
}forEach _vehicleArray;
deleteGroup _group;


true