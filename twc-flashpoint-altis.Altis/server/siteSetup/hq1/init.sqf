/*

*/

hq1setup = createTrigger ["EmptyDetector", getMarkerPos "hq1"];
hq1setup setTriggerArea [500, 500, 0, false];
hq1setup setTriggerActivation ["WEST", "PRESENT", true];
hq1setup setTriggerStatements ["this", "['hq1'] call twc_town; ['hq1'] call twc_siteContested; deleteVehicle hq1setup", ""];