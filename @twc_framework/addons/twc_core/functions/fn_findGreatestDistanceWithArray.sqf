/*
 * Finds the greatest distance between a object and a set of objects, returning the greatest distance and the pair of objects.
 * Used for working out who's the furthest away in a group for the intro camera, for example.
 */
params ["_refObj", "_objects"];

_longestDistance = 0;
_return = [];

{
	if !(_refObj isEqualTo _x) then {
		_currentDistance = _refObj distance _x;

		if (_longestDistance < _currentDistance) then {
			_longestDistance = _currentDistance;
			_return = [_currentDistance, [_refObj, _x]];
		};
	};
} forEach _objects;

_return;