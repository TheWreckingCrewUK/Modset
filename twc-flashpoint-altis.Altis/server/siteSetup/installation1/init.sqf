/*

*/

installationstart = createTrigger ["EmptyDetector", getMarkerPos "installation1"];
installationstart setTriggerArea [800, 800, 0, false];
installationstart setTriggerActivation ["WEST", "PRESENT", true];
installationstart setTriggerStatements ["this", "['installation1'] call twc_siteContested; ['installation1'] call twc_radar; [thisList] call twc_mortarAttack;  deleteVehicle installationstart", ""];