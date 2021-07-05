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
		ADD_ITEM(ACE_fieldDressing, 15);
		ADD_ITEM(ACE_elasticBandage, 15);
		ADD_ITEM(ACE_quikclot, 15);
		ADD_ITEM(ACE_packingBandage, 15);
		
		ADD_ITEM(ACE_atropine, 2);
		ADD_ITEM(ACE_adenosine, 2);
		ADD_ITEM(ACE_morphine, 6);
		ADD_ITEM(ACE_epinephrine, 6);
		
		ADD_ITEM(ACE_salineIV_500, 12);
		ADD_ITEM(ACE_salineIV_250, 2);
		ADD_ITEM(ACE_tourniquet, 4);
		ADD_ITEM(ACE_bodyBag, 6);
		
		ADD_ITEM(ACE_personalAidKit, 1);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25, 1);
	};
};

class TWC_AmmoBox_Other_L134_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L134 - Grenade Machine Gun (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_32Rnd_40mm_G_Box, 3);
	};
	
	// TWC Defines
	twc_ammobox_type      = "other";
};

class TWC_AmmoBox_Other_L111_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L111 - Heavy Machine Gun (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_127_100Rnd, 3);
	};
	
	// TWC Defines
	twc_ammobox_type      = "other";
};

class TWC_AmmoBox_Other_L7A2_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L7A2 - General Purpose Machine Gun (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, 2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 10);
	};
	
	// TWC Defines
	twc_ammobox_type      = "other";
};

class TWC_AmmoBox_Other_L14_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L14 - Recoilless Rifle Ammo (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(ukcw_l14A1_HE, 3);
		ADD_MAGA(ukcw_l14A1_HEAT, 3);
		ADD_MAGA(ukcw_l14A1_ILLUM, 2);
		ADD_MAGA(ukcw_l14A1_SMOKE, 2);
	};
	
	// TWC Defines
	twc_ammobox_type      = "launcher";
};

class TWC_AmmoBox_Other_MILAN_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "MILAN (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(ukcw_milan_ace_missile, 6);
	};
	
	// TWC Defines
	twc_ammobox_type      = "launcher";
};

class TWC_AmmoBox_Other_L16_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L16 - 81mm Mortar (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_81mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White, 4);
		ADD_MAGA(UK3CB_BAF_1Rnd_81mm_Mo_Flare_White, 2);
		ADD_MAGA(UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White, 2);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_HE, 10);
		ADD_MAGA(TWC_Magazine_105mm_1rnd_Smoke_White, 6);
		ADD_MAGA(TWC_Magazine_105mm_1rnd_Illum, 4);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable_HE: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, HE)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_HE, 20);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable_HESH: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, HESH)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_HESH, 20);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable_SMOKE: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, Smoke, White)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_Smoke_White, 20);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable_SMOKE_RED: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, Smoke, Red)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_Smoke_Red, 20);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable_SMOKE_ORANGE: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, Smoke, Orange)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_Smoke_Orange, 20);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable_ILLUM: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, Illum)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_Illum, 20);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_L118_Portable_ILLUM_IR: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L118 - 105mm Light Gun (Portable, Illum, IR)";
	
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_105mm_1rnd_Illum_IR, 20);
	};
	
	// TWC Defines
	twc_ammobox_type      = "artillery";
};

class TWC_AmmoBox_Other_Stinger_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Stinger (Portable)";
	
	class TransportMagazines {
		ADD_MAGA(CUP_Stinger_M, 5);
	};
	
	// TWC Defines
	twc_ammobox_type      = "launcher";
};

class TWC_AmmoBox_Other_Command_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Command Box (Portable)";
	
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F, 4);
		ADD_ITEM(Binocular, 4);
	};
	
	// TWC Defines
	twc_ammobox_type      = "other";
};

class TWC_AmmoBox_Engineer_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer Resupply (Portable)";
	
	class TransportItems {
		ADD_ITEM(ACE_Clacker,2);
		ADD_ITEM(DemoCharge_Remote_Mag, 5);
		ADD_ITEM(ATMine_Range_Mag, 5);
		ADD_ITEM(APERSTripMine_Wire_Mag, 5);
		ADD_ITEM(SatchelCharge_Remote_Mag, 2);
		ADD_ITEM(ACE_Sandbag_empty, 200);
	};
	
	// TWC Defines
	twc_ammobox_type      = "other";
};

class TWC_AmmoBox_Other_Sergeant_Utility: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Sergeant Utility Box";
	class TransportItems {
		ADD_ITEM(ACE_Clacker,1);
		ADD_ITEM(DemoCharge_Remote_Mag, 5);
		ADD_ITEM(ACE_wirecutter,1);
		ADD_ITEM(ACE_EntrenchingTool,3);
		ADD_ITEM(ACE_CableTie,5);
		ADD_ITEM(SmokeShellYellow,6);
		ADD_ITEM(SmokeShellGreen,6);
	};
	
	// TWC Defines
	twc_ammobox_type      = "other";
};

class TWC_AmmoBox_Other_Replenish: TWC_AmmoBox_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Replenish Base Box";
	
	class ACE_Actions {
		class ACE_MainActions {
			class TWC_Replenish_Boxes {
				displayName = "Replenish Boxes";
				condition = "true";
				exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
				insertChildren = "[_target, _player] call TWC_Box_Replenish_fnc_getReplenishChildren";
				icon = "twc_box_replenish\ui\replenish_ca.paa";
			};
			
			class TWC_Replenish_Counts {
				displayName = "Check Remaining Replenishment";
				condition = "true";
				exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
				statement = "_target call TWC_Box_Replenish_fnc_checkCounts";
			};
		};
	};
};