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

if (_message == "") exitWith {};

if (isNil "twc_JIP_CommandMessage") then {
	twc_JIP_CommandMessage = [];
};

_rankArray = [];
{
	_rankArray pushback (rank _x);
} forEach allPlayers;

_rank = "";
_rank = call {
	_rank = if ("COLONEL" in _rankArray)exitWith{["COLONEL","MAJOR"]};
	_rank = if ("MAJOR" in _rankArray)exitWith{["MAJOR","CAPTAIN"]};
	_rank = if ("CAPTAIN" in _rankArray)exitWith{["CAPTAIN","LIEUTENANT"]};
	_rank = if ("LIEUTENANT" in _rankArray)exitWith{["LIEUTENANT","SERGEANT"]};
	_rank = if ("SERGEANT" in _rankArray)exitWith{["SERGEANT","CORPORAL"]};
	_rank = if ("CORPORAL" in _rankArray)exitWith{["CORPORAL","PRIVATE"]};
	_rank = if ("PRIVATE" in _rankArray)exitWith{["PRIVATE"]};
	_rank
};

{
	if (rank _x in _rank) then {
		_message remoteExecCall ["hint", _x];
		_x createDiaryRecord ["Diary", ["Intel", _message]];
	};
} forEach allPlayers;

twc_JIP_CommandMessage pushback [_rank,_message];
publicVariable "twc_JIP_CommandMessage";