/*

*/
"radar2Radius" setMarkerAlpha 1;

_trg = createTrigger ["EmptyDetector", getMarkerPos "radar2"];
_trg setTriggerArea [800, 800, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", "['radar2'] call twc_radar; ['radar2'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle thisTrigger", ""];