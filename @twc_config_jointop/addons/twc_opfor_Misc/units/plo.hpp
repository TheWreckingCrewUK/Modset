class CUP_O_SLA_Soldier_03;
class TWC_OPFOR_PLO_Uniform: CUP_O_SLA_Soldier_03 {
	uniformClass = "TWC_Uniform_M88_Salamander";
	hiddenSelectionsTextures[] = {"\twc_opfor_misc\data\plo_salamander_co.paa"};
};

class TWC_OPFOR_PLO_Base: O_Soldier_base_F {
	author = "[TWC] Rik";
	scope = 1;
	displayName = "Soldier Base";
	faction = "TWC_OPFOR_Units_PLO";
	vehicleClass = "EdSubcat_Personnel";
	nakedUniform = "U_BasicBody";
	uniformClass = "TWC_Uniform_M88_Salamander";
	genericNames = "TakistaniMen";
	backpack = "";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
	headgearList[] = {
		"", 1,
		"CUP_H_TKI_Lungee_01", 1,
		"CUP_H_TKI_Lungee_02", 1,
		"CUP_H_TKI_Lungee_03", 1,
		"CUP_H_TKI_Lungee_04", 1,
		"CUP_H_TKI_Lungee_05", 1,
		"CUP_H_TKI_Lungee_06", 1,
		"CUP_H_TKI_Lungee_Open_01", 1,
		"CUP_H_TKI_Lungee_Open_02", 1,
		"CUP_H_TKI_Lungee_Open_03", 1,
		"CUP_H_TKI_Lungee_Open_04", 1,
		"CUP_H_TKI_Lungee_Open_05", 1,
		"CUP_H_TKI_Lungee_Open_06", 1,
		"CUP_H_SLA_Helmet", 4,
		"CUP_H_SLA_BeretRed", 3,
		"CUP_H_SLA_BeanieGreen", 2,
		"CUP_H_PMC_Beanie_Black", 2,
		"CUP_H_PMC_Beanie_Khaki", 2
	};
	identityTypes[] = {
		"CUP_D_Language_TK",
		"Head_TK",
		"CUP_G_TK"
	};
	linkedItems[] = {
		"CUP_V_O_SLA_Carrier_Belt02",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] = {
		"CUP_V_O_SLA_Carrier_Belt02",
		"ItemCompass",
		"ItemWatch"
	};
	items[] = {
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
class TWC_OPFOR_PLO_Rifleman_AK47: TWC_OPFOR_PLO_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (AK-47)";
	weapons[] = {
		"CUP_arifle_AK47_Early",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AK47_Early",
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
};
class TWC_OPFOR_PLO_Rifleman_AKM: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "Rifleman (AKM)";
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
};
class TWC_OPFOR_PLO_Rifleman_M16: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "Rifleman (M16)";
	weapons[] = {
		"CUP_arifle_M16A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_M16A1",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
};
class TWC_OPFOR_PLO_Rifleman_AKS: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "Rifleman (AKS)";
	weapons[] = {
		"CUP_arifle_AKS",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKS",
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
};
class TWC_OPFOR_PLO_Rifleman_Type56: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "Rifleman (Type 56)";
	weapons[] = {
		"CUP_arifle_Type_56_2_Early",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_Type_56_2_Early",
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
};
class TWC_OPFOR_PLO_Machinegunner: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "Machinegunner";
	backpack = "CUP_B_TKI_AlicePack_MG";
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
		MAG_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"),
		MAG_2("SmokeShell")
	};
};
class TWC_OPFOR_PLO_Autorifleman: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "Autorifleman";
	weapons[] = {
		"CUP_arifle_RPK74",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_RPK74",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_5("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_5("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
};
class TWC_OPFOR_PLO_Marksman: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "Marksman";
	weapons[] = {
		"CUP_srifle_SVD_pso",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_srifle_SVD_pso",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_10Rnd_762x54_SVD_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] = {
		MAG_7("CUP_10Rnd_762x54_SVD_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell")
	};
};
class TWC_OPFOR_PLO_AT: TWC_OPFOR_PLO_Rifleman_AK47 {
	displayName = "AT Rifleman";
	backpack = "CUP_B_TK_RPG_Backpack";
	weapons[] = {
		"CUP_arifle_AKS",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"CUP_arifle_AKS",
		"CUP_launch_RPG7V",
		"Throw",
		"Put"
	};
	magazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell"),
		"CUP_PG7V_M"
	};
	respawnMagazines[] = {
		MAG_7("CUP_30Rnd_762x39_AK47_M"),
		MAG_2("CUP_HandGrenade_RGD5"),
		MAG_2("SmokeShell"),
		"CUP_PG7V_M"
	};
};