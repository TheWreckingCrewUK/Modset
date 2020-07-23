//COIN, WOODLAND
//Section
class TWC_Infantry_1990_COIN_Woodland_Rifleman: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
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
class TWC_Infantry_1990_COIN_Woodland_AT: TWC_Infantry_1990_Regular_Woodland_AT
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
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
		"TWC_Weapon_L85A1_SUSAT3D",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
};
class TWC_Infantry_1990_COIN_Woodland_Gunner: TWC_Infantry_1990_Regular_Woodland_Gunner
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
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
class TWC_Infantry_1990_COIN_Woodland_SectionCommander: TWC_Infantry_1990_Regular_Woodland_SectionCommander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_SectionCommander";
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
class TWC_Infantry_1990_COIN_Woodland_2iC: TWC_Infantry_1990_Regular_Woodland_2iC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_2iC";
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
class TWC_Infantry_1990_COIN_Woodland_Platoon_Commander: TWC_Infantry_1990_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Platoon_Commander";
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
class TWC_Infantry_1990_COIN_Woodland_Platoon_Sergeant: TWC_Infantry_1990_Regular_Woodland_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Platoon_Sergeant";
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
class TWC_Infantry_1990_COIN_Woodland_Platoon_Medic: TWC_Infantry_1990_Regular_Woodland_Platoon_Medic
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Platoon_Medic";
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
class TWC_Infantry_1990_COIN_Woodland_Platoon_CSM: TWC_Infantry_1990_Regular_Woodland_Platoon_CSM
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Platoon_Sergeant";
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
class TWC_Infantry_1990_COIN_Woodland_Company_Commander: TWC_Infantry_1990_Regular_Woodland_Company_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Platoon_Commander";
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
class TWC_Infantry_1990_COIN_Woodland_Company_2iC: TWC_Infantry_1990_Regular_Woodland_Company_2iC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Platoon_Commander";
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
class TWC_Infantry_1990_COIN_Woodland_Company_Sergeant: TWC_Infantry_1990_Regular_Woodland_Company_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Platoon_Sergeant";
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
class TWC_Infantry_1990_COIN_Woodland_Sniper: TWC_Infantry_1990_Regular_Woodland_Sniper
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	uniformClass="UK3CB_BAF_U_Smock_DPMW";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Tripod"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Tripod"
	};
};
class TWC_Infantry_1990_COIN_Woodland_Spotter: TWC_Infantry_1990_Regular_Woodland_Spotter
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Spotter";
	uniformClass="UK3CB_BAF_U_Smock_DPMW";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Kestrel4500",
		"ACE_RangeCard"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_Kestrel4500",
		"ACE_RangeCard"
	};
};

//Artillery Crew
class TWC_Infantry_1990_COIN_Woodland_Artillery_Commander: TWC_Infantry_1990_Regular_Woodland_Artillery_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_Artillery_Commander";
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
class TWC_Infantry_1990_COIN_Woodland_Artillery_Crew: TWC_Infantry_1990_Regular_Woodland_Artillery_Crew
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
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
class TWC_Infantry_1990_COIN_Woodland_FO: TWC_Infantry_1990_Regular_Woodland_FO
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_FO";
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
class TWC_Infantry_1990_COIN_Woodland_EOD_Commander: TWC_Infantry_1990_Regular_Woodland_EOD_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_EOD_Commander";
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
class TWC_Infantry_1990_COIN_Woodland_EOD_Gunner: TWC_Infantry_1990_Regular_Woodland_EOD_Gunner
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
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
class TWC_Infantry_1990_COIN_Woodland_FAC: TWC_Infantry_1990_Regular_Woodland_FAC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_1990_COIN_Woodland_FAC";
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
class TWC_Infantry_1990_COIN_Woodland_Vehicle_Commander: TWC_Infantry_1990_Regular_Woodland_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
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
class TWC_Infantry_1990_COIN_Woodland_Vehicle_Crew: TWC_Infantry_1990_Regular_Woodland_Vehicle_Crew
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
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