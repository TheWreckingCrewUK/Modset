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
if (isNil "twc_JIP_CommandMessage") then { twc_JIP_CommandMessage = []; };

_rankHashMap = [[["COLONEL", 0], ["MAJOR", 0], ["CAPTAIN", 0], ["LIEUTENANT", 0], ["SERGEANT", 0], ["CORPORAL", 0], ["PRIVATE", 0]], -1] call CBA_fnc_hashCreate;
_topRanks = [];

{
	if (alive _x) then {
		_currentCount = [_rankHashMap, (rank _x)] call CBA_fnc_hashGet;
		[_rankHashMap, (rank _x), ( _currentCount + 1 )] call CBA_fnc_hashSet;
	};
} forEach allPlayers;

_findTopRanks = {
	if ((count _topRanks) > 1) exitWith {};
	if (_value == 0 || _value == -1) exitWith {};
	
	_topRanks pushBack _key;
};

[_rankHashMap, _findTopRanks] call CBA_fnc_hashEachPair;

{
	if ((rank _x) in _topRanks) then {
		_message remoteExecCall ["hint", _x];
	};

	["twc_evh_createDiaryRecord", [_message], _x] call CBA_fnc_targetEvent;
} forEach allPlayers;

twc_JIP_CommandMessage pushback [_message];
publicVariable "twc_JIP_CommandMessage";