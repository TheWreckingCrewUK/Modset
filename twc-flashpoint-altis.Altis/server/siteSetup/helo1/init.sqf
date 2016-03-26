/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "helo1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['helo1'] call twc_siteSetup; ['helo1'] call twc_siteContested; execVM 'server\siteSetup\helo1\contested.sqf'; deleteVehicle _trg", ""];