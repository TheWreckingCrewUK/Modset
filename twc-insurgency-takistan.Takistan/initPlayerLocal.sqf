waitUntil{!isNull player};
[player] join grpNull ;

execVM "steam\acreCheck.sqf";

if (!hasInterface) exitWith {};

global_sync = false;

execVM "client\player\init.sqf";

execVM "client\init.sqf";

numTimesInsurgent = 0;

player enableFatigue false;
player setCustomAimCoef 0.4;
player addEventHandler ["Respawn",{player enableFatigue false; player setCustomAimCoef 0.4;}];