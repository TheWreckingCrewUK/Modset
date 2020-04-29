/*
 * Author: TWC
 * Module function for an airborne assault.
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
params ["_logic", "_trigger", "_activated"];

if (!_activated || !isServer) exitWith {};

_dropPos = getPos _logic;
_dropDir = getDir _logic;
_planeUnits = _logic getVariable "Plane_Units";
_typePlane = _logic getVariable "Type_Plane";
_typeCargo = _logic getVariable "Type_Cargo";

_amountCargo = _logic getVariable "Amount_Cargo";
_attackPos = _logic getVariable "Infantry_Attack_Location";
_script = _logic getVariable "Script";

[_dropPos, _dropDir, _planeUnits, _typePlane, _typeCargo, _amountCargo, _attackPos, _script] call twc_fnc_airborne;

if (!isNull _logic) then {
	deleteVehicle _logic;
};