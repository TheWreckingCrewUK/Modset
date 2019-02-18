params [["_group", grpNull, [grpNull]], ["_position", [0, 0, 0], [[]], 3]];

_vehicle = vehicle leader _group;
_commander = effectiveCommander _vehicle;
_commander doMove _position;
_trig = createTrigger ["EmptyDetector", [0,0,0]];
_trig setVariable ["Vehicle",_vehicle];
_trig setTriggerArea [100,100,0,false];
_trig setTriggerActivation ["ANYPLAYER","PRESENT",true];
_trig setTriggerStatements ["this","thisTrigger getVariable ""vehicle"" forceSpeed 0", "thisTrigger getVariable ""vehicle"" forceSpeed -1"];
waitUntil {_vehicle distance2D _position < 25};
deleteVehicle _trig;
_commander forceSpeed -1;

true