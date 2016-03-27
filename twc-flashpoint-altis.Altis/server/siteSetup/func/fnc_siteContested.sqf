params["_marker"];

_marker setMarkerColor "colorYellow";


_trg2 = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg2 setTriggerArea [1000, 1000, 0, false];
_trg2 setTriggerActivation ["ANY", "PRESENT", true];
_trg2 setTriggerTimeout [30,30,30,True];
_trg2 setTriggerStatements ["(East countSide thisList) < 6 OR (West countSide thisList) == 0", format["['%1'] call twc_siteDeciding", _marker], ""];