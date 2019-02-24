//BASE
class TWC_Infantry_IDF_ColdWar_Base: B_Soldier_base_F {
	scope = 1;
	displayName = "Base";
	faction = "TWC_IDF_ColdWar";
	CATEGORY(TWC_Infantry_Regular_Woodland)
	icon = "iconMan";
	nakedUniform = "U_BasicBody";
	uniformClass = "TWC_Uniform_BDUv2_roll2_LightOlive";
	backpack = "";
	linkedItems[] = {
		"TWC_Vest_PASGT_LightOlive",
		"TWC_Helmet_RAC_LightOlive_FoliageArid",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"TWC_Vest_PASGT_LightOlive",
		"TWC_Helmet_RAC_LightOlive_FoliageArid",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	items[] = {
		CW_ITEMS
	};
	respawnItems[] = {
		CW_ITEMS
	};
	weapons[] = {
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"Throw",
		"Put"
	};
	magazines[] = {};
	respawnMagazines[] = {};
	nightItems[] = {
		"Chemlight_green",
		"Chemlight_green"
	};
	nightLinkedItems[] = {};
};
//Section
class TWC_Infantry_IDF_ColdWar_Rifleman: TWC_Infantry_IDF_ColdWar_Base {
	scope = 2;
	displayName = "Rifleman";
	weapons[] = {
		"CUP_arifle_Galil_556_black",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_Galil_556_black",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_ColdWar_Autorifleman: TWC_Infantry_IDF_ColdWar_Rifleman {
	displayName = "Autorifleman";
	weapons[] = {
		"CUP_arifle_Galil_556_black",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_Galil_556_black",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_5("CUP_50Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_50Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_5("CUP_50Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_50Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_ColdWar_AT: TWC_Infantry_IDF_ColdWar_Rifleman {
	displayName = "AT Rifleman";
	weapons[] = {
		"CUP_arifle_Galil_556_black",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_Galil_556_black",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_35Rnd_556x45_Galil_Mag"),
		"CUP_PG7V_M",
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_35Rnd_556x45_Galil_Mag"),
		"CUP_PG7V_M",
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_ColdWar_ASSAT: TWC_Infantry_IDF_ColdWar_Rifleman {
	displayName = "Asisstant AT Rifleman";
	backpack = "";
};
class TWC_Infantry_IDF_ColdWar_MG: TWC_Infantry_IDF_ColdWar_Rifleman {
	displayName = "Machine Gunner";
	weapons[] = {
		"CUP_lmg_FNMAG",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_lmg_FNMAG",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_2("150Rnd_762x51_Box"),
		"150Rnd_762x51_Box_Tracer"
	};
	respawnMagazines[] = {
		MAG_2("150Rnd_762x51_Box"),
		"150Rnd_762x51_Box_Tracer"
	};
};
class TWC_Infantry_IDF_ColdWar_ASSMG: TWC_Infantry_IDF_ColdWar_Rifleman {
	displayName = "Asisstant Machine Gunner";
	backpack = "";
};
class TWC_Infantry_IDF_ColdWar_2iC: TWC_Infantry_IDF_ColdWar_Rifleman {
	displayName = "2iC";
	TWC_isCommandRole = 1;
	backpack = "";
	magazines[] = {
		MAG_5("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_5("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_ColdWar_SectionCommander: TWC_Infantry_IDF_ColdWar_2iC {
	displayName = "Section Commander";
	backpack = "";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	items[] = {
		CW_ITEMS,
		"ACE_MapTools"
	};
	respawnItems[] = {
		CW_ITEMS,
		"ACE_MapTools"
	};
};