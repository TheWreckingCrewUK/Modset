params["_location","_pos", "_type", ["_markerstr","placeHolder"],["_start",0]];

if(_start == 1)then{
	_markerstr = createMarker [str (random 10000), (_pos)];
	_markerstr setMarkerShape "icon";
	_markerstr setMarkerType _type;
	_markerstr setMarkerColor "colorEAST";
	
	_name = text _location;
	townInfoArray pushback [_location,_name,20,-3];
};

_trg = createTrigger ["EmptyDetector", _pos];
_trg setTriggerArea [2000, 2000, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["{isPlayer _x}count ThisList > 0", format["[(thisTrigger getVariable 'location'),%1,'%2','%3'] spawn twc_fnc_townSetup",_pos,_type,_markerstr],""];

_trg setVariable ["location",_location];