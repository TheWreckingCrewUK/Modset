params ["_caller", "_target"];

if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };

// have we got any sutures first
if (({_x isKindOf ["TWC_Item_Medical_SutureKit_1", configFile >> "CfgWeapons"]} count (items player)) < 1) exitWith { false };

// no wounds to suture
private _bandagedWounds = _target getVariable ["ace_medical_bandagedWounds", []];
if (count _bandagedWounds == 0) exitWith { false };

true