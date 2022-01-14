/*
	File: fn_handleDisconnect.sqf
	Author: Dom
	Description: Handles a players disconnection
*/
params ["_id","_uid","_name","_jip","_owner","_idstr"];

if (isNil "AW_currentPlaytime" || {AW_currentPlaytime isEqualTo 0}) then {
	AW_currentPlaytime = CBA_missionTime;
};