class CfgPatches {
	// Builds upon the base addon
	class TWC_WW2_AmmoBoxes {
		units[] = {
			"TWC_AmmoBox_WW2_Early_Section_Portable",
			"TWC_AmmoBox_WW2_Late_Section_Portable",
			"TWC_AmmoBox_Coldwar_Malay_Portable"
		};
		
		weapons[] = {};
		requiredVersion = 1;
		
		requiredAddons[] = {
			"TWC_AmmoBoxes",
			"A3_Weapons_F",
			"a3_structures_f_epa",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cup_weapons_ammoboxes",
			"ace_medical",
			"ace_cargo",
			"WW2_Core_c_WW2_Core_c"
		};
		
		version = "1";
		projectName = "TWC";
		author = "Bosenator";
	};
};

class CfgEditorSubcategories {
	class TWC_WW2_Crates {
		displayName = "WW2";
	};
	class TWC_US_WW2_Crates {
		displayName = "WW2 - US";
	};
};

class CfgVehicles {
	// Time saving MACROs - NC = Non-Conflict
	#define maga_nc(a,b) class _nc_##a {magazine = a; count = b;}
	#define weap_nc(a,b) class _nc_##a {weapon = a; count = b;}
	#define item_nc(a,b) class _nc_##a {name = a; count = b;}
	
	class LIB_BasicWeaponsBox_US;
	class WW2_Cle_Container;
	class TWC_AmmoBox_WW2_Portable: LIB_BasicWeaponsBox_US {
		scope = 1;
		displayName = "Ammo Box WW2 (Portable)";
		author      = "Bosenator";
		
		class TransportMagazines { };
		class TransportItems     { };
		class TransportWeapons   { };
		class TransportBackpacks { };
		
		editorCategory = "TWC_Crates";
		editorSubcategory = "TWC_Crates_Other";
		
		// ACE Defines
		ace_cargo_canLoad     = 1;
		ace_cargo_size        = 1;
		ace_cargo_hasCargo    = 0;
		
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag  = 1;
	};
	class TWC_AmmoBox_WW2_Airborne_Portable: WW2_Cle_Container {
		scope = 1;
		displayName = "Ammo Box WW2 Airborne (Portable)";
		author      = "[TWC] Rik";
		
		class TransportMagazines { };
		class TransportItems     { };
		class TransportWeapons   { };
		class TransportBackpacks { };
		
		editorCategory = "TWC_Crates";
		editorSubcategory = "TWC_Crates_Other";
		
		// ACE Defines
		ace_cargo_canLoad     = 1;
		ace_cargo_size        = 1;
		ace_cargo_hasCargo    = 0;
		
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag  = 1;
	};
	
	class TWC_AmmoBox_WW2_Early_Section_Portable: TWC_AmmoBox_WW2_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Resupply - Early War (Portable)";
		editorSubcategory = "TWC_WW2_Crates";
		
		class TransportItems {
			item_nc(ACE_fieldDressing, 15);
			item_nc(ACE_elasticBandage, 15);
			item_nc(ACE_quikclot, 15);
			item_nc(ACE_packingBandage, 15);
			
			item_nc(ACE_morphine, 6);
			item_nc(ACE_epinephrine, 6);
			item_nc(ACE_tourniquet, 4);
		};
		
		class TransportMagazines {
			// Thompson .45 ACP 30rnd
			maga_nc(LIB_30Rnd_45ACP, 5);
			
			// Enfield .303 10rnd
			maga_nc(LIB_10Rnd_770x56, 18);
			
			// Bren .303 30rnd
			maga_nc(LIB_30Rnd_770x56, 10);
			
			// Smoke Grenades
			maga_nc(SmokeShell, 6);
			maga_nc(SmokeShellGreen, 2);
			maga_nc(SmokeShellRed, 2);
			
			// Frag Grenade
			maga_nc(LIB_MillsBomb, 6);
			maga_nc(LIB_1Rnd_G_MillsBomb, 4);
			
			// AT Grenade
			maga_nc(LIB_No82, 2);
			
			// Flares
			maga_nc(TWC_Magazine_SignalFlare_Blue, 15);
			maga_nc(TWC_Magazine_SignalFlare_Red, 15);
			maga_nc(TWC_Magazine_SignalFlare_Green, 15);
			maga_nc(TWC_Magazine_SignalFlare_Yellow, 15);
			maga_nc(TWC_Magazine_SignalSmoke_Green, 15);
			maga_nc(TWC_Magazine_SignalSmoke_Red, 15);
			maga_nc(TWC_Magazine_SignalSmoke_Yellow, 15);
			maga_nc(TWC_Magazine_SignalSmoke_Blue, 15);
		};
	};
	
	class TWC_AmmoBox_WW2_Late_Section_Portable: TWC_AmmoBox_WW2_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Resupply - Late War (Portable)";
		editorSubcategory = "TWC_WW2_Crates";
		
		class TransportItems {
			item_nc(ACE_fieldDressing, 15);
			item_nc(ACE_elasticBandage, 15);
			item_nc(ACE_quikclot, 15);
			item_nc(ACE_packingBandage, 15);
			
			item_nc(ACE_morphine, 6);
			item_nc(ACE_epinephrine, 6);
			item_nc(ACE_tourniquet, 4);
		};
		
		class TransportMagazines {
			// Sten
			maga_nc(LIB_32Rnd_9x19_Sten, 5);
			
			// Enfield .303 10rnd
			maga_nc(LIB_10Rnd_770x56, 18);
			
			// Bren .303 30rnd
			maga_nc(LIB_30Rnd_770x56, 10);
			
			// Smoke Grenades
			maga_nc(SmokeShell, 6);
			maga_nc(SmokeShellGreen, 2);
			maga_nc(SmokeShellRed, 2);
			
			// Frag Grenade
			maga_nc(LIB_MillsBomb, 6);
			maga_nc(LIB_1Rnd_G_MillsBomb, 4);
			
			// AT Grenade
			maga_nc(LIB_No82, 2);
			
			// Flares
			maga_nc(TWC_Magazine_SignalFlare_Blue, 3);
			maga_nc(TWC_Magazine_SignalFlare_Red, 3);
			maga_nc(TWC_Magazine_SignalFlare_Green, 3);
			maga_nc(TWC_Magazine_SignalFlare_Yellow, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Green, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Red, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Yellow, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Blue, 3);
		};
	};
	
	class TWC_AmmoBox_WW2_Airborne_Section_Portable: TWC_AmmoBox_WW2_Airborne_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Resupply - Airborne (Portable)";
		editorSubcategory = "TWC_WW2_Crates";
		
		class TransportItems {
			item_nc(ACE_fieldDressing, 15);
			item_nc(ACE_elasticBandage, 15);
			item_nc(ACE_quikclot, 15);
			item_nc(ACE_packingBandage, 15);
			
			item_nc(ACE_morphine, 6);
			item_nc(ACE_epinephrine, 6);
			item_nc(ACE_tourniquet, 4);
		};
		
		class TransportMagazines {
			// Sten
			maga_nc(LIB_32Rnd_9x19_Sten, 10);
			
			// Enfield .303 10rnd
			maga_nc(LIB_10Rnd_770x56, 18);
			
			// Bren .303 30rnd
			maga_nc(LIB_30Rnd_770x56, 10);
			
			// Smoke Grenades
			maga_nc(SmokeShell, 6);
			maga_nc(SmokeShellGreen, 2);
			maga_nc(SmokeShellRed, 2);
			
			// Frag Grenade
			maga_nc(LIB_MillsBomb, 10);
			
			// AT Grenade
			maga_nc(LIB_No82, 2);
			
			// Flares
			maga_nc(TWC_Magazine_SignalFlare_Blue, 3);
			maga_nc(TWC_Magazine_SignalFlare_Red, 3);
			maga_nc(TWC_Magazine_SignalFlare_Green, 3);
			maga_nc(TWC_Magazine_SignalFlare_Yellow, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Green, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Red, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Yellow, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Blue, 3);
		};
	};
	class TWC_AmmoBox_Coldwar_Malay_Portable: TWC_AmmoBox_WW2_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Resupply - (Malay Conflict)";
		editorSubcategory = "TWC_WW2_Crates";
		
		class TransportItems {
			item_nc(ACE_fieldDressing, 15);
			item_nc(ACE_elasticBandage, 15);
			item_nc(ACE_quikclot, 15);
			item_nc(ACE_packingBandage, 15);
			
			item_nc(ACE_morphine, 6);
			item_nc(ACE_epinephrine, 6);
			item_nc(ACE_tourniquet, 4);
		};
		
		class TransportMagazines {
			// Thompson .45 ACP 30rnd
			maga_nc(LIB_30Rnd_45ACP, 15);
			
			// Enfield .303 10rnd
			maga_nc(LIB_10Rnd_770x56, 10);
			
			// M1 Carbine 7.62 15rnd
			maga_nc(fow_15Rnd_762x33, 20);
			maga_nc(fow_15Rnd_762x33_t, 5);
			
			// Bren .303 30rnd
			maga_nc(LIB_30Rnd_770x56, 14);
			
			// Smoke Grenades
			maga_nc(SmokeShell, 6);
			maga_nc(SmokeShellGreen, 2);
			maga_nc(SmokeShellRed, 2);
			
			// Frag Grenade
			maga_nc(LIB_MillsBomb, 8);
			maga_nc(LIB_1Rnd_G_MillsBomb, 10);
			
			// Flares
			maga_nc(TWC_Magazine_SignalFlare_Blue, 3);
			maga_nc(TWC_Magazine_SignalFlare_Red, 3);
			maga_nc(TWC_Magazine_SignalFlare_Green, 3);
			maga_nc(TWC_Magazine_SignalFlare_Yellow, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Green, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Red, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Yellow, 3);
			maga_nc(TWC_Magazine_SignalSmoke_Blue, 3);
		};
	};
	
	class LIB_AmmoCrate_Mortar_SU;
	class TWC_AmmoBox_WW2_Static_Portable: LIB_AmmoCrate_Mortar_SU {
		displayName = "Static Resupply";
		ace_rearm_defaultSupply = 100;
		
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "TWC_WW2_Crates";
		
		class TransportWeapons {};
		class TransportBackpacks {};
		class TransportItems {};
		class TransportMagazines {};
	};
	class TWC_AmmoBox_WW2_US_Airborne_Squad_Portable: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "US Squad Resupply - Airborne (Portable)";
	editorSubcategory = "TWC_US_WW2_Crates";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 15);
		item_nc(ACE_elasticBandage, 15);
		item_nc(ACE_quikclot, 15);
		item_nc(ACE_packingBandage, 15);
			
		item_nc(ACE_morphine, 6);
		item_nc(ACE_epinephrine, 6);
		item_nc(ACE_tourniquet, 4);
	};
	
	class TransportMagazines {
		// Thompson .45 ACP 30rnd
		maga_nc(LIB_30Rnd_45ACP, 10);
		
		// .30-06, 8rnd
		maga_nc(LIB_8Rnd_762x63, 24);
		
		// .30-06, 50rnd
		maga_nc(LIB_50Rnd_762x63, 8);
		
		// .30, 15rnd
		maga_nc(fow_15Rnd_762x33, 8);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 6);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellRed, 2);
		
		// Frag Grenade
		maga_nc(LIB_US_Mk_2, 8);
		maga_nc(LIB_1Rnd_G_Mk2, 4);
		maga_nc(LIB_1Rnd_G_M9A1, 2);
		
		// Flares
		maga_nc(TWC_Magazine_SignalFlare_Blue, 3);
		maga_nc(TWC_Magazine_SignalFlare_Red, 3);
		maga_nc(TWC_Magazine_SignalFlare_Green, 3);
		maga_nc(TWC_Magazine_SignalFlare_Yellow, 3);
		maga_nc(TWC_Magazine_SignalSmoke_Green, 3);
		maga_nc(TWC_Magazine_SignalSmoke_Red, 3);
		maga_nc(TWC_Magazine_SignalSmoke_Yellow, 3);
		maga_nc(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
class TWC_AmmoBox_WW2_US_Ranger_Assault_Squad_Portable: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "US Squad Resupply - Ranger Assault (Portable)";
	editorSubcategory = "TWC_US_WW2_Crates";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 15);
		item_nc(ACE_elasticBandage, 15);
		item_nc(ACE_quikclot, 15);
		item_nc(ACE_packingBandage, 15);
			
		item_nc(ACE_morphine, 6);
		item_nc(ACE_epinephrine, 6);
		item_nc(ACE_tourniquet, 4);
	};
	
	class TransportMagazines {
		// Thompson .45 ACP 30rnd
		maga_nc(LIB_30Rnd_45ACP, 6);
		
		// .30-06, 8rnd
		maga_nc(LIB_8Rnd_762x63, 30);
		
		// BAR, 20rnd
		maga_nc(LIB_20Rnd_762x63, 10);
		
		// .30, 15rnd
		maga_nc(fow_15Rnd_762x33, 10);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 6);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellRed, 2);
		
		// Frag Grenade
		maga_nc(LIB_US_Mk_2, 8);
		maga_nc(LIB_1Rnd_G_Mk2, 4);
		maga_nc(LIB_1Rnd_G_M9A1, 2);
		
		// Flares
		maga_nc(TWC_Magazine_SignalFlare_Blue, 2);
		maga_nc(TWC_Magazine_SignalFlare_Red, 2);
		maga_nc(TWC_Magazine_SignalFlare_Green, 2);
		maga_nc(TWC_Magazine_SignalFlare_Yellow, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Green, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Red, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Yellow, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Blue, 2);
	};
};
class TWC_AmmoBox_WW2_US_Ranger_Weapons_Squad_Portable: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "US Squad Resupply - Ranger Weapons Squad (Portable)";
	editorSubcategory = "TWC_US_WW2_Crates";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 15);
		item_nc(ACE_elasticBandage, 15);
		item_nc(ACE_quikclot, 15);
		item_nc(ACE_packingBandage, 15);
			
		item_nc(ACE_morphine, 6);
		item_nc(ACE_epinephrine, 6);
		item_nc(ACE_tourniquet, 4);
	};
	
	class TransportMagazines {
		// Thompson .45 ACP 30rnd
		maga_nc(LIB_30Rnd_45ACP, 4);
		
		// MG, 50rnd
		maga_nc(LIB_50Rnd_762x63, 15);
		
		// .30, 15rnd
		maga_nc(fow_15Rnd_762x33, 15);
		
		//M2 60mm Mortar
		maga_nc(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 20);
		maga_nc(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 8);
		
		//Bazooka
		maga_nc(LIB_1Rnd_60mm_M6, 8);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 6);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellRed, 2);
		
		// Frag Grenade
		maga_nc(LIB_US_Mk_2, 8);
		
		// Flares
		maga_nc(TWC_Magazine_SignalFlare_Blue, 2);
		maga_nc(TWC_Magazine_SignalFlare_Red, 2);
		maga_nc(TWC_Magazine_SignalFlare_Green, 2);
		maga_nc(TWC_Magazine_SignalFlare_Yellow, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Green, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Red, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Yellow, 2);
		maga_nc(TWC_Magazine_SignalSmoke_Blue, 2);
		};
	};
	//6 Pounder
class TWC_AmmoBox_WW2_6Pounder_Portable_HE: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "6 Pounder Gun (Portable, HE)";
	
	class TransportMagazines {
		maga_nc(TWC_Magazine_57mm_1rnd_HE, 10);
		};
	};
	class TWC_AmmoBox_WW2_6Pounder_Portable_AP: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "6 Pounder Gun (Portable, AP)";
	
	class TransportMagazines {
		maga_nc(TWC_Magazine_57mm_1rnd_AP, 10);
		};
	};
		class TWC_AmmoBox_WW2_6Pounder_Portable_APCBC: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "6 Pounder Gun (Portable, APCBC)";
	
	class TransportMagazines {
		maga_nc(TWC_Magazine_57mm_1rnd_APCBC, 10);
		};
	};
		class TWC_AmmoBox_WW2_6Pounder_Portable_APCR: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "6 Pounder Gun (Portable, APCR)";
	
	class TransportMagazines {
		maga_nc(TWC_Magazine_57mm_1rnd_APCR, 10);
		};
	};
		class TWC_AmmoBox_WW2_6Pounder_Portable_APDS: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "6 Pounder Gun (Portable, APDS)";
	
	class TransportMagazines {
		maga_nc(TWC_Magazine_57mm_1rnd_APDS, 10);
		};
	};
};