/*
	File: fn_adjustIntel.sqf
	Author: Dom
	Description: Adds/removes intel to the global pool
*/
params [
	["_amount",1,[0]]
];
if (_amount isEqualTo 0) exitWith {};

AW_intel = 0 max (AW_intel + _amount);
publicVariable "AW_intel";