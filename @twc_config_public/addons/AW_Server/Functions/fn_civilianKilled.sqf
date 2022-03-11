/*
	File: fn_civilianKilled.sqf
	Author: Dom
	Description: Handles a civilian being killed
*/
params [
	["_killer",objNull,[objNull]]
];

["A civilian has been killed."] remoteExecCall ["AW_fnc_notify",-2];
private _repLoss = getNumber(missionConfigFile >> "Core_Settings" >> "AW_killedCivRepLoss");
[_repLoss] call AW_fnc_adjustCivRep;

if (isPlayer _killer) then {
	[format["A civilian was killed by %1 (%2).",name _killer,getPlayerUID _killer]] call AW_fnc_logIt;
};