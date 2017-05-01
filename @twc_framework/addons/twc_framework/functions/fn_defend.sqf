/*
* Defend Function
*
* Currently just copies and calls the cba task defend eventually will be updated.
* Also starts with a sleep because of issues with headless clients so it must be spawned
* unlike the called cba function.
*/
params["_group",["_pos",[]],["_radius",200],["_size",2],["_patrol",false]];

if((typeName _group) isEqualTo "OBJECT")then{
	(group _group) setVariable ["twc_cacheDefending",true];
	{
		_x setVariable ["NOAI",1,false];
	}forEach units (group _group);
	waitUntil {(groupOwner (group _group)) != 2};
}else{
	_group setVariable ["twc_cacheDefending",true];
	{
		_x setVariable ["NOAI",1,false];
	}forEach units _group;
	waitUntil {groupOwner _group != 2};
};
if((typeName _pos) isEqualTo "STRING")then{
	_pos = getMarkerPos _pos;
};

[_group,_pos,_radius,_size,_patrol] call CBA_fnc_taskDefend;