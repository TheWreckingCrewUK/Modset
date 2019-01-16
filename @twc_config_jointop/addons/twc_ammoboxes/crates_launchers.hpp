/* // Launchers
	"TWC_AmmoBox_Launchers_L14_Portable", // carl gustav launcher
	"TWC_AmmoBox_Launchers_L1A1_Portable", // m72 law
*/

class TWC_AmmoBox_Launchers_L14_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L14A1 - Carl Gustav (Portable)";
	
	editorSubcategory = "TWC_Crates_Launchers";
	
	class TransportWeapons {
		weap_nc(ukcw_l14A1, 2);
	};

	class TransportMagazines {
		// L14A1 Recoilless Rifle - Carl Gustav
		maga_nc(ukcw_l14a1_HEAT, 3);
		maga_nc(ukcw_l14a1_HE, 3);
		maga_nc(ukcw_l14a1_ILLUM, 1);
		maga_nc(ukcw_l14a1_SMOKE, 1);
	};
};

class TWC_AmmoBox_Launchers_L1A1_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L1A1 - M72 LAW (Portable)";
	
	editorSubcategory = "TWC_Crates_Launchers";
	
	class TransportWeapons {
		weap_nc(sp_l1a1_law66, 4);
	};
};



