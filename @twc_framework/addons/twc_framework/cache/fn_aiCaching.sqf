params["_debug","_group","_aicacheDistance","_vehicleCacheDistance"];

if(isNull _group)exitWith{systemChat "The group was null. Exiting"; deleteGroup _group};

_leader = leader _group;
waitUntil{({_x distance _leader < _aicacheDistance} count twc_cachePlayers == 0)};
_handle = [_group] spawn twc_fnc_cacheGroup;
waitUntil{scriptDone _handle};
systemChat format["%1 Has been Cached",str _group];

waitUntil{({_x distance _leader < _aicacheDistance} count twc_cachePlayers > 0)};
systemChat format["%1 Has been UnCached",str _group];
[_group] call twc_fnc_unCacheGroup;
[_debug,_group,_aicacheDistance,_vehicleCacheDistance] spawn twc_fnc_aiCaching;
systemChat format["%1 Has Restarted fn_aiCaching",str _group];