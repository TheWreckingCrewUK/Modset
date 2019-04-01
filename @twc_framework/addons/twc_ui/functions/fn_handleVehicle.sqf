params ["_playerUnit"];

if (!local _playerUnit) exitWith {};

if (_playerUnit call TWC_UI_fnc_shouldDisplay) then {
	[] call TWC_UI_fnc_addDisplay;
} else {
	[] call TWC_UI_fnc_removeDisplay;
};