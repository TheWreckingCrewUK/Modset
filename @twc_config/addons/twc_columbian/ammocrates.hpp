class TWC_AmmoBox_Portable;
class TWC_AmmoBox_Colombian_Section_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Colombian Squad Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Other";
	
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