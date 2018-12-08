params ["_debug", "_vehicle", ["_vehicleCacheDistance", 1500]];

if (isNil {_vehicle getVariable "twc_cacheDisabled"}) then {
	if (isNil {_vehicle getVariable "twc_isCaching"}) then {
		_vehicle setVariable ["twc_isCaching", true];
		_cacheRange = (_vehicle getVariable ["TWC_Cache_Range", _vehicleCacheDistance]) min _vehicleCacheDistance;
		[_debug, _vehicle, _cacheRange] spawn twc_fnc_vehicleCaching;
	};
};