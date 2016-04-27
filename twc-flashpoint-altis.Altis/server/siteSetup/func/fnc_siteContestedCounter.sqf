params["_marker"];

_marker setMarkerColor "colorYellow";
[_marker] call BIS_fnc_taskSetCurrent;

if(_marker == "commanderBase")then{
	commanderBaseRespawn call BIS_fnc_removeRespawnPosition;
	publicVariable "commanderBaseRespawn";
};


_trg2 = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg2 setTriggerArea [400, 400, 0, false];
_trg2 setTriggerActivation ["ANY", "PRESENT", false];
_trg2 setTriggerTimeout [90,90,90,True];
_trg2 setTriggerStatements ["(EAST countSide thisList) < 3 OR (West countSide thisList) == 0", format["['%1', thislist] call twc_siteDeciding", _marker], ""];