/*
* Author: [TWC] Bosenator
* Makes a unit free to move again. Reverts stationary units.
*
* Arguments:
* 0: Unit <OBJECT>
*
* Return Value:
* NOTHING
*
* Example:
* [defender1] call twc_fnc_movableUnits
*
* Public: no
*/
params["_unit"];

if (isServer || !hasInterface) then {
	_group = group _unit;
	{
		_x forceSpeed -1;
		_x enableAI "PATH";
	} forEach units _group;
};