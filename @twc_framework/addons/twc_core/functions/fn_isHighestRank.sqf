/*
* Author: [TWC] Bosenator
* Checks if the target is the highest rank present on the server.
*
* Arguments:
* 0: Target <OBJECT>
* 1: Ignore Dead <BOOLEAN< (default: true)
*
* Return Value:
* 0: Is Highest Rank <BOOLEAN>
*
* Example:
* [player] call TWC_fnc_isHighestRank;
*/
params ["_target", ["_ignoreDead", true]];

_rankHashMap = [[["COLONEL", 0], ["MAJOR", 0], ["CAPTAIN", 0], ["LIEUTENANT", 0], ["SERGEANT", 0], ["CORPORAL", 0], ["PRIVATE", 0]], -1] call CBA_fnc_hashCreate;
_topRanks = [];

{
	if (_ignoreDead) then {
		if (alive _x) then {
			_currentCount = [_rankHashMap, (rank _x)] call CBA_fnc_hashGet;
			[_rankHashMap, (rank _x), ( _currentCount + 1 )] call CBA_fnc_hashSet;
		};
	} else {
		_currentCount = [_rankHashMap, (rank _x)] call CBA_fnc_hashGet;
		[_rankHashMap, (rank _x), ( _currentCount + 1 )] call CBA_fnc_hashSet;
	};
} forEach allPlayers;

_findTopRanks = {
	if ((count _topRanks) > 0) exitWith {};
	if (_value == -1) exitWith {}; // none found?
	
	_topRanks pushBack _key;
};

[_rankHashMap, _findTopRanks] call CBA_fnc_hashEachPair;

{
	if ((rank _x) in _topRanks && _x == _target) exitWith {
		true;
	};
} forEach allPlayers;

false;