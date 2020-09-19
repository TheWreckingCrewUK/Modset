//REGULAR, WOODLAND
//Section
class TWC_Infantry_Modern_Regular_Woodland_Rifleman: TWC_Infantry_Modern_Base
{
	scope = 2;
	displayName = "Rifleman";
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"launch_NLAW_F",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"launch_NLAW_F",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Grenadier: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Grenadier";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Grenadier_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Grenadier_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[]=
	{
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
		"CUP_launch_M72A6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
		"CUP_launch_M72A6",
		"ACE_Vector",
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
		"UGL_FlareWhite_F",
		"UGL_FlareWhite_F",
		"UGL_FlareWhite_F",
		"Chemlight_green",
		"Chemlight_green"
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Autorifleman: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Autorifleman";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L110A2_ELCAN3D",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L110A2_ELCAN3D",
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
class TWC_Infantry_Modern_Regular_Woodland_MG: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Machine Gunner";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
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
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Marksman: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Marksman";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L129A1_Grippod_TA648",
		"launch_NLAW_F",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L129A1_Grippod_TA648",
		"launch_NLAW_F",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_20Rnd_T"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_20Rnd_T"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		"ACE_Flashlight_MX991",
		"UK3CB_BAF_MaxiKite",
		"Chemlight_green",
		"Chemlight_green"
	};
};
class TWC_Infantry_Modern_Regular_Woodland_SectionCommander: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Section Commander";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_SectionCommander";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
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
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
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
		"B_IR_Grenade",
		"ACE_HandFlare_White",
		"ACE_HandFlare_White",
		"Chemlight_green",
		"Chemlight_green"
	};
};
class TWC_Infantry_Modern_Regular_Woodland_2iC: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "2iC";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_2iC";
	TWC_isCommandRole = 1;
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
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
};

//Platoon
class TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander: TWC_Infantry_Modern_Regular_Woodland_SectionCommander
{
	displayName = "Platoon Commander";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Platoon_Commander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
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
		"B_IR_Grenade",
		"ACE_HandFlare_White",
		"ACE_HandFlare_White",
		"Chemlight_green",
		"Chemlight_green"
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Platoon_Sergeant: TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
{
	displayName = "Platoon Sergeant";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Platoon_Sergeant";
};
class TWC_Infantry_Modern_Regular_Woodland_Platoon_Medic: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Platoon_Medic";
	attendant = 1;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Medic_C",
		"UK3CB_BAF_H_Mk7_Camo_CESS_D",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Medic_C",
		"UK3CB_BAF_H_Mk7_Camo_CESS_D",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
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
class TWC_Infantry_Modern_Regular_Woodland_Platoon_Mortar: TWC_Infantry_Modern_Regular_Woodland_Platoon_Sergeant
{
	displayName = "Platoon Mortar";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Platoon_Mortar";
	TWC_isCommandRole = 0;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_F",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_F",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_M6",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_M6",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_7("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_7("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
		MAG_2("SmokeShell")
	};
	nightItems[] = {
		MAG_2("Chemlight_green"),
		MAG_4("UK3CB_BAF_1Rnd_60mm_Mo_Flare_White")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_CSM: TWC_Infantry_Modern_Regular_Woodland_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
	scope = 1;
	attendant = 1;
	engineer = 1;
};

//Company
class TWC_Infantry_Modern_Regular_Woodland_Company_Commander: TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
{
	displayName = "Company Commander";
};
class TWC_Infantry_Modern_Regular_Woodland_Company_2iC: TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
{
	displayName = "Company 2iC";
};
class TWC_Infantry_Modern_Regular_Woodland_Company_Sergeant: TWC_Infantry_Modern_Regular_Woodland_CSM
{
	scope = 2;
};

//AT + AA
class TWC_Infantry_Modern_Regular_Woodland_Javelin_Gunner: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Javelin Gunner";
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_Javelin_CLU",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
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
class TWC_Infantry_Modern_Regular_Woodland_Javelin_Ass: TWC_Infantry_Modern_Regular_Woodland_Javelin_Gunner
{
	displayName = "Javelin Assistant";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Javelin_Assistant";
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"Throw",
		"Put"
	};
};
/*class TWC_Infantry_Modern_Regular_Woodland_Starstreak_Gunner: TWC_Infantry_Modern_Regular_Woodland_Javelin_Gunner
{
	displayName = "Starstreak Gunner";
};
class TWC_Infantry_Modern_Regular_Woodland_Starstreak_Ass: TWC_Infantry_Modern_Regular_Woodland_Starstreak_Gunner
{
	displayName = "Starstreak Assistant";
};*/

//Sniper Team
class TWC_Infantry_Modern_Regular_Woodland_Sniper: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Sniper";
	uniformClass = "UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM";
	linkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_MTP",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_MTP",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"twc_l115a3_wd",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"twc_l115a3_wd",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_12("TWC_5Rnd_338_300gr_HPBT_Mag"),
		MAG_6("TWC_5Rnd_338_API526_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_12("TWC_5Rnd_338_300gr_HPBT_Mag"),
		MAG_6("TWC_5Rnd_338_API526_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Spotter: TWC_Infantry_Modern_Regular_Woodland_Sniper
{
	displayName = "Spotter";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Spotter";
	linkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_MTP",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_PLCE_Webbing_MTP",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L129A1_Spotter",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L129A1_Spotter",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("TWC_5Rnd_338_API526_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("TWC_5Rnd_338_API526_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};

	items[] = {
		MEDICAL_LOADOUT,
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
	
	respawnItems[] = {
		MEDICAL_LOADOUT,
		"ACE_Kestrel4500",
		"ACE_ATragMX"
	};
};

//Artillery Crew
class TWC_Infantry_Modern_Regular_Woodland_Artillery_Commander: TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
{
	displayName = "Artillery Commander";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Artillery_Commander";
};
class TWC_Infantry_Modern_Regular_Woodland_Artillery_Crew: TWC_Infantry_Modern_Regular_Woodland_Artillery_Commander
{
	displayName = "Artillery Crew";
	backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
	TWC_isCommandRole = 0;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_F",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_F",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_Modern_Regular_Woodland_FO: TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
{
	displayName = "Forward Observer";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_FO";
	TWC_isCommandRole = 0;
};

//Aircraft
class TWC_Infantry_Modern_Regular_Woodland_FAC: TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_Modern_Regular_Woodland_FAC";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
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
		MAG_3(SmokeShellGreen),
		"Laserbatteries"
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("SmokeShell"),
		MAG_3(SmokeShellBlue),
		MAG_3(SmokeShellRed),
		MAG_3(SmokeShellGreen),
		"Laserbatteries"
	};
	
	nightItems[] = {
		"B_IR_Grenade",
		"ACE_HandFlare_White",
		"ACE_HandFlare_White",
		"Chemlight_green",
		"Chemlight_green"
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Helicopter_Pilot: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Helicopter Pilot";
	TWC_isCommandRole = 1;
	engineer = 1;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Pilot_A",
		"UK3CB_BAF_H_PilotHelmetHeli_A",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Pilot_A",
		"UK3CB_BAF_H_PilotHelmetHeli_A",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"UK3CB_BAF_L22A2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L22A2",
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
class TWC_Infantry_Modern_Regular_Woodland_Vehicle_Commander: TWC_Infantry_Modern_Regular_Woodland_Helicopter_Pilot
{
	displayName = "Vehicle Commander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"UK3CB_BAF_L22A2",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L22A2",
		"ACE_Vector",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Vehicle_Crew: TWC_Infantry_Modern_Regular_Woodland_Vehicle_Commander
{
	displayName = "Vehicle Crew";
	TWC_isCommandRole = 0;
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};