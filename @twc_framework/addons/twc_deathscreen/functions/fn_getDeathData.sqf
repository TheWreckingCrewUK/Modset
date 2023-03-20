params ["_unit", "_killer", "_instigator", ["_reason", "clinical_death"]];

_isCommand = _unit getVariable ["TWC_isCommandRole", false];
_roleDesc = ((roleDescription _unit) splitString "@") select 0;
_time = [CBA_missionTime, "HH:MM:SS"] call BIS_fnc_secondsToString;

_deathText = [(configFile >> "CfgDeathScreens" >> _reason), "text", "died for unknown reasons"] call BIS_fnc_returnConfigEntry;

if (TWC_Core_BroadcastMode) then {
	_deathSong = [(configFile >> "CfgDeathScreens" >> "broadcast_mode"), "sound", "broadcast_mode"] call BIS_fnc_returnConfigEntry;
	_fadeBegins = [(configFile >> "CfgDeathScreens" >> "broadcast_mode"), "fadeBegins", 30] call BIS_fnc_returnConfigEntry;
	_fadeOut = [(configFile >> "CfgDeathScreens" >> "broadcast_mode"), "fadeOut", 88] call BIS_fnc_returnConfigEntry;
} else {
	_deathSong = [(configFile >> "CfgDeathScreens" >> _reason), "sound", "clinical_death"] call BIS_fnc_returnConfigEntry;
	_fadeBegins = [(configFile >> "CfgDeathScreens" >> _reason), "fadeBegins", 30] call BIS_fnc_returnConfigEntry;
	_fadeOut = [(configFile >> "CfgDeathScreens" >> _reason), "fadeOut", 88] call BIS_fnc_returnConfigEntry;
};

_deathScreenData = [_deathSong, _fadeBegins, _fadeOut];

[name _unit, _isCommand, _roleDesc, _deathText, _time, _deathScreenData, (getPos _unit)];
