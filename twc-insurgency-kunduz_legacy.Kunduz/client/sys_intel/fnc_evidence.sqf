params["_intelOBJ"];

if (_intelOBJ in nonQuestionableList) then {
	hintSilent "We have already read this map";
}else{
	nonQuestionableList pushBack _intelOBJ;
	publicVariable "nonQuestionableList";
	
	hintSilent "We have found information on a cache";
	
	_color = "ColorOrange";
	_object = InsP_cacheGroup call BIS_fnc_selectRandom;
	_distance = [250] call BIS_fnc_selectRandom;
	_intelPos = [_object, _distance] call CBA_fnc_randPos;
	_marker = createMarker [format["%1%2", _object, (str _intelPos)], _intelPos];
	_marker setMarkerType "hd_join";
	_marker setMarkerColor _color;
	_marker setMarkerText (str(_distance) + "m");
	_marker setMarkerSize [0.5,0.5];
	[_marker, true] call CBA_fnc_setMarkerPersistent;

	switch (str _object) do {
		case (str (InsP_cacheGroup select 0)): {cacheAMarkers pushBack _marker; publicVariable "cacheAMarkers"};
		case (str (InsP_cacheGroup select 1)): {cacheBMarkers pushBack _marker; publicVariable "cacheBMarkers"};
		case (str (InsP_cacheGroup select 2)): {cacheCMarkers pushBack _marker; publicVariable "cacheCMarkers"};
		default {hint "Something went wrong";};
	};
};