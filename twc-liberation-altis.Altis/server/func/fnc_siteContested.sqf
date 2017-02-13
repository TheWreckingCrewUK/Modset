params["_location","_pos","_type","_markerstr"];

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["ANY", "PRESENT", false];
_trg setTriggerTimeout [10,10,10,true];
_trg setTriggerStatements ["independent countSide thisList < 3 || west countSide thisList == 0",format["[(thisTrigger getVariable 'location'),%1,thisList,'%2','%3'] call twc_fnc_siteDeciding",_pos,_type,_markerstr], ""];

_trg setVariable ["location",_location];