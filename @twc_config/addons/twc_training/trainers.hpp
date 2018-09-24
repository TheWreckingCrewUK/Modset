class TWC_Units_Training_Trainer_Base: B_Soldier_base_F {
	scope = 1;
	displayName = "Training Base";
	faction = "TWC_Training";
	CATEGORY(TWC_Training)
	icon = "iconMan";
	nakedUniform = "U_BasicBody";
	uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
	backpack = "TWC_Backpack_Trainer";

	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"", true]";
	};

	linkedItems[] = {
		"UK3CB_BAF_V_Osprey_HiVis",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};

	respawnLinkedItems[] = {
		"UK3CB_BAF_V_Osprey_HiVis",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};

	items[] = {
		COMMON_LOADOUT
	};

	respawnItems[] = {
		COMMON_LOADOUT
	};

	weapons[] = {
		"Throw",
		"Put"
	};

	respawnWeapons[] = {
		"Throw",
		"Put"
	};

	magazines[] = {};
	respawnMagazines[] = {};
};

class TWC_Units_Training_Trainer: TWC_Units_Training_Trainer_Base {
	scope = 2;
	displayName = "Trainer";

	weapons[] = {
		"Throw",
		"Put",
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1"
	};
	
	respawnWeapons[] = {
		"Throw",
		"Put",
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"UK3CB_BAF_L131A1"
	};
	
	magazines[] = {
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_4("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_3("SmokeShell")
	};
	
	respawnMagazines[] = {
		MAG_2("UK3CB_BAF_9_17Rnd"),
		MAG_4("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_3("SmokeShell")
	};
};

class TWC_Units_Training_Medical_Trainer: TWC_Units_Training_Trainer_Base {
	scope = 2;
	displayName = "Trainer (Medical)";
	icon = "iconManMedic";
	backpack = "TWC_Backpack_Trainer_Medical";
	attendant = 1;
	
	weapons[] = {
		"Throw",
		"Put",
		"UK3CB_BAF_L85A2"
	};
	
	respawnWeapons[] = {
		"Throw",
		"Put",
		"UK3CB_BAF_L85A2"
	};
	
	magazines[] = {
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_4("SmokeShell")
	};
	
	respawnMagazines[] = {
		MAG_3("UK3CB_BAF_556_30Rnd"),
		MAG_4("SmokeShell")
	};
};