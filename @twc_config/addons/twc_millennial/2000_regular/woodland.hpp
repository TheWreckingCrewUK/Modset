//REGULAR, WOODLAND
//Section
class TWC_Infantry_2000_Regular_Woodland_Rifleman: TWC_Infantry_Millennial_Base
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	scope = 2;
	displayName = "Rifleman";
	uniformClass = "UK3CB_BAF_U_CombatUniform_DPMW";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW5",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW5",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
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
class TWC_Infantry_2000_Regular_Woodland_Marksman: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Marksman (AT)";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW5",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW5",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	
	weapons[] =
	{
		"TWC_Weapon_L86A2_SUSAT3D",
		"ukcw_law80",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L86A2_SUSAT3D",
		"ukcw_law80",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_4("UK3CB_BAF_556_30Rnd"),
		MAG_3("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"ukcw_law80_magazine", 
		"ukcw_law80_magazine_spotting",
		"SmokeShell"
	};
	respawnmagazines[] =
	{
		MAG_4("UK3CB_BAF_556_30Rnd"),
		MAG_3("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"ukcw_law80_magazine", 
		"ukcw_law80_magazine_spotting",
		"SmokeShell"
	};
};
class TWC_Infantry_2000_Regular_Woodland_Grenadier: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Grenadier";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW3",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW3",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[]=
	{
		"TWC_Weapon_L85A2_UGL_HWS_SUSAT3D",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L85A2_UGL_HWS_SUSAT3D",
		"CUP_launch_M72A6",
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
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
		nightItems[] = {
		"ACE_Flashlight_MX991",
		MAG_3("UGL_FlareWhite_F")
	};
};
class TWC_Infantry_2000_Regular_Woodland_Autorifleman: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Autorifleman";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW7",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW7",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L110A2_SUSAT3D",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L110A2_SUSAT3D",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("UK3CB_BAF_556_200Rnd"),
		"UK3CB_BAF_556_200Rnd_T",
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_2("UK3CB_BAF_556_200Rnd"),
		"UK3CB_BAF_556_200Rnd_T",
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_2000_Regular_Woodland_SectionCommander: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Section Commander";
	backpack = "TWC_Backpack_2000_Regular_Woodland_SectionCommander";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW2",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW2",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
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
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_MX991",
		"ACE_Flashlight_Maglite_ML300L",
		"B_IR_Grenade"
	};
};
class TWC_Infantry_2000_Regular_Woodland_2iC: TWC_Infantry_2000_Regular_Woodland_SectionCommander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "2iC";
	backpack = "TWC_Backpack_2000_Regular_Woodland_2iC";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW9",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW9",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};

//Platoon Command
class TWC_Infantry_2000_Regular_Woodland_Platoon_Commander: TWC_Infantry_Millennial_Base
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	scope = 2;
	displayName = "Platoon Commander";
	backpack = "TWC_Backpack_2000_Regular_Woodland_Platoon_Commander";
	TWC_isCommandRole = 1;
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
		"TWC_Weapon_L85A2_SUSAT3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_MX991",
		"ACE_Flashlight_Maglite_ML300L",
		"B_IR_Grenade"
	};
};
class TWC_Infantry_2000_Regular_Woodland_Platoon_Sergeant: TWC_Infantry_2000_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	backpack = "TWC_Backpack_2000_Regular_Woodland_Platoon_Sergeant";
	displayName = "Platoon Sergeant";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW9",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW9",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_2000_Regular_Woodland_Platoon_Medic: TWC_Infantry_2000_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_2000_Regular_Woodland_Platoon_Medic";
	TWC_isCommandRole = 0;
	attendant = 1;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW9",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_DPMW9",
		"UK3CB_BAF_H_Mk6_DPMW_A",
		"ItemCompass",
		"itemMap",
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
	weapons[] =
	{
		"UK3CB_BAF_L85A2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L85A2",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_2000_Regular_Woodland_Platoon_CSM: TWC_Infantry_2000_Regular_Woodland_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Company Sergeant Major";
	scope = 1;
	attendant = 1;
	engineer = 1;
};

//Company
class TWC_Infantry_2000_Regular_Woodland_Company_Commander: TWC_Infantry_2000_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Company Commander";
};
class TWC_Infantry_2000_Regular_Woodland_Company_2iC: TWC_Infantry_2000_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Company 2iC";
};
class TWC_Infantry_2000_Regular_Woodland_Company_Sergeant: TWC_Infantry_2000_Regular_Woodland_Platoon_CSM
{
	scope = 2;
};

//AT + AA
class TWC_Infantry_2000_Regular_Woodland_Javelin_Gunner: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Javelin Gunner";
	weapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_Javelin_CLU",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_Javelin_CLU",
		"Throw",
		"Put"
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
class TWC_Infantry_2000_Regular_Woodland_Javelin_Ass: TWC_Infantry_2000_Regular_Woodland_Javelin_Gunner
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Javelin Assistant";
	backpack = "TWC_Backpack_2000_Regular_Woodland_Javelin_Assistant";
	weapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"Throw",
		"Put"
	};
};
/*class TWC_Infantry_2000_Regular_Woodland_Starstreak_Gunner: TWC_Infantry_2000_Regular_Woodland_Javelin_Gunner
{
	displayName = "Starstreak Gunner";
};
class TWC_Infantry_2000_Regular_Woodland_Starstreak_Ass: TWC_Infantry_2000_Regular_Woodland_Starstreak_Gunner
{
	displayName = "Starstreak Assistant";
};*/

//Sniper Team
class TWC_Infantry_2000_Regular_Woodland_Sniper: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayname = "Sniper";
	uniformClass = "UK3CB_BAF_U_CombatUniform_DPMW_Ghillie_RM";
	weapons[] =
	{
		"TWC_Weapon_L96_Woodland",
		"UK3CB_BAF_L9A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L96_Woodland",
		"UK3CB_BAF_L9A1",
		"Throw",
		"Put"
	};
	linkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW",
		"CUP_H_PMC_PRR_Headset",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW",
		"CUP_H_PMC_PRR_Headset",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Tripod",
		"ACE_RangeCard"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Tripod",
		"ACE_RangeCard"
	};
	magazines[] =
	{
		MAG_6("UK3CB_BAF_762_L42A1_10Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_10Rnd_T"),
		MAG_3("UK3CB_BAF_9_13Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellGreen")
	};
	Respawnmagazines[] =
	{
		MAG_6("UK3CB_BAF_762_L42A1_10Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_10Rnd_T"),
		MAG_3("UK3CB_BAF_9_13Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellGreen")
	};
};
class TWC_Infantry_2000_Regular_Woodland_Spotter: TWC_Infantry_2000_Regular_Woodland_Sniper
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayname = "Spotter";
	backpack = "TWC_Backpack_2000_Regular_Woodland_Spotter";
	TWC_isCommandRole = 1;
	weapons[]=
	{
		"TWC_Weapon_L96_Woodland",
		"UK3CB_BAF_L9A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L96_Woodland",
		"UK3CB_BAF_L9A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	Items[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Kestrel4500"
	};
	respawnItems[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Kestrel4500"
	};
	magazines[]=
	{
		MAG_4("UK3CB_BAF_762_L42A1_10Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_10Rnd_T"),
		MAG_3("UK3CB_BAF_9_13Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	Respawnmagazines[]=
	{
		MAG_4("UK3CB_BAF_762_L42A1_10Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_10Rnd_T"),
		MAG_3("UK3CB_BAF_9_13Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};

//Artillery Crew
class TWC_Infantry_2000_Regular_Woodland_Artillery_Commander: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Artillery Commander";
	backpack = "TWC_Backpack_2000_Regular_Woodland_Artillery_Commander";
	TWC_isCommandRole = 1;
	weapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
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
class TWC_Infantry_2000_Regular_Woodland_Artillery_Crew: TWC_Infantry_2000_Regular_Woodland_Artillery_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Artillery Crew";
	backpack = "UK3CB_BAF_B_Bergen_DPMW_Rifleman_B";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_2000_Regular_Woodland_FO: TWC_Infantry_2000_Regular_Woodland_Artillery_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Forward Observer";
	backpack = "TWC_Backpack_2000_Regular_Woodland_FO";
	TWC_isCommandRole = 0;
};

//EOD Team
class TWC_Infantry_2000_Regular_Woodland_EOD_Commander: TWC_Infantry_2000_Regular_Woodland_Rifleman
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "EOD Commander";
	backpack = "TWC_Backpack_2000_Regular_Woodland_EOD_Commander";
	TWC_isCommandRole = 1;
	weapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"ACE_VMM3",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_SUSAT3D",
		"ACE_VMM3",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_M26_Clacker",
		"ACE_DefusalKit",
		"ACE_SpraypaintGreen",
		"ACE_SpraypaintRed",
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_M26_Clacker",
		"ACE_DefusalKit",
		"ACE_SpraypaintGreen",
		"ACE_SpraypaintRed",
		"ACE_MapTools"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("DemoCharge_Remote_Mag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("DemoCharge_Remote_Mag"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_2000_Regular_Woodland_EOD_Gunner: TWC_Infantry_2000_Regular_Woodland_EOD_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "EOD Gunner";
	backpack = "";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"TWC_Weapon_L135A1",
		"UK3CB_BAF_L9A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L135A1",
		"UK3CB_BAF_L9A1",
		"Throw",
		"Put"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_DefusalKit",
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_DefusalKit",
		"ACE_MapTools"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_127_10Rnd"),
		MAG_3("UK3CB_BAF_9_13Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_3("UK3CB_BAF_9_13Rnd"),
		MAG_2("SmokeShell")
	};
};

//Aircraft
class TWC_Infantry_2000_Regular_Woodland_FAC: TWC_Infantry_2000_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_2000_Regular_Woodland_FAC";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"TWC_Weapon_L85A2_UGL_SUSAT3D",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_UGL_SUSAT3D",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		MAG_3(SmokeShellBlue),
		MAG_3(SmokeShellRed),
		MAG_3(SmokeShellGreen),,
		"Laserbatteries"
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		MAG_3(SmokeShellBlue),
		MAG_3(SmokeShellRed),
		MAG_3(SmokeShellGreen),,
		"Laserbatteries"
	};
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L",
		"B_IR_Grenade"
	};
};
class TWC_Infantry_2000_Regular_Woodland_Helicopter_Pilot: TWC_Infantry_Millennial_Base
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	scope = 2;
	displayName = "Helicopter Pilot";
	uniformClass = "UK3CB_BAF_U_CombatUniform_DPMW_ShortSleeve";
	TWC_isCommandRole = 1;
	engineer = 1;
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
		"UK3CB_BAF_L22",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L22",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell")
	};
};

//FVs
class TWC_Infantry_2000_Regular_Woodland_Vehicle_Commander: TWC_Infantry_2000_Regular_Woodland_Helicopter_Pilot
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Vehicle Commander";
	uniformClass = "UK3CB_BAF_U_CombatUniform_DPMW";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Pilot_DPMW",
		"UK3CB_BAF_H_CrewHelmet_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Pilot_DPMW",
		"UK3CB_BAF_H_CrewHelmet_DPMW_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"UK3CB_BAF_L22",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L22",
		"ACE_Vector",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_2000_Regular_Woodland_Vehicle_Crew: TWC_Infantry_2000_Regular_Woodland_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_Regular_2000_Woodland)
	displayName = "Vehicle Crew";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"UK3CB_BAF_L22",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L22",
		"Throw",
		"Put"
	};
};
