/*

*/

warningtrgstart = createTrigger ["EmptyDetector", getMarkerPos "warning1"];
warningtrgstart setTriggerArea [500, 500, 0, false];
warningtrgstart setTriggerActivation ["WEST", "PRESENT", true];
warningtrgstart setTriggerStatements ["this", "['warning1'] call twc_hamlet; 
['warning1'] call twc_siteContested; deleteVehicle warningtrgstart", ""];