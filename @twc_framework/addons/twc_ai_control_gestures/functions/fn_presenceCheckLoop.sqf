params ["_group"];

if ({_x distance (leader _group) < 50} count allPlayers == 0) then {
	{ _x forceSpeed -1; } forEach (units _group);
	_group setVariable ["TWC_AI_Control_Gestures_Halted", false, true];
} else {
	[TWC_AI_Control_Gestures_fnc_presenceCheckLoop, [_group], (3 + (random 2))] call CBA_fnc_waitAndExecute;
};