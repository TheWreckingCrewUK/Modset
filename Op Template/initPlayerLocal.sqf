waitUntil{!isNull player};
[player] join grpNull ;
player enableFatigue false;

execVM "Operation_Framework\acre\GiveRadio.sqf";
if (!hasInterface) exitWith {};

