class CfgVehicles {
	class UK3CB_BAF_B_Bergen_MTP_SL_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Medic_L_A;
	
	class TWC_Backpack_Trainer: UK3CB_BAF_B_Bergen_MTP_SL_L_A {
		scope = 1;
		mass = 59.84;
		
		class TransportItems {
			class _xx_PRC_117F {
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		
		class TransportMagazines {
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = 2;
			};

			class _xx_Smoke_Red {
				magazine = "SmokeShellRed";
				count = 3;
			};

			class _xx_Smoke_Green {
				magazine = "SmokeShellGreen";
				count = 3;
			};

			class _xx_Smoke_Blue {
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
	};
	
	class TWC_Backpack_Trainer_Medical: UK3CB_BAF_B_Bergen_MTP_Medic_L_A {
		scope = 1;
		class TransportItems {
			class _xx_Bandage {
				name = "ACE_fieldDressing";
				count = 12;
			};
			
			class _xx_Morphine {
				name = "ACE_morphine";
				count = 10;
			};
			
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 15;
			};
			
			class _xxACE_quikclot {
				name = "ACE_quikclot";
				count = 6;
			};
			
			class _xxACE_adenosine {
				name = "ACE_adenosine";
				count = 4;
			};
			
			class _xxACE_atropine {
				name = "ACE_atropine";
				count = 4;
			};
			
			class _xxACE_epinephrine {
				name = "ACE_epinephrine";
				count = 10;
			};
			
			class _xxACE_packingBandage {
				name = "ACE_packingBandage";
				count = 15;
			};
			
			class _xxACE_personalAidKit {
				name = "ACE_personalAidKit";
				count = 1;
			};
			
			class _xxACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 6;
			};
			
			class _xxACE_tourniquet {
				name = "ACE_tourniquet";
				count = 4;
			};
		};
		
		class TransportMagazines {
			class _xx_Smoke {
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	
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
		backpack = "TWC_Backpack_Trainer";
		
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
	
	class TWC_Units_Training_Medical_Trainer: TWC_Units_Training_Trainer {
		displayName = "Trainer (Medical)";
		icon = "iconManMedic";
		backpack = "TWC_Backpack_Trainer_Medical";
		attendant = 1;
		
		weapons[] = {
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2"
		};

		respawnweapons[] = {
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2"
		};

		magazines[] = {
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};

		respawnmagazines[] = {
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
};