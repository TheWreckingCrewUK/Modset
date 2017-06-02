params["_location","_type",["_markerstr","placeHolder"],["_start",0]];

_pos = getPos _location;
if(_start == 1)then{
	_markerstr = createMarker [str (random 10000), (_pos)];
	_markerstr setMarkerShape "icon";
	_markerstr setMarkerType _type;
	_markerstr setMarkerColor "colorWEST";
};

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [2000, 2000, 0, false];
_trg setTriggerTimeout [2,2,2,false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this",format["[(thisTrigger getVariable 'location'),%1,'%2','%3'] spawn twc_fnc_siteSetupBlufor",_pos,_type,_markerstr],""];

_trg setVariable ["location",_location];