/*

*/

airsetup = createTrigger ["EmptyDetector", getMarkerPos "mainHQ"];
airsetup setTriggerArea [800, 800, 0, false];
airsetup setTriggerActivation ["WEST", "PRESENT", true];
airsetup setTriggerStatements ["this", "['mainHQ'] call twc_airbase; ['mainHQ'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle airsetup", ""];