params ["_caller", "_target"];

private _blood = (_target getVariable ["ace_medical_bloodVolume", 100]);
((_blood / 100) min 1) max 0;