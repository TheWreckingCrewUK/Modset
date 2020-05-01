["TWC_Debug_Log", {
	_this call TWC_Debug_fnc_log;
}] call CBA_fnc_addEventHandler;

["TWC_Debug_Hint", {
	_this call TWC_Debug_fnc_hint;
}] call CBA_fnc_addEventHandler;

["TWC_Debug_SystemChat", {
	params ["_message", ["_tag", "Debug"]];

	if !(_this call TWC_Debug_fnc_shouldDebug) exitWith {
		["TWC_Debug_fnc_systemChatGlobal was called, but shouldDebug = false"] call TWC_Debug_fnc_logGlobal;
	};

	systemChat format ["[TWC %1]: %2", _tag, _message];
}] call CBA_fnc_addEventHandler;