#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MILLENNIAL_LANDROVER_MOD
class TWC_Vehicle_1990_LandRover_Woodland: TWC_BaseClass_LR_Soft_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Land Rover (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_1990_LandRover_Desert: TWC_Vehicle_Millennial_LandRover_Woodland {
	displayname = "1990s Land Rover (Desert)";

	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_1990_LandRover_Woodland_COIN: TWC_BaseClass_LR_Soft_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Land Rover - COIN (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_1990_LandRover_Desert_COIN: TWC_Vehicle_1990_LandRover_Woodland_COIN {
	displayname = "1990s Land Rover - COIN (Desert)";
	
	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_1990_LandRoverHard_Woodland: TWC_BaseClass_LR_Hard_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Land Rover - Hard Top (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_1990_LandRoverHard_Desert: TWC_Vehicle_1990_LandRover_Woodland {
	displayname = "1990s Land Rover - Hard Top (Desert)";

	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_1990_LandRoverHard_Woodland_COIN: TWC_BaseClass_LR_Hard_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Land Rover - Hard Top COIN (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_1990_LandRoverHard_Desert_COIN: TWC_Vehicle_1990_LandRoverHard_Woodland_COIN {
	displayname = "1990s Land Rover - Hard Top COIN (Desert)";
	
	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_Millennial_LandRoverSnatch_NI_COIN: TWC_BaseClass_LR_Snatch_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover - Snatch COIN (NI)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_1990s_LandRoverSnatch_Desert_COIN: TWC_BaseClass_LR_Snatch_Desert_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Land Rover - Snatch COIN (Desert)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_1990_LandRoverWMIK_GPMG_Woodland: TWC_BaseClass_LR_WMIK_GPMG_Green_Base {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Land Rover - WMIK (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd_T, ADD_QNTY(MILLENNIAL_GPMG));
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MILLENNIAL_GPMG));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};
	
	class TransportBackpacks { };
};

class TWC_Vehicle_1990_LandRoverWMIK_GPMG_Desert: TWC_BaseClass_LR_WMIK_GPMG_Sand_Base {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Land Rover - WMIK (Desert)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd_T, ADD_QNTY(MILLENNIAL_GPMG));
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MILLENNIAL_GPMG));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};
	
	class TransportBackpacks { };
};
class TWC_Vehicle_2000_LandRover_Woodland: TWC_BaseClass_LR_Soft_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Land Rover (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
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
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_2000_LandRover_Desert: TWC_Vehicle_Millennial_LandRover_Woodland {
	displayname = "2000s Land Rover (Desert)";

	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_2000_LandRover_Woodland_COIN: TWC_BaseClass_LR_Soft_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Land Rover - COIN (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
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
	};
	
	class TransportWeapons {
	weap_nc(UK3CB_BAF_AT4_CS_AP_Launcher, 2);
	};
	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_2000_LandRover_Desert_COIN: TWC_Vehicle_2000_LandRover_Woodland_COIN {
	displayname = "2000s Land Rover - COIN (Desert)";
	
	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_2000_LandRoverHard_Woodland: TWC_BaseClass_LR_Hard_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Land Rover - Hard Top (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
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
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_2000_LandRoverHard_Desert: TWC_Vehicle_2000_LandRover_Woodland {
	displayname = "2000s Land Rover - Hard Top (Desert)";

	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_2000_LandRoverHard_Woodland_COIN: TWC_BaseClass_LR_Hard_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Land Rover - Hard Top COIN (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
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
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_2000_LandRoverHard_Desert_COIN: TWC_Vehicle_2000_LandRoverHard_Woodland_COIN {
	displayname = "2000s Land Rover - Hard Top COIN (Desert)";
	
	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
	
	class AnimationSources: AnimationSources {
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 0;
		};
	};
};

class TWC_Vehicle_2000s_LandRoverSnatch_Desert_COIN: TWC_BaseClass_LR_Snatch_Desert_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Land Rover - Snatch COIN (Desert)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
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
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AnimationSources: AnimationSources {
		class AerialAtuR_Hide: AerialAtuR_Hide {
			initPhase = 1;
		};
		
		class AerialAtuL_Hide: AerialAtuL_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide: AerialFR_Hide {
			initPhase = 1;
		};
		
		class AerialFL_Hide: AerialFL_Hide {
			initPhase = 0;
		};
		
		class ClanLogo_Hide: ClanLogo_Hide {
			initPhase = 1;
		};
		
		class Mudguards_Hide: Mudguards_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_2000_LandRoverWMIK_GPMG_Woodland: TWC_BaseClass_LR_WMIK_GPMG_Green_Base {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Land Rover - WMIK (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
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
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd_T, ADD_QNTY(MILLENNIAL_GPMG));
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MILLENNIAL_GPMG));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};
	
	class TransportBackpacks { };
};

class TWC_Vehicle_2000_LandRoverWMIK_GPMG_Desert: TWC_BaseClass_LR_WMIK_GPMG_Sand_Base {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Land Rover - WMIK (Desert)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
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
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd_T, ADD_QNTY(MILLENNIAL_GPMG));
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MILLENNIAL_GPMG));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};
	
	class TransportBackpacks { };
};