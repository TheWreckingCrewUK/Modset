/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "inf1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['inf1'] call twc_siteSetup; ['inf1'] call twc_siteContested; execVM 'server\siteSetup\inf1\contested.sqf'; deleteVehicle _trg", ""];