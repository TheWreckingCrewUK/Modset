/*
 * Author: Bosenator
 * Module function to make a unit or group stationary.
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

_pos = getPos _logic;
_lz = _logic getVariable "LZ";
_infantryMarker = _logic getVariable "InfantryMarker";
_era = _logic getVariable "ERA";
_heloClass = _logic getVariable "HeloClass";
_infClass = _logic getVariable "InfClass";

[_pos,_lz,_infantryMarker,_era,_heloClass,_infClass] spawn twc_fnc_airAssault;

// TODO: change spawn to call above when alternate stationary units is introduced

if (!isNull _logic) then {
    deleteVehicle _logic;
};