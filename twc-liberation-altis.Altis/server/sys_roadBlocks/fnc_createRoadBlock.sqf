params["_location","_dir"];

_markerstr = createMarker [str (random 10000),_location];
_markerstr setMarkerShape "ICON";
_markerstr setMarkerType "hd_dot";

_trg = createTrigger ["EmptyDetector", _location];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", format["[%1,%2] call twc_fnc_spawnRoadBlock", _location, _dir],""];