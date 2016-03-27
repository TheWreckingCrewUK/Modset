/*

*/

inf2start = createTrigger ["EmptyDetector", getMarkerPos "inf2"];
inf2start setTriggerArea [1000, 1000, 0, false];
inf2start setTriggerActivation ["WEST", "PRESENT", true];
inf2start setTriggerStatements ["this", "['inf2'] call twc_town; ['inf2'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle inf2start", ""];