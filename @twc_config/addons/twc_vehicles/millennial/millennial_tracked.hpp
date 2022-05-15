#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE 1990_FV432_MOD
class TWC_Vehicle_1990_FV432_Woodland: CUP_B_FV432_GB_GPMG {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s FV432 (Woodland)";
	editorSubcategory = "TWC_ForceType_Mechanised";

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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_MECHANISED_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_MECHANISED_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_1990_FV432_Woodland_COIN: TWC_Vehicle_1990_FV432_Woodland {
	displayname = "FV432 - COIN (Woodland)";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
		ADD_ITEM(ACE_CableTie, ADD_QNTY(8));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_MECHANISED_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_MECHANISED_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE 2000_FV432_MOD
class TWC_Vehicle_2000_FV432_Woodland: CUP_B_FV432_GB_GPMG {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s FV432 (Woodland)";
	editorSubcategory = "TWC_ForceType_Mechanised";

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
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_2000_FV432_Woodland_COIN: TWC_Vehicle_2000_FV432_Woodland {
	displayname = "2000s FV432 - COIN (Woodland)";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
		ADD_ITEM(ACE_CableTie, ADD_QNTY(8));
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
	};
	
	class TransportWeapons {
		ADD_WEAP(UK3CB_BAF_AT4_CS_AP_Launcher, 2);
	};
	
	class TransportBackpacks { };
};

// TODO: warrior here

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MILLENNIAL_SCIMITAR_MOD
class TWC_Vehicle_Millennial_Scimitar_Chameleon: cwr3_b_uk_fv107 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Scimitar (Chameleon)";
	editorSubcategory = "TWC_ForceType_Armoured";

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
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MILLENNIAL_SCORPION_MOD
class TWC_Vehicle_Millennial_Scorpion_Chameleon: cwr3_b_uk_fv101 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Scorpion (Chameleon)";
	editorSubcategory = "TWC_ForceType_Armoured";

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
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE 1990_WARRIOR_MOD
class TWC_Vehicle_1990_Warrior_Woodland: TWC_Vehicle_FV510_W {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "1990s Warrior (Woodland)";
	editorSubcategory = "TWC_ForceType_Mechanised";

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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_MECHANISED_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_MECHANISED_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { 
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE 2000_WARRIOR_MOD
class TWC_Vehicle_2000_Warrior_Woodland: TWC_Vehicle_FV510_W {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Warrior (Woodland)";
	editorSubcategory = "TWC_ForceType_Mechanised";

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
	};
	
	class TransportWeapons { 
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_2000_Warrior_Desert: TWC_Vehicle_FV510_D {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "2000s Warrior (Desert)";
	editorSubcategory = "TWC_ForceType_Mechanised";

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
	};
	
	class TransportWeapons { 
		ADD_WEAP(ukcw_law80_loaded, ADD_QNTY(MILLENNIAL_SECTION_LAW80));
	};

	class TransportBackpacks { };
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MILLENNIAL_CHIEFTAIN_MOD
class TWC_Vehicle_Millennial_Chieftain_Woodland: cwr3_b_uk_fv4201 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Chieftain (Woodland)";
	editorSubcategory = "TWC_ForceType_Armoured";

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
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(ukcw_l23a1_apfsds_hull, 40);
		ADD_MAGA(ukcw_l31_hesh_hull, 20);
		ADD_MAGA(ukcw_l34_smoke_hull, 4);
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};