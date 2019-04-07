params ["_playerUnit"];

if (!local _playerUnit) exitWith {};

_shouldDisplay = _playerUnit call TWC_UI_fnc_shouldDisplay;
[_shouldDisplay] call TWC_UI_fnc_toggleDisplay;