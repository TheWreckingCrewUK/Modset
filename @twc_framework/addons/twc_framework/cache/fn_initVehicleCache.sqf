params["_debug","_vehicle","_vehicleCacheDistance"];

if(isNil {_vehicle getVariable "twc_cacheDisabled"})then{
	if(isNil {_vehicle getVariable "twc_isCaching"})then{
		_vehicle setVariable ["twc_isCaching",true];
		[_debug,_vehicle,_vehicleCacheDistance] spawn twc_fnc_vehicleCaching;
	};
};