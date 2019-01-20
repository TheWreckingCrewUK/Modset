/*
* Author: [TWC] Bosenator
* Returns an array of the highest ranking players.
*
* Arguments:
* 0: Ignore Dead <BOOLEAN< (default: true)
*
* Return Value:
* 0: Top Ranking Players <ARRAY>
*
* Example:
* [player] call TWC_fnc_isHighestRank;
*/
params [["_ignoreDead", true]];

_rankHashMap = [[["COLONEL", 0], ["MAJOR", 0], ["CAPTAIN", 0], ["LIEUTENANT", 0], ["SERGEANT", 0], ["CORPORAL", 0], ["PRIVATE", 0]], -1] call CBA_fnc_hashCreate;
_topRanks = [];
_topPlayers = [];

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
	if ((count _topRanks) > 1) exitWith {};
	if (_value == 0 || _value == -1) exitWith {};
	
	_topRanks pushBack _key;
};

[_rankHashMap, _findTopRanks] call CBA_fnc_hashEachPair;

{
	if ((rank _x) in _topRanks) then {
		_topPlayers pushBack _x;
	};
} forEach allPlayers;

_topPlayers;