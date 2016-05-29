params["_marker", "_canCounter"];

_marker setMarkerColor "colorYellow";
[_marker] call BIS_fnc_taskSetCurrent;

_trg2 = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg2 setTriggerArea [800, 800, 0, false];
_trg2 setTriggerActivation ["ANY", "PRESENT", false];
_trg2 setTriggerTimeout [45,45,45,True];
_trg2 setTriggerStatements ["((EAST countSide thisList) < 4 && ({_x isKindOf 'landVehicle' && side _x == EAST} count thisList == 0)) OR (West countSide thisList) == 0", format["['%1', %2, thisList, 0] call twc_siteDeciding", _marker, _canCounter], ""];