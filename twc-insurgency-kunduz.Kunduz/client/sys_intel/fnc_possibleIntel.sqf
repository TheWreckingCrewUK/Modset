_givenNumber = (_this select 0) select 0;
_civilianQuestioned = (_this select 0) select 1;
systemChat str _givenNumber;

if (_civilianQuestioned in nonQuestionableList) then {
	hintSilent "I've already told you what I know.";
			InsP_civtrust = InsP_civtrust - 0.03; publicVariable "InsP_civtrust";
}else{
	nonQuestionableList pushBack _civilianQuestioned;
	publicVariable "nonQuestionableList";
			InsP_civtrust = InsP_civtrust + 0.06; publicVariable "InsP_civtrust";

	if (_givenNumber == 0) then {
		switch (True) do {
			case (floor InsP_civTrust <= -3):{hintSilent "I've marked a location on your map, and you know what? I hope you die trying to get there."};
			case (floor InsP_civTrust == -2):{hintSilent "I'll mark a spot. Now go away!"};
			case (floor InsP_civTrust == -1):{hintSilent "I haven't been hearing good things about you people recently. I've marked a position on your map, I hope your reputation recovers"};
			case (floor InsP_civTrust == 0):{hintSilent "Let me mark the position on your map."};
			case (floor InsP_civTrust == 1):{hintSilent "I think I heard something that might help you. I'll mark the position on your map."};
			case (floor InsP_civTrust == 2):{hintSilent "I've marked a spot on your map and I wish you luck on your journey."};
			case (floor InsP_civTrust >= 3):{hintSilent "I really like what the Coalition has been doing around here. I've marked a position on your map. Good luck."};
			default {hintSilent "For some reson this Civilian doesn't know the morale status. Please inform management of this bug."};
		};
		_rand = floor ((random 5) - (insp_civtrust * 2));
		if (_rand <= 3)then{
			_color = "ColorOrange";
			_object = InsP_cacheGroup call BIS_fnc_selectRandom;
			_distance = [250,500,500,750,750,1000,1000,1500,2000] call BIS_fnc_selectRandom;
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
		if (_rand > 3)then{
			_color = "ColorBlue";
			_object = InsP_aaGroup call BIS_fnc_selectRandom;
			_distance = [250,500,500,750,750,1000,1000,1500] call BIS_fnc_selectRandom;
			_intelPos = [_object, _distance] call CBA_fnc_randPos;
			_marker = createMarker [format["%1%2", _object, (str _intelPos)], _intelPos];
			_marker setMarkerType "hd_join";
			_marker setMarkerColor _color;
			_marker setMarkerText (str(_distance) + "m");
			_marker setMarkerSize [0.5,0.5];
			[_marker, true] call CBA_fnc_setMarkerPersistent;

			switch (str _object) do {
				case (str (InsP_aaGroup select 0)): {aaGunAMarkers pushBack _marker; publicVariable "aaGunAMarkers"};
				case (str (InsP_aaGroup select 1)): {aaGunBMarkers pushBack _marker; publicVariable "aaGunBMarkers"};
				default {hint "Something went wrong";};
			};
		};
		if (_rand >= 7)then{
			_color = "ColorYellow";
			_object = InsP_iedGroup call BIS_fnc_selectRandom;
			_distance = [100,200] call BIS_fnc_selectRandom;
			_intelPos = [_object, _distance] call CBA_fnc_randPos;
			_marker = createMarker [format["%1%2", _object, (str _intelPos)], _intelPos];
			_marker setMarkerType "hd_join";
			_marker setMarkerColor _color;
			_marker setMarkerText (str(_distance) + "m");
			_marker setMarkerSize [0.5,0.5];
			[_marker, true] call CBA_fnc_setMarkerPersistent;
		};
	}else{
		switch (True) do {
			case (floor InsP_civTrust <= -3):{hintSilent "I would sooner die than help scum like you. If you did literally anything to help this country we wouldn't be in this mess! Go home, we won't miss you."};
			case (floor InsP_civTrust == -2):{hintSilent "I've heard rumours of the Coalitions' actions around here, and even if I did happen to know something I wouldn't tell you."};
			case (floor InsP_civTrust == -1):{hintSilent "Your reputation precedes you, and it's not a good one. I have no information for you, please leave."};
			case (floor InsP_civTrust == 0):{hintSilent "I don't know anything."};
			case (floor InsP_civTrust == 0):{hintSilent "I'm just a villager, I know nothing"};
			case (floor InsP_civTrust == 0):{hintSilent "You should bring back our goats, before you ask for a favor."};
			case (floor InsP_civTrust == 1):{hintSilent "Sorry, but I don't know anything."};
			case (floor InsP_civTrust == 2):{hintSilent "I wish I could help, but I don't know anything."};
			case (floor InsP_civTrust >= 3):{hintSilent "I really wish I could help you, but I don't know anything."};
			default {hintSilent "For some reson this Civilian doesn't know the morale status. Please inform management of this bug."};
		};
	};
};