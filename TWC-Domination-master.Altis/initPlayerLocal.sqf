waitUntil{!isNull player};
[player] join grpNull ;
while {true} do{
if (local player) then{
	player enableFatigue false;
	sleep 3;
	};
};
if (!hasInterface) exitWith {};

global_sync = false;

execVM "player\init.sqf";
/*
lowPlayerCount = "";
"lowPlayerCount" addPublicVariableEventHandler {(_this select 1) call BIS_fnc_endMission;};
