/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "support1"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['support1'] call twc_town; ['support1', true] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];