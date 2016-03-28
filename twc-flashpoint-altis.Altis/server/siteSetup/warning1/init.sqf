/*

*/

warningtrgstart = createTrigger ["EmptyDetector", getMarkerPos "warning1"];
warningtrgstart setTriggerArea [800, 800, 0, false];
warningtrgstart setTriggerActivation ["WEST", "PRESENT", true];
warningtrgstart setTriggerStatements ["this", "['warning1'] call twc_hamlet; [thisList] call twc_mortarAttack; ['warning1'] call twc_siteContested; deleteVehicle warningtrgstart", ""];