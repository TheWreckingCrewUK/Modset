/*
 * Recursive Loop, for the duration of a unit is speaking (should give continued breath effect)
 */
 
params ["_unit"];

if ((count TWC_Cold_Weather_breathingList) > TWC_Cold_Weather_Setting_BreathLimit) exitWith {};
if (player distance _unit >= TWC_Cold_Weather_Setting_Distance) exitWith {};
if (_unit in TWC_Cold_Weather_breathingList) exitWith {}; // already in array

TWC_Cold_Weather_breathingList pushBackUnique _unit;

[_unit] call TWC_Cold_Weather_fnc_loop;