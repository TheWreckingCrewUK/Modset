#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE GENERIC_EMPTY
class UK3CB_BAF_RHIB_GPMG;
class TWC_Vehicle_Generic_RHIB_Black: UK3CB_BAF_RHIB_GPMG {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "RHIB - GPMG (Black)";
	editorSubcategory = "TWC_ForceType_Amphibious";

	class TransportItems { };

	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_200Rnd, 6);
		ADD_MAGA(UK3CB_BAF_762_200Rnd_T, 6);
	};

	class TransportWeapons { };
	class TransportBackpacks { };

	ace_interaction_canPush = 1;
};

class UK3CB_BAF_RHIB_HMG;
class TWC_Vehicle_Generic_RHIB_HMG_Black: UK3CB_BAF_RHIB_HMG {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "RHIB - HMG (Black)";
	editorSubcategory = "TWC_ForceType_Amphibious";

	class TransportItems { };

	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_127_100Rnd, 9);
	};

	class TransportWeapons { };
	class TransportBackpacks { };

	ace_interaction_canPush = 1;

	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC103";
			allowedPositions[] = {"driver"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
		};
	};
};

class I_C_Boat_Transport_01_F;
class TWC_Vehicle_Generic_Zodiac_Black: I_C_Boat_Transport_01_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Zodiac (Black)";
	editorSubcategory = "TWC_ForceType_Amphibious";

	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };

	ace_interaction_canPush = 1;
};

class rksla3_lcvpmk5_1;
class TWC_Vehicle_Generic_LCVP_Navy: rksla3_lcvpmk5_1 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "LCVP (Navy)";
	editorSubcategory = "TWC_ForceType_Amphibious";

	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
};

class rksla3_lcvpmk5_viv;
class TWC_Vehicle_Generic_LCVP_VIV_Navy: rksla3_lcvpmk5_viv {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "LCVP (VIV, Navy)";
	editorSubcategory = "TWC_ForceType_Amphibious";

	class TransportItems { }; 
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
};