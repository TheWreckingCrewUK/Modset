params [["_era", "modern"], ["_isNight", false]];

_specialSong = missionNamespace getVariable ["TWC_Intro_specialSong", ""];

if (_specialSong != "") then {
	if (isClass (configFile >> "CfgMusic" >> _specialSong)) exitWith {
		_specialSong
	};
};

if (_era == "1990") then { _era = "millennial"; };

if (_isNight) exitWith {
	[(configFile >> "CfgIntros" >> _era), "nightSong", "twc_modern_day_intro"] call BIS_fnc_returnConfigEntry;
};

[(configFile >> "CfgIntros" >> _era), "daySong", "twc_modern_day_intro"] call BIS_fnc_returnConfigEntry;