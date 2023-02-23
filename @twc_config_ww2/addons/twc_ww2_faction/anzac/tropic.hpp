//ANZAC, TROPIC
//Section
class TWC_Infantry_WW2_ANZAC_Tropic_Rifleman: TWC_Infantry_WW2_UK_Early_Tropic_Rifleman
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};
class TWC_Infantry_WW2_ANZAC_Tropic_Grenadier: TWC_Infantry_WW2_UK_Early_Tropic_Grenadier
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};
class TWC_Infantry_WW2_ANZAC_Tropic_SMG: TWC_Infantry_WW2_UK_Early_Tropic_SMG
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};
class TWC_Infantry_WW2_ANZAC_Tropic_SMG_Owen_Late: TWC_Infantry_WW2_ANZAC_Tropic_SMG
{
	displayName = "Submachine Gunner (Owen '43)";
	weapons[] =
	{
		"CSA38_OwenMkI",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CSA38_OwenMkI",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("csa38_33_9x19"),
		MAG_3("LIB_MillsBomb")
	};
	respawnmagazines[] =
	{
		MAG_7("csa38_33_9x19"),
		MAG_3("LIB_MillsBomb")
	};
};
class TWC_Infantry_WW2_ANZAC_Tropic_SMG_Owen_Early: TWC_Infantry_WW2_ANZAC_Tropic_SMG_Owen_Late
{
	displayName = "Submachine Gunner (Owen '42)";
	weapons[] =
	{
		"CSA38_OwenMkI2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CSA38_OwenMkI2",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_ANZAC_Tropic_MG: TWC_Infantry_WW2_UK_Early_Tropic_MG
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};
class TWC_Infantry_WW2_ANZAC_Tropic_MGASS: TWC_Infantry_WW2_UK_Early_Tropic_MGASS
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};
class TWC_Infantry_WW2_ANZAC_Tropic_SectionCommander: TWC_Infantry_WW2_UK_Early_Tropic_SectionCommander
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};
class TWC_Infantry_WW2_ANZAC_Tropic_SectionCommander_Owen: TWC_Infantry_WW2_ANZAC_Tropic_SectionCommander
{
	displayName = "Section Commander (Owen)";
	weapons[] =
	{
		"CSA38_OwenMkI2",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CSA38_OwenMkI2",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("csa38_33_9x19"),
		MAG_2("LIB_MillsBomb"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("csa38_33_9x19"),
		MAG_2("LIB_MillsBomb"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_WW2_ANZAC_Tropic_2iC: TWC_Infantry_WW2_UK_Early_Tropic_2iC
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};

//Platoon Command
class TWC_Infantry_WW2_ANZAC_Tropic_Platoon_Commander: TWC_Infantry_WW2_UK_Early_Tropic_Platoon_Commander
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};
class TWC_Infantry_WW2_ANZAC_Tropic_Platoon_Sergeant: TWC_Infantry_WW2_UK_Early_Tropic_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_WW2_ANZAC_Tropic_Platoon_Medic: TWC_Infantry_WW2_UK_Early_Tropic_Platoon_Medic
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};
class TWC_Infantry_WW2_ANZAC_Tropic_Platoon_Runner: TWC_Infantry_WW2_UK_Early_Tropic_Platoon_Runner
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Rifleman",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Rifleman",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_WW2_ANZAC_Tropic_Platoon_Mortar: TWC_Infantry_WW2_UK_Early_Tropic_Platoon_Mortar
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_WW2_ANZAC_Tropic_Platoon_CSM: TWC_Infantry_WW2_UK_Early_Tropic_Platoon_CSM
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};

//Company
class TWC_Infantry_WW2_ANZAC_Tropic_Company_Commander: TWC_Infantry_WW2_UK_Early_Tropic_Company_Commander
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};
class TWC_Infantry_WW2_ANZAC_Tropic_Company_2iC: TWC_Infantry_WW2_UK_Early_Tropic_Company_2iC
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};
class TWC_Infantry_WW2_ANZAC_Tropic_Company_Sergeant: TWC_Infantry_WW2_UK_Early_Tropic_Company_Sergeant
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
	linkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_UK_P37_Heavy",
		"fow_h_uk_jungle_hat_01",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};

//AT
class TWC_Infantry_WW2_ANZAC_Tropic_Boys_Gunner: TWC_Infantry_WW2_UK_Early_Tropic_Boys_Gunner
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};

//Artillery
class TWC_Infantry_WW2_ANZAC_Tropic_Artillery_Commander: TWC_Infantry_WW2_UK_Early_Tropic_Artillery_Commander
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};
class TWC_Infantry_WW2_ANZAC_Tropic_Artillery_Crew: TWC_Infantry_WW2_UK_Early_Tropic_Artillery_Crew
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};
class TWC_Infantry_WW2_ANZAC_Tropic_FO: TWC_Infantry_WW2_UK_Early_Tropic_FO
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};

//Aircraft
class TWC_Infantry_WW2_ANZAC_Tropic_FAC: TWC_Infantry_WW2_UK_Early_Tropic_FAC
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
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
};

//FVs
class TWC_Infantry_WW2_ANZAC_Tropic_Vehicle_Commander: TWC_Infantry_WW2_UK_Early_Tropic_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};
class TWC_Infantry_WW2_ANZAC_Tropic_Vehicle_Crew: TWC_Infantry_WW2_UK_Early_Tropic_Vehicle_Crew
{
	CATEGORY(TWC_Infantry_ANZAC_Tropic)
	uniformClass = "fow_u_aus_m37_03_private";
};