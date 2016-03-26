/*

*/

mech1start = createTrigger ["EmptyDetector", getMarkerPos "mech1"];
mech1start setTriggerArea [500, 500, 0, false];
mech1start setTriggerActivation ["WEST", "PRESENT", true];
mech1start setTriggerStatements ["this", "['mech1'] call twc_mech; ['mech1'] call twc_siteContested; deleteVehicle mech1start", ""];