params [["_group", grpNull]];

if (_group isEqualTo grpNull) exitWith {};

_groupName = groupId _group;
_groupPlayers = [];

{
	if (side _x != side player) exitWith {};

	_isXPlayer = if (getPlayerUID _x != "" && getPlayerUID _x != "_SP_AI_") then { true } else { false };
	if (_isXPlayer) then {
		_roleDesc = (roleDescription _x) splitString "@";

		if (count _roleDesc > 1) then {
			if ((_roleDesc select 1) != "") then { _groupName = (_roleDesc select 1); };
		};

		_role = [(configFile >> "CfgVehicles" >> typeOf (_x)), "displayName", "Unknown Role"] call BIS_fnc_returnConfigEntry;
		_isCommandRoleInt = [(configFile >> "CfgVehicles" >> typeOf (_x)), "TWC_isCommandRole", 0] call BIS_fnc_returnConfigEntry;
		_isCommandRole = if (_isCommandRoleInt > 0) then { true; } else { false; };
		_groupPlayers pushBack [_role, _isCommandRole, _x];
	};
} forEach units _group;

_firstPlayer = (units _group) select 0;
_lastPlayer = (units _group) select 0;

if (count (units _group) > 1) then {
	_returnData = [(units _group)] call TWC_Core_fnc_findGreatestDistancePairInArray;
	_returnData params ["_dist", "_rArray"];

	_firstPlayer = _rArray select 0;
	_lastPlayer = _rArray select 1;
};

[_groupName, _groupPlayers, [_firstPlayer, _lastPlayer]];