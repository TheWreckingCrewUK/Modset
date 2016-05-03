params["_marker", "_canCounter"];

_marker setMarkerColor "colorYellow";
[_marker] call BIS_fnc_taskSetCurrent;

_trg2 = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg2 setTriggerArea [700, 700, 0, false];
_trg2 setTriggerActivation ["ANY", "PRESENT", false];
_trg2 setTriggerTimeout [90,90,90,True];
_trg2 setTriggerStatements ["((EAST countSide thisList) < 4 && {_x isKindof 'LandVehicle' || _x isKindof 'air' && side _x == WEST} count thisList == 0) OR (West countSide thisList) == 0", format["['%1', %2, thisList] call twc_siteDeciding", _marker, _canCounter], ""];