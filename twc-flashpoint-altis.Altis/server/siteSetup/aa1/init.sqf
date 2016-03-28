/*

*/

aastart = createTrigger ["EmptyDetector", getMarkerPos "aa1"];
aastart setTriggerArea [800, 800, 0, false];
aastart setTriggerActivation ["WEST", "PRESENT", true];
aastart setTriggerStatements ["this", "['aa1'] call twc_mech; ['aa1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle aastart", ""];