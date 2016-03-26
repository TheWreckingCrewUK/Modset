/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "radar1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['radar1'] call twc_siteSetup; ['radar1'] call twc_siteContested; execVM 'server\siteSetup\radar1\contested.sqf'; deleteVehicle _trg", ""];