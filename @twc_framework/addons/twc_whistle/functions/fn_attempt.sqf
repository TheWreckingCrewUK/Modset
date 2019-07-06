params ["_player"];

if ("WHISTLE NAME" in items _player) then {
	["TWC_Whistle_Play_Start", _player] call CBA_fnc_serverEvent;
};