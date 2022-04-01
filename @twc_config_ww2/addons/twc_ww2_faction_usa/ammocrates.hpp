class TWC_AmmoBox_WW2_Portable;
class TWC_AmmoBox_WW2_US_Airborne_Squad_Portable: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "US Squad Resupply - Airborne (Portable)";
	editorSubcategory = "TWC_US_WW2_Crates";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 20);
		ADD_ITEM(ACE_elasticBandage, 20);
		ADD_ITEM(ACE_quikclot, 20);
		ADD_ITEM(ACE_packingBandage, 20);
		
		ADD_ITEM(ACE_morphine, 8);
		ADD_ITEM(ACE_epinephrine, 8);
		ADD_ITEM(ACE_tourniquet, 4);
	};
	
	class TransportMagazines {
		// Thompson .45 ACP 30rnd
		ADD_MAGA(LIB_30Rnd_45ACP, 10);
		
		// .30-06, 8rnd
		ADD_MAGA(LIB_8Rnd_762x63, 24);
		
		// .30-06, 50rnd
		ADD_MAGA(LIB_50Rnd_762x63, 8);
		
		// .30, 15rnd
		ADD_MAGA(LIB_15Rnd_762x33, 8);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 6);
		ADD_MAGA(SmokeShellGreen, 2);
		ADD_MAGA(SmokeShellRed, 2);
		
		// Frag Grenade
		ADD_MAGA(LIB_US_Mk_2, 8);
		ADD_MAGA(LIB_1Rnd_G_Mk2, 4);
		ADD_MAGA(LIB_1Rnd_G_M9A1, 2);
		
		// Flares
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 5);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 5);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 5);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 5);
	};
};
class TWC_AmmoBox_WW2_US_Ranger_Assault_Squad_Portable: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "US Squad Resupply - Ranger Assault (Portable)";
	editorSubcategory = "TWC_US_WW2_Crates";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 20);
		ADD_ITEM(ACE_elasticBandage, 20);
		ADD_ITEM(ACE_quikclot, 20);
		ADD_ITEM(ACE_packingBandage, 20);
		
		ADD_ITEM(ACE_morphine, 8);
		ADD_ITEM(ACE_epinephrine, 8);
		ADD_ITEM(ACE_tourniquet, 4);
	};
	
	class TransportMagazines {
		// Thompson .45 ACP 30rnd
		ADD_MAGA(LIB_30Rnd_45ACP, 10);
		
		// .30-06, 8rnd
		ADD_MAGA(LIB_8Rnd_762x63, 24);
		
		// BAR, 20rnd
		ADD_MAGA(LIB_20Rnd_762x63, 10);
		
		// .30, 15rnd
		ADD_MAGA(LIB_15Rnd_762x33, 8);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 6);
		ADD_MAGA(SmokeShellGreen, 2);
		ADD_MAGA(SmokeShellRed, 2);
		
		// Frag Grenade
		ADD_MAGA(LIB_US_Mk_2, 8);
		ADD_MAGA(LIB_1Rnd_G_Mk2, 4);
		ADD_MAGA(LIB_1Rnd_G_M9A1, 2);
		
		// Flares
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 5);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 5);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 5);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 5);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 5);
	};
};
class TWC_AmmoBox_WW2_US_Ranger_Weapons_Squad_Portable: TWC_AmmoBox_WW2_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "US Squad Resupply - Ranger Weapons Squad (Portable)";
	editorSubcategory = "TWC_US_WW2_Crates";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 10);
		ADD_ITEM(ACE_elasticBandage, 10);
		ADD_ITEM(ACE_quikclot, 10);
		ADD_ITEM(ACE_packingBandage, 10);
		
		ADD_ITEM(ACE_morphine, 4);
		ADD_ITEM(ACE_epinephrine, 4);
		ADD_ITEM(ACE_tourniquet, 2);
	};
	
	class TransportMagazines {
		// Thompson .45 ACP 30rnd
		ADD_MAGA(LIB_30Rnd_45ACP, 4);
		
		// BAR, 20rnd
		ADD_MAGA(LIB_100Rnd_762x63, 15);
		
		// .30, 15rnd
		ADD_MAGA(LIB_15Rnd_762x33, 24);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 6);
		ADD_MAGA(SmokeShellGreen, 2);
		ADD_MAGA(SmokeShellRed, 2);
		
		//M2 60mm Mortar
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 20);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 8);
		
		//Bazooka
		ADD_MAGA(LIB_1Rnd_60mm_M6, 8);
		
		// Frag Grenade
		ADD_MAGA(LIB_US_Mk_2, 2);
		
		// Flares
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 2);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 2);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 2);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 2);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 2);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 2);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 2);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 2);
	};
};