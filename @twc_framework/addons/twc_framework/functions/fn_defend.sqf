/*
* Defend Function
*
* Currently just copies and calls the cba task defend eventually will be updated.
* Also starts with a sleep because of issues with headless clients so it must be spawned
* unlike the called cba function.
*/
params["_unit",["_pos",[]],["_radius",200],["_size",2],["_patrol",false]];

(group _unit) setVariable ["twc_cacheDefending",true];
{
		_x setVariable ["NOAI",1,false];
}forEach units _group;

waitUntil {groupOwner _group != 2};

if((typeName _pos) isEqualTo "STRING")then{
	_pos = getMarkerPos _pos;
};

{
	_x setVariable ["NOAI",1,false];
}forEach units _group;

_groupOwner = (groupOwner _group);
[_group,_pos,_radius,_size,_patrol] remoteExecCall ["CBA_fnc_taskDefend",_groupOwner];