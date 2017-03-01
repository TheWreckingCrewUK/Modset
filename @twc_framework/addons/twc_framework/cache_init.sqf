if(!isServer)exitWith{};

_aicacheDistance = 500;
_vehicleCacheDistance = 500;
_debug = true;

{
	if(((units _x) select 0) in (switchableUnits + playableUnits)) then{
		_x setVariable ["twc_cacheDisabled",true];
	};
}forEach allGroups;

[_debug,_aicacheDistance,_vehicleCacheDistance] execVM "twc_framework\cache\init.sqf";