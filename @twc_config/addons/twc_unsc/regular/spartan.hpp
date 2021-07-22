//Spartan, Infantry
//Team
class TWC_Infantry_Spartan_RiflemanAT: TWC_Infantry_Spartan_Base
{
	displayName = "Spartan AT Specialist";
	backpack = "TWC_Backpack_Spartan_AT";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_EVAHelmet_Emily",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_EVAHelmet_Emily",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
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
		MAG_13("OPTRE_32Rnd_762x51_Mag"),
		MAG_8("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_4("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_13("OPTRE_32Rnd_762x51_Mag"),
		MAG_8("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_4("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Spartan_Sniper: TWC_Infantry_Spartan_Base
{
	displayName = "Spartan Sniper";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_Mk4Armor",
		"OPTRE_MJOLNIR_ReconHelmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_Mk4Armor",
		"OPTRE_MJOLNIR_ReconHelmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_SRS99D",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder"
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_SRS99D",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder"
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("OPTRE_4Rnd_145x114_APFSDS_Mag"),
		MAG_5("OPTRE_4Rnd_145x114_HEDP_Mag"),
		MAG_6("OPTRE_4Rnd_145x114_HVAP_Mag"),
		MAG_3("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("OPTRE_4Rnd_145x114_APFSDS_Mag"),
		MAG_5("OPTRE_4Rnd_145x114_HEDP_Mag"),
		MAG_6("OPTRE_4Rnd_145x114_HVAP_Mag"),
		MAG_3("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Spartan_AutoRifleman: TWC_Infantry_Spartan_Base
{
	displayName = "Spartan Auto-Rifleman";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_MkVBHelmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_EVAHelmet_Emily",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
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
		MAG_3("OPTRE_200Rnd_95x40_Box_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		"OPTRE_M9_Frag"
		"SmokeShell"
	};
	respawnmagazines[] =
	{
		MAG_3("OPTRE_200Rnd_95x40_Box_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		"OPTRE_M9_Frag"
		"SmokeShell"
	};
};
class TWC_Infantry_Spartan_TeamLeader: TWC_Infantry_Spartan_Base
{
	displayName = "Spartan Team Leader";
	backpack = "TWC_Backpack_Spartan_TeamLeader";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_Mk4Helmet",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_Mk4Helmet",
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
		MAG_10("OPTRE_32Rnd_762x51_Mag"),
		MAG_5("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_200Rnd_95x40_Box_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_10("OPTRE_32Rnd_762x51_Mag"),
		MAG_5("OPTRE_32Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_200Rnd_95x40_Box_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};