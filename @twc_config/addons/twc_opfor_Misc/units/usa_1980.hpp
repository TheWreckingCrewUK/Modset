class TWC_BLUFOR_USA_1980_Base: B_Soldier_base_F
{
	author = "[TWC] Rik";
	scope = 1;
	displayName = "Soldier Base";
	faction = "TWC_BLUFOR_Units_USA_1980";
	vehicleClass = "EdSubcat_Personnel";
	nakedUniform = "U_BasicBody";
	uniformClass = "CUP_U_B_US_BDU";
	backpack = "";
	linkedItems[] =
	{
		"CUP_V_B_ALICE",
		"CUP_H_USArmy_Helmet_M1_m81",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_B_ALICE",
		"CUP_H_USArmy_Helmet_M1_m81",
		"ItemMap",
		"ItemCompass",
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
};
class TWC_BLUFOR_USA_1980_Rifleman: TWC_BLUFOR_USA_1980_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	weapons[] =
	{
		"CUP_arifle_M16A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CUP_arifle_M16A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_HandGrenade_M67")
	};
	Respawnmagazines[] =
	{
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_2("CUP_HandGrenade_M67")
	};
};
class TWC_BLUFOR_USA_1980_Rifleman_AT: TWC_BLUFOR_USA_1980_Rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (AT)";
	weapons[] =
	{
		"CUP_arifle_M16A1",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CUP_arifle_M16A1",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
};
class TWC_BLUFOR_USA_1980_AR: TWC_BLUFOR_USA_1980_Rifleman
{
	displayName = "Automatic Rifleman";
	magazines[] =
	{
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_5("CUP_30Rnd_556x45_Stanag_Tracer_Red")
	};
	Respawnmagazines[] =
	{
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_5("CUP_30Rnd_556x45_Stanag_Tracer_Red")
	};
};
class TWC_BLUFOR_USA_1980_TeamLeader: TWC_BLUFOR_USA_1980_Rifleman
{
	displayName = "Team Leader";
	backpack = "TWC_Backpack_USA_1980_TeamLeader";
};
class TWC_BLUFOR_USA_1980_SquadLeader: TWC_BLUFOR_USA_1980_Rifleman
{
	displayName = "Squad Leader";
	backpack = "TWC_Backpack_USA_1980_SectionCommander";
	weapons[] =
	{
		"CUP_arifle_M16A1",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CUP_arifle_M16A1",
		"Binocular",
		"Throw",
		"Put"
	};
};