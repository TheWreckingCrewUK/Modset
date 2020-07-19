params ["_sender", "_message"];

_name = name _sender;

_message = format ["%1: %2", _name, _message];
_admin = call TWC_Core_fnc_findAdmin
_message remoteExec ["hint", _admin];
[player, ["Diary", ["Help Message", _message]]] remoteExec ["createDiaryRecord", _admin];