class CfgPatches {
	class TWC_AmmoBoxes {
		/* units[]= { // old names, do not reuse to avoid conflict
			"TWC_modern_Operation_Ammobox",
			"TWC_Coin_Operation_Ammobox",
			"TWC_ColdWar_Operation_Ammobox",
			"TWC_1990_Operation_Ammobox",
			"TWC_modern_USSR_Ammobox",
			"TWC_Vehicle_Ammo_ColdWar",
			"TWC_modern_Warrior_Ammobox"
		}; */
		
		units[] = {
			// Base Classes (inherited from)
			"TWC_AmmoBox_Base",
			"TWC_AmmoBox_Portable",
			"TWC_AmmoBox_Vehicle",
			"TWC_AmmoBox_Medical",

			// Modern
			"TWC_AmmoBox_Modern_Base",
			"TWC_AmmoBox_Modern_Section_Portable",
			
			"TWC_AmmoBox_Modern_COIN_Base",
			"TWC_AmmoBox_Modern_COIN_Section_Portable",

			"TWC_AmmoBox_Modern_Mechanised_Base",
			"TWC_AmmoBox_Modern_Mechanised_Section_Portable",
			
			"TWC_AmmoBox_Modern_Javelin_Portable",
			"TWC_AmmoBox_Modern_Sniper_Portable",
			"TWC_AmmoBox_Modern_M6_Portable",    // M6-895, 60mm Mortar
			
			// Millennial
			"TWC_AmmoBox_Millennial_Base",
			"TWC_AmmoBox_Millennial_Section_Portable",
			
			"TWC_AmmoBox_Millennial_Mechanised_Base",
			"TWC_AmmoBox_Millennial_Mechanised_Section_Portable",
			
			"TWC_AmmoBox_Millennial_Sniper_Portable",
			
			// Cold War
			"TWC_AmmoBox_ColdWar_Base",
			"TWC_AmmoBox_ColdWar_Section_Portable",
			
			"TWC_AmmoBox_ColdWar_Sniper_Portable",
			"TWC_AmmoBox_ColdWar_Blowpipe_Portable",
			
			// Vehicles
			"TWC_AmmoBox_Vehicle_Warrior",
			"TWC_AmmoBox_Vehicle_Milan",
			"TWC_AmmoBox_Vehicle_L134",          // GMG
			"TWC_AmmoBox_Vehicle_L1",            // HMG
			"TWC_AmmoBox_Vehicle_L7",            // GPMG
			
			// Other
			"TWC_AmmoBox_Other_Medical_Portable",
			"TWC_AmmoBox_Other_L134_Portable",   // GMG
			"TWC_AmmoBox_Other_L111_Portable",   // HMG
			"TWC_AmmoBox_Other_L7A2_Portable",   // GPMG
			"TWC_AmmoBox_Other_L14_Portable",    // recoilless rifle carl gustav
			"TWC_AmmoBox_Other_L16_Portable",    // 81mm mortar
			"TWC_AmmoBox_Other_Stinger_Portable",
			"TWC_AmmoBox_Other_Pallet",          // has a cargo, no inventory (airborne, airmobile)
			"TWC_AmmoBox_Other_Empty_Portable"   // a nice empty crate to ((Zeus)) items in
		};
		
		weapons[] = {};
		requiredVersion = 0.1;
		
		requiredAddons[] = {
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cup_weapons_ammoboxes",
			"ace_medical"
		};
		
		version = "1";
		projectName = "TWC";
		author = "Bosenator";
	};
};

class CfgEditorCategories {
	class TWC_Crates {
		displayName = "Ammo Boxes (TWC)"; 
	};
};

class CfgEditorSubcategories {
	/*
		Each ERA has an ERA/Mechanised (where necessary) specific:
			Base Crate
			Section & Attachment Resupply Crates (Portable)

		Vehicle contains vehicle resupply (i.e. warrior ammo)
		Other contains non-era specific crates and the pallet for air-lifting/dropping
	*/
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
	
	// Future Possibility, Training Crates? These could just be the weapons/items.
	// For the moment, I can use the op ones in conjunction with the spawn scripts.
};

class CfgVehicles {
	// Time saving MACROs - NC = Non-Conflict
	#define maga_nc(a,b) class _nc_##a {magazine = a; count = b;}
	#define weap_nc(a,b) class _nc_##a {weapon = a; count = b;}
	#define item_nc(a,b) class _nc_##a {name = a; count = b;}
	
	#include "crates_defines.hpp"
	#include "crates_modern.hpp"
	#include "crates_millennial.hpp"
	#include "crates_coldwar.hpp"
	#include "crates_vehicles.hpp"
	#include "crates_other.hpp"
};