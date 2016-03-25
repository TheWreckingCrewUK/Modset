/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "mech2"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['mech2'] call twc_siteSetup; ['mech2'] call twc_siteContested; execVM 'server\siteSetup\mech2\contested.sqf'; deleteVehicle _trg", ""];