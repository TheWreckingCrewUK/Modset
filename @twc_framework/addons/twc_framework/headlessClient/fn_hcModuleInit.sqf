params ["_logic","_units","_activated"];

if !(_activated) exitWith {};
if !(isServer)exitWith{};

_enabled = _logic getVariable "enabled";
if !(_enabled) exitWith {};

["AllVehicles","init",{[_this select 0] call twc_fnc_handleSpawn}, nil, nil, true] call CBA_fnc_addClassEventHandler;