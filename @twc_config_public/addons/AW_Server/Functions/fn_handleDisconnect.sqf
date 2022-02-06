/*
	File: fn_handleDisconnect.sqf
	Author: Dom
	Description: Handles a players disconnection
*/
params ["_unit","","_uid","_name"];

deleteVehicle _unit;
if ((allPlayers - entities "HeadlessClient_F") isEqualTo []) then {
	AW_totalPlaytime = AW_totalPlaytime + (CBA_missionTime - AW_currentPlaytime);
	call AW_fnc_saveGame;
	AW_currentPlaytime = 0;
};

private _zeusVariable = format ["zeus_%1",_uid];
private _zeus = missionNamespace getVariable [_zeusVariable,objNull];
if !(isNull _zeus) then {
	deleteVehicle _zeus;
	missionNamespace setVariable [_zeusVariable,nil];
};