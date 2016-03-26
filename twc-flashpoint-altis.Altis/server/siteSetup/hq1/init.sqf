/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "hq1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['hq1'] call twc_siteSetup; ['hq1'] call twc_siteContested; execVM 'server\siteSetup\hq1\contested.sqf'; deleteVehicle _trg", ""];