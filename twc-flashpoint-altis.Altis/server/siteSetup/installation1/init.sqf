/*

*/

installationstart = createTrigger ["EmptyDetector", getMarkerPos "installation1"];
installationstart setTriggerArea [500, 500, 0, false];
installationstart setTriggerActivation ["WEST", "PRESENT", true];
installationstart setTriggerStatements ["this", "['installation1'] call twc_siteContested; ['installation1'] call twc_radar;  deleteVehicle installationstart", ""];