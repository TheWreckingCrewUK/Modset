
class TWC_Infantry_Chad_Base: B_Soldier_base_F {
	scope = 1;
	displayName = "Base";
	faction = "TWC_Chad";
	CATEGORY(TWC_Infantry_Regular_Woodland)
	icon = "iconMan";
	nakedUniform = "U_BasicBody";
	uniformClass = "CFP_U_BattleDressUniform_3ColorDesert";
	backpack = "";
	linkedItems[] = {
		"CUP_V_O_SLA_Carrier_Belt02",
		"CFP_Lungee_Shemagh",
        "CUP_G_ESS_CBR",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_O_SLA_Carrier_Belt02",
		"CFP_Lungee_Shemagh",
        "CUP_G_ESS_CBR",
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
		MAG_2("Chemlight_green")
	};
	nightLinkedItems[] = {};
};


//Section
class TWC_Infantry_Chad_Rifleman: TWC_Infantry_Chad_Base {
	scope = 2;
	displayName = "Rifleman";
	weapons[] = {
		"CUP_arifle_AKM",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKM",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		MAG_2("CUP_HandGrenade_RGO"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		MAG_2("CUP_HandGrenade_RGO"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Chad_Grenadier: TWC_Infantry_Chad_Base {
	scope = 2;
	displayName = "Grenadier";
	weapons[] = {
		"CUP_arifle_AKM_GL",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKM_GL",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		MAG_8("CUP_1Rnd_HE_GP25_M"),
		MAG_2("CUP_HandGrenade_RGO"),
		MAG_2("SmokeShell")
        
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		MAG_8("CUP_1Rnd_HE_GP25_M"),
		MAG_2("CUP_HandGrenade_RGO"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Chad_MG: TWC_Infantry_Chad_Base {
	displayName = "Machinegunner";
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
		MAG_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
		"CUP_HandGrenade_RGO",
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_3("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M"),
		"CUP_HandGrenade_RGO",
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Chad_ASSMG: TWC_Infantry_Chad_Rifleman {
	displayName = "Asisstant Machine Gunner";
	backpack = "TWC_Backpack_Chad_ASSMG";
};
class TWC_Infantry_Chad_AT: TWC_Infantry_Chad_Rifleman {
	displayName = "AT Rifleman";
	backpack = "TWC_Backpack_Chad_ASSAT";
	weapons[] = {
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		"CUP_PG7V_M",
		MAG_2("CUP_HandGrenade_RGO"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		"CUP_PG7V_M",
		MAG_2("CUP_HandGrenade_RGO"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Chad_ASSAT: TWC_Infantry_Chad_Rifleman {
	displayName = "Asisstant AT Rifleman";
	backpack = "TWC_Backpack_Chad_ASSAT";
};
class TWC_Infantry_Chad_2iC: TWC_Infantry_Chad_Rifleman {
	displayName = "2iC";
	TWC_isCommandRole = 1;
	backpack = "TWC_Backpack_Chad_2iC";
};
class TWC_Infantry_Chad_SectionCommander: TWC_Infantry_Chad_2iC {
	displayName = "Section Commander";
	backpack = "TWC_Backpack_Chad_2iC";
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
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_MX991"
	};
};

class TWC_Infantry_Chad_Medic: TWC_Infantry_Chad_Rifleman {
	displayName = "Medic";
	backpack = "TWC_Backpack_Chad_Medic";
};