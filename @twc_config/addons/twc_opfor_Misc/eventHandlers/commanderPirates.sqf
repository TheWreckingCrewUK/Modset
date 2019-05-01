//Gear randomization for commander pirates
params["_unit"];
_unit removeWeapon (primaryWeapon _unit);
removeVest _unit;

_unit forceAddUniform (selectRandomWeighted ["CUP_I_B_PMC_Unit_3",1,"U_I_C_Soldier_Para_5_F",1]);
_unit addItemToUniform "ACE_fieldDressing";
_unit addItemToUniform "ACE_fieldDressing";
_unit addItemToUniform (selectRandomWeighted ["ACE_atropine",0.5,"ACE_epinephrine",1,"ACE_morphine",1,"",1]);

_unit addVest (selectRandomWeighted ["V_LegStrapBag_coyote_F",1,"V_LegStrapBag_black_F",1,"V_LegStrapBag_olive_F",1,"V_BandollierB_blk",0.75,"V_BandollierB_cbr",0.75,"V_BandollierB_rgr",0.75,"V_BandollierB_khk",0.75,"V_BandollierB_oli",0.75]);
_unit addItemToVest "CUP_HandGrenade_RGD5";
_unit addItemToVest "CUP_HandGrenade_RGD5";
_unit addItemToVest "SmokeShell";

_gun = selectRandomWeighted ["CUP_arifle_AKS74U",1,"SP_smg_sterling",1,"CUP_smg_SA61",1,"CUP_arifle_AKS_Gold",0.1];

switch (_gun)do{
	case "CUP_arifle_AKS74U": {_unit addWeapon "CUP_arifle_AKS74U"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
	case "SP_smg_sterling": {_unit addWeapon "SP_smg_sterling"; _unit addMagazines ["30Rnd_9x21_Mag_SMG_02",5]};
	case "CUP_smg_SA61": {_unit addWeapon "CUP_smg_SA61"; _unit addMagazines ["CUP_50Rnd_B_765x17_Ball_M",5]};
	case "CUP_arifle_AKS_Gold": {_unit addWeapon "CUP_arifle_AKS_Gold"; _unit addMagazines ["CUP_30Rnd_762x39_AK47_M",5]};
	default {_unit addWeapon "CUP_arifle_AK74"; _unit addMagazines ["CUP_30Rnd_545x39_AK_M",5]};
};
_unit selectWeapon (primaryWeapon _unit);