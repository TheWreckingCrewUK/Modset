params [["_group", grpNull]];

if (isNull grpNull) exitWith {};

_groupName = "Untitled Group";
_groupPlayers = [];

{
	_isXPlayer = if (getPlayerUID _x != "" || getPlayerUID _x != "_SP_AI_") then { true } else { false };
	if (_isXPlayer) then {
		_roleDesc = (roleDescription _x) splitString "@";
		if (count _roleDesc > 1) then {
			if ((_roleDesc select 1) != "") then { _groupName = (_roleDesc select 1); };
		};

		_isCommandRole = false; // planned feature
		_groupPlayers pushBack [(_roleDesc select 0), _isCommandRole, _x];
	};
} forEach units _group;

[
	_groupName,
	_groupPlayers
];
