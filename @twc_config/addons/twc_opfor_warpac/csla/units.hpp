class TWC_OPFOR_WARPAC_CSLA_Base: O_Soldier_base_F {
	author = "[TWC] Rik";
	scope = 1;
	displayName = "Soldier Base";
	faction = "TWC_OPFOR_Units_CSLA";
	vehicleClass = "EdSubcat_Personnel";
	nakedUniform = "U_BasicBody";
	uniformClass = "TWC_Uniform_NVA_Strichmuster";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	genericNames = "CUP_Names_CzechMen";
	backpack = "";
	identityTypes[] = {
		"CUP_D_Language_CZ_ACR",
		"Head_Enoch",
		"G_GUERIL_default"
	};
	hiddenSelectionsTextures[] = {
		"TWC_OPFOR_WARPAC\nva\data\nva_strichmuster_co.paa",
		"TWC_OPFOR_WARPAC\nva\data\nva_strichmuster2_co.paa"
	};
};

//Squad
class TWC_OPFOR_WARPAC_CSLA_Rifleman: TWC_OPFOR_WARPAC_CSLA_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	linkedItems[] = {
		"CUP_V_RUS_Smersh_1",
		"CUP_H_RUS_SSH68_green",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_RUS_Smersh_1",
		"CUP_H_RUS_SSH68_green",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] = {
		"CUP_arifle_Sa58P",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_Sa58P",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_Sa58_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_Sa58_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
	Items[] = {
		MAG_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_tourniquet"
	};
	respawnItems[] = {
		MAG_3("ACE_fieldDressing"),
		"ACE_morphine",
		"ACE_tourniquet"
	};
};
class TWC_OPFOR_WARPAC_CSLA_RPG: TWC_OPFOR_WARPAC_CSLA_Rifleman {
	displayName = "Rifleman (AT)";
	weapons[] = {
		"CUP_arifle_Sa58P",
		"CUP_launch_RPG18",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_Sa58P",
		"CUP_launch_RPG18",
		"Throw",
		"Put"
	};
};
class TWC_OPFOR_WARPAC_CSLA_MG: TWC_OPFOR_WARPAC_CSLA_Rifleman {
	displayName = "Machinegunner";
	backpack = "TWC_Backpack_WARPAC_CSLA_MG";
	weapons[] = {
		"CUP_lmg_UK59",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_lmg_UK59",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_4("CUP_50Rnd_UK59_762x54R_Tracer")
	};
	respawnMagazines[] = {
		MAG_4("CUP_50Rnd_UK59_762x54R_Tracer")
	};
};
class TWC_OPFOR_WARPAC_CSLA_ASSMG: TWC_OPFOR_WARPAC_CSLA_Rifleman {
	displayName = "Assistant Machinegunner";
	backpack = "TWC_Backpack_WARPAC_CSLA_MG";
};
class TWC_OPFOR_WARPAC_CSLA_SC: TWC_OPFOR_WARPAC_CSLA_Rifleman {
	displayName = "Squad Commander";
	backpack = "TWC_Backpack_WARPAC_CSLA_SC";
};
class TWC_OPFOR_WARPAC_CSLA_ASC: TWC_OPFOR_WARPAC_CSLA_Rifleman {
	displayName = "Assistant Squad Commander";
	backpack = "TWC_Backpack_WARPAC_CSLA_ASC";
};

class TWC_OPFOR_WARPAC_CSLA_Crewman: TWC_OPFOR_WARPAC_CSLA_Rifleman {
	displayName = "Crewman";
	uniformClass = "CUP_U_O_SLA_Overalls_Tank";
	linkedItems[] = {
		"CUP_V_O_TK_OfficerBelt",
		"CUP_H_SLA_TankerHelmet",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_O_TK_OfficerBelt",
		"CUP_H_SLA_TankerHelmet",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] = {
		"CUP_smg_SA61",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_smg_SA61",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_3("CUP_20Rnd_B_765x17_Ball_M")
	};
	respawnMagazines[] = {
		MAG_3("CUP_20Rnd_B_765x17_Ball_M")
	};
};

//Support
class TWC_OPFOR_WARPAC_CSLA_AA: TWC_OPFOR_WARPAC_CSLA_Rifleman {
	displayName = "AA Gunner";
	weapons[] = {
		"CUP_arifle_AKMS_Early",
		"CUP_launch_9K32Strela",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKMS_Early",
		"CUP_launch_9K32Strela",
		"Throw",
		"Put"
	};
};