params ["_caller", "_target"];

_blood = (_target getVariable ["ace_medical_bloodVolume", 100]);
_bloodVolume = linearConversion [0, 1, _blood, 0, 100, true];
((_bloodVolume / 100) min 1) max 0;