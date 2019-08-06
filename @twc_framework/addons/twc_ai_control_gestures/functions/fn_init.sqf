// HC & Server only from now on
if (!hasInterface) exitWith {};

_missionIgnoreGestures = missionNamespace getVariable ["TWC_AI_Control_Gestures_Disabled", false];
if (_missionIgnoreGestures) exitWith {};

params ["_thisUnit"];

// Find which one's in control
if (!local _thisUnit) exitWith {};

_fnc_checkNearbyPlayers = {
	params ["_group"];
	
	if ({_x distance _leader < 50} count allPlayers == 0) then {
		{ _x forceSpeed -1; } forEach (units _group);
		_group setVariable ["TWC_AI_Control_Gestures_Halted", false, true];
	} else {
		[_fnc_checkNearbyPlayers, [_group], 3] call CBA_fnc_waitAndExecute;
	};
};

["TWC_AI_Control_Gestures_doHalt", {
	params ["_group"];
	
	_hasPlayerHaltedThem = _group getVariable ["TWC_AI_Control_Gestures_Halted", false];
	if (_hasPlayerHaltedThem) exitWith {};
	
	// Special Unit Conditions
	_probability = _group getVariable ["TWC_AI_Control_Gestures_HaltIgnoreChance", 0];
	
	if ((round (random 1) * 100) >= _probability) then {
		_group setVariable ["TWC_AI_Control_Gestures_Halted", true, true];
		{ _x forceSpeed 0; } forEach (units _group);
		
		_group call _fnc_checkNearbyPlayers;
	};
}] call CBA_fnc_addEventHandler;

["TWC_AI_Control_Gestures_doAdvance", {
	params ["_group"];
	
	_hasPlayerHaltedThem = _group getVariable ["TWC_AI_Control_Gestures_Halted", false];
	
	if (_hasPlayerHaltedThem) then {
		{ _x forceSpeed -1; } forEach (units _group);
		_group setVariable ["TWC_AI_Control_Gestures_Halted", false, true];
	};
}] call CBA_fnc_addEventHandler;