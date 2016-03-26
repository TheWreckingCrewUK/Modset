/*

*/

inf3start = createTrigger ["EmptyDetector", getMarkerPos "inf3"];
inf3start setTriggerArea [500, 500, 0, false];
inf3start setTriggerActivation ["WEST", "PRESENT", true];
inf3start setTriggerStatements ["this", "['inf3'] call twc_town; ['inf3'] call twc_siteContested; deleteVehicle inf3start", ""];