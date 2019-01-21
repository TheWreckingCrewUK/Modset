params ["_player"];

if (!local _player) exitWith {};

["TWC_AddedToGroup", { _this call TWC_fnc_addedToGroup; }] call CBA_fnc_addEventHandler;