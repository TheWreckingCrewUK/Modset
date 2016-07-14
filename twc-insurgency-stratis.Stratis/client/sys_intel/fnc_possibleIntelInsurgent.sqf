_givenNumber = (_this select 0) select 0;
_civilianQuestioned = (_this select 0) select 1;
_rand = (random 100);

if (_civilianQuestioned in nonQuestionableList) then {
	hintSilent "I've already told you what I know.";
}else{
	nonQuestionableList pushBack _civilianQuestioned;
	publicVariable "nonQuestionableList";
	
	if (_givenNumber == 0) then {
		hint "I know where they might be. Let me mark it on your map.";
		_color = "ColorOrange";
		_object = InsP_cacheGroup call BIS_fnc_selectRandom;
		_distance = [500,250] call BIS_fnc_selectRandom;

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
			default {hint "Server is out of Close Range Markers. Just destroy the cache already!";};
		};
	}else{
		if (_rand < 10)then{
			hintSilent "Bush Did 9/11!";
		};
		if (_rand >= 10)then{
			hintSilent "I am just a grunt. I know nothing.";
		};
//		hintSilent "You will have to burn me at the stake before I tell you anything!";
	};
};