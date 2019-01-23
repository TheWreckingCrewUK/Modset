/*
 * Finds the greatest distance between two objects in a set of objects and returns them.
 * Used for working out who's the furthest away in a group for the intro camera, for example.
 */
params ["_objects"];

_longestDistance = 0;
_longestDistancePair = [];

{
	_returnedArray = [_x, _objects] call TWC_Core_fnc_findGreatestDistanceWithArray;
	_returnedArray params ["_returnDistance", "_returnPair"];
	
	if (_returnDistance < _longestDistance) then {
		_longestDistance = _returnDistance;
		_longestDistancePair = _returnPair;
	};
} forEach _objects;

// return array!
_longestDistancePair;