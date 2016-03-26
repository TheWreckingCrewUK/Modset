/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "support1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['support1'] call twc_siteSetup; ['support1'] call twc_siteContested; execVM 'server\siteSetup\support1\contested.sqf'; deleteVehicle _trg", ""];