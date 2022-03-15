//COIN, WOODLAND
//Section
class TWC_Infantry_2020_COIN_Woodland_Rifleman: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Rifleman";
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland";
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
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"CUP_launch_M72A6",
		"ACE_VMM3",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"CUP_launch_M72A6",
		"ACE_VMM3",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_2020_COIN_Woodland_Pointman: TWC_Infantry_2020_COIN_Woodland_Rifleman
{
	displayName = "Pointman";
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Pointman";
};
class TWC_Infantry_2020_COIN_Woodland_Grenadier: TWC_Infantry_2020_Regular_Woodland_Grenadier
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland";
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
class TWC_Infantry_2020_COIN_Woodland_MG: TWC_Infantry_2020_Regular_Woodland_MG
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland";
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
class TWC_Infantry_2020_COIN_Woodland_Marksman: TWC_Infantry_2020_Regular_Woodland_Marksman
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland";
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
class TWC_Infantry_2020_COIN_Woodland_SectionCommander: TWC_Infantry_2020_Regular_Woodland_SectionCommander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_SectionCommander";
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
class TWC_Infantry_2020_COIN_Woodland_2iC: TWC_Infantry_2020_Regular_Woodland_2iC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_2iC";
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
class TWC_Infantry_2020_COIN_Woodland_LightCavCommander: TWC_Infantry_2020_COIN_Woodland_Rifleman
{
	displayName = "Light Cavalry Commander";
	backpack = "TWC_Backpack_2020_Regular_Woodland_SectionCommander";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"mpx_virtus_taco2_p",
		"mpx_cobra_visor",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_taco2_p",
		"mpx_cobra_visor",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
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
class TWC_Infantry_2020_COIN_Woodland_LightCavCrew: TWC_Infantry_2020_COIN_Woodland_Rifleman
{
	displayName = "Light Cavalry Crewman";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"mpx_virtus_taco_p",
		"mpx_cobra_visor",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_taco2_p",
		"mpx_cobra_visor",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
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

//Platoon
class TWC_Infantry_2020_COIN_Woodland_Platoon_Commander: TWC_Infantry_2020_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Commander";
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
class TWC_Infantry_2020_COIN_Woodland_Platoon_Sergeant: TWC_Infantry_2020_Regular_Woodland_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Sergeant";
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
class TWC_Infantry_2020_COIN_Woodland_Platoon_Medic: TWC_Infantry_2020_Regular_Woodland_Platoon_Medic
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Medic";
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
class TWC_Infantry_2020_COIN_Woodland_Platoon_Mortar: TWC_Infantry_2020_Regular_Woodland_Platoon_Mortar
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Mortar";
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
class TWC_Infantry_2020_COIN_Woodland_CSM: TWC_Infantry_2020_Regular_Woodland_CSM
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Sergeant";
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
class TWC_Infantry_2020_COIN_Woodland_Company_Commander: TWC_Infantry_2020_Regular_Woodland_Company_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Commander";
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
class TWC_Infantry_2020_COIN_Woodland_Company_2iC: TWC_Infantry_2020_Regular_Woodland_Company_2iC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Commander";
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
class TWC_Infantry_2020_COIN_Woodland_Company_Sergeant: TWC_Infantry_2020_Regular_Woodland_Company_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Platoon_Sergeant";
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

//AT
class TWC_Infantry_2020_COIN_Woodland_Javelin_Gunner: TWC_Infantry_2020_Regular_Woodland_Javelin_Gunner
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
class TWC_Infantry_2020_COIN_Woodland_Javelin_Ass: TWC_Infantry_2020_Regular_Woodland_Javelin_Ass
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Javelin_Assistant";
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

//Sniper Team
class TWC_Infantry_2020_COIN_Woodland_Sniper: TWC_Infantry_2020_Regular_Woodland_Sniper
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
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
class TWC_Infantry_2020_COIN_Woodland_Spotter: TWC_Infantry_2020_Regular_Woodland_Spotter
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
	backpack = "TWC_Backpack_2020_COIN_Woodland_Spotter";
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
class TWC_Infantry_2020_COIN_Woodland_Artillery_Commander: TWC_Infantry_2020_Regular_Woodland_Artillery_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_Artillery_Commander";
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
class TWC_Infantry_2020_COIN_Woodland_Artillery_Crew: TWC_Infantry_2020_Regular_Woodland_Artillery_Crew
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
class TWC_Infantry_2020_COIN_Woodland_FO: TWC_Infantry_2020_Regular_Woodland_FO
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_FO";
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

//Aircraft
class TWC_Infantry_2020_COIN_Woodland_FAC: TWC_Infantry_2020_Regular_Woodland_FAC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_2020_COIN_Woodland_FAC";
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
class TWC_Infantry_2020_COIN_Woodland_Vehicle_Commander: TWC_Infantry_2020_Regular_Woodland_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
};
class TWC_Infantry_2020_COIN_Woodland_Vehicle_Crew: TWC_Infantry_2020_Regular_Woodland_Vehicle_Crew
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
};
