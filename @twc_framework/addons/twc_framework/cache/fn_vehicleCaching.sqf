params["_debug","_vehicle","_vehicleCacheDistance"];

sleep 2;

if (vehicle player == player) exitWith {}; // it's a player
if(str (fullcrew _vehicle) != "[]")exitWith{};

waitUntil{({_x distance _vehicle < _vehicleCacheDistance} count allPlayers == 0)};
[_vehicle] call twc_fnc_cacheVehicle;

waitUntil{({_x distance _vehicle < _vehicleCacheDistance} count allPlayers > 0)};
[_vehicle] call twc_fnc_unCacheVehicle;
[_debug,_vehicle,_vehicleCacheDistance] spawn twc_fnc_vehicleCaching;