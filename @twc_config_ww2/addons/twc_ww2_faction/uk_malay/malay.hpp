//UK, Malay Conflict, Tropic
//Section
class TWC_Infantry_ColdWar_Malay_Rifleman: TWC_Infantry_WW2_Base
{
	scope = 2;
	displayName = "Rifleman";
	uniformClass="fow_u_uk_bd40_seac_02_private";

	linkedItems[] =
	{
		"fow_v_us_ab_carbine",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"fow_v_us_ab_carbine",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1_Carbine",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_M1_Carbine",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("LIB_15Rnd_762x33"),
		MAG_5("LIB_15Rnd_762x33_t"),
		MAG_2("LIB_MillsBomb"),
		"LIB_No82"
	};
	respawnmagazines[] =
	{
		MAG_8("LIB_15Rnd_762x33"),
		MAG_5("LIB_15Rnd_762x33_t"),
		MAG_2("LIB_MillsBomb"),
		"LIB_No82"
	};
};
class TWC_Infantry_ColdWar_Malay_Grenadier: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Grenadier";
	magazines[] =
	{
		MAG_8("LIB_15Rnd_762x33"),
		MAG_5("LIB_15Rnd_762x33_t"),
		MAG_2("LIB_MillsBomb"),
		MAG_2("ACE_M14"),
		"LIB_No82"
	};
	respawnmagazines[] =
	{
		MAG_8("LIB_15Rnd_762x33"),
		MAG_5("LIB_15Rnd_762x33_t"),
		MAG_2("LIB_MillsBomb"),
		MAG_2("ACE_M14"),
		"LIB_No82"
	};
};
class TWC_Infantry_ColdWar_Malay_SMG: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Submachine Gunner";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1928_Thompson",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_M1928_Thompson",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
		MAG_2("LIB_MillsBomb")
		"LIB_No82"
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
		MAG_2("LIB_MillsBomb")
		"LIB_No82"
	};
};
class TWC_Infantry_ColdWar_Malay_MG: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Machine Gunner";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_Bren_Mk2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Bren_Mk2",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("LIB_30Rnd_770x56")
	};
	respawnmagazines[] =
	{
		MAG_7("LIB_30Rnd_770x56")
	};
};
class TWC_Infantry_ColdWar_Malay_MGASS: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Assistant Machine Gunner";
	backpack = "TWC_Backpack_ColdWar_Malay_MGASS";
};
class TWC_Infantry_ColdWar_Malay_SectionCommander: TWC_Infantry_ColdWar_Malay_SMG
{
	displayName = "Section Commander";
	uniformClass = "fow_u_uk_bd40_seac_02_corporal";
	backpack = "TWC_Backpack_ColdWar_Malay_SectionCommander";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
	init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"fow_i_whistle"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"fow_i_whistle"
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1928_Thompson",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_M1928_Thompson",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
	nightItems[] = {
		MAG_2("Chemlight_green"),
		MAG_2("ACE_HandFlare_White")
	};
};
class TWC_Infantry_ColdWar_Malay_2iC: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "2iC";
	uniformClass = "fow_u_uk_bd40_seac_02_lance_corporal";
	backpack = "TWC_Backpack_ColdWar_Malay_2iC";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};

//Platoon Command
class TWC_Infantry_ColdWar_Malay_Platoon_Commander: TWC_Infantry_ColdWar_Malay_SectionCommander
{
	displayName = "Platoon Commander";
	uniformClass = "fow_u_uk_bd40_seac_02_lieutenant";
	backpack = "TWC_Backpack_ColdWar_Malay_Platoon_Commander";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"fow_i_whistle",
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"fow_i_whistle",
		"ACE_MapTools"
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"fow_h_uk_jungle_hat_02",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"fow_h_uk_jungle_hat_02",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1928_Thompson",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_M1928_Thompson",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_50Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_50Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	nightItems[] = {
		MAG_2("Chemlight_green"),
		MAG_2("ACE_HandFlare_White"),
		"ACE_Flashlight_MX991"
	};
};
class TWC_Infantry_ColdWar_Malay_Platoon_Sergeant: TWC_Infantry_ColdWar_Malay_Platoon_Commander
{
	displayName = "Platoon Sergeant";
	uniformClass = "fow_u_uk_bd40_seac_02_sergeant";
	backpack = "TWC_Backpack_ColdWar_Malay_Platoon_Sergeant";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_02",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_02",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1_Carbine",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_M1_Carbine",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("LIB_15Rnd_762x33"),
		MAG_5("LIB_15Rnd_762x33_t"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_8("LIB_15Rnd_762x33"),
		MAG_5("LIB_15Rnd_762x33_t"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_ColdWar_Malay_Platoon_Medic: TWC_Infantry_ColdWar_Malay_SMG
{
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_ColdWar_Malay_Platoon_Medic";
	attendant = 1;
	magazines[] =
	{
		MAG_3("LIB_50Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_50Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ColdWar_Malay_Platoon_Mortar: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Platoon Mortar";
	backpack = "TWC_Backpack_ColdWar_Malay_Platoon_Mortar";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_02",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_02",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	weapons[] =
	{
		"LIB_M1928_Thompson",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_M1928_Thompson",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
		MAG_4("twc_2inch_he_1rnd")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
		MAG_4("twc_2inch_he_1rnd")
	};
	nightItems[] = {
		MAG_6("twc_2inch_illum_1rnd")
	};
};
class TWC_Infantry_ColdWar_Malay_Platoon_CSM: TWC_Infantry_ColdWar_Malay_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
	scope = 1;
	attendant = 1;
	engineer = 1;
};

//Company
class TWC_Infantry_ColdWar_Malay_Company_Commander: TWC_Infantry_ColdWar_Malay_Platoon_Commander
{
	displayName = "Company Commander";
};
class TWC_Infantry_ColdWar_Malay_Company_2iC: TWC_Infantry_ColdWar_Malay_Platoon_Commander
{
	displayName = "Company 2iC";
};
class TWC_Infantry_ColdWar_Malay_Company_Sergeant: TWC_Infantry_ColdWar_Malay_Platoon_CSM
{
	scope = 2;
};

//AT
class TWC_Infantry_ColdWar_Malay_Bazooka_Gunner: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Bazooka Gunner";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_03",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1928_Thompson",
		"LIB_M1A1_Bazooka",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_M1928_Thompson",
		"LIB_M1A1_Bazooka",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
	};
};
class TWC_Infantry_ColdWar_Malay_Bazooka_Ass: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Bazooka Assistant";
	backpack = "TWC_Backpack_WW2_UK_Late_PIAT_Ass";
};

//Sniper Team
class TWC_Infantry_ColdWar_Malay_Sniper: TWC_Infantry_ColdWar_Malay_Rifleman
{
	displayName = "Sniper";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Officer_Blanco",
		"cwr3_b_uk_headgear_mk5_helmet_camo",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Officer_Blanco",
		"cwr3_b_uk_headgear_mk5_helmet_camo",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No4_Scoped",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4_Scoped",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_10Rnd_770x56")
	};
	respawnmagazines[] =
	{
		MAG_13("LIB_10Rnd_770x56")
	};
};
class TWC_Infantry_ColdWar_Malay_Spotter: TWC_Infantry_ColdWar_Malay_Sniper
{
	displayName = "Spotter";
	backpack = "TWC_Backpack_WW2_UK_Late_Spotter";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No4_Scoped",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4_Scoped",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
};

//Artillery
class TWC_Infantry_ColdWar_Malay_Artillery_Commander: TWC_Infantry_ColdWar_Malay_Platoon_Commander
{
	displayName = "Artillery Commander";
	backpack = "TWC_Backpack_ColdWar_Malay_Artillery_Commander";
	uniformClass = "fow_u_uk_bd40_seac_02_corporal";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
};
class TWC_Infantry_ColdWar_Malay_Artillery_Crew: TWC_Infantry_ColdWar_Malay_Artillery_Commander
{
	displayName = "Artillery Crew";
	backpack = "fow_b_uk_bergenpack";
	uniformClass = "fow_u_uk_bd40_seac_02_private";
	TWC_isCommandRole = 0;
};
class TWC_Infantry_ColdWar_Malay_Woodland_FO: TWC_Infantry_ColdWar_Malay_Artillery_Commander
{
	displayName = "Forward Observer";
	backpack = "TWC_Backpack_ColdWar_Malay_FO";
	uniformClass = "fow_u_uk_bd40_seac_02_private";
	TWC_isCommandRole = 0;
};

//Aircraft
class TWC_Infantry_ColdWar_Malay_FAC: TWC_Infantry_ColdWar_Malay_FO
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_ColdWar_Malay_FAC";
};

//FVs
class TWC_Infantry_ColdWar_Malay_Vehicle_Commander: TWC_Infantry_ColdWar_Malay_SMG
{
	displayName = "Vehicle Commander";
	uniformClass = "fow_u_uk_bd40_seac_02_corporal";
	TWC_isCommandRole = 1;
	engineer = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Beret",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Beret",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_ColdWar_Malay_Vehicle_Crew: TWC_Infantry_ColdWar_Malay_Vehicle_Commander
{
	displayName = "Vehicle Crew";
	uniformClass = "fow_u_uk_bd40_seac_02_private";
	TWC_isCommandRole = 0;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable ['twc_keepMap',false]";
		};
};