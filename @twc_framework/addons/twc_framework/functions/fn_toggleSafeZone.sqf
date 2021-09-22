/*
 * Toggles base 'safe zone'. If enabled, it'll delete projectiles/grenades discharged in the base.
 * Author: Jayman
 */
params ["_range", ["_marker", "base"], ["_duration", 300]];

if !(hasInterface) exitWith {};
if (_range <= 0 || _duration <= 0) exitWith {};

// Believe it or not, one of the best ways to check if it exists...
if (getMarkerColor _marker == "") exitWith {
	systemChat "No shooting in base is enabled, but no base marker is defined!";
};

// Other modules can define this!
if (isNil "TWC_BaseMarkerPos") then { TWC_BaseMarkerPos = getMarkerPos _marker; };

TWC_BaseSafeZoneRange = _range;
TWC_BaseSafeZoneDuration = _duration;

_handle = player addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

	if ((_unit distance TWC_BaseMarkerPos) < TWC_BaseSafeZoneRange) then {
		deleteVehicle _projectile;
		
		titleText [
			format ["Don't fire on base for another %1 second(s)!", (TWC_BaseSafeZoneDuration - CBA_MissionTime)],
			"PLAIN",
			5
		];
	};
}];

//Deletes the event handler after the duration elapses (default 5 mins).
[
	{
		player removeEventHandler ["Fired", (_this select 0)];
		TWC_BaseSafeZoneRange = nil;
		TWC_BaseSafeZoneDuration = nil;
	},
	[_handle],
	_duration
] call CBA_fnc_waitAndExecute;
