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

class TWC_AmmoBox_Launchers_LASM_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "LASM - M72 LAW (Portable)";
	
	editorSubcategory = "TWC_Crates_Launchers";
	
	class TransportWeapons {
		weap_nc(CUP_launch_M72A6, 4);
	};
};

class TWC_AmmoBox_Launchers_LAW80_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L1A1 - LAW 80 (Portable)";
	
	editorSubcategory = "TWC_Crates_Launchers";
	
	class TransportWeapons {
		weap_nc(ukcw_law80_loaded, 2);
	};
};

// Took Riks word for the desgination
class TWC_AmmoBox_Launchers_L2A1_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "L2A1 - AT4 CS AP (Portable)";
	
	editorSubcategory = "TWC_Crates_Launchers";
	
	class TransportWeapons {
		weap_nc(UK3CB_BAF_AT4_CS_AP_Launcher, 2);
	};
};

class TWC_AmmoBox_Launchers_NLAW_Portable: TWC_AmmoBox_Launcher_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "NLAW (Portable)";
	
	editorSubcategory = "TWC_Crates_Launchers";
	
	class TransportWeapons {
		weap_nc(launch_NLAW_F, 2);
	};
};



