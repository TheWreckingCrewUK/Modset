params ["_target", "_className"];

if !(local _target) exitWith {};
if !(isPlayer _target) exitWith {};

[_target] call ace_medical_fnc_setCardiacArrest;