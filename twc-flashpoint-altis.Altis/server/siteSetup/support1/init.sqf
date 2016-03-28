/*

*/

supportStart = createTrigger ["EmptyDetector", getMarkerPos "support1"];
supportStart setTriggerArea [800, 800, 0, false];
supportStart setTriggerActivation ["WEST", "PRESENT", true];
supportStart setTriggerStatements ["this", "['support1'] call twc_town; ['support1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle supportStart", ""];