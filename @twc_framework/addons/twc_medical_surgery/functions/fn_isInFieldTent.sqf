/**
 * Checks if given unit is within a field tent. This doesn't check for a medical facility overall, just field tents.
 */
params ["_unit"];

// Cached result, per performance concerns.
(_unit getVariable ["TWC_Medical_cacheInFieldTent", [-9, false]]) params ["_expireTime", "_lastResult"];
if (CBA_missionTime < _expireTime) exitWith {_lastResult};

private _eyePos = eyePos _unit;
private _isInTent = false;

private _objects = (lineIntersectsWith [_unit modelToWorldVisual [0, 0, (_eyePos select 2)], _unit modelToWorldVisual [0, 0, (_eyePos select 2) +10], _unit]);
{
	if (_x getVariable ["TWC_Medical_isFieldTent", false]) exitWith {
		_isInTent = true;
	};
} forEach _objects;

if (!_isInTent) then {
	_objects = _unit nearObjects 7.5;
	{
		if (_x getVariable ["TWC_Medical_isFieldTent", false]) exitWith {
			_isInTent = true;
		};
	} forEach _objects;
};

//Save the results (with a 1 second expiry)
_unit setVariable ["TWC_Medical_cacheInFieldTent", [CBA_missionTime + 1, _isInTent]];

_isInTent;