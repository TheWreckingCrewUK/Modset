#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MODERN_WARRIOR_MOD
class TWC_Vehicle_Modern_Warrior_Woodland: TWC_Vehicle_FV510_W_SLAT {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Warrior (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_MECHA_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_MECHA_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_Modern_Warrior_COIN_Woodland: TWC_Vehicle_FV510_W_SLAT {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Warrior - COIN (Woodland)";
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
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Slug, ADD_QNTY(MODERN_SHOTGUN_SLUG));
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Pellets, ADD_QNTY(MODERN_SHOTGUN_BUCK));
		
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_MECHA_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_MECHA_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_Modern_Warrior_Desert: TWC_Vehicle_FV510_D_SLAT {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Warrior (Desert)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_MECHA_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_MECHA_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_Modern_Warrior_COIN_Desert: TWC_Vehicle_FV510_D_SLAT {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Warrior - COIN (Desert)";
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
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Slug, ADD_QNTY(MODERN_SHOTGUN_SLUG));
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Pellets, ADD_QNTY(MODERN_SHOTGUN_BUCK));
		
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_MECHA_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_MECHA_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};

class UK3CB_BAF_FV432_Mk3_GPMG_Sand;
class TWC_Vehicle_Modern_Bulldog_Desert: UK3CB_BAF_FV432_Mk3_GPMG_Sand {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Bulldog (Desert)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MODERN_GPMG));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(MODERN_MACHINEGUNNER));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(MODERN_MACHINEGUNNER_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_Modern_Bulldog_COIN_Desert: UK3CB_BAF_FV432_Mk3_GPMG_Sand {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Bulldog - COIN (Desert)";
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
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Slug, ADD_QNTY(MODERN_SHOTGUN_SLUG));
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Pellets, ADD_QNTY(MODERN_SHOTGUN_BUCK));
		
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MODERN_GPMG));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(MODERN_MACHINEGUNNER));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(MODERN_MACHINEGUNNER_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};

class UK3CB_BAF_FV432_Mk3_GPMG_Green;
class TWC_Vehicle_Modern_Bulldog_Woodland: UK3CB_BAF_FV432_Mk3_GPMG_Green {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Bulldog (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MODERN_GPMG));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(MODERN_MACHINEGUNNER));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(MODERN_MACHINEGUNNER_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_Modern_Bulldog_COIN_Woodland: UK3CB_BAF_FV432_Mk3_GPMG_Green {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Bulldog - COIN (Woodland)";
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
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Slug, ADD_QNTY(MODERN_SHOTGUN_SLUG));
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Pellets, ADD_QNTY(MODERN_SHOTGUN_BUCK));
		
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MODERN_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MODERN_RIFLE_T));
		
		ADD_MAGA(1Rnd_HE_Grenade_shell, ADD_QNTY(MODERN_UGL_HE));
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, ADD_QNTY(MODERN_UGL_RED));
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, ADD_QNTY(MODERN_UGL_BLUE));
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, ADD_QNTY(MODERN_UGL_WHITE));
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, ADD_QNTY(MODERN_UGL_GREEN));
		
		ADD_MAGA(UK3CB_BAF_556_200Rnd, ADD_QNTY(MODERN_AUTORIFLE));
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T, ADD_QNTY(MODERN_AUTORIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_200Rnd, ADD_QNTY(MODERN_GPMG));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(MODERN_MACHINEGUNNER));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(MODERN_MACHINEGUNNER_T));
		
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd, ADD_QNTY(MODERN_MARKSMAN));
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, ADD_QNTY(MODERN_MARKSMAN_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(launch_NLAW_F, ADD_QNTY(MODERN_NLAW));
	};

	class TransportBackpacks { };
};
/*
#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MODERN_CHALLENGER2_MOD
class TWC_Vehicle_Modern_Challenger2_Desert: TWC_Vehicle_FV4034_Base {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Challenger 2 (Desert)";
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
	
	hiddenSelectionsTextures[] = {
		"\Burnes_Challenger\data\PH\challenger2_desert_co.paa",
		"#(argb,512,512,1)r2t(rendertarget3000,1.0)",
		"#(argb,512,512,1)r2t(rendertarget66,1.0)",
		"\Burnes_Challenger\data\PH\challenger2_turret_des_co.paa",
		"\Burnes_Challenger\data\PH\challengerV2_hull_des_co.paa",
		"\Burnes_Challenger\data\callsigns\11.paa",
		"\Burnes_Challenger\data\callsigns\scot.paa",
		"\Burnes_Challenger\data\PH\hatches_des_co"
	};
};

class TWC_Vehicle_Modern_Challenger2_Woodland: TWC_Vehicle_FV4034_Base {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Challenger 2 (Woodland)";
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
	
	hiddenSelectionsTextures[] = {
		"\Burnes_Challenger\data\PH\challenger2_woodland_co",
		"#(argb,512,512,1)r2t(rendertarget3000,1.0)",
		"#(argb,512,512,1)r2t(rendertarget66,1.0)",
		"\Burnes_Challenger\data\PH\challenger2_turret_wood_co.paa",
		"\Burnes_Challenger\data\PH\challengerV2_hull_wood_co.paa",
		"\Burnes_Challenger\data\callsigns\11.paa",
		"\Burnes_Challenger\data\callsigns\scot.paa",
		"\Burnes_Challenger\data\PH\hatches_co"
	};
};
*/