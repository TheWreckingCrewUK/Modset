params ["_unit"];

_aceHitpoints = _unit getVariable ["ace_medical_bodypartstatus", [0, 0, 0, 0, 0, 0]];
_aceHitpoints params ["_head", "_body", "_hand_l", "_hand_r", "_leg_l", "_leg_r"];

_damage = _body;

{ _damage = _damage + _x; } forEach _aceHitpoints;

if (_head > TWC_Medical_Threshold_Head) exitWith { [_unit, true] call ace_medical_fnc_setDead; };
if (_body > TWC_Medical_Threshold_Body) exitWith { [_unit, true] call ace_medical_fnc_setDead; };
if (_damage > TWC_Medical_Threshold_Total) exitWith { [_unit, true] call ace_medical_fnc_setDead; };