params [["_group", grpNull, [grpNull]], ["_position", [0, 0, 0], [[]], 3]];

_vehicle = vehicle leader _group;
_commander = effectiveCommander _vehicle;
_commander doMove _position;
waitUntil {_vehicle distance2D _position < 100};
{deleteVehicle _x}forEach (units _group);
deleteGroup _group;
deleteVehicle _vehicle;


true