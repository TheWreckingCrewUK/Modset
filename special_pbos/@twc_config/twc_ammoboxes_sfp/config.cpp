class CfgPatches {
	class TWC_AmmoBoxes {
		units[] = {
			
		};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {
			"twc_ammoboxes"
		};
	};
};

class CfgVehicles {
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}
	
	class TWC_AmmoBox_Portable;
	class TWC_AmmoBox_SFP_Section_Portable: TWC_AmmoBox_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "SFP Section Resupply (Portable)";
		
		editorSubcategory = "TWC_Crates_Other";
		
		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 12);
			ADD_ITEM(ACE_elasticBandage, 12);
			ADD_ITEM(ACE_quikclot, 12);
			ADD_ITEM(ACE_packingBandage, 12);
			
			ADD_ITEM(ACE_morphine, 12);
			ADD_ITEM(ACE_epinephrine, 12);
			ADD_ITEM(ACE_tourniquet, 6);
		};
		
		class TransportMagazines {

			// L1A1 SLR
			ADD_MAGA(sfp_30Rnd_556x45_Stanag,20);

			// L7A1 GPMG
			ADD_MAGA(UK3CB_BAF_762_100Rnd, 4);
			ADD_MAGA(UK3CB_BAF_762_100Rnd_T, 2);

			ADD_MAGA(ACE_HandFlare_White, 2);

			// Smoke Grenades
			ADD_MAGA(SmokeShell, 10);
			ADD_MAGA(SmokeShellRed, 2);
			ADD_MAGA(SmokeShellBlue, 2);
			
			// Hand Grenade HE
			ADD_MAGA(CUP_HandGrenade_L109A2_HE, 5);
			
			// Launcher HE per Ghostie's Request
			
		};
	};
};