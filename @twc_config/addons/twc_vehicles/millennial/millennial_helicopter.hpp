#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MILLENNIAL_PUMA_MOD
class TWC_Vehicle_Millennial_Puma_RAF: CUP_B_SA330_Puma_HC1_BAF {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Puma (RAF)";
	editorSubcategory = "TWC_ForceType_AirMobility";
	
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
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
		
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MILLENNIAL_LYNX_MOD
class TWC_Vehicle_Millennial_Lynx_RAF: cwr3_b_uk_lynx_ah7_cas {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Lynx AH7";
	editorSubcategory = "TWC_ForceType_AirMobility";
	
	class Components: Components {
		class TransportPylonsComponent: TransportPylonsComponent {
			class pylons: pylons {
				class pylons1: pylons1 {
					attachment = "CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M";
				};
				class pylons2: pylons2 {
					attachment = "CUP_PylonPod_19Rnd_CRV7_HE_M";
				};
			};
		};
	};
	
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
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, ADD_QNTY(SECTION_GRENADE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};