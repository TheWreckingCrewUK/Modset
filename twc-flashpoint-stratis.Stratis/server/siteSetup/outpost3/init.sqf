/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "outpost3"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['outpost3'] call twc_siteContested; ['outpost3', true] call twc_hamlet; [thisList] call twc_mortarAttack;  deleteVehicle thisTrigger", ""];