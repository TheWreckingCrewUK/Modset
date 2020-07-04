class CfgPatches {
	class TWC_AmmoBoxes {
		units[] = {
			"TWC_AmmoBox_Modern_Base",
			"TWC_AmmoBox_Modern_Section_Portable",
			"TWC_AmmoBox_Modern_COIN_Base",
			"TWC_AmmoBox_Modern_COIN_Section_Portable",
			"TWC_AmmoBox_Modern_Mechanised_Base",
			"TWC_AmmoBox_Modern_Mechanised_Section_Portable",
			"TWC_AmmoBox_Modern_Javelin_Portable",
			"TWC_AmmoBox_Modern_Sniper_Portable",
			"TWC_AmmoBox_Modern_M6_Portable",
			"TWC_AmmoBox_Millennial_Base",
			"TWC_AmmoBox_Millennial_Section_Portable",
			"TWC_AmmoBox_Millennial_Mechanised_Base",
			"TWC_AmmoBox_Millennial_Mechanised_Section_Portable",
			"TWC_AmmoBox_Millennial_Sniper_Portable",
			"TWC_AmmoBox_ColdWar_Base",
			"TWC_AmmoBox_ColdWar_Section_Portable",
			"TWC_AmmoBox_ColdWar_Sniper_Portable",
			"TWC_AmmoBox_ColdWar_Blowpipe_Portable",
			"TWC_AmmoBox_Vehicle_Warrior",
			"TWC_AmmoBox_Vehicle_Milan",
			"TWC_AmmoBox_Vehicle_L134",
			"TWC_AmmoBox_Vehicle_L111",
			"TWC_AmmoBox_Vehicle_L7A2",
			"TWC_AmmoBox_Vehicle_Generic",
			"TWC_AmmoBox_Other_Medical_Portable",
			"TWC_AmmoBox_Other_L134_Portable",
			"TWC_AmmoBox_Other_L111_Portable",
			"TWC_AmmoBox_Other_L7A2_Portable",
			"TWC_AmmoBox_Other_L16_Portable",
			"TWC_AmmoBox_Other_L118_Portable",
			"TWC_AmmoBox_Other_L118_Portable_HE",
			"TWC_AmmoBox_Other_L118_Portable_SMOKE",
			"TWC_AmmoBox_Other_L118_Portable_ILLUM",
			"TWC_AmmoBox_Launchers_L14_Portable",
			"TWC_AmmoBox_Launchers_L1A1_Portable",
			"TWC_AmmoBox_Launchers_LASM_Portable",
			"TWC_AmmoBox_Launchers_LAW80_Portable",
			"TWC_AmmoBox_Launchers_L2A1_Portable",
			"TWC_AmmoBox_Launchers_NLAW_Portable",
			"TWC_AmmoBox_Other_Stinger_Portable",
			"TWC_AmmoBox_Other_Command_Portable",
			"TWC_AmmoBox_Other_Pallet",
			"TWC_AmmoBox_Other_Empty_Portable",
			"TWC_AmmoBox_Training_Medical_Base"
		};
		
		weapons[] = {};
		requiredVersion = 1;
		
		requiredAddons[] = {
			"cba_main",
			"A3_Weapons_F",
			"a3_structures_f_epa",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cup_weapons_ammoboxes",
			"ace_medical",
			"ace_cargo"
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
	
	class TWC_Crates_Launchers {
		displayName = "Launchers";
	};
	
	class TWC_Crates_Training {
		displayName = "Training";
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
	#include "crates_launchers.hpp"
	#include "crates_training.hpp"
};