/*
* Author: [TWC] Ross
* Makes a unit hold its position where it starts until contacted. 
*
* Arguments:
* 0: Unit <OBJECT>
*
* Return Value:
* NOTHING
*
* Public: no
*/
params["_unit"];

_group = group _unit;
_group setVariable ["twc_cacheDefending", true];

if (isServer || !hasInterface) then {
{
    doStop _x;
	} forEach units _group;
};