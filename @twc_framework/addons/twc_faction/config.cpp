class CfgPatches {
	class twc_faction {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};
	};
};

// CfgFactionClasses is used for vehicles/units 
class CfgFactionClasses {
	class TWC_General {
		displayName = "TWC Operations - Multi-Era";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
	
	class TWC_ColdWar {
		displayName = "TWC Operations - Cold War";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
	
	class TWC_Millennial {
		displayName = "TWC Operations - Millennial";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
	
	class TWC_Modern {
		displayName = "TWC Operations - Modern";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
	
	class TWC_Training {
		displayName = "TWC Training";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

// CfgEditorCategories is used for props
class CfgEditorCategories {
	class TWC_Crates {
		displayName = "Ammo Boxes (TWC)"; 
	};
};

class CfgEditorSubcategories {
	// AmmoBoxes (will be changed to ERAs in the future)
	class TWC_Crates_Modern {
		displayName = "Modern";
	};
	
	class TWC_Crates_Millennial {
		displayName = "Millennial";
	};
	
	class TWC_Crates_ColdWar {
		displayName = "Cold War";
	};
	
	class TWC_Crates_Vehicles {
		displayName = "Vehicles";
	};
	
	class TWC_Crates_Other {
		displayName = "Other";
	};
	
	// Force Types
	class TWC_ForceType_Amphibious {
		displayName = "Amphibious Assault";
	};
	
	class TWC_ForceType_AirMobility {
		displayName = "Air Mobility";
	};
	
	class TWC_ForceType_AirAssault {
		displayName = "Air Assault";
	};
	
	class TWC_ForceType_Airborne {
		displayName = "Airborne";
	};
	
	class TWC_ForceType_Armoured {
		displayName = "Armoured";
	};
	
	class TWC_ForceType_Motorised {
		displayName = "Motorised";
	};
	
	class TWC_ForceType_LightMobility {
		displayName = "Light Protected Mobility";
	};
	
	class TWC_ForceType_HeavyMobility {
		displayName = "Heavy Protected Mobility";
	};
	
	class TWC_ForceType_Mechanised {
		displayName = "Mechanised";
	};
	
	// Attachments & Other
	class TWC_ForceType_Special {
		displayName = "Special";
	};
	
	// Unit Catergories
	class TWC_Training {
		displayName = "Men (Training)";
	};

	// Infantry Related
	class TWC_Infantry_Regular_Woodland {
		displayName = "Infantry (Woodland)";
	};
	
	class TWC_Infantry_Regular_Desert {
		displayName = "Infantry (Desert)";
	};
	
	class TWC_Infantry_Regular_Arctic {
		displayName = "Infantry (Arctic)";
	};
	
	class TWC_Infantry_Regular_Tropic {
		displayName = "Infantry (Tropic)";
	};
	
	class TWC_Infantry_Regular_NBC {
		displayName = "Infantry (NBC)";
	};
	
	class TWC_Infantry_Dismounted_Woodland {
		displayName = "Infantry (Dismounted, Woodland)";
	};
	
	class TWC_Infantry_Dismounted_Desert {
		displayName = "Infantry (Dismounted, Desert)";
	};
	
	class TWC_Infantry_Dismounted_Arctic {
		displayName = "Infantry (Dismounted, Arctic)";
	};
	
	class TWC_Infantry_Dismounted_Tropic {
		displayName = "Infantry (Dismounted, Tropic)";
	};
	
	class TWC_Infantry_Dismounted_NBC {
		displayName = "Infantry (Dismounted, NBC)";
	};
	
	class TWC_Infantry_Airborne_Woodland {
		displayName = "Infantry (Airborne, Woodland)";
	};
	
	class TWC_Infantry_Airborne_Desert {
		displayName = "Infantry (Airborne, Desert)";
	};
	
	class TWC_Infantry_COIN_Woodland {
		displayName = "Infantry (COIN, Woodland)";
	};
	
	class TWC_Infantry_COIN_Desert {
		displayName = "Infantry (COIN, Desert)";
	};
	
	class TWC_Infantry_COIN_Arctic {
		displayName = "Infantry (COIN, Arctic)";
	};
	
	class TWC_Infantry_COIN_Tropic {
		displayName = "Infantry (COIN, Tropic)";
	};
	
	class TWC_Infantry_COIN_NBC {
		displayName = "Infantry (COIN, NBC)";
	};
	
	class TWC_Infantry_COIN_Dismounted_Woodland {
		displayName = "Infantry (COIN, Dismounted, Woodland)";
	};
	
	class TWC_Infantry_COIN_Dismounted_Desert {
		displayName = "Infantry (COIN, Dismounted, Desert)";
	};
	
	class TWC_Infantry_COIN_Dismounted_Arctic {
		displayName = "Infantry (COIN, Dismounted, Arctic)";
	};
	
	class TWC_Infantry_COIN_Dismounted_Tropic {
		displayName = "Infantry (COIN, Dismounted, Tropic)";
	};
	
	class TWC_Infantry_COIN_Dismounted_NBC {
		displayName = "Infantry (COIN, Dismounted, NBC)";
	};
};