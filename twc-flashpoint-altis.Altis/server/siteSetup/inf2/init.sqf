/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "inf2"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['inf2'] call twc_siteSetup; ['inf2'] call twc_siteContested; execVM 'server\siteSetup\inf2\contested.sqf'; deleteVehicle _trg", ""];