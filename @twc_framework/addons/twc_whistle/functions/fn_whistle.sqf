/*
 * This is a recursive function.
 */
params ["_player", ["_started", false, [false]]];

private _range = 250; // hardcoded entry, in metres
["TWC_Core_revealPlayer", [_player, _range]] call CBA_fnc_globalEvent;

// play start sound, call this function again in a second
if !(_started) exitWith {
	// TODO: playSound3D start
};

if !(_player in currentlyPlaying) exitWith {
	// TODO: playSound3D stop
};

// TODO: playSound3D mid


[TWC_Whistle_fnc_whistle, [_player, true], 1] call CBA_fnc_waitAndExecute;