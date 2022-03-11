/*
	File: fn_adjustThreat.sqf
	Author: Dom
	Description: Adjusts the value of AW_opforThreat
*/
params [
	["_value",0,[0]]
];
if (_value isEqualTo 0) exitWith {};

AW_opforThreat = 0 max ((AW_opforThreat + _value) min 100); 
publicVariable "AW_opforThreat";