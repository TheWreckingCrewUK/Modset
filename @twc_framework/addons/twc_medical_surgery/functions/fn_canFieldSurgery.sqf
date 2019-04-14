params ["_caller", "_target"];

_isInFieldTent = [_caller] call twc_medical_surgery_fnc_isInFieldTent;
if !(_isInFieldTent) exitWith { false; }; // field surgery, not staff!

_isMedic = (_caller getVariable ["ACE_medical_medicClass", 0]);
if (_isMedic > 0) exitWith { true; };

if (({_x isKindOf ["TWC_Item_Medical_SurgicalMasks_1", configFile >> "CfgWeapons"]} count (items _caller)) < 1) exitWith { false };

false;