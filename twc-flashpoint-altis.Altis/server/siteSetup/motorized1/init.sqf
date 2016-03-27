/*

*/

motorizedstart = createTrigger ["EmptyDetector", getMarkerPos "motorized1"];
motorizedstart setTriggerArea [1000, 1000, 0, false];
motorizedstart setTriggerActivation ["WEST", "PRESENT", true];
motorizedstart setTriggerStatements ["this", "['motorized1'] call twc_town; ['motorized1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle motorizedstart", ""];