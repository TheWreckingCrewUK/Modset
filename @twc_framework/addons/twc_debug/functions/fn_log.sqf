params ["_message", ["_tag", "Debug"]];

if (isNil _message) then {
	_message = "TWC_Debug_fnc_log called with nil message";
};

diag_log format ["%1 [TWC %2]: %3", time, _tag, _message];