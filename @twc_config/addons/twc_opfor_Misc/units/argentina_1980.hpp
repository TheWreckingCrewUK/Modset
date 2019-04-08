class CUP_B_USArmy_Soldier_01;
class CUP_B_USArmy_Soldier_BDU_OD: CUP_B_USArmy_Soldier_01
{
	modelSides[] = {3,1,2};
};

class TWC_INDEP_Argentina_1980_Base: I_Soldier_base_F
{
	author = "[TWC] Rik";
	scope = 1;
	displayName = "Soldier Base";
	faction = "TWC_INDEP_Units_Argentina_1980";
	vehicleClass = "EdSubcat_Personnel";
	nakedUniform = "U_BasicBody";
	uniformClass = "CUP_U_B_US_BDU_OD";
	genericNames = "SahraniNames";
	backpack = "";
	identityTypes[] =
	{
		"LanguageGRE_F",
		"Head_Euro",
		"G_GUERIL_default"
	};
};
class TWC_INDEP_Argentina_1980_Rifleman: TWC_INDEP_Argentina_1980_Base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	linkedItems[] =
	{
		"CUP_V_B_ALICE",
		"TWC_Helmet_M1_OD",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_B_ALICE",
		"TWC_Helmet_M1_OD",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"CUP_arifle_FNFAL5061",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CUP_arifle_FNFAL5061",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_HandGrenade_M67",
		"CUP_HandGrenade_M67",
		"SmokeShell",
		"SmokeShell"
	};
	Respawnmagazines[] =
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_HandGrenade_M67",
		"CUP_HandGrenade_M67",
		"SmokeShell",
		"SmokeShell"
	};
	Items[] =
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
	respawnItems[] =
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_tourniquet"
	};
};
class TWC_INDEP_Argentina_1980_SectionCommander: TWC_INDEP_Argentina_1980_Rifleman
{
	displayName = "Section Commander";
	backpack = "TWC_Backpack_Argentina_1980_SectionCommander";
	linkedItems[] =
	{
		"CUP_V_B_ALICE",
		"TWC_Helmet_M1_OD",
		"ItemCompass",
		"ItemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_B_ALICE",
		"TWC_Helmet_M1_OD",
		"ItemCompass",
		"ItemMap",
		"ItemWatch"
	};
};
class TWC_INDEP_Argentina_1980_2iC: TWC_INDEP_Argentina_1980_Rifleman
{
	displayName = "2iC";
	backpack = "TWC_Backpack_Argentina_1980_2iC";
};
class TWC_INDEP_Argentina_1980_MG: TWC_INDEP_Argentina_1980_Rifleman
{
	displayname = "Machine Gunner";
	weapons[] =
	{
		"UK3CB_BAF_L7A2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L7A2",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd_T"
	};
	Respawnmagazines[] =
	{
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd_T"
	};
};
class TWC_INDEP_Argentina_1980_Marksman: TWC_INDEP_Argentina_1980_Rifleman
{
	displayname = "Marksman";
	weapons[] =
	{
		"CUP_srifle_M14_DMR_LeupoldMk4",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CUP_srifle_M14_DMR_LeupoldMk4",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"SmokeShell",
		"SmokeShell"
	};
	Respawnmagazines[] =
	{
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"CUP_20Rnd_762x51_DMR",
		"SmokeShell",
		"SmokeShell"
	};
};
class TWC_INDEP_Argentina_1980_AA_Gunner: TWC_INDEP_Argentina_1980_Rifleman
{
	displayName = "AA Gunner";
	backpack = "TWC_Backpack_Argentina_1980_AA";
	weapons[] =
	{
		"CUP_arifle_FNFAL5061",
		"SP_Blowpipe",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CUP_arifle_FNFAL5061",
		"SP_Blowpipe",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"SP_Blowpipe_round"
	};
	Respawnmagazines[] =
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"SP_Blowpipe_round"
	};
};
class TWC_INDEP_Argentina_1980_Commando_Rifleman: TWC_INDEP_Argentina_1980_Rifleman 
{
	displayName = "Commando Rifleman";
	linkedItems[] =
	{
		"CUP_V_B_ALICE",
		"SP_WoolCap_Black",
		"ItemCompass",
		"ItemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_B_ALICE",
		"SP_WoolCap_Black",
		"ItemCompass",
		"ItemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"CUP_arifle_FNFAL5061",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"CUP_arifle_FNFAL5061",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_HandGrenade_M67",
		"CUP_HandGrenade_M67",
		"SmokeShell",
		"SmokeShell"
	};
	Respawnmagazines[] =
	{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_HandGrenade_M67",
		"CUP_HandGrenade_M67",
		"SmokeShell",
		"SmokeShell"
	};
};
class TWC_INDEP_Argentina_1980_Commando_SMG: TWC_INDEP_Argentina_1980_Commando_Rifleman
{
	displayName = "Commando SMG";
	weapons[] =
	{
		"SP_smg_sterling",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"SP_smg_sterling",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"CUP_HandGrenade_M67",
		"CUP_HandGrenade_M67",
		"SmokeShell",
		"SmokeShell"
	};
	Respawnmagazines[] =
	{
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"SP_30Rnd_9x19_L2A3_Sterling",
		"CUP_HandGrenade_M67",
		"CUP_HandGrenade_M67",
		"SmokeShell",
		"SmokeShell"
	};
};