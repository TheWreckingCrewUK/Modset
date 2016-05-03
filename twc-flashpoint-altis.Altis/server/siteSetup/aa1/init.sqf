/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "aa1"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['aa1'] call twc_aa; ['aa1',true] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];