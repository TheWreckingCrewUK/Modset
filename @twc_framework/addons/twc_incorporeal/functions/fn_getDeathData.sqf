params ["_unit", ["_reason", "clinical_death"]];

_isCommand = _unit getVariable ["TWC_isCommandRole", false];
_roleDesc = (roleDescription _unit) splitString "@" params [0, ""];
_deathText = [(configFile >> "CfgDeathScreens" >> _reason), "text", "died for unknown reasons"] call BIS_fnc_returnConfigEntry;
_time = [serverTime, "HH:MM:SS"] call BIS_fnc_secondsToString;

[
	profileName _unit,
	_isCommand,
	_roleDesc,
	_deathText,
	_time
];
