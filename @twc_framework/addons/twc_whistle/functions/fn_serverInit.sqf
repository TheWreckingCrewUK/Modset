if !(isServer) exitWith {}; // safety check

TWC_Whistle_currentlyPlaying = [];
TWC_Whistle_ForcedStopped = false;

TWC_Whistle_Play_StartEH = ["TWC_Whistle_Play_Start", {
	params ["_player"];
	
	if !(alive _player) exitWith {};

	[_player] call TWC_Whistle_fnc_whistle;
	TWC_Whistle_currentlyPlaying pushBackUnique _player;
	["TWC_Whistle_Sounded", _player] call CBA_fnc_globalEvent;
	
	// remove player from array after 15 seconds, to prevent constant loop bug
	[{
		if (_this in TWC_Whistle_currentlyPlaying) then {
			TWC_Whistle_currentlyPlaying = TWC_Whistle_currentlyPlaying - [_this];
			TWC_Whistle_ForcedStopped = true;
		};
	}, _player, 15] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;

TWC_Whistle_Play_StopEH = ["TWC_Whistle_Play_Stop", {
	params ["_player"];

	if (_player in TWC_Whistle_currentlyPlaying) then {
		TWC_Whistle_currentlyPlaying = TWC_Whistle_currentlyPlaying - [_player];
	};
}] call CBA_fnc_addEventHandler;