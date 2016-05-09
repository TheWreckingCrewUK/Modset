/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "inf3"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['inf3'] call twc_town; ['inf3', true] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];