/* // Cold War
"TWC_AmmoBox_ColdWar_Base",
"TWC_AmmoBox_ColdWar_Section_Portable",

"TWC_AmmoBox_ColdWar_Sniper_Portable",
"TWC_AmmoBox_ColdWar_Blowpipe_Portable", */

class TWC_AmmoBox_ColdWar_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Base Resupply (Immobile)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ACE_Clacker, 5);
		
		item_nc(ACE_fieldDressing, 32);
		item_nc(ACE_elasticBandage, 32);
		item_nc(ACE_quikclot, 32);
		item_nc(ACE_packingBandage, 32);
		
		item_nc(ACE_morphine, 16);
		item_nc(ACE_epinephrine, 16);
		item_nc(ACE_tourniquet, 16);
	};
	
	class TransportMagazines {
		maga_nc(ukcw_34_rnd_sterling_mag, 20);

		// L1A1 SLR
		maga_nc(UK3CB_BAF_762_20Rnd, 110);
		maga_nc(UK3CB_BAF_762_20Rnd_T, 20);

		// L7A1 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 16);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 4);
		
		maga_nc(ACE_HandFlare_White, 10);
		
		// L14A1 Recoilless Rifle - Carl Gustav
		maga_nc(ukcw_l14a1_HEAT, 4);
		maga_nc(ukcw_l14a1_HE, 4);
		maga_nc(ukcw_l14a1_ILLUM, 10);
		maga_nc(ukcw_l14a1_SMOKE, 10);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 30);
		maga_nc(SmokeShellRed, 10);
		maga_nc(SmokeShellGreen, 10);
		maga_nc(SmokeShellBlue, 10);
		maga_nc(SmokeShellYellow, 10);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 30);
	};
	
	class TransportWeapons {
		weap_nc(ukcw_L1A1_law, 4);
	};
};

class TWC_AmmoBox_ColdWar_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ACE_Clacker, 5);
		
		item_nc(ACE_fieldDressing, 16);
		item_nc(ACE_elasticBandage, 16);
		item_nc(ACE_quikclot, 16);
		item_nc(ACE_packingBandage, 16);
		
		item_nc(ACE_morphine, 8);
		item_nc(ACE_epinephrine, 8);
		item_nc(ACE_tourniquet, 8);
	};
	
	class TransportMagazines {
		maga_nc(ukcw_34_rnd_sterling_mag, 6);

		// L1A1 SLR
		maga_nc(UK3CB_BAF_762_20Rnd, 20);
		maga_nc(UK3CB_BAF_762_20Rnd_T, 5);

		// L7A1 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 4);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
		
		maga_nc(ACE_HandFlare_White, 2);
		
		// L14A1 Recoilless Rifle - Carl Gustav
		maga_nc(ukcw_l14a1_HEAT, 1);
		maga_nc(ukcw_l14a1_HE, 1);
		maga_nc(ukcw_l14a1_ILLUM, 4);
		maga_nc(ukcw_l14a1_SMOKE, 4);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 10);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 5);
	};
	
	class TransportWeapons {
		weap_nc(ukcw_L1A1_law, 1);
	};
};

class TWC_AmmoBox_ColdWar_Sniper_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 4);
		item_nc(ACE_elasticBandage, 4);
		item_nc(ACE_quikclot, 4);
		item_nc(ACE_packingBandage, 4);
		
		item_nc(ACE_morphine, 2);
		item_nc(ACE_epinephrine, 2);
		item_nc(ACE_tourniquet, 2);
	};
	
	// TODO: Waiting on UKCW to release L33 3nfi3ld Sn1p0r
};

class TWC_AmmoBox_ColdWar_Blowpipe_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Blowpipe Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 4);
		item_nc(ACE_elasticBandage, 4);
		item_nc(ACE_quikclot, 4);
		item_nc(ACE_packingBandage, 4);
		
		item_nc(ACE_morphine, 2);
		item_nc(ACE_epinephrine, 2);
		item_nc(ACE_tourniquet, 2);
	};
	
	class TransportMagazines {
		maga_nc(ukcw_blowpipe_missile, 4);
	};
};