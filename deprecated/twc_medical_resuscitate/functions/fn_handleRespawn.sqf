params ["_unit", "_corpse"];

if (!local _unit) exitWith {};
if (!isPlayer _unit) exitWith {};

_unit setVariable ["TWC_Medical_Resuscitate_Defib_Attempts", 0, true];
_unit setVariable ["TWC_Medical_Resuscitate_CPR_Attempts", 0, true];