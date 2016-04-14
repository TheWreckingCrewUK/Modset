_givenNumber = (_this select 0) select 0;
_civilianQuestioned = (_this select 0) select 1;

if (_civilianQuestioned in nonQuestionableList) then {
	hintSilent "I've already told you what I know.";
}else{
	nonQuestionableList pushBack _civilianQuestioned;
	publicVariable "nonQuestionableList";

	if (_givenNumber == 0) then {

		hint "Thank you for saving me. Let me mark where an Insurgent Ammo Cache is";
		_color = "ColorOrange";
		_object = InsP_cacheGroup call BIS_fnc_selectRandom;
		_distance = 100;
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
	}else{
		hint "Thank you for saving me, but I cannot help you find an ammo cache."
	};
};