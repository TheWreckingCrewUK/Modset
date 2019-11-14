class TWC_AmmoBox_WW2_Portable;
class TWC_AmmoBox_WW2_US_Squad_Portable: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "US Squad Resupply - Airborne (Portable)";
	editorSubcategory = "TWC_WW2_Crates";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 20);
		item_nc(ACE_elasticBandage, 20);
		item_nc(ACE_quikclot, 20);
		item_nc(ACE_packingBandage, 20);
		
		item_nc(ACE_morphine, 8);
		item_nc(ACE_epinephrine, 8);
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
		maga_nc(LIB_15Rnd_762x33, 8);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 6);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellRed, 2);
		
		// Frag Grenade
		maga_nc(LIB_US_Mk_2, 8);
		maga_nc(LIB_1Rnd_G_Mk2, 4);
		maga_nc(LIB_1Rnd_G_M9A1, 2);
		
		// Flares
		maga_nc(TWC_Magazine_SignalFlare_Blue, 5);
		maga_nc(TWC_Magazine_SignalFlare_Red, 5);
		maga_nc(TWC_Magazine_SignalFlare_Green, 5);
		maga_nc(TWC_Magazine_SignalFlare_Yellow, 5);
		maga_nc(TWC_Magazine_SignalSmoke_Green, 5);
		maga_nc(TWC_Magazine_SignalSmoke_Red, 5);
		maga_nc(TWC_Magazine_SignalSmoke_Yellow, 5);
		maga_nc(TWC_Magazine_SignalSmoke_Blue, 5);
	};
};