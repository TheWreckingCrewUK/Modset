params["_marker", "_canCounter"];

_marker setMarkerColor "colorYellow";
[_marker] call BIS_fnc_taskSetCurrent;

if(_marker == "commanderBase")then{
	
};

if(_marker == "airbase2") then{
	
};

_trg2 = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg2 setTriggerArea [400, 400, 0, false];
_trg2 setTriggerActivation ["ANY", "PRESENT", false];
_trg2 setTriggerTimeout [45,45,45,True];
_trg2 setTriggerStatements ["(EAST countSide thisList) < 3 OR (West countSide thisList) == 0", format["['%1', %2, thislist, 1] call twc_siteDeciding", _marker, _canCounter], ""];