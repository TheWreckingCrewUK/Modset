/*

*/

warningtrgstart = createTrigger ["EmptyDetector", getMarkerPos "warning1"];
warningtrgstart setTriggerArea [500, 500, 0, false];
warningtrgstart setTriggerActivation ["WEST", "PRESENT", true];
warningtrgstart setTriggerStatements ["this", "execVM 'server\siteSetup\warning1\contested.sqf'; ['warning1'] call twc_hamlet; deleteVehicle warningtrgstart", ""];