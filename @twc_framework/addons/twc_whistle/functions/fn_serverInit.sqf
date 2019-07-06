if !(isServer) exitWith {}; // safety check

currentlyPlaying = [];

TWC_Whistle_Play_StartEH = ["TWC_Whistle_Play_Start", {
	params ["_player"];

	[_player] call TWC_Whistle_fnc_whistle;
	currentlyPlaying pushBackUnique _player;
}] call CBA_fnc_addEventHandler;

TWC_Whistle_Play_StopEH = ["TWC_Whistle_Play_Stop", {
	params ["_player"];

	if (_player in currentlyPlaying) then {
		currentlyPlaying = currentlyPlaying - [_player];
	};
}] call CBA_fnc_addEventHandler;