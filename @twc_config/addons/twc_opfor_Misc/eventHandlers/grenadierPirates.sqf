//Gear randomization for grenadier pirates
params["_unit"];
_unit removeWeapon (primaryWeapon _unit);
removeVest _unit;

_unit forceAddUniform (selectRandomWeighted ["U_I_C_Soldier_Bandit_1_F",1,"U_I_C_Soldier_Bandit_3_F",1,"U_I_C_Soldier_Bandit_4_F",1,"CUP_U_I_GUE_Anorak_01",1,"CUP_U_I_GUE_Anorak_03",1,"U_I_C_Soldier_Para_2_F",1,"U_I_C_Soldier_Bandit_5_F",1,"U_I_C_Soldier_Bandit_2_F",1]);
_unit addItemToUniform "ACE_fieldDressing";
_unit addItemToUniform "ACE_fieldDressing";
_unit addItemToUniform (selectRandomWeighted ["ACE_atropine",0.5,"ACE_epinephrine",1,"ACE_morphine",1,"",1]);

_unit addVest (selectRandomWeighted ["CUP_V_OI_TKI_Jacket2_01",1,"CUP_V_OI_TKI_Jacket2_04",1,"CUP_V_OI_TKI_Jacket2_02",1,"CUP_V_I_Carrier_Belt",1,"CUP_V_O_Ins_Carrier_Rig_Light",1,"CUP_V_OI_TKI_Jacket3_05",1,"CUP_V_OI_TKI_Jacket3_03",1]);
_unit addItemToVest "CUP_HandGrenade_RGD5";
_unit addItemToVest "CUP_HandGrenade_RGD5";
_unit addItemToVest "SmokeShell";

_gun = selectRandomWeighted ["CUP_arifle_AK74_GL_Early",1,"CUP_arifle_AKM_GL_Early",1,"CUP_arifle_AKMS_GL_Early",1,"CUP_arifle_AKS74_GL_Early",1,"CUP_glaunch_M79",1];

switch (_gun)do{
	case "CUP_arifle_AK74_GL_Early": {_unit addMagazine "CUP_30Rnd_545x39_AK_M"; _unit addMagazine "CUP_1Rnd_HE_GP25_M"; _unit addWeapon "CUP_arifle_AK74_GL_Early"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]; _unit addMagazines ["CUP_1Rnd_HE_GP25_M",6]};
	case "CUP_arifle_AKM_GL_Early": {_unit addMagazine "CUP_30Rnd_762x39_AK47_M"; _unit addMagazine "CUP_1Rnd_HE_GP25_M"; _unit addWeapon "CUP_arifle_AKM_GL_Early"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]; _unit addMagazines ["CUP_1Rnd_HE_GP25_M",6]};
	case "CUP_arifle_AKMS_GL_Early": {_unit addMagazine "CUP_30Rnd_762x39_AK47_M"; _unit addMagazine "CUP_1Rnd_HE_GP25_M"; _unit addWeapon "CUP_arifle_AKMS_GL_Early"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]; _unit addMagazines ["CUP_1Rnd_HE_GP25_M",6]};
	case "CUP_arifle_AKS74_GL_Early": {_unit addMagazine "CUP_30Rnd_545x39_AK_M"; _unit addMagazine "CUP_1Rnd_HE_GP25_M";  _unit addWeapon "CUP_arifle_AKS74_GL_Early"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5];  _unit addMagazines ["CUP_1Rnd_HE_GP25_M",6]};
	case "CUP_glaunch_M79": {_unit addMagazine "CUP_1Rnd_HE_M203"; _unit addWeapon "CUP_glaunch_M79"; _unit addMagazines ["CUP_1Rnd_HE_M203",5]; _unit addMagazines ["CUP_1Rnd_HE_GP25_M",6]; _unit addMagazine "CUP_7Rnd_45ACP_1911"; _unit addWeapon "CUP_hgun_Colt1911"; _unit addMagazines ["CUP_7Rnd_45ACP_1911",3]};
	default {_unit addWeapon "CUP_arifle_AK74"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
};
_unit selectWeapon (primaryWeapon _unit);