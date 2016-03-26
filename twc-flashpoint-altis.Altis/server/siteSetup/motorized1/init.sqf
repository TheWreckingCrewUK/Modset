/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "motorized1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['motorized1'] call twc_siteSetup; ['motorized1'] call twc_siteContested; execVM 'server\siteSetup\motorized1\contested.sqf'; deleteVehicle _trg", ""];