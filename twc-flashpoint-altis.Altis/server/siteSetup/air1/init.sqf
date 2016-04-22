/*

*/

airsetup = createTrigger ["EmptyDetector", getMarkerPos "airbase1"];
airsetup setTriggerArea [800, 800, 0, false];
airsetup setTriggerActivation ["WEST", "PRESENT", true];
airsetup setTriggerStatements ["this", "['airbase1'] call twc_airbase; ['airbase1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle airsetup", ""];