params ["_logic", "_units", "_activated"];

if !(_activated) exitWith {};
if !(isServer) exitWith {};

_enabled = _logic getVariable "enabled";
missionNameSpace setVariable ["TWC_Caching_Enabled", _enabled];
if !(_enabled) exitWith {};

{
	if (((units _x) select 0) in (switchableUnits + playableUnits)) then {
		_x setVariable ["TWC_cacheDisabled", true];
	};
} forEach allGroups;

missionNameSpace setVariable ["TWC_Cache_Infantry_Range", (_logic getVariable "aiRange")];
missionNameSpace setVariable ["TWC_Cache_Urban_Range", (_logic getVariable "urbanRange")];
missionNameSpace setVariable ["TWC_Cache_Vehicle_Range", (_logic getVariable "vehicleRange")];

// Happens at mission init (map screen ops, spawn on public). Delayed to allow for custom cache ranges to be applied.
/* [{
	if (missionNameSpace getVariable "TWC_Cache_Vehicle_Range" > 0) then {
		["AllVehicles","init",{
			[false, (_this select 0), (missionNameSpace getVariable "TWC_Cache_Vehicle_Range")] call twc_fnc_initVehicleCache;
		}, true, ["Man", "Static"], true] call CBA_fnc_addClassEventHandler;
	};
}, [], 0.5] call CBA_fnc_waitAndExecute; */