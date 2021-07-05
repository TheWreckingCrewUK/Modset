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
	scope = 1;
	scopeCurator = 1;
	displayName = "1990s Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
	class TransportItems {
		ADD_ITEM(DemoCharge_Remote_Mag, 5);
		ADD_ITEM(ACE_Clacker, 5);
		
		ADD_ITEM(ACE_fieldDressing, 32);
		ADD_ITEM(ACE_elasticBandage, 32);
		ADD_ITEM(ACE_quikclot, 32);
		ADD_ITEM(ACE_packingBandage, 32);
		
		ADD_ITEM(ACE_morphine, 16);
		ADD_ITEM(ACE_epinephrine, 16);
		ADD_ITEM(ACE_tourniquet, 16);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 70);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 40);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 40);
		ADD_MAGA(SmokeShellRed, 10);
		ADD_MAGA(SmokeShellGreen, 10);
		ADD_MAGA(SmokeShellBlue, 10);
		ADD_MAGA(SmokeShellYellow, 10);

		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 6);
		ADD_MAGA(Chemlight_green, 20);
		ADD_MAGA(Chemlight_red, 20);
		ADD_MAGA(Chemlight_blue, 20);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 25);
	};
};

class TWC_AmmoBox_1990_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "1990s Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 18);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 8);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 6);
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

class TWC_AmmoBox_1990_Mechanised_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "1990s Mechanised Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
	class TransportItems {
		ADD_ITEM(DemoCharge_Remote_Mag, 5);
		ADD_ITEM(ACE_Clacker, 5);
		
		ADD_ITEM(ACE_fieldDressing, 24);
		ADD_ITEM(ACE_elasticBandage, 24);
		ADD_ITEM(ACE_quikclot, 24);
		ADD_ITEM(ACE_packingBandage, 24);
		
		ADD_ITEM(ACE_morphine, 8);
		ADD_ITEM(ACE_epinephrine, 8);
		ADD_ITEM(ACE_tourniquet, 8);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 50);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 30);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 30);
		ADD_MAGA(SmokeShellRed, 8);
		ADD_MAGA(SmokeShellGreen, 8);
		ADD_MAGA(SmokeShellBlue, 8);
		ADD_MAGA(SmokeShellYellow, 8);

		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 4);
		ADD_MAGA(Chemlight_green, 15);
		ADD_MAGA(Chemlight_red, 15);
		ADD_MAGA(Chemlight_blue, 15);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 20);
	};
};

class TWC_AmmoBox_1990_Mechanised_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "1990s Mechanised Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 18);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 4);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 6);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellGreen, 2);
		ADD_MAGA(SmokeShellBlue, 2);
		ADD_MAGA(SmokeShellYellow, 2);
		
		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 1);
		ADD_MAGA(Chemlight_green, 3);
		ADD_MAGA(Chemlight_red, 3);
		ADD_MAGA(Chemlight_blue, 3);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 4);
	};
};
// 2000s Ammo Boxes
class TWC_AmmoBox_2000_Base: TWC_AmmoBox_Base {
	scope = 1;
	scopeCurator = 1;
	displayName = "2000s Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
	class TransportItems {
		ADD_ITEM(DemoCharge_Remote_Mag, 5);
		ADD_ITEM(ACE_Clacker, 5);
		
		ADD_ITEM(ACE_fieldDressing, 32);
		ADD_ITEM(ACE_elasticBandage, 32);
		ADD_ITEM(ACE_quikclot, 32);
		ADD_ITEM(ACE_packingBandage, 32);
		
		ADD_ITEM(ACE_morphine, 16);
		ADD_ITEM(ACE_epinephrine, 16);
		ADD_ITEM(ACE_tourniquet, 16);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 50);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 20);
		
		// FN Minimi AR
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 10);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, 10);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 30);
		ADD_MAGA(UGL_FlareWhite_F, 10);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 10);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 10);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 10);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 10);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 40);
		ADD_MAGA(SmokeShellRed, 10);
		ADD_MAGA(SmokeShellGreen, 10);
		ADD_MAGA(SmokeShellBlue, 10);
		ADD_MAGA(SmokeShellYellow, 10);

		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 6);
		ADD_MAGA(Chemlight_green, 20);
		ADD_MAGA(Chemlight_red, 20);
		ADD_MAGA(Chemlight_blue, 20);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 25);
	};
};

class TWC_AmmoBox_2000_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "2000s Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 6);
		
		// FN Minimi AR
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 6);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, 2);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
		ADD_MAGA(UGL_FlareWhite_F, 2);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 2);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 8);
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

class TWC_AmmoBox_2000_Mechanised_Base: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "2000s Mechanised Base Resupply (Immobile)";
	editorSubcategory = "TWC_Crates_Millennial";
	
	class TransportItems {
		ADD_ITEM(DemoCharge_Remote_Mag, 5);
		ADD_ITEM(ACE_Clacker, 5);
		
		ADD_ITEM(ACE_fieldDressing, 24);
		ADD_ITEM(ACE_elasticBandage, 24);
		ADD_ITEM(ACE_quikclot, 24);
		ADD_ITEM(ACE_packingBandage, 24);
		
		ADD_ITEM(ACE_morphine, 8);
		ADD_ITEM(ACE_epinephrine, 8);
		ADD_ITEM(ACE_tourniquet, 8);
	};
	
	class TransportMagazines {
		// L85/L86 Stanag
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 50);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 30);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 30);
		ADD_MAGA(SmokeShellRed, 8);
		ADD_MAGA(SmokeShellGreen, 8);
		ADD_MAGA(SmokeShellBlue, 8);
		ADD_MAGA(SmokeShellYellow, 8);

		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 4);
		ADD_MAGA(Chemlight_green, 15);
		ADD_MAGA(Chemlight_red, 15);
		ADD_MAGA(Chemlight_blue, 15);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 20);
	};
};

class TWC_AmmoBox_2000_Mechanised_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "2000s Mechanised Section Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 18);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, 4);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
		ADD_MAGA(UGL_FlareWhite_F, 2);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 2);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 6);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellGreen, 2);
		ADD_MAGA(SmokeShellBlue, 2);
		ADD_MAGA(SmokeShellYellow, 2);
		
		// Night Time Party Time - IR, Chem-lights
		ADD_MAGA(B_IR_Grenade, 1);
		ADD_MAGA(Chemlight_green, 3);
		ADD_MAGA(Chemlight_red, 3);
		ADD_MAGA(Chemlight_blue, 3);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 4);
	};
};

// Millennial Ammo Boxes
class TWC_AmmoBox_Millennial_Sniper_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L96A1 - Sniper Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
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
		// 7.62 L96A1
		ADD_MAGA(UK3CB_BAF_762_L42A1_10Rnd, 12);
		ADD_MAGA(UK3CB_BAF_762_L42A1_10Rnd_T, 6);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 2);
	};
};