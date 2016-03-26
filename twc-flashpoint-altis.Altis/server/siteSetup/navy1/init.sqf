/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "navy1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['navy1'] call twc_siteSetup; ['navy1'] call twc_siteContested; execVM 'server\siteSetup\navy1\contested.sqf'; deleteVehicle _trg", ""];