/*

*/

hq2start = createTrigger ["EmptyDetector", getMarkerPos "hq2"];
hq2start setTriggerArea [500, 500, 0, false];
hq2start setTriggerActivation ["WEST", "PRESENT", true];
hq2start setTriggerStatements ["this", "['hq2'] call twc_town; ['hq2'] call twc_siteContested; deleteVehicle hq2start", ""];