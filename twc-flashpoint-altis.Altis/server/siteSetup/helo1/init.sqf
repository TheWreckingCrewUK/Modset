/*

*/

airsetup = createTrigger ["EmptyDetector", getMarkerPos "helo1"];
airsetup setTriggerArea [500, 500, 0, false];
airsetup setTriggerActivation ["WEST", "PRESENT", true];
airsetup setTriggerStatements ["this", "['helo1'] call twc_town; ['helo1'] call twc_siteContested; deleteVehicle airsetup", ""];