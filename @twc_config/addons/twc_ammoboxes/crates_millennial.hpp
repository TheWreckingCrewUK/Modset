/* 
"TWC_AmmoBox_1990_Base",
"TWC_AmmoBox_1990_Section_Portable",

"TWC_AmmoBox_1990_Mechanised_Base",
"TWC_AmmoBox_1990_Mechanised_Section_Portable",

"TWC_AmmoBox_2000_Base",
"TWC_AmmoBox_2000_Section_Portable",

"TWC_AmmoBox_2000_Mechanised_Base",
"TWC_AmmoBox_2000_Mechanised_Section_Portable",

"TWC_AmmoBox_Millennial_Sniper_Portable",
*/

// 1990s Ammo Boxes
class TWC_AmmoBox_1990_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "1990s Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		maga_nc(UK3CB_BAF_556_30Rnd, 70);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 40);

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

class TWC_AmmoBox_1990_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "1990s Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		maga_nc(UK3CB_BAF_556_30Rnd, 24);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 8);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 8);
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

class TWC_AmmoBox_1990_Mechanised_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "1990s Mechanised Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
	class TransportItems {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ACE_Clacker, 5);
		
		item_nc(ACE_fieldDressing, 24);
		item_nc(ACE_elasticBandage, 24);
		item_nc(ACE_quikclot, 24);
		item_nc(ACE_packingBandage, 24);
		
		item_nc(ACE_morphine, 8);
		item_nc(ACE_epinephrine, 8);
		item_nc(ACE_tourniquet, 8);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 50);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 30);

		// Smoke Grenades
		maga_nc(SmokeShell, 30);
		maga_nc(SmokeShellRed, 8);
		maga_nc(SmokeShellGreen, 8);
		maga_nc(SmokeShellBlue, 8);
		maga_nc(SmokeShellYellow, 8);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 4);
		maga_nc(Chemlight_green, 15);
		maga_nc(Chemlight_red, 15);
		maga_nc(Chemlight_blue, 15);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 20);
	};
};

class TWC_AmmoBox_1990_Mechanised_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "1990s Mechanised Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		maga_nc(UK3CB_BAF_556_30Rnd, 18);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 4);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 6);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);
		
		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 1);
		maga_nc(Chemlight_green, 3);
		maga_nc(Chemlight_red, 3);
		maga_nc(Chemlight_blue, 3);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 4);
	};
};
// 2000s Ammo Boxes
class TWC_AmmoBox_2000_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "2000s Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		maga_nc(UK3CB_BAF_556_30Rnd, 50);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 20);
		
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

class TWC_AmmoBox_2000_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "2000s Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		maga_nc(UK3CB_BAF_556_30Rnd, 20);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 6);
		
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
		maga_nc(SmokeShell, 8);
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

class TWC_AmmoBox_2000_Mechanised_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "2000s Mechanised Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
	class TransportItems {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ACE_Clacker, 5);
		
		item_nc(ACE_fieldDressing, 24);
		item_nc(ACE_elasticBandage, 24);
		item_nc(ACE_quikclot, 24);
		item_nc(ACE_packingBandage, 24);
		
		item_nc(ACE_morphine, 8);
		item_nc(ACE_epinephrine, 8);
		item_nc(ACE_tourniquet, 8);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		maga_nc(UK3CB_BAF_556_30Rnd, 50);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 30);

		// Smoke Grenades
		maga_nc(SmokeShell, 30);
		maga_nc(SmokeShellRed, 8);
		maga_nc(SmokeShellGreen, 8);
		maga_nc(SmokeShellBlue, 8);
		maga_nc(SmokeShellYellow, 8);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 4);
		maga_nc(Chemlight_green, 15);
		maga_nc(Chemlight_red, 15);
		maga_nc(Chemlight_blue, 15);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 20);
	};
};

class TWC_AmmoBox_2000_Mechanised_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "2000s Mechanised Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		maga_nc(UK3CB_BAF_556_30Rnd, 18);
		maga_nc(UK3CB_BAF_556_30Rnd_T, 4);
		
		// UGL 40mm
		maga_nc(1Rnd_HE_Grenade_shell, 8);
		maga_nc(UGL_FlareWhite_F, 2);
		maga_nc(1Rnd_Smoke_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeGreen_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeRed_Grenade_shell, 2);
		maga_nc(1Rnd_SmokeBlue_Grenade_shell, 2);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 6);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);
		
		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 1);
		maga_nc(Chemlight_green, 3);
		maga_nc(Chemlight_red, 3);
		maga_nc(Chemlight_blue, 3);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_L109A2_HE, 4);
	};
};

// Millennial Ammo Boxes
class TWC_AmmoBox_Millennial_Sniper_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L96A1 - Sniper Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		// 7.62 L96A1
		maga_nc(UK3CB_BAF_762_L42A1_10Rnd, 12);
		maga_nc(UK3CB_BAF_762_L42A1_10Rnd_T, 6);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 2);
	};
};