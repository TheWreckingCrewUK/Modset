/*

*/

_trg = createTrigger ["EmptyDetector", getMarkerPos "armour1"];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", "['armour1'] call twc_siteSetup; ['armour1'] call twc_siteContested; execVM 'server\siteSetup\armour1\contested.sqf'; deleteVehicle _trg", ""];