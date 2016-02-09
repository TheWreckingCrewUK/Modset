waitUntil{!isNull player};
[player] join grpNull ;
player addEventHandler ["Put", "_this execVM 'operation_framework\WarriorSetup\RemoveAmmo.sqf';"];
player enableFatigue false;
if (!hasInterface) exitWith {};

