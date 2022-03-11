/*
	File: fn_logIt.sqf
	Author: Dom
	Description: Logs an action
*/
params [
	["_text","",[""]]
];
if (_text isEqualTo "") exitWith {};

diag_log format ["[Frontlines] %1",_text];