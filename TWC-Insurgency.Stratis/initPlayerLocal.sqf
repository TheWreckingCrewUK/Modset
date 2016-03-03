waitUntil{!isNull player};
[player] join grpNull ;

execVM "steam\acreCheck.sqf";

execVM "client\zeus\zeus.sqf";
execVM "client\zeus\zeus-Fakematty.sqf";
execVM "client\zeus\zeus-jayman.sqf";

if (!hasInterface) exitWith {};

global_sync = false;

execVM "client\player\init.sqf";
#include "client\init.sqf";