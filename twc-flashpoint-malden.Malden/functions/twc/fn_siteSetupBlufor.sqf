/*
* Created by [TWC] jayman
*
* Spawns the town start trigger with whatever params are given
*
* ARGUMENTS

*/
params["_location","_pos","_type","_markerstr"];

[_pos] spawn twc_fnc_spawnFriendly;

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [2000, 2000, 0, false];
_trg setTriggerTimeout [5,5,5];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", format["[(thisTrigger getVariable 'location'),%1,'%2','%3'] spawn twc_fnc_siteCapturedBlufor",_pos,_type,_markerstr],""];

	_trg setVariable ["location",_location];

_trg setVariable ["location",_location];