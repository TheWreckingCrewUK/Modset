//ODST, Infantry
//Team
class TWC_Infantry_ODST_Rifleman: TWC_Infantry_ODST_Base
{
	scope = 2;
	displayName = "Rifleman";
	backpack = "TWC_Backpack_ODST_Marksman";
	weapons[] =
	{
		"TWC_Weapon_MA5C",
		"TWC_Weapon_M6G"
		"OPTRE_Binoculars"
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_MA5C",
		"TWC_Weapon_M6G"
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_6("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_6("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ODST_ExplosiveSpec: TWC_Infantry_ODST_Base
{
	displayName = "Explosive Specialist";
	backpack = "TWC_Backpack_ODST_Spec";
	linkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Demolitions",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Demolitions",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[]=
	{
		"TWC_Weapon_BR55HB",
		"TWC_Weapon_M6G",
		"OPTRE_Binoculars",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_BR55HB",
		"TWC_Weapon_M6G",
		"OPTRE_Binoculars",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_6("OPTRE_36Rnd_95x40_Mag"),
		MAG_3("OPTRE_36Rnd_95x40_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_6("OPTRE_36Rnd_95x40_Mag"),
		MAG_3("OPTRE_36Rnd_95x40_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ODST_RiflemanAT: TWC_Infantry_ODST_Base
{
	displayName = "AT Specialist";
	backpack = "TWC_Backpack_ODST_AT";
	weapons[] =
	{
		"TWC_Weapon_MA5C",
		"OPTRE_M41_SSR"
		"TWC_Weapon_M6G"
		"OPTRE_Binoculars"
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_MA5C",
		"OPTRE_M41_SSR"
		"TWC_Weapon_M6G"
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_6("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_6("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ODST_Marksman: TWC_Infantry_ODST_Base
{
	displayName = "Designated Marksman";
	backpack = "TWC_Backpack_ODST_Marksman";
	linkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Marksman",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Marksman",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_M392",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder"
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_M392",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder"
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_6("OPTRE_15Rnd_762x51_Mag_Tracer"),
		MAG_3("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_6("OPTRE_15Rnd_762x51_Mag_Tracer"),
		MAG_3("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ODST_AutoRifleman: TWC_Infantry_ODST_Base
{
	displayName = "Auto-Rifleman";
	backpack = "TWC_Backpack_ODST_AutoRifleman";
	weapons[] =
	{
		"TWC_Weapon_M73",
		"TWC_Weapon_M6G"
		"OPTRE_Binoculars"
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_M73",
		"TWC_Weapon_M6G"
		"OPTRE_Binoculars"
		"Throw",
		"Put"
	};
	magazines[] =
	{
		"OPTRE_200Rnd_95x40_Box_Tracer",
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		"OPTRE_M9_Frag"
		"SmokeShell"
	};
	respawnmagazines[] =
	{
		"OPTRE_200Rnd_95x40_Box_Tracer",
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		"OPTRE_M9_Frag"
		"SmokeShell"
	};
};
class TWC_Infantry_ODST_TeamLeader: TWC_Infantry_ODST_Base
{
	displayName = "Team Leader";
	backpack = "TWC_Backpack_ODST_TeamLeader";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Rifleman",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Rifleman",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"ItemcTab",
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
		"TWC_Weapon_MA5CGL",
		"TWC_Weapon_M6G"
		"OPTRE_Smartfinder"
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_MA5CGL",
		"TWC_Weapon_M6G"
		"OPTRE_Smartfinder"
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_6("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_6("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};

//Squad
class TWC_Infantry_ODST_SquadCommander: TWC_Infantry_ODST_TeamLeader
{
	displayName = "Squad Commander";
};
class TWC_Infantry_ODST_Squad2ic: TWC_Infantry_ODST_TeamLeader
{
	displayName = "Squad 2IC";
	backpack = "TWC_Backpack_ODST_Marksman";
};
class TWC_Infantry_ODST_Corpsman: TWC_Infantry_ODST_Base
{
	displayName = "Squad Corpsman";
	backpack = "TWC_Backpack_ODST_Corpsman";
	attendant = 1;
	linkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Medic",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_UNSC_M52D_Armor_Medic",
		"OPTRE_UNSC_CH252D_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_M7S",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_M7S",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_6("OPTRE_60Rnd_5x23mm_Mag"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_6("OPTRE_60Rnd_5x23mm_Mag"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("SmokeShell")
	};
};

//Aircraft
class TWC_Infantry_ODST_FAC: TWC_Infantry_ODST_TeamLeader
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_ODST_FAC";
	TWC_isCommandRole = 0;
	magazines[] =
	{
		MAG_5("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("SmokeShell"),
		MAG_3(SmokeShellBlue),
		MAG_3(SmokeShellRed),
		MAG_3(SmokeShellGreen),
	};
	respawnmagazines[] =
	{
		MAG_5("OPTRE_32Rnd_762x51_Mag"),
		MAG_2("SmokeShell"),
		MAG_3(SmokeShellBlue),
		MAG_3(SmokeShellRed),
		MAG_3(SmokeShellGreen),
	};
};