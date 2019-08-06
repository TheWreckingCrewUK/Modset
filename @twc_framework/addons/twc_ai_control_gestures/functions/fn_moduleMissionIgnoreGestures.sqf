/*
 * Author: Bosenator
 * Module function to ignore gestures entirely for this mission.
 *
 * Arguments:
 * 0: The Module Logic <OBJECT>
 * 1: Synced Objects <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */
params ["_logic", "_units", "_activated"];

if (!_activated || !isServer) exitWith {};

missionNamespace setVariable ["TWC_AI_Control_Gestures_Disabled", true, true];

if (!isNull _logic) then {
	deleteVehicle _logic;
};