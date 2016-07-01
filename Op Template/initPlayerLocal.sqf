waitUntil{!isNull player};
[player] join grpNull ;
player enableFatigue false;
player addEventHandler ["killed", {player setvariable ["HasBeenKilled",True,True]}];
execVM "Operation_Framework\acre\GiveRadio.sqf";
if (!hasInterface) exitWith {};

