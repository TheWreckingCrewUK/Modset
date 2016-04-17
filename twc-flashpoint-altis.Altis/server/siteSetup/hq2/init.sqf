/*

*/

hq2start = createTrigger ["EmptyDetector", getMarkerPos "hq2"];
hq2start setTriggerArea [800, 800, 0, false];
hq2start setTriggerActivation ["WEST", "PRESENT", true];
hq2start setTriggerStatements ["this", "['hq2'] call twc_hq; ['hq2'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle hq2start", ""];