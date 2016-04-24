/*

*/

airbase2start = createTrigger ["EmptyDetector", getMarkerPos "airbase2"];
airbase2start setTriggerArea [800, 800, 0, false];
airbase2start setTriggerActivation ["WEST", "PRESENT", true];
airbase2start setTriggerStatements ["this", "['airbase2'] call twc_town; ['airbase2'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle airbase2start", ""];