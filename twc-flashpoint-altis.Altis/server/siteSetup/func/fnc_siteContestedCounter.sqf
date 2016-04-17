params["_marker"];

_marker setMarkerColor "colorYellow";
[_marker] call BIS_fnc_taskSetCurrent;

_trg2 = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg2 setTriggerArea [800, 800, 0, false];
_trg2 setTriggerActivation ["ANY", "PRESENT", true];
_trg2 setTriggerTimeout [120,120,30,True];
_trg2 setTriggerStatements ["(EAST countSide thisList) < 3 OR (West countSide thisList) == 0", format["['%1'] call twc_siteDeciding", _marker], ""];