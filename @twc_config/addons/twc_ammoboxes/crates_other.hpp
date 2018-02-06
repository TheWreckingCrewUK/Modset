/* // Other
"TWC_AmmoBox_Other_Medical_Portable",
"TWC_AmmoBox_Other_L134_Portable",	 	   // GMG
"TWC_AmmoBox_Other_L111_Portable",		   // HMG
"TWC_AmmoBox_Other_L7A2_Portable",   	   // GPMG
"TWC_AmmoBox_Other_L14_Portable",   	   // recoilless rifle carl gustav ammo
"TWC_AmmoBox_Other_L16_Portable",          // 81mm mortar
"TWC_AmmoBox_Other_L118_Portable",     	   // 105mm light gun
"TWC_AmmoBox_Other_L118_Portable_HE",      // 105mm light gun, he
"TWC_AmmoBox_Other_L118_Portable_SMOKE",   // 105mm light gun, smoke
"TWC_AmmoBox_Other_L118_Portable_ILLUM",   // 105mm light gun, illum
"TWC_AmmoBox_Other_Stinger_Portable",
"TWC_AmmoBox_Other_Command",         	   // radios, binos
"TWC_AmmoBox_Other_Pallet",                // has a cargo, no inventory (airborne, airmobile)
"TWC_AmmoBox_Other_Empty_Portable"         // a nice empty crate to ((Zeus)) items in */

class TWC_AmmoBox_Other_Medical_Portable: TWC_AmmoBox_Medical {
	scope = 2;
	scopeCurator = 2;
	displayName = "Medical Supplies (Portable)";

	class TransportItems {
		item_nc(ACE_fieldDressing, 32);
		item_nc(ACE_elasticBandage, 32);
		item_nc(ACE_quikclot, 32);
		item_nc(ACE_packingBandage, 32);
		
		item_nc(ACE_atropine, 5);
		item_nc(ACE_adenosine, 5);
		item_nc(ACE_morphine, 20);
		item_nc(ACE_epinephrine, 20);
		
		item_nc(ACE_salineIV_500, 24);
		item_nc(ACE_tourniquet, 4);
		item_nc(ACE_bodyBag, 5);
		
		item_nc(ACE_personalAidKit, 1);
	};
};

class TWC_AmmoBox_Other_L134_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L134 - Grenade Machine Gun (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_32Rnd_40mm_G_Box, 3);
	};
};

class TWC_AmmoBox_Other_L111_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L111 - Heavy Machine Gun (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_127_100Rnd, 3);
	};
};

class TWC_AmmoBox_Other_L7A2_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L7A2 - General Purpose Machine Gun (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_762_100Rnd_T, 2);
		maga_nc(UK3CB_BAF_762_100Rnd, 10);
	};
};

class TWC_AmmoBox_Other_L14_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L14 - Recoilless Rifle Ammo (Portable)";
	
	class TransportMagazines {
		maga_nc(ukcw_l14A1_HE, 2);
		maga_nc(ukcw_l14A1_HEAT, 2);
		maga_nc(ukcw_l14A1_ILLUM, 2);
		maga_nc(ukcw_l14A1_SMOKE, 2);
	};
};

class TWC_AmmoBox_Other_L16_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L16 - 81mm Mortar (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_Shells, 10);
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White, 4);
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_Flare_White, 2);
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White, 2);
	};
};

class TWC_AmmoBox_Other_L118_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable)";
	
	class TransportMagazines {
		maga_nc(ACE_CUP_30Rnd_105mmHE_M119_M, 10);
		maga_nc(ACE_CUP_30Rnd_105mmSMOKE_M119_M, 4);
		maga_nc(ACE_CUP_30Rnd_105mmILLUM_M119_M, 4);
	};	
};

class TWC_AmmoBox_Other_L118_Portable_HE: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, HE)";
	
	class TransportMagazines {
		maga_nc(ACE_CUP_30Rnd_105mmHE_M119_M, 20);
	};	
};

class TWC_AmmoBox_Other_L118_Portable_SMOKE: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, Smoke)";
	
	class TransportMagazines {
		maga_nc(ACE_CUP_30Rnd_105mmSMOKE_M119_M, 20);
	};	
};

class TWC_AmmoBox_Other_L118_Portable_ILLUM: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, Illum)";
	
	class TransportMagazines {
		maga_nc(ACE_CUP_30Rnd_105mmILLUM_M119_M, 20);
	};	
};

class TWC_AmmoBox_Other_Stinger_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Stinger (Portable)";
	
	class TransportMagazines {
		maga_nc(CUP_Stinger_M, 5);
	};
};

class TWC_AmmoBox_Other_Command_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Command Box (Portable)";
	
	class TransportItems {
		item_nc(ACRE_PRC117F, 4);
		item_nc(Binocular, 4);
	};
};

class TWC_AmmoBox_Engineer_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Millennial";
	
	class TransportItems {
		item_nc(DemoCharge_Remote_Mag, 5);
		item_nc(ATMine_Range_Mag, 5);
		item_nc(APERSTripMine_Wire_Mag, 5);
		item_nc(SatchelCharge_Remote_Mag, 2);
		item_nc(ACE_Sandbag_empty, 200);
	};
};