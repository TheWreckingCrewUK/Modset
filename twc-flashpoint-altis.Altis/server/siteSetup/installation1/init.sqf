/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "installation1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['installation1'] call twc_siteSetup; ['installation1'] call twc_siteContested; execVM 'server\siteSetup\installation1\contested.sqf'; deleteVehicle _trg", ""];