_givenNumber = (_this select 0) select 0;
_civilianQuestioned = (_this select 0) select 1;

if (_civilianQuestioned in nonQuestionableList) then {
	hintSilent "I've already told you what I know.";
}else{
	nonQuestionableList pushBack _civilianQuestioned;
	publicVariable "nonQuestionableList";

	if (_givenNumber < 3) then {
		hint "I know where they might be. Let me mark it on your map.";
		_color = "ColorOrange";
		_object = InsP_cacheGroup call BIS_fnc_selectRandom;
		_distance = [1500,1000,750,750,500,500,250] call BIS_fnc_selectRandom;

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
			case (str (InsP_cacheGroup select 3)): {cacheDMarkers pushBack _marker; publicVariable "cacheDMarkers"};
			case (str (InsP_cacheGroup select 4)): {cacheEMarkers pushBack _marker; publicVariable "cacheEMarkers"};
			default {hint "Something went wrong";};
		};
	}else{
		hintSilent "I'm sorry, but I do not know anything!";
	};
};
