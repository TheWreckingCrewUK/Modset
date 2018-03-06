#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MODERN_LANDROVER_MOD
class TWC_Vehicle_Modern_LandRover_Woodland: TWC_BaseClass_LR_Soft_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
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

class TWC_Vehicle_Modern_LandRover_Desert: TWC_Vehicle_Modern_LandRover_Woodland {
	displayname = "Land Rover (Desert)";

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

class TWC_Vehicle_Modern_LandRover_Woodland_COIN: TWC_BaseClass_LR_Soft_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover - COIN (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
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

class TWC_Vehicle_Modern_LandRover_Desert_COIN: TWC_Vehicle_Modern_LandRover_Woodland_COIN {
	displayname = "Land Rover - COIN (Desert)";
	
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

class TWC_Vehicle_Modern_LandRoverHard_Woodland: TWC_BaseClass_LR_Hard_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover - Hard Top (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
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

class TWC_Vehicle_Modern_LandRoverHard_Desert: TWC_Vehicle_Modern_LandRover_Woodland {
	displayname = "Land Rover - Hard Top (Desert)";

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

class TWC_Vehicle_Modern_LandRoverHard_Woodland_COIN: TWC_BaseClass_LR_Hard_Base_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover - Hard Top COIN (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
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

class TWC_Vehicle_Modern_LandRoverHard_Desert_COIN: TWC_Vehicle_Modern_LandRoverHard_Woodland_COIN {
	displayname = "Land Rover - Hard Top COIN (Desert)";
	
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

