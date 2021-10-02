/*
	"TWC_AmmoBox_Modern_Section_Portable",
	"TWC_AmmoBox_Modern_COIN_Section_Portable",
	"TWC_AmmoBox_Modern_Mechanised_Section_Portable",
	"TWC_AmmoBox_Modern_Javelin_Portable",
	"TWC_AmmoBox_Modern_Sniper_Portable",
	"TWC_AmmoBox_Modern_M6_Portable",
*/
class TWC_AmmoBox_Modern_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
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
		// L85/L86 Stanag
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 16);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 4);
		
		// L7 GPMG
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, 1);
		
		// L42A1 DMR
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 1);
		
		// FN Minimi AR
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 4);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, 2);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
		ADD_MAGA(UGL_FlareWhite_F, 2);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 2);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 10);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);

		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 1);
		ADD_MAGA(Chemlight_green, 4);
		ADD_MAGA(Chemlight_red, 4);
		ADD_MAGA(Chemlight_blue, 4);

		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 6);
	};
};

class TWC_AmmoBox_Modern_COIN_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "COIN Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
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
		// L85/L86 Stanag
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 16);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 4);
		
		// L7 GPMG
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, 1);
		
		// L42A1 DMR
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 1);
		
		// Shotgun 12g
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Slug, 2);
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Pellets, 2);
		
		// FN Minimi AR
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 4);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, 2);

		//Glock 17
		ADD_MAGA(UK3CB_BAF_9_17Rnd, 8);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
		ADD_MAGA(UGL_FlareWhite_F, 2);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 2);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 10);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);

		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 1);
		ADD_MAGA(Chemlight_green, 4);
		ADD_MAGA(Chemlight_red, 4);
		ADD_MAGA(Chemlight_blue, 4);

		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 6);
	};
};

class TWC_AmmoBox_Modern_Mechanised_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Mechanised Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
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
		// L85/L86 Stanag
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 16);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 4);
		
		// L7 GPMG
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, 1);
		
		// L42A1 DMR
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 1);
		
		// FN Minimi AR
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 4);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, 2);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
		ADD_MAGA(UGL_FlareWhite_F, 2);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 2);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 10);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellGreen, 2);
		ADD_MAGA(SmokeShellBlue, 2);
		ADD_MAGA(SmokeShellYellow, 2);

		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 1);
		ADD_MAGA(Chemlight_green, 4);
		ADD_MAGA(Chemlight_red, 4);
		ADD_MAGA(Chemlight_blue, 4);

		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 6);
	};
};

// WIP BELOW! Rushed the finish for an OP. Must remember to finish!!
class TWC_AmmoBox_Modern_Javelin_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "UNFINISHED - Javelin Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 4);
		ADD_ITEM(ACE_elasticBandage, 4);
		ADD_ITEM(ACE_quikclot, 4);
		ADD_ITEM(ACE_packingBandage, 4);
		
		ADD_ITEM(ACE_morphine, 2);
		ADD_ITEM(ACE_epinephrine, 2);
		ADD_ITEM(ACE_tourniquet, 2);
	};
	
	// TWC Defines
	twc_ammobox_type      = "launcher";
};

class TWC_AmmoBox_Modern_Sniper_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Sniper Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, 8);
		ADD_MAGA(TWC_5Rnd_338_300gr_HPBT_Mag, 12);
		ADD_MAGA(TWC_5Rnd_338_API526_Mag, 6);
	};
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 4);
		ADD_ITEM(ACE_elasticBandage, 4);
		ADD_ITEM(ACE_quikclot, 4);
		ADD_ITEM(ACE_packingBandage, 4);
		
		ADD_ITEM(ACE_morphine, 2);
		ADD_ITEM(ACE_epinephrine, 2);
		ADD_ITEM(ACE_tourniquet, 2);
	};
};

class TWC_AmmoBox_Modern_M6_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "UNFINISHED - M6 Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 4);
		ADD_ITEM(ACE_elasticBandage, 4);
		ADD_ITEM(ACE_quikclot, 4);
		ADD_ITEM(ACE_packingBandage, 4);
		
		ADD_ITEM(ACE_morphine, 2);
		ADD_ITEM(ACE_epinephrine, 2);
		ADD_ITEM(ACE_tourniquet, 2);
	};
};