params [["_group", grpNull], ["_isCached", false], ["_cacheDistance", 1500]];

if !(TWC_Cache_Enabled) exitWith {
	["Exiting loops, as caching was disabled dynamically", "Cache"] call TWC_Debug_fnc_logGlobal;
};

if (isNull _group) exitWith {
	["Exiting an infantry loop, nullGroup encountered", "Cache"] call TWC_Debug_fnc_logGlobal;
};

private _cacheBlacklist = _group getVariable ["TWC_Cache_Blacklisted", false];

if (_cacheBlacklist) exitWith {
	if (_isCached) then {
		[_group, _cacheDistance] call TWC_Cache_fnc_unCacheGroup;
	};

	["Exiting an infantry loop, blacklisted group encountered", "Cache"] call TWC_Debug_fnc_logGlobal;
};

if ({alive _x} count (units _group) == 0) exitWith {
	[format ["Exiting an infantry loop, all units within %1 are dead", name _group], "Cache"] call TWC_Debug_fnc_logGlobal;
};

private _leader = leader _group;
private _continue = true; // the cache functions call a new loop, once they've concluded

// Most performant check possible, tested against CBA_fnc_nearPlayer etc.
if ([_leader, _cacheDistance] call CBA_fnc_nearPlayer) then {
	if !(_isCached) then {
		/* If there's no players in range, and it's not yet cached */
		[_group, _cacheDistance] call TWC_Cache_fnc_cacheGroup;
		_continue = false;
	};
} else {
	if (_isCached) then {
		/* If there's players in range, and it's not uncached */
		[_group, _cacheDistance] call TWC_Cache_fnc_unCacheGroup;
		_continue = false;
	};
};

// Reloop, if all other conditions are fine
if (_continue) exitWith {
	[{ _this call TWC_Cache_fnc_infantryLoop; }, _this, 2] call CBA_fnc_waitAndExecute;
};