params ["_sender", "_message"];

if(_message == "")exitWith{};

_name = name _sender;

_message = format ["%1: %2", _name, _message];

//We have to run in on the server
[_message] remoteExecCall ["TWC_Core_fnc_findAdmin",2];