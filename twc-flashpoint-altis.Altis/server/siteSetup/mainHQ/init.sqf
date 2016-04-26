/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "mainHQ"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['mainHQ'] call twc_mainHQ; ['mainHQ'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];