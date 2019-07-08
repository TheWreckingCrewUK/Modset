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

_pos = getPos _logic;
_Destination = _logic getVariable "Destination";
_End = _logic getVariable "End";
_Plane_Units = _logic getVariable "Plane_Units";
/*if (!isNil "_Type_Plane" && !isNil "_Type_Cargo") then
{
	_Type_Plane = _logic getVariable "Type_Plane";
	_Type_Cargo = _logic getVariable "Type_Cargo";
};*/
_Type_Plane = _logic getVariable "Type_Plane";
_Type_Cargo = _logic getVariable "Type_Cargo";

_Amount_Cargo = _logic getVariable "Amount_Cargo";
_attackpos = _logic getVariable "Infantry_Attack_Location";
_script = _logic getVariable "Script";

[_pos, _Destination, _End, _Plane_Units, _Type_Plane, _Type_Cargo, _Amount_Cargo, _attackpos, _script] call twc_fnc_Airborne;

if (!isNull _logic) then {
	deleteVehicle _logic;
};