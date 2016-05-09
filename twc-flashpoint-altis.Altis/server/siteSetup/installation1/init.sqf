/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "installation1"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['installation1'] call twc_siteContested; ['installation1', true] call twc_radar; [thisList] call twc_mortarAttack;  deleteVehicle thisTrigger", ""];