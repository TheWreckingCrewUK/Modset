/*

*/

airsetup = createTrigger ["EmptyDetector", getMarkerPos "air1"];
airsetup setTriggerArea [800, 800, 0, false];
airsetup setTriggerActivation ["WEST", "PRESENT", true];
airsetup setTriggerStatements ["this", "['air1'] call twc_town; ['air1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle airsetup", ""];