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
	
	class TWC_Millenial {
		displayName = "TWC Operations - Millennial";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
	
	class TWC_Millennial: TWC_Millenial {};
	
	class TWC_Modern {
		displayName = "TWC Operations - Modern";
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
	
	// Infantry Related
	class TWC_Infantry_Regular {
		displayName = "Infantry";
	};
	
	class TWC_Infantry_Dismounted {
		displayName = "Infantry - Dismounted";
	};
	
	class TWC_Infantry_Paratroopers {
		displayName = "Paratroopers";
	};
	
	class TWC_Infantry_Regular_COIN {
		displayName = "Infantry (COIN)";
	};
	
	class TWC_Infantry_Dismounted_COIN {
		displayName = "Infantry (COIN) - Dismounted";
	};
};