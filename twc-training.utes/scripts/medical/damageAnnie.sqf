private["_difficultyLevel","_typeOfDamage","_damageAmount","_trainer"];

_difficultyLevel = (_this select 0) select 0;
_trainer = owner ((_this select 0) select 1);
_damageAmount = 0;
_typeOfDamage = "";

switch(_difficultyLevel)do{
	case 0: {_damageAmount = .2; _typeOfDamage = ["falling","punch","ropeburn","stab","bullet","grenade"] call BIS_fnc_selectRandom;};
	case 1: {_damageAmount = .5; _typeOfDamage = ["grenade","vehiclecrash","bullet","stab","unknown"] call BIS_fnc_selectRandom;};
	case 2: {_damageAmount = .9; _typeOfDamage = ["shell","explosive","grenade","vehiclecrash","unknown"] call BIS_fnc_selectRandom;};
	default {diag_log format ["%1, %2", time, "An error occured when attempting to perform medical training."];}
};

medicalPacket = _typeOfDamage;
_trainer publicVariableClient "medicalPacket";

[cprAnnie, _damageAmount, "body", _typeOfDamage] call ace_medical_fnc_addDamageToUnit;



twc_fnc_DamageArmLeft ={
	Params ["_unit"];
	[_unit, random 1, "hand_l", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
};

twc_fnc_DamageArmRight ={
	Params ["_unit"];
	[_unit, random 1, "hand_r", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
};

twc_fnc_DamageLegLeft ={
	Params ["_unit"];
	[_unit, random 1, "leg_l", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
};

twc_fnc_DamageLegRight ={
	Params ["_unit"];
	[_unit, random 1, "leg_r", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
};

twc_fnc_DamageHead ={
	Params ["_unit"];
	[_unit, random 1, "Head", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
};

twc_fnc_DamageTorso ={
	Params ["_unit"];
	[_unit, random 1, "body", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
};

twc_fnc_DamageBody = {
	Params ["_unit"];
	if (random 100<50) then {
		[_unit, random 1, "hand_l", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
	};
	if (random 100<50) then {
		[_unit, random 1, "hand_r", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
	};
	if (random 100<50) then {
		[_unit, random 1, "leg_l", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
	};
	if (random 100<50) then {
		[_unit, random 1, "leg_r", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
	};
	if (random 100<50) then {
		[_unit, random 1, "Head", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
	};
	if (random 100<50) then {
		[_unit, random 1, "body", ["falling","punch","ropeburn","stab","bullet","grenade","vehiclecrash"] call BIS_fnc_selectRandom;] call ace_medical_fnc_addDamageToUnit
	};
};

twc_fnc_MakeMedical = {
	
};


alphaAc = ["AlphaList","Alpha List","", {hint "1"},{true}] call ace_interact_menu_fnc_createAction;
[player, 0, ["ACE_SelfActions", "ACE_Torso"], alphaAc] call ace_interact_menu_fnc_addActionToObject;

playerListAction = ["thisStartsTheList","Player List","", {},{true}] call ace_interact_menu_fnc_createAction;
alphaAction = ["AlphaList","Alpha List","", {call TWC_fnc_getAlphaList;},{true}] call ace_interact_menu_fnc_createAction;
bravoAction = ["BravoList","Bravo List","", {call TWC_fnc_getBravoList;},{true}] call ace_interact_menu_fnc_createAction;
charlieAction = ["CharlieList","Charlie List","", {call TWC_fnc_getCharlieList;},{true}] call ace_interact_menu_fnc_createAction;
supportAction = ["SupportList","Support List","", {call TWC_fnc_getSupportList;},{true}] call ace_interact_menu_fnc_createAction;
airAction = ["AirList","Air List","", {call TWC_fnc_getAirList;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], playerListAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "ACE_Torso "], alphaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], bravoAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], charlieAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], supportAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], airAction] call ace_interact_menu_fnc_addActionToObject;
