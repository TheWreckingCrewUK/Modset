/*

*/

['warning1'] call twc_siteContested;

warningtrg1 = createTrigger ["EmptyDetector", getMarkerPos "warning1"];
warningtrg1 setTriggerArea [500, 500, 0, false];
warningtrg1 setTriggerActivation ["WEST", "NOT PRESENT", true];
warningtrg1 setTriggerTimeout [10,10,10,True];
warningtrg1 setTriggerStatements ["this", "['warning1'] call twc_attackFailed; execVM 'server\siteSetup\warning1\init.sqf'; deleteVehicle warningtrg2; deleteVehicle warningtrg1", ""];

warningtrg2 = createTrigger ["EmptyDetector", getMarkerPos "warning1"];
warningtrg2 setTriggerArea [500, 500, 0, false];
warningtrg2 setTriggerActivation ["EAST", "NOT PRESENT", true];
warningtrg2 setTriggerTimeout [5,5,5,True];
warningtrg2 setTriggerStatements ["this", "['warning1'] call twc_siteCapturedBlufor; deleteVehicle warningtrg1; deleteVehicle warningtrg2", ""];