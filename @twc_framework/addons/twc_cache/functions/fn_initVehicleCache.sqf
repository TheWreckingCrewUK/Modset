params ["_debug", "_vehicle", ["_vehicleCacheDistance", 1500]];

if (isNil {_vehicle getVariable "TWC_cacheDisabled"}) then {
	if (isNil {_vehicle getVariable "TWC_isCaching"}) then {
		_vehicle setVariable ["TWC_isCaching", true];
		_cacheRange = (_vehicle getVariable ["TWC_Cache_Vehicle_Range", _vehicleCacheDistance]) min _vehicleCacheDistance;
		[_debug, _vehicle, _cacheRange] spawn TWC_Cache_fnc_vehicleCaching;
	};
};