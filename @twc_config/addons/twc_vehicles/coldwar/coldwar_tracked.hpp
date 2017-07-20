#define CURRENT_VEHICLE COLDWAR_FV432_MOD

class TWC_Vehicle_ColdWar_FV432_Woodland: ukcw_fv432 {
	scope = 2;
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
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(COLDWAR_SECTION_MG));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(COLDWAR_SECTION_MG_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_L1A1_law, ADD_QNTY(COLDWAR_SECTION_LAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_ColdWar_FV432_Woodland_COIN: ukcw_fv432 {
	scope = 2;
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
		
		ADD_MAGA(ukcw_30Rnd_762x51_STANAG, ADD_QNTY(COLDWAR_SECTION_COIN_MG));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_L1A1_law, ADD_QNTY(COLDWAR_SECTION_LAW));
	};

	class TransportBackpacks { };
};