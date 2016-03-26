/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "mech1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['mech1'] call twc_siteSetup; ['mech1'] call twc_siteContested; execVM 'server\siteSetup\mech1\contested.sqf'; deleteVehicle _trg", ""];