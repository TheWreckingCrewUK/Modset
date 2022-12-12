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
_group setVariable ["twc_cacheDefending", true];
_group setVariable ["twc_statioGroup", true];
_group setVariable ["acex_headless_blacklist", true];

if (isServer || !hasInterface) then {
	{
		_x forceSpeed 0;
		_x disableAI "PATH";
	} forEach units _group;
};