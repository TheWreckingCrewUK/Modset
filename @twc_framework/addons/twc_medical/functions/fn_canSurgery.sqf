params ["_caller", "_target"];

_isInFieldTent = [_caller] call twc_medical_fnc_isInFieldTent;
if (_isInFieldTent) exitWith { false; }; // field surgery, not staff!

_spareGurney = missionNamespace getVariable ["TWC_Medical_spareGurneys", 0];
if (_spareGurney <= 0) exitWith { false; };

_isMedic = (_caller getVariable ["ACE_medical_medicClass", 0]);
if (_isMedic > 0) exitWith { true; };

// Special non-medical cases, like Plt Sgt, Pilot, Company Command, Company 2iC, Molar etc.
_canHandOver = [(configFile >> "CfgVehicles" >> typeOf (_caller)), "TWC_canHandOver", 0] call BIS_fnc_returnConfigEntry;
if (_canHandOver > 0) exitWith { true; };

false;