#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_UNICARRIER
class TWC_Vehicle_WW2_UniversalCarrier_Woodland: TWC_Vehicle_WW2_UniversalCarrier_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Universal Carrier";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_CRUSADER
class TWC_Vehicle_WW2_Crusader: TWC_Vehicle_WW2_Crusader_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Crusader MkIII";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_VALENTINE
class TWC_Vehicle_WW2_Valentine: TWC_Vehicle_WW2_Valentine_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Valentine MkII";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_VALENTINE_SKIRTS
class TWC_Vehicle_WW2_Valentine_Skirts: TWC_Vehicle_WW2_Valentine_Skirts_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Valentine MkII";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_SHERMAN
class TWC_Vehicle_WW2_Sherman: TWC_Vehicle_WW2_Sherman_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Sherman III";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_FIREFLY
class LIB_M4A4_FIREFLY;
class TWC_Vehicle_WW2_Firefly: LIB_M4A4_FIREFLY {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Sherman VC";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_CROMWELL
class LIB_Cromwell_Mk4;
class TWC_Vehicle_WW2_Cromwell: LIB_Cromwell_Mk4 {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Cromwell MkIV";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};