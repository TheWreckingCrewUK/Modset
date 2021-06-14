//COIN, Desert
//Section
class TWC_Infantry_2000_COIN_Desert_Rifleman: TWC_Infantry_2000_Regular_Desert_Rifleman
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
};
class TWC_Infantry_2000_COIN_Desert_Marksman: TWC_Infantry_2000_Regular_Desert_Marksman
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
	weapons[]=
	{
		"TWC_Weapon_L86A2_SUSAT3D",
		"UK3CB_BAF_AT4_CS_AT_Launcher",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L86A2_SUSAT3D",
		"UK3CB_BAF_AT4_CS_AT_Launcher",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_4("UK3CB_BAF_556_30Rnd"),
		MAG_3("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
	respawnmagazines[] =
	{
		MAG_4("UK3CB_BAF_556_30Rnd"),
		MAG_3("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
};
class TWC_Infantry_2000_COIN_Desert_Grenadier: TWC_Infantry_2000_Regular_Desert_Grenadier
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
		weapons[]=
	{
		"TWC_Weapon_L85A2_UGL_HWS_SUSAT3D",
		"ACE_VMH3",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_UGL_HWS_SUSAT3D",
		"ACE_VMH3",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_10("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_10("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		"ACE_Flashlight_MX991",
		"UGL_FlareWhite_F",
		"UGL_FlareWhite_F",
		"UGL_FlareWhite_F"
	};
};
class TWC_Infantry_2000_COIN_Desert_Autorifleman: TWC_Infantry_2000_Regular_Desert_Autorifleman
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
};
class TWC_Infantry_2000_COIN_Desert_SectionCommander: TWC_Infantry_2000_Regular_Desert_SectionCommander
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_SectionCommander";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_2iC: TWC_Infantry_2000_Regular_Desert_2iC
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_2iC";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};

//Platoon Command
class TWC_Infantry_2000_COIN_Desert_Platoon_Commander: TWC_Infantry_2000_Regular_Desert_Platoon_Commander
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Platoon_Commander";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_Platoon_Sergeant: TWC_Infantry_2000_Regular_Desert_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Platoon_Sergeant";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_Platoon_Medic: TWC_Infantry_2000_Regular_Desert_Platoon_Medic
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Platoon_Medic";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie")
	};
};
class TWC_Infantry_2000_COIN_Desert_Platoon_CSM: TWC_Infantry_2000_Regular_Desert_Platoon_CSM
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Platoon_Sergeant";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};

//Company
class TWC_Infantry_2000_COIN_Desert_Company_Commander: TWC_Infantry_2000_Regular_Desert_Company_Commander
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Platoon_Commander";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_Company_2iC: TWC_Infantry_2000_Regular_Desert_Company_2iC
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Platoon_Commander";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_Company_Sergeant: TWC_Infantry_2000_Regular_Desert_Company_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Platoon_Sergeant";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};

//Sniper Team
class TWC_Infantry_2000_COIN_Desert_Sniper: TWC_Infantry_2000_Regular_Desert_Sniper
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	uniformClass = "UK3CB_BAF_U_CombatUniform_DDPM";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DDPM5",
		"UK3CB_BAF_H_Mk6_DDPM_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DDPM5",
		"UK3CB_BAF_H_Mk6_DDPM_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Tripod",
		"ACE_RangeCard"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Tripod",
		"ACE_RangeCard"
	};
};
class TWC_Infantry_2000_COIN_Desert_Spotter: TWC_Infantry_2000_Regular_Desert_Spotter
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Spotter";
	uniformClass = "UK3CB_BAF_U_CombatUniform_DDPM";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DDPM5",
		"UK3CB_BAF_H_Mk6_DDPM_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DDPM5",
		"UK3CB_BAF_H_Mk6_DDPM_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Kestrel4500"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Kestrel4500"
	};
};

//Artillery Crew
class TWC_Infantry_2000_COIN_Desert_Artillery_Commander: TWC_Infantry_2000_Regular_Desert_Artillery_Commander
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_Artillery_Commander";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_Artillery_Crew: TWC_Infantry_2000_Regular_Desert_Artillery_Crew
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_FO: TWC_Infantry_2000_Regular_Desert_FO
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_FO";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};

//EOD Team
class TWC_Infantry_2000_COIN_Desert_EOD_Commander: TWC_Infantry_2000_Regular_Desert_EOD_Commander
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_EOD_Commander";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_M26_Clacker",
		"ACE_DefusalKit",
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_M26_Clacker",
		"ACE_DefusalKit",
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_EOD_Gunner: TWC_Infantry_2000_Regular_Desert_EOD_Gunner
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_DefusalKit",
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_DefusalKit",
		"ACE_MapTools"
	};
};

//Aircraft
class TWC_Infantry_2000_COIN_Desert_FAC: TWC_Infantry_2000_Regular_Desert_FAC
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	backpack = "TWC_Backpack_2000_COIN_Desert_FAC";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};

//FVs
class TWC_Infantry_2000_COIN_Desert_Vehicle_Commander: TWC_Infantry_2000_Regular_Desert_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
class TWC_Infantry_2000_COIN_Desert_Vehicle_Crew: TWC_Infantry_2000_Regular_Desert_Vehicle_Crew
{
	CATEGORY(TWC_Infantry_COIN_2000_Desert)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools"
	};
};
