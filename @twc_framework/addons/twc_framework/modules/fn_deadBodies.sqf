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
params ["_range",["_marker","base"]];

if (!isServer) exitWith {};
if (_range <= 0 || isNil "_range") exitWith {};

if (getMarkerColor _marker isEqualTo "") exitWith {
	systemChat "Dead Body cleanup in base is Enabled, but no base marker is defined";
};

twc_deadBodiesMarker = _marker;
twc_deadBodiesRange = _range;

_handle = addMissionEventHandler ["HandleDisconnect",{
	if ((_this select 0) distance2D twc_deadBodiesMarker <= twc_deadBodiesRange) then {
		deleteVehicle (_this select 0);
	};
}];