/*
 * This is a recursive function.
 */
params ["_player", ["_started", false, [false]]];

private _range = 250; // hardcoded entry, in metres
["TWC_Core_revealPlayer", [_player, _range]] call CBA_fnc_globalEvent;

// play start sound, call this function again in a second
if !(_started) exitWith {
	[_player, ["TWC_Sound_Whistle_Start", _range]] remoteExecCall ["say3D"];
	[TWC_Whistle_fnc_whistle, [_player, true], 0.5] call CBA_fnc_waitAndExecute;
};

if !(_player in currentlyPlaying) exitWith {
	// TODO: playSound stop
	[_player, ["TWC_Sound_Whistle_Stop", _range]] remoteExecCall ["say3D"];
};

[_player, ["TWC_Sound_Whistle_Loop", _range]] remoteExecCall ["say3D"];

[TWC_Whistle_fnc_whistle, [_player, true], 0.5] call CBA_fnc_waitAndExecute;