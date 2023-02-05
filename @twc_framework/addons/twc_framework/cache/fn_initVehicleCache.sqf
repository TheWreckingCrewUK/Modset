params ["_debug", "_vehicle", ["_vehicleCacheDistance", 1500]];

sleep 1;

_vehicle triggerDynamicSimulation false;

//Don't cache if caching is disabled
if (isNil {_vehicle getVariable "twc_cacheDisabled"}) then {

	_vehicle enableDynamicSimulation true;
};