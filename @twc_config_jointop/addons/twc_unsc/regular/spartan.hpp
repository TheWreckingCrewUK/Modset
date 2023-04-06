//Spartan, Infantry
//Team
class TWC_Infantry_Spartan_Breacher: TWC_Infantry_Spartan_Base
{
	scope = 2;
	displayName = "Breacher";
	backpack = "TWC_Backpack_Spartan_Breacher";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA3",
		"OPTRE_MJOLNIR_EVAHelmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA3",
		"OPTRE_MJOLNIR_EVAHelmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"OPTRE_M45ATAC",
		"TWC_Weapon_M6G",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"OPTRE_M45ATAC",
		"TWC_Weapon_M6G",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_5("OPTRE_12Rnd_8Gauge_Pellets"),
		MAG_5("OPTRE_12Rnd_8Gauge_Slugs"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_5("OPTRE_12Rnd_8Gauge_Pellets"),
		MAG_5("OPTRE_12Rnd_8Gauge_Slugs"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Spartan_Grenadier: TWC_Infantry_Spartan_Base
{
	scope = 2;
	displayName = "Grenadier";
	backpack = "TWC_Backpack_Spartan_Breacher";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Commando3",
		"OPTRE_MJOLNIR_MkVBHelmet_UA",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Commando3",
		"OPTRE_MJOLNIR_MkVBHelmet_UA",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"OPTRE_M319",
		"TWC_Weapon_M6G",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"OPTRE_M319",
		"TWC_Weapon_M6G",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_15("1Rnd_HE_Grenade_shell"),
		MAG_5("1Rnd_Smoke_Grenade_shell"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_15("1Rnd_HE_Grenade_shell"),
		MAG_5("1Rnd_Smoke_Grenade_shell"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Spartan_RiflemanAT: TWC_Infantry_Spartan_Base
{
	scope = 2;
	displayName = "AT Specialist";
	backpack = "TWC_Backpack_Spartan_AT";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Grenadier",
		"OPTRE_MJOLNIR_EOD",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Grenadier",
		"OPTRE_MJOLNIR_EOD",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_MA5B",
		"OPTRE_M41_SSR",
		"TWC_Weapon_M6G",
		"OPTRE_Binoculars",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_MA5B",
		"OPTRE_M41_SSR",
		"TWC_Weapon_M6G",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_M41_Twin_HEAT"),
		MAG_2("OPTRE_M41_Twin_HEAP"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_M41_Twin_HEAT"),
		MAG_2("OPTRE_M41_Twin_HEAP"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Spartan_Sniper: TWC_Infantry_Spartan_Base
{
	scope = 2;
	displayName = "Sniper";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_FJPARA3",
		"OPTRE_MJOLNIR_ReconHelmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_FJPARA3",
		"OPTRE_MJOLNIR_ReconHelmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_SRS99D",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_SRS99D",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("OPTRE_4Rnd_145x114_APFSDS_Mag"),
		MAG_5("OPTRE_4Rnd_145x114_HEDP_Mag"),
		MAG_6("OPTRE_4Rnd_145x114_HVAP_Mag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("OPTRE_4Rnd_145x114_APFSDS_Mag"),
		MAG_5("OPTRE_4Rnd_145x114_HEDP_Mag"),
		MAG_6("OPTRE_4Rnd_145x114_HVAP_Mag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Spartan_MachineGunner: TWC_Infantry_Spartan_Base
{
	scope = 2;
	displayName = "Machine Gunner";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA",
		"OPTRE_MJOLNIR_CQC",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_Collar_Gren_UA",
		"OPTRE_MJOLNIR_CQC",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"OPTRE_M247H_Etilka",
		"TWC_Weapon_M6G",
		"OPTRE_Binoculars",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"OPTRE_M247H_Etilka",
		"TWC_Weapon_M6G",
		"OPTRE_Binoculars",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_9("OPTRE_200Rnd_127x99_M247H_Etilka_Ball"),
		"OPTRE_M9_Frag",
		"SmokeShell"
	};
	respawnmagazines[] =
	{
		MAG_9("OPTRE_200Rnd_127x99_M247H_Etilka_Ball"),
		"OPTRE_M9_Frag",
		"SmokeShell"
	};
};
class TWC_Infantry_Spartan_TeamLeader: TWC_Infantry_Spartan_Base
{
	scope = 2;
	displayName = "Team Leader";
	backpack = "TWC_Backpack_Spartan_TeamLeader";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_Commando_HUL3",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_Commando_HUL3",
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
		"TWC_Weapon_MA5B",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_MA5B",
		"TWC_Weapon_M6G",
		"OPTRE_Smartfinder",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_200Rnd_95x40_Box_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_15("OPTRE_60Rnd_762x51_Mag"),
		MAG_10("OPTRE_60Rnd_762x51_Mag_Tracer"),
		MAG_2("OPTRE_200Rnd_95x40_Box_Tracer"),
		MAG_2("OPTRE_8Rnd_127x40_AP_Mag"),
		MAG_2("OPTRE_M9_Frag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Spartan_PlatoonCommander: TWC_Infantry_Spartan_TeamLeader
{
	scope = 2;
	displayName = "Platoon Commander";
	backpack = "TWC_Backpack_Spartan_PlatoonCommander";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_JFO",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_JFO",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_Spartan_PlatoonSergeant: TWC_Infantry_Spartan_TeamLeader
{
	scope = 2;
	displayName = "Platoon Sergeant";
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_Commando_HUL3_UA",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_Commando_HUL3_UA",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_Spartan_PlatoonMedic: TWC_Infantry_Spartan_TeamLeader
{
	scope = 2;
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_Spartan_PlatoonMedic";
	TWC_isCommandRole = 0;
	linkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor_FJPARA3",
		"OPTRE_MJOLNIR_Pilot",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"OPTRE_MJOLNIR_MkVBArmor",
		"OPTRE_MJOLNIR_Pilot",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
};