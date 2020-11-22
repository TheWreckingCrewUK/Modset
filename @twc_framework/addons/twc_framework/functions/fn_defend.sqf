/*
* Author: [TWC] jayman
* Makes VCOM and HC adjustments for cba defend function
*
* Arguments:
* 0: UNIT <OBJECT>
* 1: Position <Marker> <Object> <Position>
* 2: Radius <NUMBER>
* 3: Cover Goodness <NUMBER>
* 4: Patrol <BOOL>
*
* Return Value:
* NOTHING
*
* Example:
* [def1,def1,200,2,false] spawn twc_fnc_defend;
*
* Public: no
*/
params["_unit",["_pos",[]],["_radius",100],["_size",2],["_patrol",0.1],["_hold",0.9]];

(group _unit) setVariable ["twc_cacheDefending",true];

if(isMultiplayer && (count (entities "HeadlessClient_F") != 0))then{
	waitUntil{groupOwner (group _unit) != 2};
};

if((typeName _pos) isEqualTo "STRING")then{
	_pos = getMarkerPos _pos;
};

{
	_x setVariable ["NOAI",1,true];
}forEach units (group _unit);

_groupOwner = (groupOwner (group _unit));
[_unit,_pos,_radius,_size,_patrol,_hold] remoteExecCall ["CBA_fnc_taskDefend",_groupOwner];