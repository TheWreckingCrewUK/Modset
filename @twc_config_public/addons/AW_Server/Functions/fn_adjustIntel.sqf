/*
	File: fn_adjustIntel.sqf
	Author: Dom
	Description: Adds/removes intel to the global pool, boolean parameter is for harvesting from radio towers
*/
params [
	["_amount",1,[0,true]]
];
if (_amount isEqualType true) then {
	_amount = round ((ln (AW_bluforTowerCount ^ 2)) + 1);
	[format["%1 intel was obtained from the communications network.",_intelGained]] remoteExecCall ["AW_fnc_notify",-2];
};
if (_amount isEqualTo 0) exitWith {};

AW_intel = 0 max (AW_intel + _amount);
publicVariable "AW_intel";