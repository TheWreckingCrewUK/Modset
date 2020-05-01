#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE COLDWAR_FV432_MOD
class TWC_Vehicle_ColdWar_FV432_Woodland: CUP_B_FV432_GB_GPMG {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "FV432 (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(SP_30Rnd_9x19_L2A3_Sterling, ADD_QNTY(COLDWAR_SECTION_STERLING));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(COLDWAR_SECTION_MG));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(COLDWAR_SECTION_MG_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(sp_l1a1_law66, ADD_QNTY(COLDWAR_SECTION_LAW));
	};

	class TransportBackpacks { };

	class AcreIntercoms {
		class Intercom_1 {
			displayName = "Crew Intercom";
			shortName = "Crew";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			limitedPositions[] = {{"cargo", "all"}};
			numLimitedPositions = 1;
			masterPositions[] = {"crew"};
			connectedByDefault = 1;
		};
		class Intercom_2 {
			displayName = "Cargo Intercom";
			shortName = "Cargo";
			allowedPositions[] = {"commander", {"cargo", "all"}};
			disabledPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			masterPositions[] = {"commander"};
			connectedByDefault = 1;
		};
	};

	REGULAR_77({"driver", "gunner"}, {"intercom_1"})
};

/* class TWC_Vehicle_ColdWar_FV432_Desert: TWC_Vehicle_ColdWar_FV432_Woodland {
	displayname = "FV432 (Desert)";
}; */

class TWC_Vehicle_ColdWar_FV432_Woodland_COIN: CUP_B_FV432_GB_GPMG {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "FV432 - COIN (Woodland)";
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(SP_30Rnd_762_L4, ADD_QNTY(COLDWAR_SECTION_COIN_MG));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons {
		ADD_WEAP(sp_l1a1_law66, ADD_QNTY(COLDWAR_SECTION_LAW));
	};

	class TransportBackpacks { };

	class AcreIntercoms {
		class Intercom_1 {
			displayName = "Crew Intercom";
			shortName = "Crew";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			limitedPositions[] = {{"cargo", "all"}};
			numLimitedPositions = 1;
			masterPositions[] = {"crew"};
			connectedByDefault = 1;
		};
		class Intercom_2 {
			displayName = "Cargo Intercom";
			shortName = "Cargo";
			allowedPositions[] = {"commander", {"cargo", "all"}};
			disabledPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			masterPositions[] = {"commander"};
			connectedByDefault = 1;
		};
	};

	REGULAR_77({"driver", "gunner"}, {"intercom_1"})
};

/* class TWC_Vehicle_ColdWar_FV432_Desert_COIN: TWC_Vehicle_ColdWar_FV432_Woodland_COIN {
	displayname = "FV432 - COIN (Desert)";
}; */

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE COLDWAR_SCIMITAR_MOD
class TWC_Vehicle_ColdWar_Scimitar_Woodland: ukcw_cvrt_Scim_w_L1 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Scimitar (Woodland)";
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

	REGULAR_77({"commander", "gunner"}, {"intercom_1"})
};

class TWC_Vehicle_ColdWar_Scimitar_Desert: ukcw_cvrt_Scim_d_L1 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Scimitar (Desert)";
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

	REGULAR_77({"commander", "gunner"}, {"intercom_1"})
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE COLDWAR_SCORPION_MOD
class TWC_Vehicle_ColdWar_Scorpion_Woodland: ukcw_Scorpion_w_L1 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Scorpion (Woodland)";
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

	REGULAR_77({"commander", "gunner"}, {"intercom_1"})
};

class TWC_Vehicle_ColdWar_Scorpion_Desert: ukcw_Scorpion_d_L1 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Scorpion (Desert)";
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

	REGULAR_77({"commander", "gunner"}, {"intercom_1"})
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE COLDWAR_CHIEFTAIN_MOD
class TWC_Vehicle_ColdWar_Chieftain_Woodland: ukcw_chieftainmk10 {
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
		ADD_MAGA(ukcw_l15a4_apds_hull, 40);
		ADD_MAGA(ukcw_l31_hesh_hull, 20);
		ADD_MAGA(ukcw_l34_smoke_hull, 4);
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };

	REGULAR_77({"commander", "gunner"}, {"intercom"})
};