params["_debug", "_group", "_aiRange"];

// If there's a vehicle in the group, don't cache it.
if ({(vehicle _x != _x)} count (units _group) > 0) exitWith {};

if (isNil {_group getVariable "twc_cacheDisabled"}) then {
	// Currently only used for urban unit caching, but potentially open for more options in the future.
	_cacheRange = (_group getVariable ["TWC_Cache_Range", _aiRange]) min _aiRange;
	_alreadyCached = false;

	// Cache stationary units immmediately - ignoring range, just to keep them in position.
	if !(isNil {_group getVariable "twc_statioGroup"}) then {
		{
			_x disableAI "path";
			_x enableSimulationGlobal false;
			_x hideObjectGlobal true;
		} forEach (units _group);

		_alreadyCached = true;
	};

	[_debug, _group, _cacheRange, _alreadyCached] spawn twc_fnc_aiCaching;
};