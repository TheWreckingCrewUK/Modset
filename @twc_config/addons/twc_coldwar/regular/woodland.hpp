//REGULAR, WOODLAND
//Base
class TWC_Infantry_ColdWar_Regular_Woodland_Base: B_Soldier_base_F
{
	scope=1;
	displayName="Base";
	faction="TWC_ColdWar";
	CATEGORY(TWC_Infantry_Regular_Woodland)
	icon="iconMan";
	nakedUniform="U_BasicBody";
	uniformClass="SP_60PatCombats_DPM_1_Item";
	backpack="";
	linkedItems[]=
	{
		"SP_P58_FightingOrderNBC",
		"SP_Helmet_MkV_OD_FoliageMid",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"SP_P58_FightingOrderNBC",
		"SP_Helmet_MkV_OD_FoliageMid",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
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
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put"
	};
	magazines[]= {};
	respawnmagazines[]= {};
	
	nightItems[] = {
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L"
	};
};

//Section
class TWC_Infantry_ColdWar_Regular_Woodland_Rifleman: TWC_Infantry_ColdWar_Regular_Woodland_Base
{
	scope=2;
	displayName="Rifleman";
	weapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"sp_l1a1_law66",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"sp_l1a1_law66",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_7("UK3CB_BAF_762_20Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SP_law66_round",
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_7("UK3CB_BAF_762_20Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SP_law66_round",
		"SmokeShell"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Rifleman_SUIT: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName="Rifleman (SUIT)";
	weapons[]=
	{
		"TWC_L1A1_SUIT",
		"sp_l1a1_law66",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_L1A1_SUIT",
		"sp_l1a1_law66",
		"Throw",
		"Put"
	};
		magazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SP_law66_round",
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SP_law66_round",
		"SmokeShell"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_SectionCommander: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName = "Section Commander";
	backpack = "TWC_Backpack_ColdWar_Regular_SectionCommander";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
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
	weapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Binocular",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L",
		"ACE_Flashlight_MX991"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_2iC: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName = "2iC";
	TWC_isCommandRole = 1;
	backpack = "TWC_Backpack_ColdWar_Regular_2iC";
	weapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_AT: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName="AT Rifleman";
	weapons[]=
	{
		"sp_smg_sterling",
		"twc_l14A1_scoped",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"twc_l14A1_scoped",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_7("SP_30Rnd_9x19_L2A3_Sterling"),
		"ukcw_l14a1_HEAT",
		"CUP_HandGrenade_L109A2_HE",
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_7("SP_30Rnd_9x19_L2A3_Sterling"),
		"ukcw_l14a1_HEAT",
		"CUP_HandGrenade_L109A2_HE",
		"SmokeShell"
	};	
};
class TWC_Infantry_ColdWar_Regular_Woodland_ASSAT: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName="Assistant AT Rifleman";
	backpack="TWC_Backpack_ColdWar_Regular_ASSAT";
	weapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_7("UK3CB_BAF_762_20Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_7("UK3CB_BAF_762_20Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		"SmokeShell"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_MG: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName="Machine Gunner";
	weapons[]=
	{
		"UK3CB_BAF_L7A2",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L7A2",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		"SmokeShell"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_ASSMG: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName="Assistant Machine Gunner";
	backpack="TWC_Backpack_ColdWar_Regular_ASSMG";
	weapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		"SmokeShell"
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("UK3CB_BAF_762_20Rnd_T"),
		"SmokeShell"
	};
};

//Platoon Command
class TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander: TWC_Infantry_ColdWar_Regular_Woodland_Base
{
	scope=2;
	displayName="Platoon Commander";
	backpack="TWC_Backpack_ColdWar_Regular_Platoon_Commander";
	TWC_isCommandRole = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	linkedItems[]=
	{
		"SP_Helmet_MkV_ODNet",
		"SP_P58_FightingOrderNBC",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"SP_Helmet_MkV_ODNet",
		"SP_P58_FightingOrderNBC",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
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
	weapons[]=
	{
		"sp_smg_sterling",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"Binocular",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L",
		"ACE_Flashlight_MX991"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Sergeant: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander
{
	displayName="Platoon Sergeant";
	backpack="TWC_Backpack_ColdWar_Regular_Platoon_Sergeant";
	weapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"Binocular",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Medic: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander
{
	displayName="Platoon Medic";
	backpack="TWC_Backpack_ColdWar_Regular_Platoon_Medic";
	TWC_isCommandRole = 0;
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
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
	linkedItems[]=
	{
		"SP_Helmet_MkV_ODMedicNet",
		"SP_P58_FightingOrderNBC",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"SP_Helmet_MkV_ODMedicNet",
		"SP_P58_FightingOrderNBC",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Mortar: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName = "Platoon Mortar";
	backpack = "TWC_Backpack_ColdWar_Regular_Platoon_Mortar";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
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
	weapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"twc_2inch_bag",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"UK3CB_BAF_L1A1_Wood",
		"twc_2inch_bag",
		"Binocular",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_4("twc_2inch_he_1rnd")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_762_20Rnd"),
		MAG_4("twc_2inch_he_1rnd")
	};
	nightItems[] = {
		MAG_6("twc_2inch_illum_1rnd"),
		"ACE_Flashlight_Maglite_ML300L"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_CSM: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Sergeant
{
	displayName = "Company Sergeant Major";
	scope = 1;
	attendant = 1;
	engineer = 1;
};

//Company
class TWC_Infantry_ColdWar_Regular_Woodland_Company_Commander: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander
{
	displayName = "Company Commander";
};
class TWC_Infantry_ColdWar_Regular_Woodland_Company_2iC: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander
{
	displayName = "Company 2iC";
};
class TWC_Infantry_ColdWar_Regular_Woodland_Company_Sergeant: TWC_Infantry_ColdWar_Regular_Woodland_CSM
{
	scope = 2;
};

//AT + AA
class TWC_Infantry_ColdWar_Regular_Woodland_MILAN_Gunner: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayName="MILAN Gunner";
	backpack="ukcw_milan_gun_bag";
	weapons[]=
	{
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_MILAN_Ass: TWC_Infantry_ColdWar_Regular_Woodland_MILAN_Gunner
{
	displayName="MILAN Assistant";
	backpack="TWC_Backpack_ColdWar_Regular_MILAN_Ass";
};
class TWC_Infantry_ColdWar_Regular_Woodland_Blowpipe_Gunner: TWC_Infantry_ColdWar_Regular_Woodland_MILAN_Gunner
{
	displayName="Blowpipe Gunner";
	backpack="";
	weapons[]=
	{
		"sp_smg_sterling",
		"SP_Blowpipe",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"SP_Blowpipe",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell"),
		"SP_Blowpipe_round"
	};
	respawnmagazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell"),
		"SP_Blowpipe_round"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Blowpipe_Ass: TWC_Infantry_ColdWar_Regular_Woodland_MILAN_Ass
{
	displayName="Blowpipe Assistant";
	backpack="TWC_Backpack_ColdWar_Regular_Blowpipe_Ass";
};

//Sniper Team
class TWC_Infantry_ColdWar_Regular_Woodland_Sniper: TWC_Infantry_ColdWar_Regular_Woodland_Rifleman
{
	displayname = "Sniper";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	weapons[]=
	{
		"TWC_Weapon_L42A1_No32",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_Weapon_L42A1_No32",
		"Throw",
		"Put"
	};
	Items[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Tripod",
		"ACE_RangeCard"
	};
	respawnItems[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Tripod",
		"ACE_RangeCard"
	};
	magazines[]=
	{
		MAG_6("SP_1Rnd_762_L42_Tracer"),
		MAG_4("SP_10Rnd_762_L42"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellGreen")
	};
	Respawnmagazines[]=
	{
		MAG_6("SP_1Rnd_762_L42_Tracer"),
		MAG_4("SP_10Rnd_762_L42"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell"),
		MAG_2("SmokeShellGreen")
	};
	
	nightItems[] = {
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L",
		"ACE_Flashlight_MX991"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Spotter: TWC_Infantry_ColdWar_Regular_Woodland_Sniper
{
	displayname = "Spotter";
	backpack="TWC_Backpack_ColdWar_Regular_Spotter";
	TWC_isCommandRole = 1;
	weapons[]=
	{
		"TWC_L1A1_SUIT",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"TWC_L1A1_SUIT",
		"Throw",
		"Put"
	};
	Items[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Clacker"
	};
	respawnItems[]=
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"ACE_Clacker"
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
class TWC_Infantry_ColdWar_Regular_Woodland_Artillery_Commander: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander
{
	displayName="Artillery Commander";
	backpack="TWC_Backpack_ColdWar_Regular_Artillery_Commander";
};
class TWC_Infantry_ColdWar_Regular_Woodland_Artillery_Crew: TWC_Infantry_ColdWar_Regular_Woodland_Artillery_Commander
{
	displayName="Artillery Crew";
	backpack="SP_Backpack_LargePack";
	TWC_isCommandRole = 0;
};
class TWC_Infantry_ColdWar_Regular_Woodland_FO: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander
{
	displayName="Forward Observer";
	backpack="TWC_Backpack_ColdWar_Regular_FO";
	TWC_isCommandRole = 0;
};

//Aircraft
class TWC_Infantry_ColdWar_Regular_Woodland_FAC: TWC_Infantry_ColdWar_Regular_Woodland_Platoon_Commander
{
	displayName="Forward Air Controller";
	backpack="TWC_Backpack_ColdWar_Regular_FAC";
	TWC_isCommandRole = 0;
	weapons[]=
	{
		"sp_smg_sterling",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
	respawnmagazines[]=
	{
		MAG_5("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Helicopter_Pilot: TWC_Infantry_ColdWar_Regular_Woodland_Base
{
	scope=2;
	displayName="Helicopter Pilot";
	uniformClass="SP_60PatCombatsRolled_DPM_1_Item";
	TWC_isCommandRole = 1;
	engineer = 1;
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	linkedItems[]=
	{
		"SP_P58_UrbanPatrolNBC",
		"CUP_H_BAF_Helmet_Pilot",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"SP_P58_UrbanPatrolNBC",
		"CUP_H_BAF_Helmet_Pilot",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
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
	weapons[]=
	{
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
	magazines[]=
	{
		MAG_3("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[]=
	{
		MAG_3("SP_30Rnd_9x19_L2A3_Sterling"),
		MAG_2("SmokeShell")
	};
	
	nightItems[] = {
		MAG_2("ACE_HandFlare_White"),
		MAG_2("Chemlight_green"),
		"ACE_Flashlight_Maglite_ML300L",
		"ACE_Flashlight_MX991"
	};
	
	nightLinkedItems[] = {
		"twc_nightvision_gen2"
	};
};

//FVs
class TWC_Infantry_ColdWar_Regular_Woodland_Vehicle_Commander: TWC_Infantry_ColdWar_Regular_Woodland_Helicopter_Pilot
{
	displayName="Vehicle Commander";
	backpack="SP_Backpack_LargePack";
	linkedItems[]=
	{
		"SP_P58_UrbanPatrolNBC",
		"UK3CB_BAF_H_Beret_PWRR_PRR",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"SP_P58_UrbanPatrolNBC",
		"UK3CB_BAF_H_Beret_PWRR_PRR",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[]=
	{
		"sp_smg_sterling",
		"Binocular",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"Binocular",
		"Throw",
		"Put"
	};
	
	nightLinkedItems[] = {};
};
class TWC_Infantry_ColdWar_Regular_Woodland_Vehicle_Crew: TWC_Infantry_ColdWar_Regular_Woodland_Vehicle_Commander
{
	displayName="Vehicle Crew";
	TWC_isCommandRole = 0;
	class EventHandlers: EventHandlers {
		init = "";
	};
	weapons[]=
	{
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
	respawnweapons[]=
	{
		"sp_smg_sterling",
		"Throw",
		"Put"
	};
};
