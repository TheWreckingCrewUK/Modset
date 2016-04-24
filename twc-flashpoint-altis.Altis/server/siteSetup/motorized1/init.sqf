/*

*/

motorizedstart = createTrigger ["EmptyDetector", getMarkerPos "motorized1"];
motorizedstart setTriggerArea [800, 800, 0, false];
motorizedstart setTriggerActivation ["WEST", "PRESENT", true];
motorizedstart setTriggerStatements ["this", "['motorized1'] call twc_village; ['motorized1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle motorizedstart", ""];