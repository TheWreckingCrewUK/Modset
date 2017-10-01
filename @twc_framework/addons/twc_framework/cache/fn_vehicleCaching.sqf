params["_debug","_vehicle","_vehicleCacheDistance"];

sleep 2;

if(str (fullcrew _vehicle) != "[]")exitWith{};

waitUntil{({_x distance _vehicle < _vehicleCacheDistance} count allPlayers == 0)};
systemChat format["%1 Has been Cached",str _vehicle];
[_vehicle] call twc_fnc_cacheVehicle;

waitUntil{({_x distance _vehicle < _vehicleCacheDistance} count allPlayers > 0)};
systemChat format["%1 Has been UnCached",str _vehicle];
[_vehicle] call twc_fnc_unCacheVehicle;
[_debug,_vehicle,_vehicleCacheDistance] spawn twc_fnc_vehicleCaching;
systemChat format["%1 Has Restarted fn_vehicleCaching",str _vehicle];