params["_location","_type",["_markerstr","placeHolder"],["_start",0]];

if(_start == 1)then{
	_markerstr = createMarker [str (random 10000), (_location)];
	_markerstr setMarkerShape "icon";
	_markerstr setMarkerType _type;
};
//["comp_quarry", 0, _location] execVM "compositions\Createcomposition.sqf";
	
_trg = createTrigger ["EmptyDetector", _location];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["this", format["[%1, '%2'] call twc_fnc_spawn%2; [%1, '%2','%3'] call twc_fnc_siteContested",_location,_type,_markerstr], ""];

//_trg setVariable ["SiteType",_type,false];