class TWC_INDEP_Aden_Base: I_Soldier_base_F
{
	_generalMacro="TWC_INDEP_Aden_Base";
	author="[TWC] Rik";
	scope=1;
	displayName="Soldier Base";
	faction="TWC_INDEP_Units_Aden";
	vehicleClass="EdSubcat_Personnel";
	nakedUniform="U_BasicBody";
	uniformClass="U_I_C_Soldier_Para_5_F";
	genericNames="TakistaniMen";
	backpack="";
	identityTypes[]=
	{
		"LanguagePER_F",
		"Head_TK",
		"G_GUERIL_default"
	};
};
class TWC_INDEP_Aden_ArabPolice_Rifleman: TWC_INDEP_Aden_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Rifleman";
	linkedItems[]=
	{
		"SP_P58_UrbanPatrolNBC",
		"H_Beret_blk",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"SP_P58_UrbanPatrolNBC",
		"H_Beret_blk",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"CUP_srifle_LeeEnfield",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_srifle_LeeEnfield",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M"
	};
	Respawnmagazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
	respawnItems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
};
class TWC_INDEP_Aden_ArabPolice_SubmachineGunner: TWC_INDEP_Aden_ArabPolice_Rifleman
{
	displayName="Submachine Gunner";
	weapons[]=
	{
		"SP_smg_sterling",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"SP_smg_sterling",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling"
	};
	Respawnmagazines[]=
	{
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling"
	};
};

class TWC_OPFOR_Aden_Base: O_Soldier_base_F
{
	_generalMacro="TWC_OPFOR_Aden_Base";
	author="[TWC] Rik";
	scope=1;
	displayName="Soldier Base";
	faction="TWC_OPFOR_Units_Aden";
	vehicleClass="EdSubcat_Personnel";
	nakedUniform="U_BasicBody";
	genericNames="TakistaniMen";
	identityTypes[]=
	{
		"LanguagePER_F",
		"Head_TK",
		"G_GUERIL_default"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
	respawnItems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
	/*class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
	allowedFacewear[] =
	{
		"G_Bandanna_oli", 0.5,
		"G_Bandanna_khk", 0.5,
		"G_Bandanna_blk", 0.5,
		"G_Bandanna_tan", 0.5,
		"CUP_TK_NeckScarf", 0.5,
		"CUP_FR_NeckScarf", 0.5,
		"CUP_FR_NeckScarf2", 0.5,
		"", 1
	};
	headgearList[] =
	{
		"", 0.6,
		"H_FakeHeadgear", 0.3,
		"CUP_H_TKI_Lungee_Open_01", 0.5,
		"CUP_H_TKI_Lungee_Open_02", 0.5,
		"CUP_H_TKI_Lungee_Open_03", 0.5,
		"CUP_H_TKI_Lungee_Open_04", 0.5,
		"CUP_H_TKI_Lungee_Open_05", 0.5,
		"CUP_H_TKI_Lungee_Open_06", 0.5,
		"CUP_H_TKI_Lungee_01", 0.3,
		"CUP_H_TKI_Lungee_02", 0.3,
		"CUP_H_TKI_Lungee_03", 0.3,
		"CUP_H_TKI_Lungee_04", 0.3,
		"CUP_H_TKI_Lungee_05", 0.3,
		"CUP_H_TKI_Lungee_06", 0.3,
		"CUP_H_TKI_SkullCap_01", 0.4,
		"CUP_H_TKI_SkullCap_02", 0.4,
		"CUP_H_TKI_SkullCap_03", 0.4,
		"CUP_H_TKI_SkullCap_04", 0.4,
		"CUP_H_TKI_SkullCap_05", 0.4,
		"CUP_H_TKI_SkullCap_06", 0.4,
		"CUP_H_TKI_SkullCap_07", 0.4
	};*/
};
class TWC_OPFOR_Aden_Insurgent_Rifleman_1: TWC_OPFOR_Aden_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Rifleman";
	uniformClass="CUP_O_TKI_Khet_Partug_01";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket4_04",
		"CUP_H_TKI_Lungee_Open_01",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket4_04",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"CUP_srifle_LeeEnfield",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_srifle_LeeEnfield",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M"
	};
	Respawnmagazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M"
	};
};
class TWC_OPFOR_Aden_Insurgent_Rifleman_2: TWC_OPFOR_Aden_Insurgent_Rifleman_1
{
	uniformClass="CUP_O_TKI_Khet_Partug_02";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket4_05",
		"CUP_H_TKI_Lungee_Open_02",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket4_05",
		"CUP_H_TKI_Lungee_Open_02",
		"ItemCompass",
		"ItemWatch"
	};
};
class TWC_OPFOR_Aden_Insurgent_Rifleman_3: TWC_OPFOR_Aden_Insurgent_Rifleman_1
{
	uniformClass="CUP_O_TKI_Khet_Partug_03";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket4_06",
		"CUP_H_TKI_Lungee_Open_03",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket4_06",
		"CUP_H_TKI_Lungee_Open_03",
		"ItemCompass",
		"ItemWatch"
	};
};
class TWC_OPFOR_Aden_Insurgent_Rifleman_4: TWC_OPFOR_Aden_Insurgent_Rifleman_1
{
	uniformClass="CUP_O_TKI_Khet_Partug_04";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_04",
		"CUP_H_TKI_Lungee_Open_04",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_04",
		"CUP_H_TKI_Lungee_Open_04",
		"ItemCompass",
		"ItemWatch"
	};
};
class TWC_OPFOR_Aden_Insurgent_Submachinegunner: TWC_OPFOR_Aden_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Submachine Gunner";
	uniformClass="CUP_O_TKI_Khet_Partug_05";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_05",
		"CUP_H_TKI_SkullCap_04",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_05",
		"CUP_H_TKI_SkullCap_04",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"SP_smg_sterling",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"SP_smg_sterling",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling"
	};
	Respawnmagazines[]=
	{
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling"
	};
};
class TWC_OPFOR_Aden_Insurgent_Machinegunner: TWC_OPFOR_Aden_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Machine Gunner";
	uniformClass="CUP_O_TKI_Khet_Partug_06";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_06",
		"CUP_H_TKI_Lungee_Open_05",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket3_06",
		"CUP_H_TKI_Lungee_Open_05",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"SP_l4_lmg",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"SP_l4_lmg",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4"
	};
	Respawnmagazines[]=
	{
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4",
		"SP_30Rnd_762_L4"
	};
};
class TWC_OPFOR_Aden_Insurgent_Grenadier: TWC_OPFOR_Aden_Insurgent_Rifleman_1
{
	displayName="Grenadier";
	uniformClass="CUP_O_TKI_Khet_Partug_07";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_04",
		"CUP_H_TKI_Lungee_Open_06",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket2_04",
		"CUP_H_TKI_Lungee_Open_06",
		"ItemCompass",
		"ItemWatch"
	};
	magazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"HandGrenade",
		"HandGrenade",
		"HandGrenade"
	};
	Respawnmagazines[]=
	{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"HandGrenade",
		"HandGrenade",
		"HandGrenade"
	};
};
class TWC_OPFOR_Aden_Insurgent_Covert: TWC_OPFOR_Aden_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="Covert";
	uniformClass="CUP_O_TKI_Khet_Partug_08";
	linkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket6_04",
		"CUP_H_TKI_SkullCap_01",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_OI_TKI_Jacket6_04",
		"CUP_H_TKI_SkullCap_01",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"CUP_hgun_Colt1911",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"CUP_hgun_Colt1911",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"HandGrenade",
		"HandGrenade",
		"HandGrenade"
	};
	Respawnmagazines[]=
	{
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"CUP_7Rnd_45ACP_1911",
		"HandGrenade",
		"HandGrenade",
		"HandGrenade"
	};
};