/* // Cold War
"TWC_AmmoBox_ColdWar_Base",
"TWC_AmmoBox_ColdWar_Section_Portable",

"TWC_AmmoBox_ColdWar_Sniper_Portable",
"TWC_AmmoBox_ColdWar_Blowpipe_Portable", */

class TWC_AmmoBox_ColdWar_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
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
		ADD_MAGA(SP_30Rnd_9x19_L2A3_Sterling, 6);

		// L1A1 SLR
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 14);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 6);

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
		ADD_MAGA(ukcw_l14a1_HE, 2);
	};
};

class TWC_AmmoBox_ColdWar_Section_Portable_COIN: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply (COIN, Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
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
		ADD_MAGA(SP_30Rnd_9x19_L2A3_Sterling, 6);

		// L1A1 SLR
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 14);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 6);

		// L7A1 GPMG
		ADD_MAGA(SP_30Rnd_762_L4, 10);

		ADD_MAGA(ACE_HandFlare_White, 2);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 10);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 5);
		
		// Launcher HE per Ghostie's Request
		ADD_MAGA(ukcw_l14a1_HE,2);
	};
};

class TWC_AmmoBox_ColdWar_Sniper_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 4);
		ADD_ITEM(ACE_elasticBandage, 4);
		ADD_ITEM(ACE_quikclot, 4);
		ADD_ITEM(ACE_packingBandage, 4);
		
		ADD_ITEM(ACE_morphine, 2);
		ADD_ITEM(ACE_epinephrine, 2);
		ADD_ITEM(ACE_tourniquet, 2);
	};
	
	class TransportMagazines {
		ADD_MAGA(SP_10Rnd_762_L42, 6);
	};
};

class TWC_AmmoBox_ColdWar_Blowpipe_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Blowpipe Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_ColdWar";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 4);
		ADD_ITEM(ACE_elasticBandage, 4);
		ADD_ITEM(ACE_quikclot, 4);
		ADD_ITEM(ACE_packingBandage, 4);
		
		ADD_ITEM(ACE_morphine, 2);
		ADD_ITEM(ACE_epinephrine, 2);
		ADD_ITEM(ACE_tourniquet, 2);
	};
	
	class TransportMagazines {
		ADD_MAGA(SP_Blowpipe_round, 4);
	};
};