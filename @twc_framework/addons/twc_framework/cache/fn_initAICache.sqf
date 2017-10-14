params["_debug","_group","_aiRange"];

if({(vehicle _x != _x)} count (units _group) > 0)exitWith{};

if(isNil {_group getVariable "twc_cacheDisabled"})then{
	[_debug,_group,_aiRange] spawn twc_fnc_aiCaching;
};