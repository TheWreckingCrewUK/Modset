params ["_message", ["_tag", "Debug"]];

if !(_this call TWC_Debug_fnc_shouldDebug) exitWith {
	["TWC_Debug_fnc_hint was called, but shouldDebug = false"] call TWC_Debug_fnc_logGlobal;
};

if (isNil _message) then {
	_message = "TWC_Debug_fnc_hint was called with nil message";
};

[
	[
		format ["TWC %1", _tag],
		format ["%2", _message]
	], 
	nil,
	[.8,.8,0]
] call CBA_fnc_notify;