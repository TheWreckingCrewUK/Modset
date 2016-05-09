/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "motorized1"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['motorized1'] call twc_village; ['motorized1', true] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];