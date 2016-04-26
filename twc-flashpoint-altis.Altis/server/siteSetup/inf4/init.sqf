/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "inf4"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['inf4'] call twc_town; ['inf4'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];