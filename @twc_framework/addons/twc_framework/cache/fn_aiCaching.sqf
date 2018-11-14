params ["_debug", ["_group", grpNull], ["_aicacheDistance", 1500], ["_isAlreadyCached", false]];

if (isNull _group) exitWith {
	systemChat "fn_aiCaching: provided group was null, deleting and exiting cache loop.";
	deleteGroup _group;
};

_leader = leader _group;

if !(_isAlreadyCached) then {
	waitUntil {({_x distance _leader < _aicacheDistance} count allPlayers == 0)};
	_handle = [_group] spawn twc_fnc_cacheGroup;
	waitUntil {scriptDone _handle};
};

waitUntil {({_x distance _leader < _aicacheDistance} count allPlayers > 0)};
[_group] call twc_fnc_unCacheGroup;
[_debug, _group, _aicacheDistance] spawn twc_fnc_aiCaching;