params ["_caller", "_target"];

_blood = (_target getVariable ["ace_medical_bloodVolume", 6]);
((_blood / 6 * 100) min 1) max 0;