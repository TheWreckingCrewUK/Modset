params ["_unit"];

_aceHitpoints = _unit getVariable ["ace_medical_bodypartstatus", [0, 0, 0, 0, 0, 0]];
_aceHitpoints params ["_head", "_body", "_hand_l", "_hand_r", "_leg_l", "_leg_r"];

_damage = _body;

{ _damage = _damage + _x; } forEach _aceHitpoints;

if (_head > TWC_Medical_Threshold_Head) exitWith {
	["TWC_Unit_Perished", [_unit, "head_shot"]] call CBA_fnc_globalEvent;
	[_unit, true] call ace_medical_fnc_setDead;
};

if (_body > TWC_Medical_Threshold_Body) exitWith {
	["TWC_Unit_Perished", [_unit, "shot_through_the_heart"]] call CBA_fnc_globalEvent; // and it's too late
	[_unit, true] call ace_medical_fnc_setDead;
};

if (_damage > TWC_Medical_Threshold_Total) exitWith {
	["TWC_Unit_Perished", [_unit, "shot_to_pieces"]] call CBA_fnc_globalEvent;
	[_unit, true] call ace_medical_fnc_setDead;
};