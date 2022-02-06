/*
	File: fn_wipeServer.sqf
	Author: Dom
	Description: Wipes the current progress on the game and prevents future saving
*/
profileNamespace setVariable ["AW_serverSave",nil];
profileNamespace setVariable ["AW_stopServerSave",true];
saveProfileNamespace;

["Server wiped and disabled saving."] remoteExecCall ["AW_fnc_notify",remoteExecutedOwner];