twc_fnc_playerBaseSetup = compile preprocessfilelinenumbers "server\sys_playerBase\fnc_playerBaseSetup.sqf";
twc_fnc_playerBaseClear = compile preprocessfilelinenumbers "server\sys_playerBase\fnc_playerBaseClear.sqf";

_trg = createTrigger ["EmptyDetector", (getMarkerPos "playerBase")];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["(player in thisList)", "[] spawn twc_fnc_playerBaseSetup", ""];