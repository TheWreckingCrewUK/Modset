#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_UNICARRIER
class TWC_Vehicle_WW2_UniversalCarrier_Woodland: TWC_Vehicle_WW2_UniversalCarrier_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Universal Carrier (Woodland)";
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