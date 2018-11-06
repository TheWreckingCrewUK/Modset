/*
* Author: [TWC] jayman
* Adds a safezone when near the base or any named flag
*
* Arguments:
* 0: Range <NUMBER>
* 1: Marker <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [400,"base"] call twc_fnc_safeZone;
*
* Public: No
*/
params ["_range", ["_marker", "base"]];

if (!hasInterface) exitWith {};
if (_range == 0) exitWith {};

if (getMarkerColor _marker == "") exitWith {
	systemChat "No shooting in base is enabled, but no base marker is defined.";
};

//I really wish this wasn't a global variable
twc_baseSafezoneRange = _range;
twc_baseFlag = _marker;

_handle = player addEventHandler ["Fired", {
	if (((_this select 0) distance (getMarkerPos twc_baseFlag)) < twc_baseSafezoneRange) then {
		deleteVehicle (_this select 6);
		titleText ["Don't shoot or throw grenades on base!", "PLAIN", 5];
	};
}];

//Deletes the event handler after 5 minutes.
[_handle] spawn {
	sleep 300;
	player removeEventHandler ["Fired", (_this select 0)];
	twc_baseSafezoneRange = nil;
	twc_baseFlag = nil;
};