#define CURRENT_VEHICLE COLDWAR_LANDROVERTRADITIONAL_MOD
class TWC_Vehicle_ColdWar_LandRover_Woodland: UK3CB_BAF_LandRover_Soft_Green_B {
	scope = 2;
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(COLDWAR_SECTION_MG));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(COLDWAR_SECTION_MG_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_L1A1_law, ADD_QNTY(COLDWAR_SECTION_LAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_ColdWar_LandRover_Desert: UK3CB_BAF_LandRover_Soft_Sand_A {
	scope = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover (Desert)";
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(COLDWAR_SECTION_MG));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(COLDWAR_SECTION_MG_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_L1A1_law, ADD_QNTY(COLDWAR_SECTION_LAW));
	};
	
	class TransportBackpacks { };
};

class TWC_Vehicle_ColdWar_LandRover_UN: UK3CB_BAF_LandRover_Soft_UN_A {
	scope = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover (UN)";
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(COLDWAR_SECTION_MG));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(COLDWAR_SECTION_MG_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_L1A1_law, ADD_QNTY(COLDWAR_SECTION_LAW));
	};
	
	class TransportBackpacks { };
};

class TWC_Vehicle_ColdWar_LandRover_Woodland_COIN: UK3CB_BAF_LandRover_Soft_Green_B {
	scope = 2;
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(ukcw_30Rnd_762x51_STANAG, ADD_QNTY(COLDWAR_SECTION_COIN_MG));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};

class TWC_Vehicle_ColdWar_LandRover_Desert_COIN: UK3CB_BAF_LandRover_Soft_Sand_A {
	scope = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover - COIN (Desert)";
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(ukcw_30Rnd_762x51_STANAG, ADD_QNTY(COLDWAR_SECTION_COIN_MG));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};

class TWC_Vehicle_ColdWar_LandRover_UN_COIN: UK3CB_BAF_LandRover_Soft_UN_A {
	scope = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover - COIN (UN)";
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
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(ukcw_30Rnd_762x51_STANAG, ADD_QNTY(COLDWAR_SECTION_COIN_MG));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};