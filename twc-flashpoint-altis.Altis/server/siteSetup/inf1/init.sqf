/*

*/

inf1start = createTrigger ["EmptyDetector", getMarkerPos "inf1"];
inf1start setTriggerArea [1000, 1000, 0, false];
inf1start setTriggerActivation ["WEST", "PRESENT", true];
inf1start setTriggerStatements ["this", "['inf1'] call twc_town; ['inf1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle inf1start", ""];