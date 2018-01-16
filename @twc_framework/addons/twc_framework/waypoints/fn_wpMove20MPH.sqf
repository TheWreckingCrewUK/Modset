params [["_group", grpNull, [grpNull]], ["_position", [0, 0, 0], [[]], 3]];

_vehicle = vehicle leader _group;
_commander = effectiveCommander _vehicle;
_commander forceSpeed 8.9408;
_commander doMove _position;
waitUntil {_vehicle distance2D _position < 25};

true