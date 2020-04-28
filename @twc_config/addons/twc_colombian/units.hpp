class TWC_Infantry_Colombia_Rifleman: TWC_Infantry_Colombia_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	backpack = "UK3CB_BAF_B_Carryall_OLI";
	linkedItems[] =
	{
		"CUP_V_O_Ins_Carrier_Rig_Light",
		"CUP_H_US_patrol_cap_WDL",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_O_Ins_Carrier_Rig_Light",
		"CUP_H_US_patrol_cap_WDL",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
	};
	weapons[] =
	{
		"CUP_arifle_Galil_SAR_black",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_arifle_Galil_SAR_black",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67")
	};
	respawnMagazines[] =
	{
		MAG_13("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67")
	};
};

class TWC_Infantry_Colombia_Grenadier: TWC_Infantry_Colombia_Rifleman {
	displayName = "Grenadier";
	weapons[] =
	{
		"CUP_arifle_Galil_SAR_black",
		"TWC_CUP_glaunch_M79",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_arifle_Galil_SAR_black",
		"TWC_CUP_glaunch_M79",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_5("CUP_1Rnd_HE_M203")
	};
	respawnMagazines[] =
	{
		MAG_2("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_5("CUP_1Rnd_HE_M203")
	};
};

class TWC_Infantry_Colombia_MG: TWC_Infantry_Colombia_Rifleman {
	displayName = "Machine Gunner";
	linkedItems[] =
	{
		"CUP_V_O_Ins_Carrier_Rig_MG",
		"CUP_H_US_patrol_cap_WDL",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_O_Ins_Carrier_Rig_MG",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"CUP_lmg_M60",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_lmg_M60",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	respawnMagazines[] =
	{
		MAG_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};