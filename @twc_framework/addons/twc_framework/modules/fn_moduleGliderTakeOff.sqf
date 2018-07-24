/*
 * Author: Anschluss
 * Module function to give the commander an ace interaction to take off.
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

_captureData = _logic getVariable "Capturedata";
_plane = (_units select {typeOf _x == "LIB_C47_RAF"}) select 0;
_glider = (_units select {_x isKindOf "LIB_MKI_HADRIAN" || _x isKindOf "TWC_HORSA"}) select 0;

[_plane, _glider, _captureData] call twc_fnc_gliderTakeOff;

if (!isNull _logic) then {
	deleteVehicle _logic;
};