//REGULAR, WOODLAND
//Section
class TWC_Infantry_2020_Regular_Woodland_Rifleman: TWC_Infantry_2020_Base
{
	scope = 2;
	displayName = "Rifleman";
	CATEGORY(TWC_Infantry_2020_Regular_Woodland)
	backpack = "TWC_Backpack_2020_Regular_Woodland";
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"launch_NLAW_F",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"launch_NLAW_F",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_2020_Regular_Woodland_Grenadier: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Grenadier";
	backpack = "TWC_Backpack_2020_Regular_Woodland";
	linkedItems[] =
	{
		"mpx_virtus_taco_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_taco_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[]=
	{
		"TWC_Weapon_L85A3_UGL_LDS",
		"UK3CB_BAF_L131A1",
		"CUP_launch_M72A6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_UGL_LDS",
		"UK3CB_BAF_L131A1",
		"CUP_launch_M72A6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
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
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_10("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		MAG_3("UGL_FlareWhite_F"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_MX991",
		"ACE_Flashlight_Maglite_ML300L"
	};
};
class TWC_Infantry_2020_Regular_Woodland_MG: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Machine Gunner";
	backpack = "TWC_Backpack_2020_Regular_Woodland";
	linkedItems[] =
	{
		"mpx_virtus2_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus2_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
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
		MAG_2("UK3CB_BAF_9_17Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_2020_Regular_Woodland_Marksman: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Marksman";
	backpack = "TWC_Backpack_2020_Regular_Woodland";
	linkedItems[] =
	{
		"mpx_virtus3_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus3_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L129A1_Grippod_TA648",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L129A1_Grippod_TA648",
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
	
	nightItems[] = {
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_MX991",
		"ACE_Flashlight_Maglite_ML300L",
		"UK3CB_BAF_MaxiKite"
	};
};
class TWC_Infantry_2020_Regular_Woodland_SectionCommander: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Section Commander";
	backpack = "TWC_Backpack_2020_Regular_Woodland_SectionCommander";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"mpx_virtus_taco2_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_taco2_p",
		"mpx_cobra_scrim",
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
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
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
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"B_IR_Grenade",
		"ACE_Flashlight_MX991",
		"ACE_Flashlight_Maglite_ML300L"
	};
};
class TWC_Infantry_2020_Regular_Woodland_2iC: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "2iC";
	backpack = "TWC_Backpack_2020_Regular_Woodland_2iC";
	TWC_isCommandRole = 1;
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
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
class TWC_Infantry_2020_Regular_Woodland_LightCavCommander: TWC_Infantry_2020_Regular_Woodland_Rifleman
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
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
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
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"B_IR_Grenade",
		"ACE_Flashlight_MX991",
		"ACE_Flashlight_Maglite_ML300L"
	};
};
class TWC_Infantry_2020_Regular_Woodland_LightCavCrew: TWC_Infantry_2020_Regular_Woodland_Rifleman
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
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
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
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"B_IR_Grenade",
		"ACE_Flashlight_MX991",
		"ACE_Flashlight_Maglite_ML300L"
	};
};
//Platoon
class TWC_Infantry_2020_Regular_Woodland_Platoon_Commander: TWC_Infantry_2020_Regular_Woodland_SectionCommander
{
	displayName = "Platoon Commander";
	backpack = "TWC_Backpack_2020_Regular_Woodland_Platoon_Commander";
	linkedItems[] =
	{
		"mpx_virtus_admin_p",
		"mpx_cobra_patch",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_admin_p",
		"mpx_cobra_patch",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
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
class TWC_Infantry_2020_Regular_Woodland_Platoon_Sergeant: TWC_Infantry_2020_Regular_Woodland_Platoon_Commander
{
	displayName = "Platoon Sergeant";
	backpack = "TWC_Backpack_2020_Regular_Woodland_Platoon_Sergeant";
	linkedItems[] =
	{
		"mpx_virtus2_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus2_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_2020_Regular_Woodland_Platoon_Medic: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_2020_Regular_Woodland_Platoon_Medic";
	attendant = 1;
	linkedItems[] =
	{
		"mpx_virtus_Medic_p",
		"mpx_cobra_catseyes",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_Medic_p",
		"mpx_cobra_catseyes",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
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
class TWC_Infantry_2020_Regular_Woodland_Platoon_Mortar: TWC_Infantry_2020_Regular_Woodland_Platoon_Sergeant
{
	displayName = "Platoon Mortar";
	backpack = "TWC_Backpack_2020_Regular_Woodland_Platoon_Mortar";
	TWC_isCommandRole = 0;
	linkedItems[] =
	{
		"mpx_virtus_taco_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_taco_p",
		"mpx_cobra_scrim",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_M6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_M6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_7("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_7("UK3CB_BAF_1Rnd_60mm_Mo_Shells"),
		MAG_2("SmokeShell")
	};
	nightItems[] = {
		MAG_2("Chemlight_green"),
		MAG_4("UK3CB_BAF_1Rnd_60mm_Mo_Flare_White"),
		"ACE_Flashlight_Maglite_ML300L"
	};
};
class TWC_Infantry_2020_Regular_Woodland_CSM: TWC_Infantry_2020_Regular_Woodland_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
	scope = 1;
	attendant = 1;
	engineer = 1;
};

//Company
class TWC_Infantry_2020_Regular_Woodland_Company_Commander: TWC_Infantry_2020_Regular_Woodland_Platoon_Commander
{
	displayName = "Company Commander";
};
class TWC_Infantry_2020_Regular_Woodland_Company_2iC: TWC_Infantry_2020_Regular_Woodland_Platoon_Commander
{
	displayName = "Company 2iC";
};
class TWC_Infantry_2020_Regular_Woodland_Company_Sergeant: TWC_Infantry_2020_Regular_Woodland_CSM
{
	scope = 2;
};

//AT + AA
class TWC_Infantry_2020_Regular_Woodland_Javelin_Gunner: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Javelin Gunner";
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_Javelin_CLU",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"UK3CB_BAF_Javelin_CLU",
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
class TWC_Infantry_2020_Regular_Woodland_Javelin_Ass: TWC_Infantry_2020_Regular_Woodland_Javelin_Gunner
{
	displayName = "Javelin Assistant";
	backpack = "TWC_Backpack_2020_Regular_Woodland_Javelin_Assistant";
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_Javelin_Slung_Tube",
		"Throw",
		"Put"
	};
};
/*class TWC_Infantry_2020_Regular_Woodland_Starstreak_Gunner: TWC_Infantry_2020_Regular_Woodland_Javelin_Gunner
{
	displayName = "Starstreak Gunner";
};
class TWC_Infantry_2020_Regular_Woodland_Starstreak_Ass: TWC_Infantry_2020_Regular_Woodland_Starstreak_Gunner
{
	displayName = "Starstreak Assistant";
};*/

//Sniper Team
class TWC_Infantry_2020_Regular_Woodland_Sniper: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Sniper";
	backpack = "";
	uniformClass = "UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM";
	linkedItems[] =
	{
		"mpx_virtus4_p",
		"mpx_cobra",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus4_p",
		"mpx_cobra",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_RangeCard"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_RangeCard"
	};
	weapons[] =
	{
		"TWC_Weapon_L115A3_Regular_Sniper",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L115A3_Regular_Sniper",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_10("TWC_5Rnd_338_300gr_HPBT_Mag"),
		MAG_6("TWC_5Rnd_338_API526_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_10("TWC_5Rnd_338_300gr_HPBT_Mag"),
		MAG_6("TWC_5Rnd_338_API526_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_2020_Regular_Woodland_Spotter: TWC_Infantry_2020_Regular_Woodland_Sniper
{
	displayName = "Spotter";
	backpack = "TWC_Backpack_2020_Regular_Woodland_Spotter";
	linkedItems[] =
	{
		"mpx_virtus4_p",
		"mpx_cobra",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus4_p",
		"mpx_cobra",
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
		MAG_12("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_6("TWC_5Rnd_338_API526_Mag"),
		MAG_6("TWC_5Rnd_338_300gr_HPBT_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_12("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_6("TWC_5Rnd_338_API526_Mag"),
		MAG_6("TWC_5Rnd_338_300gr_HPBT_Mag"),
		MAG_3("UK3CB_BAF_9_17Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_Kestrel4500",
		"ACE_microDAGR",
		"ACE_MapTools"
	};
};

//Artillery Crew
class TWC_Infantry_2020_Regular_Woodland_Artillery_Commander: TWC_Infantry_2020_Regular_Woodland_Platoon_Commander
{
	displayName = "Artillery Commander";
	backpack = "TWC_Backpack_2020_Regular_Woodland_Artillery_Commander";
};
class TWC_Infantry_2020_Regular_Woodland_Artillery_Crew: TWC_Infantry_2020_Regular_Woodland_Artillery_Commander
{
	displayName = "Artillery Crew";
	backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
	TWC_isCommandRole = 0;
	linkedItems[] =
	{
		"mpx_virtus4",
		"mpx_cobra",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus4",
		"mpx_cobra",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_2020_Regular_Woodland_FO: TWC_Infantry_2020_Regular_Woodland_Platoon_Commander
{
	displayName = "Forward Observer";
	backpack = "TWC_Backpack_2020_Regular_Woodland_FO";
	TWC_isCommandRole = 0;
};

//Aircraft
class TWC_Infantry_2020_Regular_Woodland_FAC: TWC_Infantry_2020_Regular_Woodland_Platoon_Commander
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_2020_Regular_Woodland_FAC";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"TWC_Weapon_L85A3_UGL_LDS",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_L85A3_UGL_LDS",
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
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L",
		"B_IR_Grenade"
	};
};
class TWC_Infantry_2020_Regular_Woodland_Helicopter_Pilot: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "Helicopter Pilot";
	TWC_isCommandRole = 1;
	engineer = 1;
	backpack = "mpx_camel";
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
class TWC_Infantry_2020_Regular_Woodland_UAVOp: TWC_Infantry_2020_Regular_Woodland_Rifleman
{
	displayName = "UAV Operator";
	backpack = "B_UAV_01_backpack_F";
	linkedItems[] =
	{
		"mpx_virtus_admin_p",
		"mpx_cobra_patch",
		"ItemCompass",
		"B_UavTerminal",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus_admin_p",
		"mpx_cobra_patch",
		"ItemCompass",
		"B_UavTerminal",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"TWC_Weapon_L85A3_LDS",
		"UK3CB_BAF_L131A1",
		"Throw",
		"Put"
	};
};

//FVs
class TWC_Infantry_2020_Regular_Woodland_Vehicle_Commander: TWC_Infantry_2020_Regular_Woodland_SectionCommander
{
	displayName = "Vehicle Commander";
	engineer = 1;
	linkedItems[] =
	{
		"mpx_virtus4",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus4",
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
class TWC_Infantry_2020_Regular_Woodland_Vehicle_Crew: TWC_Infantry_2020_Regular_Woodland_Vehicle_Commander
{
	displayName = "Vehicle Crew";
	backpack = "";
	TWC_isCommandRole = 0;
	engineer = 1;
	linkedItems[] =
	{
		"mpx_virtus4",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"mpx_virtus4",
		"UK3CB_BAF_H_CrewHelmet_A",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
