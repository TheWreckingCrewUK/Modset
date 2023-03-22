class TWC_AmmoBox_GRUP_Group_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "GRU-P Group Resupply (Portable)";
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
		// AK-12
		maga_nc(CUP_30Rnd_545x39_AK12_Tan_M, 28);
		
		// Saiga-12k
		maga_nc(CUP_12Rnd_B_Saiga12_Slug, 6);
		maga_nc(CUP_12Rnd_B_Saiga12_Buck_00, 6);
		maga_nc(CUP_12Rnd_B_Saiga12_HE, 2);
		
		// PKP
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 8);
		
		// Grach
		maga_nc(16Rnd_9x21_Mag, 6);
		
		// Smoke Grenades
		maga_nc(SmokeShell, 6);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellBlue, 2);
		
		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 1);
		maga_nc(Chemlight_green, 4);
		maga_nc(Chemlight_red, 4);
		maga_nc(Chemlight_blue, 4);
		
		// Hand Grenade HE
		maga_nc(CUP_HandGrenade_RGD5, 6);
	};
};