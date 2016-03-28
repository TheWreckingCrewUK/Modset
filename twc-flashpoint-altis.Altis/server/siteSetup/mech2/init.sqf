/*

*/

mech2start = createTrigger ["EmptyDetector", getMarkerPos "mech2"];
mech2start setTriggerArea [800, 800, 0, false];
mech2start setTriggerActivation ["WEST", "PRESENT", true];
mech2start setTriggerStatements ["this", "['mech2'] call twc_mech; ['mech2'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle mech2start", ""];