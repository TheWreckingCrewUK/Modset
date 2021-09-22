/*
* Author: [TWC] jayman
* Adds MissionEventHandler to delete dead bodies in base
*
* Arguments:
* 0: RANGE <NUMBER>
* 1: MARKER <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [200,"base"] call twc_fnc_deadBodies;
*
* Public: No
*/
#include "macros.hpp"

params ["_range",["_marker","base"]];

DEPRECATED_ALT("twc_fnc_deadBodies", "twc_framework_fnc_cleanBaseBodies")

[_range, _marker] call twc_framework_fnc_cleanBaseBodies;

/* if (!isServer) exitWith {};
if (_range <= 0 || isNil "_range") exitWith {};

if (getMarkerColor _marker isEqualTo "") exitWith {
	systemChat "Dead body cleanup in base is enabled, but no base marker is defined";
};

twc_deadBodiesMarkerPos = getMarkerPos _marker;
twc_deadBodiesRange = _range;

_handle = addMissionEventHandler ["HandleDisconnect", {
	if (!(isNil "twc_deadBodiesMarkerPos") && !(isNil"twc_deadBodiesMarker")) then {
		if ((_this select 0) distance2D twc_deadBodiesMarkerPos <= twc_deadBodiesRange) then {
			deleteVehicle (_this select 0);
		};
	};
}]; */