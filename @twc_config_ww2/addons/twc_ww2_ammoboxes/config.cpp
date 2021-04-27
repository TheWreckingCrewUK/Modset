class CfgPatches {
	// Builds upon the base addon
	class TWC_WW2_AmmoBoxes {
		units[] = {
			"TWC_AmmoBox_WW2_Early_Base",
			"TWC_AmmoBox_WW2_Early_Section_Portable",
			"TWC_AmmoBox_WW2_Late_Base",
			"TWC_AmmoBox_WW2_Late_Section_Portable"
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
	
	class TWC_AmmoBox_Base;
	class TWC_AmmoBox_WW2_Early_Base: TWC_AmmoBox_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Base Resupply - Early War (Immobile)";
		editorSubcategory = "TWC_WW2_Crates";
		
		class TransportItems { };
		class TransportWeapons { };
		class TransportBackpacks { };
		
		class TransportMagazines {
			// Thompson .45 ACP 30rnd
			maga_nc(LIB_30Rnd_45ACP, 9);

			// Enfield .303 10rnd
			maga_nc(LIB_10Rnd_770x56, 30);
			
			// Bren .303 30rnd
			maga_nc(LIB_30Rnd_770x56, 20);
			
			// Smoke Grenades
			maga_nc(SmokeShell, 20);
			maga_nc(SmokeShellGreen, 10);
			maga_nc(SmokeShellRed, 10);
			
			// Frag Grenade
			maga_nc(LIB_MillsBomb, 20);
			maga_nc(LIB_1Rnd_G_MillsBomb, 16);
			
			// AT Grenade
			maga_nc(LIB_No82, 10);
			
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
	
	class TWC_AmmoBox_WW2_Late_Base: TWC_AmmoBox_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Base Resupply - Late War (Immobile)";
		editorSubcategory = "TWC_WW2_Crates";
		
		class TransportItems { };
		class TransportWeapons { };
		class TransportBackpacks { };
		
		class TransportMagazines {
			// Sten
			maga_nc(LIB_32Rnd_9x19_Sten, 9);
			
			// Enfield .303 10rnd
			maga_nc(LIB_10Rnd_770x56, 30);
			
			// Bren .303 30rnd
			maga_nc(LIB_30Rnd_770x56, 12);
			
			// Smoke Grenades
			maga_nc(SmokeShell, 20);
			maga_nc(SmokeShellGreen, 10);
			maga_nc(SmokeShellRed, 10);
			
			// Frag Grenade
			maga_nc(LIB_MillsBomb, 20);
			maga_nc(LIB_1Rnd_G_MillsBomb, 16);
			
			// AT Grenade
			maga_nc(LIB_No82, 10);
			
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
};