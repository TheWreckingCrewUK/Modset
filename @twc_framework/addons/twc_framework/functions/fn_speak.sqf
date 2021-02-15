/*
* Author: [TWC] jayman
* Gets added to a units init. The action can be seen by all units including JIPs, but the effect is local
*
* Arguments:
* 0: UNIT <OBJECT>
* 1: Name <STRING>
* 2: Message <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [civ1,"Interrogate","The Taliban ran up into the mountains when they spotted you"] call twc_fnc_intelHint;
*
* Public: no
*/
if (!isServer) exitWith {};

params["_message", "_refObject", "_range"];

_players = [_refObject, _range] call TWC_Core_fnc_getPlayersWithinRange;

{
	_message remoteExecCall ["hint", _x];
} forEach _players;