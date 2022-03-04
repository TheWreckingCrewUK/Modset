params ["_unit", "_corpse"];

if (!local _unit) exitWith {};
if (!isPlayer _unit) exitWith {};

_unit setVariable ["TWC_Medical_Defib_Attempts", 0, true];