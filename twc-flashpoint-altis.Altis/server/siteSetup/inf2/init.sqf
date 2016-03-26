/*

*/

inf2start = createTrigger ["EmptyDetector", getMarkerPos "inf2"];
inf2start setTriggerArea [500, 500, 0, false];
inf2start setTriggerActivation ["WEST", "PRESENT", true];
inf2start setTriggerStatements ["this", "['inf2'] call twc_town; ['inf2'] call twc_siteContested; deleteVehicle inf2start", ""];