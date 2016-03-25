/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "inf3"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['inf3'] call twc_siteSetup; ['inf3'] call twc_siteContested; execVM 'server\siteSetup\inf3\contested.sqf'; deleteVehicle _trg", ""];