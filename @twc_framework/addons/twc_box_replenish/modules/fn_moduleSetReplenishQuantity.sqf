params ["_logic", "_units", "_activated"];

if !(_activated) exitWith {};

_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};

