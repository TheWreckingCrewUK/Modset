private["_difficultyLevel","_typeOfDamage","_damageAmount","_trainer"];

_difficultyLevel = _this select 0;
_trainer = owner _this select 1;
_damageAmount = 0;
_typeOfDamage = "";

switch(_difficultyLevel)do{
	case 0: {_damageAmount = .2; _typeOfDamage = ["falling","punch","ropeburn","stab","bullet","grenade"] call BIS_fnc_selectRandom;};
	case 1: {_damageAmount = .5; _typeOfDamage = ["grenade","vehiclecrash","bullet","stab","unknown"] call BIS_fnc_selectRandom;};
	case 2: {_damageAmount = .9; _typeOfDamage = ["shell","explosive","grenade","vehiclecrash","unknown"] call BIS_fnc_selectRandom;};
	default {diag_log format ["%1, %2", time, "An error occured when attempting to perform medical training."];}
};

medicalPacket = hint format ["Annie was damaged by %1", _typeOfDamage];
_trainer publicVariableClient "medicalPacket";

[cprAnnie, _damageAmount, "body", _typeOfDamage] call ace_medical_fnc_addDamageToUnit;