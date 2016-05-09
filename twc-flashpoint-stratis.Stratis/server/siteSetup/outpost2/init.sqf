/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "outpost2"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['outpost2'] call twc_hamlet; [thisList] call twc_mortarAttack; ['outpost2', true] call twc_siteContested; deleteVehicle thisTrigger", ""];