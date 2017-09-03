/*
	"TWC_AmmoBox_Modern_Base",
	"TWC_AmmoBox_Modern_Section_Portable",
	"TWC_AmmoBox_Modern_COIN_Base",
	"TWC_AmmoBox_Modern_COIN_Section_Portable",
	"TWC_AmmoBox_Modern_Mechanised_Base",
	"TWC_AmmoBox_Modern_Mechanised_Section_Portable",
	"TWC_AmmoBox_Modern_Javelin_Portable",
	"TWC_AmmoBox_Modern_Sniper_Portable",
	"TWC_AmmoBox_Modern_M6_Portable",
*/
class TWC_AmmoBox_Modern_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Modern";
	
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
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 40);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 10);
		
		// L7 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 20);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 10);
		
		// L42A1 DMR
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd, 10);
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd_T, 10);
		
		// FN Minimi AR
		maga_nc(UK3CB_BAF_556_200Rnd, 10);
		maga_nc(UK3CB_BAF_556_200Rnd_T, 10);
		
		// UGL 40mm
		maga_nc(1Rnd_HE_Grenade_shell, 30);
		maga_nc(UGL_FlareWhite_F, 10);
		maga_nc(1Rnd_Smoke_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeGreen_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeRed_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeBlue_Grenade_shell, 10);

		// Smoke Grenades
		maga_nc(SmokeShell, 40);
		maga_nc(SmokeShellRed, 10);
		maga_nc(SmokeShellGreen, 10);
		maga_nc(SmokeShellBlue, 10);
		maga_nc(SmokeShellYellow, 10);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 6);
		maga_nc(Chemlight_green, 20);
		maga_nc(Chemlight_red, 20);
		maga_nc(Chemlight_blue, 20);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 25);
	};
};

class TWC_AmmoBox_Modern_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 12);
		item_nc(ACE_elasticBandage, 12);
		item_nc(ACE_quikclot, 12);
		item_nc(ACE_packingBandage, 12);
		
		item_nc(ACE_morphine, 12);
		item_nc(ACE_epinephrine, 12);
		item_nc(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 16);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 4);
		
		// L7 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 3);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
		
		// L42A1 DMR
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd, 3);
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd_T, 1);
		
		// FN Minimi AR
		maga_nc(UK3CB_BAF_556_200Rnd, 6);
		maga_nc(UK3CB_BAF_556_200Rnd_T, 2);
		
		// UGL 40mm
		maga_nc(1Rnd_HE_Grenade_shell, 8);
		maga_nc(UGL_FlareWhite_F, 2);
		maga_nc(1Rnd_Smoke_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeGreen_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeRed_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeBlue_Grenade_shell, 2);

		// Smoke Grenades
		maga_nc(SmokeShell, 10);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 1);
		maga_nc(Chemlight_green, 4);
		maga_nc(Chemlight_red, 4);
		maga_nc(Chemlight_blue, 4);

		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 6);
	};
};

class TWC_AmmoBox_Modern_COIN_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "COIN Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Modern";
	
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
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 40);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 10);
		
		// L7 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 20);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 10);
		
		// L42A1 DMR
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd, 10);
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd_T, 10);
		
		// FN Minimi AR
		maga_nc(UK3CB_BAF_556_200Rnd, 10);
		maga_nc(UK3CB_BAF_556_200Rnd_T, 10);
		
		// UGL 40mm
		maga_nc(1Rnd_HE_Grenade_shell, 30);
		maga_nc(UGL_FlareWhite_F, 10);
		maga_nc(1Rnd_Smoke_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeGreen_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeRed_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeBlue_Grenade_shell, 10);
		
		// Shotgun 12g
		maga_nc(UK3CB_BAF_12G_Slugs, 30);
		maga_nc(UK3CB_BAF_12G_Pellets, 30);

		// Smoke Grenades
		maga_nc(SmokeShell, 40);
		maga_nc(SmokeShellRed, 10);
		maga_nc(SmokeShellGreen, 10);
		maga_nc(SmokeShellBlue, 10);
		maga_nc(SmokeShellYellow, 10);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 6);
		maga_nc(Chemlight_green, 20);
		maga_nc(Chemlight_red, 20);
		maga_nc(Chemlight_blue, 20);

		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 25);
	};
};

class TWC_AmmoBox_Modern_COIN_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "COIN Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 12);
		item_nc(ACE_elasticBandage, 12);
		item_nc(ACE_quikclot, 12);
		item_nc(ACE_packingBandage, 12);
		
		item_nc(ACE_morphine, 12);
		item_nc(ACE_epinephrine, 12);
		item_nc(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 16);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 4);
		
		// L7 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 3);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
		
		// L42A1 DMR
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd, 3);
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd_T, 1);
		
		// Shotgun 12g
		maga_nc(UK3CB_BAF_12G_Slugs, 2);
		maga_nc(UK3CB_BAF_12G_Pellets, 2);
		
		// FN Minimi AR
		maga_nc(UK3CB_BAF_556_200Rnd, 6);
		maga_nc(UK3CB_BAF_556_200Rnd_T, 2);
		
		// UGL 40mm
		maga_nc(1Rnd_HE_Grenade_shell, 8);
		maga_nc(UGL_FlareWhite_F, 2);
		maga_nc(1Rnd_Smoke_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeGreen_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeRed_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeBlue_Grenade_shell, 2);

		// Smoke Grenades
		maga_nc(SmokeShell, 10);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 1);
		maga_nc(Chemlight_green, 4);
		maga_nc(Chemlight_red, 4);
		maga_nc(Chemlight_blue, 4);

		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 6);
	};
};

class TWC_AmmoBox_Modern_Mechanised_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Mechanised Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ACE_Clacker, 5);
		
		item_nc(ACE_fieldDressing, 24);
		item_nc(ACE_elasticBandage, 24);
		item_nc(ACE_quikclot, 24);
		item_nc(ACE_packingBandage, 24);
		
		item_nc(ACE_morphine, 12);
		item_nc(ACE_epinephrine, 12);
		item_nc(ACE_tourniquet, 12);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 40);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 10);
		
		// L42A1 DMR
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd, 10);
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd_T, 10);
		
		// FN Minimi AR
		maga_nc(UK3CB_BAF_556_200Rnd, 10);
		maga_nc(UK3CB_BAF_556_200Rnd_T, 10);
		
		// UGL 40mm
		maga_nc(1Rnd_HE_Grenade_shell, 30);
		maga_nc(UGL_FlareWhite_F, 10);
		maga_nc(1Rnd_Smoke_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeGreen_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeRed_Grenade_shell, 10);
		maga_nc(1Rnd_SmokeBlue_Grenade_shell, 10);

		// Smoke Grenades
		maga_nc(SmokeShell, 40);
		maga_nc(SmokeShellRed, 10);
		maga_nc(SmokeShellGreen, 10);
		maga_nc(SmokeShellBlue, 10);
		maga_nc(SmokeShellYellow, 10);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 6);
		maga_nc(Chemlight_green, 20);
		maga_nc(Chemlight_red, 20);
		maga_nc(Chemlight_blue, 20);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 25);
	};
};

class TWC_AmmoBox_Modern_Mechanised_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Mechanised Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 12);
		item_nc(ACE_elasticBandage, 12);
		item_nc(ACE_quikclot, 12);
		item_nc(ACE_packingBandage, 12);
		
		item_nc(ACE_morphine, 12);
		item_nc(ACE_epinephrine, 12);
		item_nc(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 16);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 4);
		
		// L7 GPMG
		maga_nc(UK3CB_BAF_762_100Rnd, 3);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
		
		// L42A1 DMR
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd, 3);
		maga_nc(UK3CB_BAF_762_L42A1_20Rnd_T, 1);
		
		// FN Minimi AR
		maga_nc(UK3CB_BAF_556_200Rnd, 6);
		maga_nc(UK3CB_BAF_556_200Rnd_T, 2);
		
		// UGL 40mm
		maga_nc(1Rnd_HE_Grenade_shell, 8);
		maga_nc(UGL_FlareWhite_F, 2);
		maga_nc(1Rnd_Smoke_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeGreen_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeRed_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeBlue_Grenade_shell, 2);

		// Smoke Grenades
		maga_nc(SmokeShell, 10);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 1);
		maga_nc(Chemlight_green, 4);
		maga_nc(Chemlight_red, 4);
		maga_nc(Chemlight_blue, 4);

		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 6);
	};
};

// WIP BELOW! Rushed the finish for an OP. Must remember to finish!!
class TWC_AmmoBox_Modern_Javelin_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "UNFINISHED - Javelin Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 4);
		item_nc(ACE_elasticBandage, 4);
		item_nc(ACE_quikclot, 4);
		item_nc(ACE_packingBandage, 4);
		
		item_nc(ACE_morphine, 2);
		item_nc(ACE_epinephrine, 2);
		item_nc(ACE_tourniquet, 2);
	};
};

class TWC_AmmoBox_Modern_Sniper_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "UNFINISHED - Sniper Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 4);
		item_nc(ACE_elasticBandage, 4);
		item_nc(ACE_quikclot, 4);
		item_nc(ACE_packingBandage, 4);
		
		item_nc(ACE_morphine, 2);
		item_nc(ACE_epinephrine, 2);
		item_nc(ACE_tourniquet, 2);
	};
};

class TWC_AmmoBox_Modern_M6_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "UNFINISHED - M6 Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Modern";
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 4);
		item_nc(ACE_elasticBandage, 4);
		item_nc(ACE_quikclot, 4);
		item_nc(ACE_packingBandage, 4);
		
		item_nc(ACE_morphine, 2);
		item_nc(ACE_epinephrine, 2);
		item_nc(ACE_tourniquet, 2);
	};
};