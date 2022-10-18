//BASE
class TWC_Infantry_IDF_Millenial_Base: B_Soldier_base_F {
	scope = 1;
	displayName = "Base";
	faction = "TWC_IDF_Millenial";
	CATEGORY(TWC_Infantry_Regular_Woodland)
	icon = "iconMan";
	nakedUniform = "U_BasicBody";
	uniformClass = "TWC_Uniform_BDUv2_LightOlive";
	backpack = "";
	linkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_IDF_M76_BD",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_IDF_M76_BD",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	items[] = {
		MEDICAL_LOADOUT
	};
	respawnItems[] = {
		MEDICAL_LOADOUT
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
		MAG_2("Chemlight_green")
	};
	nightLinkedItems[] = {};
};

//Section
class TWC_Infantry_IDF_Millenial_Rifleman: TWC_Infantry_IDF_Millenial_Base {
	scope = 2;
	displayName = "Rifleman";
	weapons[] = {
		"CUP_arifle_M4A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M4A1",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_Millenial_Rifleman_AT: TWC_Infantry_IDF_Millenial_Rifleman {
	scope = 2;
	displayName = "Rifleman (AT)";
	weapons[] = {
		"CUP_arifle_M4A1",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M4A1",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
};
class TWC_Backpack_IDF_Millenial_Grenadier:  TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "Grenadier";
	weapons[] = {
		"CUP_arifle_M16A2_GL",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M16A2_GL",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_6("CUP_30Rnd_556x45_Stanag"),
		MAG_8("1Rnd_HE_Grenade_shell"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_6("CUP_30Rnd_556x45_Stanag"),
		MAG_8("1Rnd_HE_Grenade_shell"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};
	
class TWC_Infantry_IDF_Millenial_Autorifleman: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "Autorifleman";
	backpack = "TWC_Backpack_IDF_Millenial_SAW";
	weapons[] = {
		"CFP_Negev_Black",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CFP_Negev_Black",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_2("ACE_150Rnd_762x54_Box_red"),
		MAG_2("SmokeShell"),
		"CUP_HandGrenade_M67"
	};
	respawnMagazines[] = {
		MAG_2("ACE_150Rnd_762x54_Box_red"),
		MAG_2("SmokeShell"),
		"CUP_HandGrenade_M67"
	};
};
class TWC_Infantry_IDF_Millenial_ASSSAW: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "Asisstant Autorifleman";
	backpack = "TWC_Backpack_IDF_Millenial_SAW";
};
class TWC_Infantry_IDF_Millenial_AT: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "AT Rifleman";
	backpack = "TWC_Backpack_IDF_Millenial_ASSAT";
	weapons[] = {
		"CUP_arifle_M4A1",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M4A1",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		"CUP_PG7V_M",
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		"CUP_PG7V_M",
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_Millenial_ASSAT: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "Asisstant AT Rifleman";
	backpack = "TWC_Backpack_IDF_Millenial_ASSAT";
};
class TWC_Infantry_IDF_Millenial_MG: TWC_Infantry_IDF_Millenial_Rifleman {
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
class TWC_Infantry_IDF_Millenial_ASSMG: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "Asisstant Machine Gunner";
	backpack = "TWC_Backpack_IDF_Millenial_ASSMG";
};
class TWC_Infantry_IDF_Millenial_2iC: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "2iC";
	TWC_isCommandRole = 1;
	backpack = "TWC_Backpack_IDF_Millenial_2iC";
	linkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm1_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm1_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] = {
		"CUP_arifle_M4A1",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M4A1",
		"Binocular",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_5("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_5("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green")
	};
};
class TWC_Infantry_IDF_Millenial_SectionCommander: TWC_Infantry_IDF_Millenial_2iC {
	displayName = "Section Commander";
	backpack = "TWC_Backpack_IDF_Millenial_SectionCommander";
	linkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm3_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm3_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	items[] = {
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	respawnItems[] = {
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_MX991"
	};
};

//Platoon
class TWC_Infantry_IDF_Millenial_Platoon_Commander: TWC_Infantry_IDF_Millenial_SectionCommander {
	displayName = "Platoon Commander";
	backpack = "TWC_Backpack_IDF_Millenial_Platoon_Commander";
	linkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm2_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm2_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	magazines[] = {
		MAG_3("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_3("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_Millenial_Platoon_Sergeant: TWC_Infantry_IDF_Millenial_Platoon_Commander {
	displayName = "Platoon Sergeant";
	backpack = "TWC_Backpack_IDF_Millenial_Platoon_Sergeant";
	linkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm4_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm4_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_IDF_Millenial_Platoon_Medic: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_IDF_Millenial_Platoon_Medic";
	attendant = 1;
	linkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm3_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_IDF_Vest",
		"CFP_MitzHelm3_Wdl",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};

//FV
class TWC_Infantry_IDF_Millenial_Vehicle_Crew: TWC_Infantry_IDF_Millenial_Rifleman {
	displayName = "Vehicle Crew";
	linkedItems[] = {
		"CUP_V_CDF_OfficerBelt2",
		"CFP_IDF_M76",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_CDF_OfficerBelt2",
		"CFP_IDF_M76",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] = {
		"CUP_arifle_M4A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M4A1",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_3("CUP_30Rnd_556x45_Stanag"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_3("CUP_30Rnd_556x45_Stanag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_IDF_Millenial_Vehicle_Commander: TWC_Infantry_IDF_Millenial_Vehicle_Crew {
	displayName = "Vehicle Commander";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	weapons[] = {
		"CUP_arifle_M4A1",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M4A1",
		"Binocular",
		"Throw",
		"Put"
	};
};