// HC & Server only from now on
if (!hasInterface) exitWith {};

// Server ignores it!
if (TWC_Ignore_Gestures) exitWith {};

_missionIgnoreGestures = missionNamespace getVariable ["TWC_AI_Control_Gestures_Disabled", false];
if (_missionIgnoreGestures) exitWith {};

params ["_thisUnit"];

// Find which one's in control
if (!local _thisUnit) exitWith {};

["TWC_AI_Control_Gestures_doHalt", {
	params ["_group"];
	
	_hasPlayerHaltedThem = _group getVariable ["TWC_AI_Control_Gestures_Halted", false];
	if (_hasPlayerHaltedThem) exitWith {};
	
	// Special Unit Conditions
	_probability = _group getVariable ["TWC_AI_Control_Gestures_HaltIgnoreChance", 0];
	
	if ((round (random 1) * 100) >= _probability) then {
		_group setVariable ["TWC_AI_Control_Gestures_Halted", true, true];
		{ _x forceSpeed 0; } forEach (units _group);
		
		[_group] call TWC_AI_Control_Gestures_fnc_presenceCheckLoop;
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

["TWC_AI_Control_Gestures_doSurrender", {
	params ["_group"];
	
	_hasPlayerHaltedThem = _group getVariable ["TWC_AI_Control_Gestures_Halted", false];
	if !(_hasPlayerHaltedThem) exitWith {};
	
	_hasSurrendered = _group getVariable ["TWC_AI_Control_Gestures_Surrendered", false];
	if (_hasSurrendered) exitWith {};
	
	_probability = _group getVariable ["TWC_AI_Control_Gestures_SurrenderChance", 100];
	
	if ((round (random 1) * 100) <= _probability) then {
		{ [_x, true] call ACE_captives_fnc_setSurrendered; } forEach (units _group);
		_group setVariable ["TWC_AI_Control_Gestures_Surrendered", false, true];
	};
}] call CBA_fnc_addEventHandler;