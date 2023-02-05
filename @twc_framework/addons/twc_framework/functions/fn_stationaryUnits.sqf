/*
* Author: [TWC] jayman
* Makes a unit hold its position where it starts. 
*
* Arguments:
* 0: Unit <OBJECT>
*
* Return Value:
* NOTHING
*
* Example:
* [defender1] call twc_fnc_stationaryUnits
*
* Public: no
*/
params["_unit"];

_group = group _unit;

if (isServer || !hasInterface) then {
	{
		_x forceSpeed 0;
		_x disableAI "PATH";
	} forEach units _group;
};