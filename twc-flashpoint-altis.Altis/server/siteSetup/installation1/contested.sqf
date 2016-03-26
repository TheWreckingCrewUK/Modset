/*

*/

_trg2 = createTrigger ["EmptyDetector", getMarkerPos "installation1"];
_trg2 setTriggerArea [500, 500, 0, false];
_trg2 setTriggerActivation ["EAST", "NOT PRESENT", true];
_trg2 setTriggerTimeout [5,5,5,True];
_trg2 setTriggerStatements ["this", "['installation1'] call twc_siteCapturedBlufor; deleteVehicle _trg2", ""];