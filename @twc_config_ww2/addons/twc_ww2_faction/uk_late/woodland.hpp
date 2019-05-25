//UK, LATE, WOODLAND
//Section
class TWC_Infantry_WW2_UK_Late_Woodland_Rifleman: TWC_Infantry_WW2_Base
{
	scope = 2;
	displayName = "Rifleman";
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_No4_Mk2_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_No4_Mk2_Bayo"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No4",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		"LIB_MillsBomb",
		"LIB_No82"
	};
	respawnmagazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		"LIB_MillsBomb",
		"LIB_No82"
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Grenadier: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "Grenadier";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No4_CUP",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4_CUP",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		MAG_8("LIB_1Rnd_G_MillsBomb")
	};
	respawnmagazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		MAG_8("LIB_1Rnd_G_MillsBomb")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_SMG: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "Submachine Gunner";
	Items[] =
	{
		MEDICAL_LOADOUT
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("LIB_32Rnd_9x19_Sten"),
		MAG_3("LIB_MillsBomb")
	};
	respawnmagazines[] =
	{
		MAG_7("LIB_32Rnd_9x19_Sten"),
		MAG_3("LIB_MillsBomb")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_MG: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "Machine Gunner";
	Items[] =
	{
		MEDICAL_LOADOUT
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
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
class TWC_Infantry_WW2_UK_Late_Woodland_MGASS: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "Assistant Machine Gunner";
	backpack = "TWC_Backpack_WW2_UK_Late_MGASS";
	magazines[] =
	{
		MAG_13("LIB_10Rnd_770x56")
	};
	respawnmagazines[] =
	{
		MAG_13("LIB_10Rnd_770x56")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_SectionCommander: TWC_Infantry_WW2_UK_Late_Woodland_SMG
{
	displayName = "Section Commander";
	uniformClass = "U_LIB_UK_P37_Corporal";
	backpack = "TWC_Backpack_WW2_UK_Late_SectionCommander";
	TWC_isCommandRole = 1;
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
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell")
	};
	nightItems[] = {
		MAG_2("ACE_HandFlare_White")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_2iC: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "2iC";
	uniformClass = "U_LIB_UK_P37_LanceCorporal";
	backpack = "TWC_Backpack_WW2_UK_Late_2iC";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};

//Platoon Command
class TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Commander: TWC_Infantry_WW2_UK_Late_Woodland_SectionCommander
{
	displayName = "Platoon Commander";
	uniformClass = "U_LIB_UK_P37";
	backpack = "TWC_Backpack_WW2_UK_Late_Platoon_Commander";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Sergeant: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Commander
{
	displayName = "Platoon Sergeant";
	uniformClass = "U_LIB_UK_P37_Sergeant";
	backpack = "TWC_Backpack_WW2_UK_Late_Platoon_Sergeant";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No4",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_13("LIB_10Rnd_770x56"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Medic: TWC_Infantry_WW2_UK_Late_Woodland_SMG
{
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_WW2_UK_Late_Platoon_Medic";
	attendant = 1;
	magazines[] =
	{
		MAG_3("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Runner: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "Platoon Runner";
	magazines[] =
	{
		MAG_7("LIB_10Rnd_770x56")
	};
	respawnmagazines[] =
	{
		MAG_7("LIB_10Rnd_770x56")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Mortar: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "Platoon Mortar";
	backpack = "TWC_Backpack_WW2_UK_Late_Platoon_Mortar";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No4",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No4",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("LIB_10Rnd_770x56"),
		MAG_4("twc_2inch_he_1rnd")
	};
	respawnmagazines[] =
	{
		MAG_7("LIB_10Rnd_770x56"),
		MAG_4("twc_2inch_he_1rnd")
	};
	nightItems[] = {
		MAG_8("twc_2inch_illum_1rnd")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Platoon_CSM: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
};

//AT
class TWC_Infantry_WW2_UK_Late_Woodland_PIAT_Gunner: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "PIAT Gunner";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk2",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
	};
	weapons[] =
	{
		"LIB_PIAT_Rifle",
		"LIB_Webley_mk6",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_PIAT_Rifle",
		"LIB_Webley_mk6",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_6Rnd_455"),
		MAG_3("LIB_1Rnd_89m_G_PIAT")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_6Rnd_455"),
		MAG_3("LIB_1Rnd_89m_G_PIAT")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_PIAT_Ass: TWC_Infantry_WW2_UK_Late_Woodland_SMG
{
	displayName = "PIAT Assistant";
	backpack = "TWC_Backpack_WW2_UK_Late_PIAT_Ass";
	magazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_2("LIB_1Rnd_89m_G_PIAT")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_2("LIB_1Rnd_89m_G_PIAT")
	};
};

//Sniper Team
class TWC_Infantry_WW2_UK_Late_Woodland_Sniper: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	displayName = "Sniper";
	Items[] =
	{
		MEDICAL_LOADOUT
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
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
class TWC_Infantry_WW2_UK_Late_Woodland_Spotter: TWC_Infantry_WW2_UK_Late_Woodland_Sniper
{
	displayName = "Spotter";
	backpack = "TWC_Backpack_WW2_UK_Late_Spotter";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
};

//Artillery
class TWC_Infantry_WW2_UK_Late_Woodland_Artillery_Commander: TWC_Infantry_WW2_UK_Late_Woodland_SMG
{
	displayName = "Artillery Commander";
	backpack = "TWC_Backpack_WW2_UK_Late_Artillery_Commander";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
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
		"LIB_Sten_Mk2",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Artillery_Crew: TWC_Infantry_WW2_UK_Late_Woodland_Artillery_Commander
{
	displayName = "Artillery Crew";
	backpack = "fow_b_uk_bergenpack";
	TWC_isCommandRole = 0;
};
class TWC_Infantry_WW2_UK_Late_Woodland_FO: TWC_Infantry_WW2_UK_Late_Woodland_Artillery_Commander
{
	displayName = "Forward Observer";
	backpack = "TWC_Backpack_WW2_UK_Late_FO";
	TWC_isCommandRole = 0;
	magazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_4("SmokeShellBlue"),
		MAG_4("SmokeShellRed"),
		MAG_4("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_4("SmokeShellBlue"),
		MAG_4("SmokeShellRed"),
		MAG_4("SmokeShellGreen")
	};
};

//Aircraft
class TWC_Infantry_WW2_UK_Late_Woodland_FAC: TWC_Infantry_WW2_UK_Late_Woodland_FO
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_WW2_UK_Late_FAC";
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
};

//FVs
class TWC_Infantry_WW2_UK_Late_Woodland_Vehicle_Commander: TWC_Infantry_WW2_UK_Late_Woodland_SMG
{
	displayName = "Vehicle Commander";
	TWC_isCommandRole = 1;
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
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_32Rnd_9x19_Sten")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_32Rnd_9x19_Sten")
	};
};
class TWC_Infantry_WW2_UK_Late_Woodland_Vehicle_Crew: TWC_Infantry_WW2_UK_Late_Woodland_Vehicle_Commander
{
	displayName = "Vehicle Crew";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"LIB_Sten_Mk2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk2",
		"Throw",
		"Put"
	};
};