/*
* Author: [TWC] jayman
* Creates a message for the 2 highest ranking player to recieve.
*
* Arguments:
* 0: Message <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* ["Hostile Radio traffic is increasing. They have learned of your prescence"] call twc_fnc_commandMessage;
*
* Public: No
*/
params ["_message"];

if (!isServer) exitWith {};

if (_message == "") exitWith {};
if (isNil "twc_JIP_CommandMessage") then { twc_JIP_CommandMessage = []; };
_topRankingPlayers = [] call TWC_Core_fnc_getTopRanks;

{ _message remoteExecCall ["hint", _x]; } forEach _topRankingPlayers;
{ ["twc_evh_createDiaryRecord", [_message], _x] call CBA_fnc_targetEvent; } forEach allPlayers;

twc_JIP_CommandMessage pushBack _message;
publicVariable "twc_JIP_CommandMessage";
