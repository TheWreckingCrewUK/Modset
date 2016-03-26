params["_marker"];

_marker setMarkerColor "colorYellow";
_trgarray = [];


_trg = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg setTriggerArea [500, 500, 0, false];
_trg setTriggerActivation ["WEST", "NOT PRESENT", true];
_trg setTriggerTimeout [10,10,10,True];
_trg setTriggerStatements ["this", format["['%1'] call twc_attackFailed; execVM 'server\siteSetup\%2\init.sqf'; ['%3', _trgarray] call twc_deleteTriggers", _marker, _marker, _marker, _trgarray], ""];

_trg2 = createTrigger ["EmptyDetector", getMarkerPos _marker];
_trg2 setTriggerArea [500, 500, 0, false];
_trg2 setTriggerActivation ["EAST", "NOT PRESENT", true];
_trg2 setTriggerTimeout [5,5,5,True];
_trg2 setTriggerStatements ["this", format["['%1'] call twc_siteCapturedBlufor; ['%2', _trgarray] call twc_deleteTriggers", _marker, _marker, _trgarray], ""];

_trgarray = _trgarray + [_trg];
_trgarray = _trgarray + [_trg2];
hint str _trgarray;