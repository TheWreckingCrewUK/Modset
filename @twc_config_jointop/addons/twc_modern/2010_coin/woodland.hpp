//COIN, WOODLAND
//Section
class TWC_Infantry_Modern_COIN_Woodland_Pointman: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Pointman";
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_Regular_Woodland_Pointman";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"grad_paceCountBeads_functions_paceCountBeads"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"grad_paceCountBeads_functions_paceCountBeads"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"CUP_launch_M72A6",
		"ACE_VMM3",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"CUP_launch_M72A6",
		"ACE_VMM3",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Grenadier: TWC_Infantry_Modern_Regular_Woodland_Grenadier
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
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
		"CUP_launch_M72A6",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
		"CUP_launch_M72A6",
		"UK3CB_BAF_L131A1",
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
class TWC_Infantry_Modern_COIN_Woodland_Autorifleman: TWC_Infantry_Modern_Regular_Woodland_Autorifleman
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_SpareBarrel_Item"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_SpareBarrel_Item"
	};
	weapons[] =
	{
		"TWC_Weapon_L110A2_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L110A2_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("UK3CB_BAF_556_200Rnd"),
		"UK3CB_BAF_556_200Rnd_T",
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_2("UK3CB_BAF_556_200Rnd"),
		"UK3CB_BAF_556_200Rnd_T",
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_MG: TWC_Infantry_Modern_Regular_Woodland_MG
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_SpareBarrel_Item"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_SpareBarrel_Item"
	};
	weapons[] =
	{
		"UK3CB_BAF_L7A2",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L7A2",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Marksman: TWC_Infantry_Modern_Regular_Woodland_Marksman
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_SpareBarrel_Item"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_SpareBarrel_Item"
	};
	weapons[] =
	{
		"TWC_Weapon_L129A1_Grippod_TA648",
		"CUP_launch_M72A6",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L129A1_Grippod_TA648",
		"CUP_launch_M72A6",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_20Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_20Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_SectionCommander: TWC_Infantry_Modern_Regular_Woodland_SectionCommander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_SectionCommander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"ItemAndroid",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"ItemAndroid",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_2iC: TWC_Infantry_Modern_Regular_Woodland_2iC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_2iC";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_EntrenchingTool"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_2("ACE_CableTie"),
		"ACE_MapTools",
		"ACE_EntrenchingTool"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};

//Platoon
class TWC_Infantry_Modern_COIN_Woodland_Platoon_Commander: TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Commander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Platoon_Sergeant: TWC_Infantry_Modern_Regular_Woodland_Platoon_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Sergeant";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Platoon_Medic: TWC_Infantry_Modern_Regular_Woodland_Platoon_Medic
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Medic";
	Items[] =
	{
		MEDICAL_LOADOUT,
		MAG_4("ACE_salineIV_250"),
		MAG_2("ACE_CableTie")
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		MAG_4("ACE_salineIV_250"),
		MAG_2("ACE_CableTie")
	};
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_SUSAT",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_SUSAT",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Platoon_Mortar: TWC_Infantry_Modern_Regular_Woodland_Platoon_Mortar
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Mortar";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_M6",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_M6",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_7("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_7("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_CSM: TWC_Infantry_Modern_Regular_Woodland_CSM
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Sergeant";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};

//Company
class TWC_Infantry_Modern_COIN_Woodland_Company_Commander: TWC_Infantry_Modern_Regular_Woodland_Company_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Commander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Company_2iC: TWC_Infantry_Modern_Regular_Woodland_Company_2iC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Commander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Company_Sergeant: TWC_Infantry_Modern_Regular_Woodland_Company_Sergeant
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Platoon_Sergeant";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};

//AT
class TWC_Infantry_Modern_COIN_Woodland_Javelin_Gunner: TWC_Infantry_Modern_Regular_Woodland_Javelin_Gunner
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
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
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_Javelin_CLU",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_Javelin_CLU",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Javelin_Ass: TWC_Infantry_Modern_Regular_Woodland_Javelin_Ass
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Javelin_Assistant";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
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
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};

//Sniper Team
class TWC_Infantry_Modern_COIN_Woodland_Sniper: TWC_Infantry_Modern_Regular_Woodland_Sniper
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
};
class TWC_Infantry_Modern_COIN_Woodland_Spotter: TWC_Infantry_Modern_Regular_Woodland_Spotter
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Spotter";
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
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
};

//Artillery Crew
class TWC_Infantry_Modern_COIN_Woodland_Artillery_Commander: TWC_Infantry_Modern_Regular_Woodland_Artillery_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_Artillery_Commander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Artillery_Crew: TWC_Infantry_Modern_Regular_Woodland_Artillery_Crew
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_FO: TWC_Infantry_Modern_Regular_Woodland_FO
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_FO";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};

//Aircraft
class TWC_Infantry_Modern_COIN_Woodland_FAC: TWC_Infantry_Modern_Regular_Woodland_FAC
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	backpack = "TWC_Backpack_Modern_COIN_Woodland_FAC";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_H_Mk7_Camo_D",
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
	weapons[] =
	{
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A2_UGL_ELCAN3D",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell"),
		MAG_3(SmokeShellBlue),
		MAG_3(SmokeShellRed),
		MAG_3(SmokeShellGreen),
		"Laserbatteries"
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell"),
		MAG_3(SmokeShellBlue),
		MAG_3(SmokeShellRed),
		MAG_3(SmokeShellGreen),
		"Laserbatteries"
	};
};

//FVs
class TWC_Infantry_Modern_COIN_Woodland_Vehicle_Commander: TWC_Infantry_Modern_Regular_Woodland_Vehicle_Commander
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Holster",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Holster",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L22A2_SUSAT",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L22A2_SUSAT",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_COIN_Woodland_Vehicle_Crew: TWC_Infantry_Modern_Regular_Woodland_Vehicle_Crew
{
	CATEGORY(TWC_Infantry_COIN_Woodland)
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Holster",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Holster",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L22A2_SUSAT",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L22A2_SUSAT",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
