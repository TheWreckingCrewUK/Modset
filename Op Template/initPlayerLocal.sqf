waitUntil{!isNull player};
[player] join grpNull ;
player enableFatigue false;
[player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
if (!hasInterface) exitWith {};

