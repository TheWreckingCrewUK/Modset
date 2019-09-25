class TWC_OPFOR_WARPAC_LWP_Base: O_Soldier_base_F {
	author = "[TWC] Rik";
	scope = 1;
	displayName = "Soldier Base";
	faction = "TWC_OPFOR_Units_LWP";
	vehicleClass = "EdSubcat_Personnel";
	nakedUniform = "U_BasicBody";
	uniformClass = "TWC_Uniform_LWP_Moro";
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	genericNames = "CUP_Names_GermanMen";
	backpack = "";
	identityTypes[] = {
		"LanguagePOL_F",
		"Head_Enoch",
		"G_GUERIL_default"
	};
	hiddenSelectionsTextures[] = {
		"TWC_OPFOR_WARPAC\lwp\data\lwp_moro_co.paa",
		"TWC_OPFOR_WARPAC\lwp\data\lwp_moro2_co.paa"
	};
};

//Squad
class TWC_OPFOR_WARPAC_LWP_Rifleman: TWC_OPFOR_WARPAC_LWP_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	linkedItems[] = {
		"CUP_V_RUS_Smersh_1",
		"CUP_H_TK_Helmet",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_RUS_Smersh_1",
		"CUP_H_TK_Helmet",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] = {
		"CUP_arifle_AKM_Early",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKM_Early",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
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
class TWC_OPFOR_WARPAC_LWP_RPG: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "AT Rifleman";
	backpack = "TWC_Backpack_WARPAC_LWP_RPG";
	weapons[] = {
		"CUP_arifle_AKMS_Early",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKMS_Early",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		"CUP_PG7V_M"
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		"CUP_PG7V_M"
	};
};
class TWC_OPFOR_WARPAC_LWP_ASSRPG: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "Assistant AT Rifleman";
	backpack = "TWC_Backpack_WARPAC_LWP_RPG";
};
class TWC_OPFOR_WARPAC_LWP_MG: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "Machinegunner";
	backpack = "TWC_Backpack_WARPAC_LWP_MG";
	weapons[] = {
		"CUP_lmg_PKM",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_lmg_PKM",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
	respawnMagazines[] = {
		MAG_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M")
	};
};
class TWC_OPFOR_WARPAC_LWP_ASSMG: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "Assistant Machinegunner";
	backpack = "TWC_Backpack_WARPAC_LWP_MG";
	weapons[] = {
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
};
class TWC_OPFOR_WARPAC_LWP_SC: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "Squad Commander";
	backpack = "TWC_Backpack_WARPAC_LWP_SC";
};
class TWC_OPFOR_WARPAC_LWP_ASC: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "Assistant Squad Commander";
	backpack = "TWC_Backpack_WARPAC_LWP_ASC";
	weapons[] = {
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
};

class TWC_OPFOR_WARPAC_LWP_Crewman: TWC_OPFOR_WARPAC_LWP_Rifleman {
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
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_3("CUP_30Rnd_762x39_AK47_M")
	};
	respawnMagazines[] = {
		MAG_3("CUP_30Rnd_762x39_AK47_M")
	};
};

//Support
class TWC_OPFOR_WARPAC_LWP_AA: TWC_OPFOR_WARPAC_LWP_Rifleman {
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
class TWC_OPFOR_WARPAC_LWP_AT: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "AT Specialist";
	backpack = "TWC_Backpack_WARPAC_LWP_AT";
	weapons[] = {
		"CUP_arifle_AKMS_Early",
		"CUP_launch_Metis",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKMS_Early",
		"CUP_launch_Metis",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_5("CUP_30Rnd_762x39_AK47_M"),
		"CUP_AT13_M"
	};
	respawnMagazines[] = {
		MAG_5("CUP_30Rnd_762x39_AK47_M"),
		"CUP_AT13_M"
	};
};
class TWC_OPFOR_WARPAC_LWP_ASSAT: TWC_OPFOR_WARPAC_LWP_Rifleman {
	displayName = "AT Assistant";
	backpack = "TWC_Backpack_WARPAC_LWP_AT";
	weapons[] = {
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKMS_Early",
		"Throw",
		"Put"
	};
};