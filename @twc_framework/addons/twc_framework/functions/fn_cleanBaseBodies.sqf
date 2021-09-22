/* 
 * If enabled, cleans up bodies in base!
 * Cleans up disconnects for the entire operation at base, and any other deaths in the first 3 minutes.
 */
params [["_range", 0], ["_marker", "base"]];

if !(isServer) exitWith {};
if (_range <= 0) exitWith {};

// Believe it or not, one of the best ways to check if it exists...
if (getMarkerColor _marker isEqualTo "") exitWith {
	systemChat "Clean base bodies is enabled, but no base marker is defined!";
};

// Just straight up delete any thing that dies in the first three minutes (stops auto-exploding vehicles too)
TWC_CleanBodiesFirstFiveMinutes = addMissionEventHandler ["EntityKilled", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	
	if (CBA_missionTime > 180) then {
		removeMissionEventHandler ["EntityKilled", TWC_CleanBodiesFirstFiveMinutes];
	} else {
		deleteVehicle _unit;
	};
}];

// Other modules can define this!
if (isNil "TWC_BaseMarkerPos") then { TWC_BaseMarkerPos = getMarkerPos _marker; };
TWC_CleanBodiesRange = _range;

TWC_CleanBaseBodies = addMissionEventHandler ["HandleDisconnect", {
	// handle disconnect does not pass us the object, so we have to distance check near marker on disconnects
	// fortunately not expensive, and not often
	{
		if (_x distance2D TWC_BaseMarkerPos <= TWC_CleanBodiesRange) then {
			deleteVehicle _x;
		};
	} forEach allDeadMen;
}];
