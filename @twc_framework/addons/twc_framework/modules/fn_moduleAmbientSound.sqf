/*
 * Author: jayman
 * Virtual Artillery.
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

_soundFilePath = _logic getVariable "soundFilePath";
_min = _logic getVariable "min";
_mid = _logic getVariable "mid";
_max = _logic getVariable "max";
_condition = _logic getVariable "condition";
_isInside = _logic getVariable "isInside";
_volume = _logic getVariable "volume";
_pitch = _logic getVariable "pitch";
_distance = _logic getVariable "distance";

_randomPauseRange = [_min, _mid, _max];
_soundArgs = [_volume, _pitch, _distance];

[_soundFilePath, _logic, _isInside, _soundArgs, _randomPauseRange, _condition] call TWC_Core_fnc_soundLoop;