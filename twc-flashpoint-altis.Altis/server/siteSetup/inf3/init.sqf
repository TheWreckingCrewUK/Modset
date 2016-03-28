/*

*/

inf3start = createTrigger ["EmptyDetector", getMarkerPos "inf3"];
inf3start setTriggerArea [800, 800, 0, false];
inf3start setTriggerActivation ["WEST", "PRESENT", true];
inf3start setTriggerStatements ["this", "['inf3'] call twc_town; ['inf3'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle inf3start", ""];