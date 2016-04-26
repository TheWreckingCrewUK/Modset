/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "mech1"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['mech1'] call twc_mech; ['mech1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];