#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE GENERIC_AMBULANCE_MOD
class UK3CB_BAF_LandRover_Amb_Green_A;
class TWC_Vehicle_Generic_LandRoverAmbulance_Woodland: UK3CB_BAF_LandRover_Amb_Green_A {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Land Rover - Ambulance (Woodland)";
	editorSubcategory = "TWC_ForceType_Motorised";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(25));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(25));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(25));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(25));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(10));
		ADD_ITEM(ACE_morphine, ADD_QNTY(15));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(15));
		
		ADD_ITEM(ACE_atropine, ADD_QNTY(5));
		ADD_ITEM(ACE_adenosine, ADD_QNTY(5));
		ADD_ITEM(ACE_salineIV_500, ADD_QNTY(12));
		ADD_ITEM(ACE_bloodIV, ADD_QNTY(20));
		ADD_ITEM(ACE_bodyBag, ADD_QNTY(5));
		ADD_ITEM(ACE_personalAidKit, 1); // always only one
	}; 
	
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
	
	class AnimationSources {
		class AerialAtuR_Hide {
			initPhase = 1;
		};

		class AerialFR_Hide {
			initPhase = 1;
		};
		
		class ClanLogo_Hide {
			initPhase = 1;
		};
	};
};

class TWC_Vehicle_Generic_LandRoverAmbulance_Desert: TWC_Vehicle_Generic_LandRoverAmbulance_Woodland {
	displayname = "Land Rover - Ambulance (Desert)";

	hiddenSelectionsTextures[] = {
		"",
		"",
		"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_amb_ext_sand_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
	};
};