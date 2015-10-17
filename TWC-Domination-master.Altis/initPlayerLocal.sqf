waitUntil{!isNull player};
[player] join grpNull ;

if (!hasInterface) exitWith {};

global_sync = false;

execVM "player\init.sqf";

lowPlayerCount = "";
"lowPlayerCount" addPublicVariableEventHandler {(_this select 1) call BIS_fnc_endMission;};