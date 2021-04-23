if (hasInterface) exitWith {};

if !(TWC_Cache_Enabled) exitWith {
	["Exiting updated settings, as Caching has been disabled", "Cache"] call TWC_Debug_fnc_logGlobal;
};

{
	if (vehicle _x == _x) then {
		_x call TWC_Cache_fnc_handleInitMan;
	} else {
		_x call TWC_Cache_fnc_handleInitVehicle;
	};
} forEach allUnits;

