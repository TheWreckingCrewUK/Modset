/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "aa1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['aa1'] call twc_siteSetup; ['aa1'] call twc_siteContested; execVM 'server\siteSetup\aa1\contested.sqf'; deleteVehicle _trg", ""];