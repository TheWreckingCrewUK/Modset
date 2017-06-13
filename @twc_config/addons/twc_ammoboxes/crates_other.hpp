/* // Other
"TWC_AmmoBox_Other_Medical_Portable",
"TWC_AmmoBox_Other_L134_Portable",   // GMG
"TWC_AmmoBox_Other_L111_Portable",   // HMG
"TWC_AmmoBox_Other_L7A2_Portable",   // GPMG
"TWC_AmmoBox_Other_L14_Portable",    // recoilless rifle carl gustav
"TWC_AmmoBox_Other_L16_Portable",    // 81mm mortar
"TWC_AmmoBox_Other_Stinger_Portable",
"TWC_AmmoBox_Other_Pallet",          // has a cargo, no inventory (airborne, airmobile)
"TWC_AmmoBox_Other_Empty_Portable"   // a nice empty crate to ((Zeus)) items in */

class TWC_AmmoBox_Other_Medical_Portable: TWC_AmmoBox_Medical {
	set_scope(2);
	displayName = "Medical Supplies (Portable)";

	class TransportItems {
		item_nc(ACE_fieldDressing, 30);
		item_nc(ACE_elasticBandage, 30);
		item_nc(ACE_quickclot, 30);
		item_nc(ACE_packingBandage, 30);
		
		item_nc(ACE_atropine, 5);
		item_nc(ACE_adenosine, 5);
		item_nc(ACE_morphine, 20);
		item_nc(ACE_epinephrine, 20);
		
		item_nc(ACE_plasmaIV, 5);
		item_nc(ACE_plasmaIV_500, 10);
		item_nc(ACE_tourniquet, 6);
		item_nc(ACE_bodyBag, 4);
		
		item_nc(ACE_personalAidKit, 1);
	};
};

class TWC_AmmoBox_Other_L134_Portable: TWC_AmmoBox_Portable {
	set_scope(2);
	displayName = "L134 - Grenade Machine Gun (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_32Rnd_40mm_G_Box, 3);
	};
};

class TWC_AmmoBox_Other_L111_Portable: TWC_AmmoBox_Portable {
	set_scope(2);
	displayName = "L111 - Heavy Machine Gun (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_127_100Rnd, 3);
	};
};

class TWC_AmmoBox_Other_L7A2_Portable: TWC_AmmoBox_Portable {
	set_scope(2);
	displayName = "L7A2 - General Purpose Machine Gun (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_762_100Rnd_T, 2);
		maga_nc(UK3CB_BAF_762_100Rnd, 10);
	};
};

class TWC_AmmoBox_Other_L14_Portable: TWC_AmmoBox_Portable {
	set_scope(2);
	displayName = "L14 - Recoilless Rifle (Portable)";
	
	class TransportMagazines {
		maga_nc(ukcw_l14A1_HE, 2);
		maga_nc(ukcw_l14A1_HEAT, 2);
		maga_nc(ukcw_l14A1_ILLUM, 2);
		maga_nc(ukcw_l14A1_SMOKE, 2);
	};
};

class TWC_AmmoBox_Other_L16_Portable: TWC_AmmoBox_Portable {
	set_scope(2);
	displayName = "L16 - 81mm Mortar (Portable)";
	
	class TransportMagazines {
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_Shells, 10);
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White, 4);
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_Flare_White, 2);
		maga_nc(UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White, 2);
	};
};

class TWC_AmmoBox_Other_Stinger_Portable: TWC_AmmoBox_Portable {
	set_scope(2);
	displayName = "Stinger (Portable)";
	
	class TransportMagazines {
		maga_nc(CUP_Stinger_M, 5);
	};
};
