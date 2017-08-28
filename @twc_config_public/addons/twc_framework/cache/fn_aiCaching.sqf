params["_debug","_group","_aicacheDistance"];

sleep 2;

if(isNull _group)exitWith{systemChat "The group was null. Exiting"; deleteGroup _group};

_leader = leader _group;
waitUntil{({_x distance _leader < _aicacheDistance} count allPlayers == 0)};
_handle = [_group] spawn twc_fnc_cacheGroup;
waitUntil{scriptDone _handle};

waitUntil{({_x distance _leader < _aicacheDistance} count allPlayers > 0)};
[_group] call twc_fnc_unCacheGroup;
[_debug,_group,_aicacheDistance] spawn twc_fnc_aiCaching;