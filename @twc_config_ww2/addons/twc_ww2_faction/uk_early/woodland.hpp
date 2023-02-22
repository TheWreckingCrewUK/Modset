//UK, EARLY, WOODLAND
//Section
class TWC_Infantry_WW2_UK_Early_Woodland_Rifleman: TWC_Infantry_WW2_UK_Late_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Grenadier: TWC_Infantry_WW2_UK_Late_Woodland_Grenadier
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No1_CUP",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1_CUP",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_SMG: TWC_Infantry_WW2_UK_Late_Woodland_SMG
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
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
		MAG_3("LIB_MillsBomb"),
		"LIB_No82"
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_50Rnd_45ACP"),
		MAG_3("LIB_MillsBomb"),
		"LIB_No82"
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_MG: TWC_Infantry_WW2_UK_Late_Woodland_MG
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
};
class TWC_Infantry_WW2_UK_Early_Woodland_MGASS: TWC_Infantry_WW2_UK_Late_Woodland_MGASS
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_SectionCommander: TWC_Infantry_WW2_UK_Late_Woodland_SectionCommander
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_SectionCommander";
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
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_2iC: TWC_Infantry_WW2_UK_Late_Woodland_2iC
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_2iC";
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
};

//Platoon Command
class TWC_Infantry_WW2_UK_Early_Woodland_Platoon_Commander: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Platoon_Commander";
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
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Platoon_Sergeant: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Platoon_Sergeant";
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Platoon_Medic: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Medic
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Platoon_Medic";
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
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Platoon_Runner: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Runner
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Platoon_Mortar: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_Mortar
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_P1903_Bayo"
	};
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"twc_2inch_bag",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Platoon_CSM: TWC_Infantry_WW2_UK_Late_Woodland_Platoon_CSM
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Platoon_Sergeant";
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
};

//Company
class TWC_Infantry_WW2_UK_Early_Woodland_Company_Commander: TWC_Infantry_WW2_UK_Late_Woodland_Company_Commander
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Platoon_Commander";
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
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Company_2iC: TWC_Infantry_WW2_UK_Late_Woodland_Company_2iC
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Platoon_Commander";
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
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellBlue"),
		MAG_2("SmokeShellRed"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Company_Sergeant: TWC_Infantry_WW2_UK_Late_Woodland_Company_Sergeant
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Platoon_Sergeant";
	weapons[] =
	{
		"LIB_LeeEnfield_No1",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"LIB_LeeEnfield_No1",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
};

//AT
class TWC_Infantry_WW2_UK_Early_Woodland_Boys_Gunner: TWC_Infantry_WW2_UK_Late_Woodland_PIAT_Gunner
{
	displayName = "Boys Gunner";
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Boys_Gunner";
	weapons[] =
	{
		"CSA38_boys",
		"LIB_Webley_mk6",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CSA38_boys",
		"LIB_Webley_mk6",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_4("CSA38_5_13_9x99mmB"),
		MAG_4("CSA38_5_13_9x99mmB"),
		MAG_3("LIB_6Rnd_455"),
		MAG_2("LIB_No82")
	};
	respawnmagazines[] =
	{
		MAG_4("CSA38_5_13_9x99mmB"),
		MAG_4("CSA38_5_13_9x99mmB"),
		MAG_3("LIB_6Rnd_455"),
		MAG_2("LIB_No82")
	};
};

//Artillery
class TWC_Infantry_WW2_UK_Early_Woodland_Artillery_Commander: TWC_Infantry_WW2_UK_Late_Woodland_Artillery_Commander
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_Artillery_Commander";
	weapons[] =
	{
		"LIB_M1928_Thompson",
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
		MAG_5("LIB_30Rnd_45ACP")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_30Rnd_45ACP")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Artillery_Crew: TWC_Infantry_WW2_UK_Late_Woodland_Artillery_Crew
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	weapons[] =
	{
		"LIB_M1928_Thompson",
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
		MAG_5("LIB_30Rnd_45ACP")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_30Rnd_45ACP")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_FO: TWC_Infantry_WW2_UK_Late_Woodland_FO
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_FO";
	weapons[] =
	{
		"LIB_M1928_Thompson",
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
		MAG_5("LIB_30Rnd_45ACP"),
		MAG_4("SmokeShellBlue"),
		MAG_4("SmokeShellRed"),
		MAG_4("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_30Rnd_45ACP"),
		MAG_4("SmokeShellBlue"),
		MAG_4("SmokeShellRed"),
		MAG_4("SmokeShellGreen")
	};
};

//Aircraft
class TWC_Infantry_WW2_UK_Early_Woodland_FAC: TWC_Infantry_WW2_UK_Late_Woodland_FAC
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	backpack = "TWC_Backpack_WW2_UK_Early_FAC";
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
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_UK",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_30Rnd_45ACP"),
		MAG_4("SmokeShellBlue"),
		MAG_4("SmokeShellRed"),
		MAG_4("SmokeShellGreen")
	};
	respawnmagazines[] =
	{
		MAG_5("LIB_30Rnd_45ACP"),
		MAG_4("SmokeShellBlue"),
		MAG_4("SmokeShellRed"),
		MAG_4("SmokeShellGreen")
	};
};

//FVs
class TWC_Infantry_WW2_UK_Early_Woodland_Vehicle_Commander: TWC_Infantry_WW2_UK_Late_Woodland_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
	weapons[] =
	{
		"LIB_M1928_Thompson",
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
		MAG_3("LIB_30Rnd_45ACP")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP")
	};
};
class TWC_Infantry_WW2_UK_Early_Woodland_Vehicle_Crew: TWC_Infantry_WW2_UK_Late_Woodland_Vehicle_Crew
{
	CATEGORY(TWC_Infantry_EarlyWW2_Woodland)
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
		MAG_3("LIB_30Rnd_45ACP")
	};
	respawnmagazines[] =
	{
		MAG_3("LIB_30Rnd_45ACP")
	};
};