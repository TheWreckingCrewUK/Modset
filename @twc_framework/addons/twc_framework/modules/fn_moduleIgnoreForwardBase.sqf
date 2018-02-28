params ["_logic","_units","_activated"];

if !(_activated) exitWith {};
if !(isServer)exitWith{};

_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};

{
	_x setVariable ["twc_ignoreForwardBase",true,true]
}forEach _units;