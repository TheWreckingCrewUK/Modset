params [["_group", grpNull, [grpNull]], ["_position", [0, 0, 0], [[]], 3]];

_vehicle = vehicle leader _group;
(effectiveCommander _vehicle) doMove _position;

waitUntil {_vehicle distance2D _position < 100};

{
	if (vehicle _x != _x) then {
		{ deleteVehicle _x; } forEach (crew _x);
	};
	
	deleteVehicle _x;
} forEach (units _group);

deleteGroup _group;

true