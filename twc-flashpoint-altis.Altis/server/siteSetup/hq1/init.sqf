/*

*/

hq1setup = createTrigger ["EmptyDetector", getMarkerPos "hq1"];
hq1setup setTriggerArea [1000, 1000, 0, false];
hq1setup setTriggerActivation ["WEST", "PRESENT", true];
hq1setup setTriggerStatements ["this", "['hq1'] call twc_town; ['hq1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle hq1setup", ""];