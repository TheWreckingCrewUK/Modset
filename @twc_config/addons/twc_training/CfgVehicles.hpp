class CfgVehicles {
	class B_Soldier_base_F;
	
	class TWC_Units_Training_Trainer: B_Soldier_base_F {
		scope = 2;
		displayName = "Trainer";
		faction = "TWC_Training";
		editorSubcategory = "TWC_Training";
		vehicleClass = "TWC_Training";
		icon = "iconManLeader":
		nakedUniform = "U_BasicBody";
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
		
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"", true]";
		};
		
		linkedItems[] = {
			"UK3CB_BAF_V_Osprey_HiVis",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		
		respawnLinkedItems[] = {
			"UK3CB_BAF_V_Osprey_HiVis",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		
		Items[] = {
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACE_MapTools",
			"ACE_EarPlugs"
		};
		
		respawnitems[] = {
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACRE_PRC343",
			"ACE_EarPlugs"
		};
		
		weapons[] = {
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};
		
		respawnWeapons[] = {
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};
		
		magazines[] = {
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		
		respawnMagazines[] = {
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
};