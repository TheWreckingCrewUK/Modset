//REGULAR, WOODLAND
//Section
class TWC_Infantry_1990_Regular_Woodland_Rifleman: TWC_Infantry_Millennial_Base
{
	scope = 2;
	displayName = "Rifleman";
	weapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
};
class TWC_Infantry_1990_Regular_Woodland_AT: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayName = "Rifleman (AT)";
	weapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"ukf_law80launcher",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"ukf_law80launcher",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_1990_Regular_Woodland_Gunner: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayName = "Gunner";
	weapons[]=
	{
		"TWC_Weapon_L86A1_SUSAT3D",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L86A1_SUSAT3D",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_5("UK3CB_BAF_556_30Rnd_T"),
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_5("UK3CB_BAF_556_30Rnd_T"),
		"SmokeShell"
	};
};
class TWC_Infantry_1990_Regular_Woodland_SectionCommander: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayName = "Section Commander";
	backpack="";
	weapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	Items[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	respawnItems[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	magazines[]=
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_1990_Regular_Woodland_2iC: TWC_Infantry_1990_Regular_Woodland_SectionCommander
{
	displayName = "2iC";
};

//Platoon Command
class TWC_Infantry_1990_Regular_Woodland_Platoon_Commander: TWC_Infantry_Millennial_Base
{
	scope = 2;
	displayName = "Platoon Commander";
	backpack="";
	Items[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	respawnItems[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	weapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_1990_Regular_Woodland_Platoon_Sergeant: TWC_Infantry_1990_Regular_Woodland_Platoon_Commander
{
	displayName = "Platoon Sergeant";
	backpack="";
};
class TWC_Infantry_1990_Regular_Woodland_Platoon_Medic: TWC_Infantry_1990_Regular_Woodland_Platoon_Commander
{
	displayName = "Platoon Medic";
	attendant = 1;
	Items[]=
	{
		MEDICAL_LOADOUT
	};
	respawnItems[]=
	{
		MEDICAL_LOADOUT
	};
	weapons[]=
	{
		"TWC_Weapon_L85A1",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A1",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_1990_Regular_Woodland_Platoon_CSM: TWC_Infantry_1990_Regular_Woodland_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
};

//AT + AA
class TWC_Infantry_1990_Regular_Woodland_MILAN_Gunner: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayName = "MILAN Gunner";
	backpack = "ukcw_milan_gun_bag";
	magazines[]=
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_1990_Regular_Woodland_MILAN_Ass: TWC_Infantry_1990_Regular_Woodland_MILAN_Gunner
{
	displayName = "MILAN Assistant";
	backpack = "";
};
class TWC_Infantry_1990_Regular_Woodland_Blowpipe_Gunner: TWC_Infantry_1990_Regular_Woodland_MILAN_Gunner
{
	displayName = "Blowpipe Gunner";
	backpack = "";
	weapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"SP_Blowpipe",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"SP_Blowpipe",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		"SP_Blowpipe_round"
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		"SP_Blowpipe_round"
	};
};
class TWC_Infantry_1990_Regular_Woodland_Blowpipe_Ass: TWC_Infantry_1990_Regular_Woodland_Blowpipe_Gunner
{
	displayName = "Blowpipe Assistant";
	backpack="";
	weapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_1990_Regular_Woodland_L14A1_Gunner: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayName = "CG Gunner";
	weapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"twc_l14A1_scoped",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"twc_l14A1_scoped",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		"ukcw_l14a1_HEAT"
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		"ukcw_l14a1_HEAT"
	};
};
class TWC_Infantry_1990_Regular_Woodland_L14A1_Ass: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayName = "CG Assistant";
	backpack = "";
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};	
};

//Sniper Team
class TWC_Infantry_1990_Regular_Woodland_Sniper: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayname = "Sniper";
	weapons[] =
	{
		"TWC_Weapon_L96_Woodland",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L96_Woodland",
		"Throw",
		"Put"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Tripod"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Tripod"
	};
	magazines[] =
	{
		MAG_9("UK3CB_BAF_762_L42A1_10Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellGreen")
	};
	Respawnmagazines[] =
	{
		MAG_9("UK3CB_BAF_762_L42A1_10Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_1990_Regular_Woodland_Spotter: TWC_Infantry_1990_Regular_Woodland_Sniper
{
	displayname = "Spotter";
	backpack = "";
	weapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	Items[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Clacker",
		"ACE_RangeCard"
	};
	respawnItems[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Clacker",
		"ACE_RangeCard"
	};
	magazines[]=
	{
		MAG_9("UK3CB_BAF_762_20Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("ClaymoreDirectionalMine_Remote_Mag")
	};
	Respawnmagazines[]=
	{
		MAG_9("UK3CB_BAF_762_20Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("ClaymoreDirectionalMine_Remote_Mag")
	};
};

//Artillery Crew
class TWC_Infantry_1990_Regular_Woodland_Artillery_Commander: TWC_Infantry_1990_Regular_Woodland_Rifleman
{
	displayName = "Artillery Commander";
	backpack = "";
	weapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"ACE_Vector",
		"Throw",
		"Put"
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
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_1990_Regular_Woodland_Artillery_Crew: TWC_Infantry_1990_Regular_Woodland_Artillery_Commander
{
	displayName = "Artillery Crew";
	weapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_1990_Regular_Woodland_FO: TWC_Infantry_1990_Regular_Woodland_Artillery_Commander
{
	displayName = "Forward Observer";
	backpack = "";
};

//Aircraft
class TWC_Infantry_1990_Regular_Woodland_FAC: TWC_Infantry_1990_Regular_Woodland_Platoon_Commander
{
	displayName = "Forward Air Controller";
	weapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A1_SUSAT3D_Laser",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
};
class TWC_Infantry_1990_Regular_Woodland_Helicopter_Pilot: TWC_Infantry_Millennial_Base
{
	scope = 2;
	displayName = "Helicopter Pilot";
	uniformClass = "UK3CB_BAF_U_CombatUniform_DPMW_ShortSleeve";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Pilot_DPMW",
		"UK3CB_BAF_H_PilotHelmetHeli_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
			"UK3CB_BAF_V_Pilot_DPMW",
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2(SmokeShell)
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2(SmokeShell)
	};
};

//FVs
class TWC_Infantry_1990_Regular_Woodland_Vehicle_Commander: TWC_Infantry_1990_Regular_Woodland_Helicopter_Pilot
{
	displayName = "Vehicle Commander";
	uniformClass = "UK3CB_BAF_U_Smock_DPMW";
	linkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_DPMW",
		"UK3CB_BAF_H_CrewHelmet_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_DPMW",
		"UK3CB_BAF_H_CrewHelmet_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_1990_Regular_Woodland_Vehicle_Crew: TWC_Infantry_1990_Regular_Woodland_Vehicle_Commander
{
	displayName = "Vehicle Crew";
};