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
_soundArgs = _logic getVariable "soundArgs";

_randomPauseRange = [_min, _mid, _max];

if (typeName _soundArgs != "ARRAY") exitWith { systemChat "Error: _soundArgs provided wasn't an array."; };
if (count _soundArgs != 3) exitWith { systemChat "Error: _soundArgs provided malformed."; };

[_fileFullPath, _logic, _isInside, _soundArgs, _randomPauseRange, _condition] call twc_fnc_soundLoop;