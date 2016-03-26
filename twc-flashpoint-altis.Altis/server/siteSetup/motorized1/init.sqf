/*

*/

motorizedstart = createTrigger ["EmptyDetector", getMarkerPos "motorized1"];
motorizedstart setTriggerArea [500, 500, 0, false];
motorizedstart setTriggerActivation ["WEST", "PRESENT", true];
motorizedstart setTriggerStatements ["this", "['motorized1'] call twc_town; ['motorized1'] call twc_siteContested; deleteVehicle motorizedstart", ""];