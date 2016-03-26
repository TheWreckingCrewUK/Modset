/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "hq2"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['hq2'] call twc_siteSetup; ['hq2'] call twc_siteContested; execVM 'server\siteSetup\hq2\contested.sqf'; deleteVehicle _trg", ""];