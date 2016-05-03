/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "airbase2"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['airbase2'] call twc_town; ['airbase2', true] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];