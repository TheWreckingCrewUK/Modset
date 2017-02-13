params["_location", "_type", ["_markerstr","placeHolder"],["_start",0]];

_pos = getPos (_location);
if(_start == 1)then{
	_markerstr = createMarker [str (random 10000), (_pos)];
	_markerstr setMarkerShape "icon";
	_markerstr setMarkerType _type;
	_markerstr setMarkerColor "colorIndependent";
	
	_name = text _location;
	townInfoArray pushback [_location,_name,20,1000];
};

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", true];
_trg setTriggerStatements ["this", format["[(thisTrigger getVariable 'location'),%1] call twc_fnc_spawnTown",_pos], format["[%1] call twc_fnc_clearTown",_pos]];

_trg setVariable ["location",_location];