params ["_unit", ["_reason", "clinical_death"]];

_cachedData = _unit getVariable ["TWC_Death_Data", []];

// Cached at death event.
if (count _cachedData < 1) then {
	_isCommand = _unit getVariable ["TWC_isCommandRole", false];
	_roleDesc = ((roleDescription _unit) splitString "@") select 0;
	_deathText = [(configFile >> "CfgDeathScreens" >> _reason), "text", "died for unknown reasons"] call BIS_fnc_returnConfigEntry;
	_time = [CBA_missionTime, "HH:MM:SS"] call BIS_fnc_secondsToString;

	_deathSong = [(configFile >> "CfgDeathScreens" >> _reason), "sound", "clinical_death"] call BIS_fnc_returnConfigEntry;
	_fadeBegins = [(configFile >> "CfgDeathScreens" >> _reason), "fadeBegins", 30] call BIS_fnc_returnConfigEntry;
	_fadeOut = [(configFile >> "CfgDeathScreens" >> _reason), "fadeOut", 88] call BIS_fnc_returnConfigEntry;
	_deathScreenData = [_deathSong, _fadeBegins, _fadeOut];

	_cachedData = [name _unit, _isCommand, _roleDesc, _deathText, _time, _deathScreenData, (getPos _unit)];
	_unit setVariable ["TWC_Death_Data", _cachedData, true];
};

_cachedData;