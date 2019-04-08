/*
 * Adds the handler for monitoring the #skip command
 */
["skip", {
	["skipVote", [player]] call CBA_fnc_serverEvent;
}, "all"] call CBA_fnc_registerChatCommand;

["systemChatClient", {
	systemChat (_this select 0);
}] call CBA_fnc_addEventHandler;