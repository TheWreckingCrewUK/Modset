/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "hq1"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['hq1'] call twc_hq; ['hq1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];