params ["_player"];

// Can't play inside a vehicle, otherwise weird shit
if (vehicle _player != _player) exitWith {};

if ("TWC_Item_Whistle" in items _player) then {
	["TWC_Whistle_Play_Start", _player] call CBA_fnc_serverEvent;
};