//UK, 1950 Arctic
//Section
class TWC_Infantry_1950_Regular_Arctic_Rifleman: TWC_Infantry_1950_Base
{
	scope = 2;
	displayName = "Rifleman";
	CATEGORY(TWC_Infantry_Regular_Arctic)
	uniformClass="fow_u_uk_bd40_seac_01_private";

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
	
	linkedItems[] =
	{
		"V_LIB_UK_P37_Rifleman",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Rifleman",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
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
class TWC_Infantry_1950_Regular_Arctic_Signaller: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	scope = 2;
	displayName = "Signaller";
	backpack = "TWC_Backpack_1950_Signaller";
};
class TWC_Infantry_1950_Regular_Arctic_Marksman: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "Marksman";
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
};
class TWC_Infantry_1950_Regular_Arctic_Grenadier: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "Grenadier";
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
class TWC_Infantry_1950_Regular_Arctic_SMG: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "Submachine Gunner";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_Sten_Mk5",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk5",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("LIB_32Rnd_9x19_Sten"),
		MAG_2("LIB_MillsBomb"),
		"LIB_No82"
	};
	respawnmagazines[] =
	{
		MAG_8("LIB_32Rnd_9x19_Sten"),
		MAG_2("LIB_MillsBomb"),
		"LIB_No82"
	};
};
class TWC_Infantry_1950_Regular_Arctic_MG: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "Machine Gunner";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
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
class TWC_Infantry_1950_Regular_Arctic_MGASS: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "Assistant Machine Gunner";
	backpack = "TWC_Backpack_1950_MGASS";
};
class TWC_Infantry_1950_Regular_Arctic_SectionCommander: TWC_Infantry_1950_Regular_Arctic_SMG
{
	displayName = "Section Commander";
	uniformClass = "fow_u_uk_bd40_seac_01_corporal";
	backpack = "TWC_Backpack_1950_SectionCommander";
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
	weapons[] =
	{
		"LIB_Sten_Mk5",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk5",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_8("LIB_32Rnd_9x19_Sten"),
		MAG_2("SmokeShell")
	};
	nightItems[] = {
		MAG_2("Chemlight_green"),
		MAG_2("ACE_HandFlare_White"),
		MAG_6("TWC_Magazine_SignalFlare_Blue"),
		MAG_3("TWC_Magazine_SignalFlare_Red"),
		MAG_3("TWC_Magazine_SignalFlare_Green"),
		MAG_3("TWC_Magazine_SignalFlare_Yellow")
	};
};
class TWC_Infantry_1950_Regular_Arctic_2iC: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "2iC";
	uniformClass = "fow_u_uk_bd40_seac_01_lance_corporal";
	backpack = "TWC_Backpack_1950_2iC";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};

//Platoon Command
class TWC_Infantry_1950_Regular_Arctic_Platoon_Commander: TWC_Infantry_1950_Regular_Arctic_SectionCommander
{
	displayName = "Platoon Commander";
	uniformClass = "fow_u_uk_bd40_seac_01_lieutenant";
	backpack = "TWC_Backpack_1950_Platoon_Commander";
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
		"H_LIB_UK_Balmoral",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Balmoral",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_Sten_Mk5",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk5",
		"TWC_No1Mk3SignalGun",
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
	nightItems[] = {
		MAG_2("Chemlight_green"),
		MAG_2("ACE_HandFlare_White"),
		MAG_6("TWC_Magazine_SignalFlare_Blue"),
		MAG_3("TWC_Magazine_SignalFlare_Red"),
		MAG_3("TWC_Magazine_SignalFlare_Green"),
		MAG_3("TWC_Magazine_SignalFlare_Yellow"),
		"ACE_Flashlight_MX991"
	};
};
class TWC_Infantry_1950_Regular_Arctic_Platoon_Sergeant: TWC_Infantry_1950_Regular_Arctic_Platoon_Commander
{
	displayName = "Platoon Sergeant";
	uniformClass = "fow_u_uk_bd40_seac_01_sergeant";
	backpack = "TWC_Backpack_1950_Platoon_Sergeant";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"H_LIB_UK_Helmet_Mk3_w",
		"LIB_Headwrap",
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
		MAG_15("LIB_10Rnd_770x56"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_15("LIB_10Rnd_770x56"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_1950_Regular_Arctic_Platoon_Medic: TWC_Infantry_1950_Regular_Arctic_SMG
{
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_1950_Platoon_Medic";
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
class TWC_Infantry_1950_Regular_Arctic_Platoon_Mortar: TWC_Infantry_1950_Regular_Arctic_SMG
{
	displayName = "Platoon Mortar";
	backpack = "TWC_Backpack_1950_Platoon_Mortar";
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
		"LIB_Sten_Mk5",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk5",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_4("twc_2inch_he_1rnd")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten"),
		MAG_4("twc_2inch_he_1rnd")
	};
	nightItems[] = {
		MAG_6("twc_2inch_illum_1rnd")
	};
};
class TWC_Infantry_1950_Regular_Arctic_Platoon_CSM: TWC_Infantry_1950_Regular_Arctic_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
	scope = 1;
	attendant = 1;
	engineer = 1;
};

//Company
class TWC_Infantry_1950_Regular_Arctic_Company_Commander: TWC_Infantry_1950_Regular_Arctic_Platoon_Commander
{
	displayName = "Company Commander";
};
class TWC_Infantry_1950_Regular_Arctic_Company_2iC: TWC_Infantry_1950_Regular_Arctic_Platoon_Commander
{
	displayName = "Company 2iC";
};
class TWC_Infantry_1950_Regular_Arctic_Company_Sergeant: TWC_Infantry_1950_Regular_Arctic_Platoon_CSM
{
	scope = 2;
};

//AT
class TWC_Infantry_1950_Regular_Arctic_Bazooka_Gunner: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "Bazooka Gunner";
	weapons[] =
	{
		"LIB_Sten_Mk5",
		"LIB_M1A1_Bazooka",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_Sten_Mk5",
		"LIB_M1A1_Bazooka",
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
class TWC_Infantry_1950_Regular_Arctic_Bazooka_Ass: TWC_Infantry_1950_Regular_Arctic_Rifleman
{
	displayName = "Bazooka Assistant";
	backpack = "TWC_Backpack_WW2_UK_Late_PIAT_Ass";
};

//Sniper Team
class TWC_Infantry_1950_Regular_Arctic_Sniper: TWC_Infantry_1950_Regular_Arctic_Rifleman
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
class TWC_Infantry_1950_Regular_Arctic_Spotter: TWC_Infantry_1950_Regular_Arctic_Sniper
{
	displayName = "Spotter";
	backpack = "TWC_Backpack_1950_Spotter";
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
class TWC_Infantry_1950_Regular_Arctic_Artillery_Commander: TWC_Infantry_1950_Regular_Arctic_Platoon_Commander
{
	displayName = "Artillery Commander";
	backpack = "TWC_Backpack_1950_Artillery_Commander";
	uniformClass = "fow_u_uk_bd40_seac_01_corporal";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
};
class TWC_Infantry_1950_Regular_Arctic_Artillery_Crew: TWC_Infantry_1950_Regular_Arctic_Artillery_Commander
{
	displayName = "Artillery Crew";
	backpack = "fow_b_uk_bergenpack";
	uniformClass = "fow_u_uk_bd40_seac_01_private";
	TWC_isCommandRole = 0;
};
class TWC_Infantry_1950_Regular_Arctic_FO: TWC_Infantry_1950_Regular_Arctic_Artillery_Commander
{
	displayName = "Forward Observer";
	backpack = "TWC_Backpack_1950_FO";
	uniformClass = "fow_u_uk_bd40_seac_01_private";
	TWC_isCommandRole = 0;
};

//Aircraft
class TWC_Infantry_1950_Regular_Arctic_FAC: TWC_Infantry_1950_Regular_Arctic_FO
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_1950_FAC";
};

//FVs
class TWC_Infantry_1950_Regular_Arctic_Vehicle_Commander: TWC_Infantry_1950_Regular_Arctic_SMG
{
	displayName = "Vehicle Commander";
	uniformClass = "fow_u_uk_bd40_seac_01_corporal";
	TWC_isCommandRole = 1;
	engineer = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	linkedItems[] =
	{
		"V_LIB_UK_P37_Sten",
		"H_LIB_UK_Beret_Headset",
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
		MAG_5("LIB_32Rnd_9x19_Sten")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_32Rnd_9x19_Sten")
	};
};
class TWC_Infantry_1950_Regular_Arctic_Vehicle_Crew: TWC_Infantry_1950_Regular_Arctic_Vehicle_Commander
{
	displayName = "Vehicle Crew";
	uniformClass = "fow_u_uk_bd40_seac_02_private";
	TWC_isCommandRole = 0;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable ['twc_keepMap',false]";
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
};
