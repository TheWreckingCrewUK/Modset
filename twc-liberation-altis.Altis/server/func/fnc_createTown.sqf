params["_location", "_type", ["_markerstr","placeHolder"],["_start",0]];

if(_start == 1)then{
	_markerstr = createMarker [str (random 10000), (_location)];
	_markerstr setMarkerShape "icon";
	_markerstr setMarkerType _type;
	_markerstr setMarkerColor "colorIndependent";
	
	_town = nearestLocation [_location,""];
	_name = text _town;
	townInfoArray = townInfoArray + [[_name,20,1000]];
};

_trg = createTrigger ["EmptyDetector", _location];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", format["[%1] call twc_fnc_spawnTown",_location], format["[%1] call twc_fnc_clearTown",_location]];