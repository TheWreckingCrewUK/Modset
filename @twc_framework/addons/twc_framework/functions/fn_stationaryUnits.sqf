/*
* Author: [TWC] jayman
* Makes a unit hold its position where it starts.
*
* Arguments:
* 0: Unit <OBJECT>
* 1: View Limiter <BOOL>
*
* Return Value:
* NOTHING
*
* Example:
* [defender1, false] call twc_fnc_stationaryUnits
*
* Public: no
*/
params ["_unit", ["_viewLimit", false]];

if (isServer || !hasInterface) then {
	_group = group _unit;
	_group setVariable ["twc_cacheDefending", true, true];
	_group setVariable ["twc_statioGroup", true, true];

	{
		_x forceSpeed 0;
		_x disableAI "PATH";
	} forEach units _group;
	
	if (_viewLimit) then {
		{
			_x disableAI "MOVE";
		} forEach units _group;
	};
};