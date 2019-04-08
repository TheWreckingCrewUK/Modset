/*
 * Finds the greatest distance between two objects in a set of objects and returns them.
 * Used for working out who's the furthest away in a group for the intro camera, for example.
 */
params ["_objects"];

_longestDistance = 0;
_return = [];

{
	_refObj = _x;

	{
		if !(_refObj isEqualTo _x) then {
			_currentDistance = _refObj distance _x;

			if (_longestDistance < _currentDistance) then {
				_longestDistance = _currentDistance;
				_return = [_currentDistance, [_refObj, _x]];
			};
		};
	} forEach _objects;
} forEach _objects;

// return array! [distance, [one element, second element]]
_return;