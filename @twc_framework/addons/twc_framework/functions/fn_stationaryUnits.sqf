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

//Variable used to delay caching or dynamic simulation until units are at their defense point.
_group setVariable ["twc_cacheStationary",true,true]; 

if (isServer || !hasInterface) then {
	{
		_x forceSpeed 0;
		_x disableAI "PATH";
	} forEach units _group;
};