#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_WILLYS
class TWC_Vehicle_WW2_Willys_Woodland: TWC_Vehicle_WW2_Willys_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Willys";
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
		ADD_MAGA(LIB_32Rnd_9x19_Sten, ADD_QNTY(WW2_SECTION_SMG));
		ADD_MAGA(LIB_10Rnd_770x56, ADD_QNTY(WW2_SECTION_RIFLE));
		ADD_MAGA(LIB_30Rnd_770x56, ADD_QNTY(WW2_SECTION_MG));

		ADD_MAGA(LIB_1Rnd_G_MillsBomb, ADD_QNTY(WW2_SECTION_RIFLE_GRENADE));
		ADD_MAGA(LIB_MillsBomb, ADD_QNTY(SECTION_GRENADE));
		ADD_MAGA(LIB_No82, ADD_QNTY(WW2_SECTION_AT_GRENADE));
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};

	class TransportWeapons {};
	class TransportBackpacks {};
};
class TWC_Vehicle_WW2_Willys_Woodland_Early: TWC_Vehicle_WW2_Willys_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Willys (Early)";
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
		ADD_MAGA(LIB_30Rnd_45ACP, ADD_QNTY(WW2_SECTION_SMG));
		ADD_MAGA(LIB_10Rnd_770x56, ADD_QNTY(WW2_SECTION_RIFLE));
		ADD_MAGA(LIB_30Rnd_770x56, ADD_QNTY(WW2_SECTION_MG));

		ADD_MAGA(LIB_1Rnd_G_MillsBomb, ADD_QNTY(WW2_SECTION_RIFLE_GRENADE));
		ADD_MAGA(LIB_MillsBomb, ADD_QNTY(SECTION_GRENADE));
		ADD_MAGA(LIB_No82, ADD_QNTY(WW2_SECTION_AT_GRENADE));
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};

	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_AUSTINK5
class TWC_Vehicle_WW2_AustinK5: TWC_Vehicle_WW2_AustinK5_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Austin K5";
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
		ADD_MAGA(LIB_32Rnd_9x19_Sten, ADD_QNTY(WW2_SECTION_SMG));
		ADD_MAGA(LIB_10Rnd_770x56, ADD_QNTY(WW2_SECTION_RIFLE));
		ADD_MAGA(LIB_30Rnd_770x56, ADD_QNTY(WW2_SECTION_MG));

		ADD_MAGA(LIB_1Rnd_G_MillsBomb, ADD_QNTY(WW2_SECTION_RIFLE_GRENADE));
		ADD_MAGA(LIB_MillsBomb, ADD_QNTY(SECTION_GRENADE));
		ADD_MAGA(LIB_No82, ADD_QNTY(WW2_SECTION_AT_GRENADE));
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};

	class TransportWeapons {};
	class TransportBackpacks {};
};
class TWC_Vehicle_WW2_AustinK5_Early: TWC_Vehicle_WW2_AustinK5_F {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "Austin K5 (Early)";
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
		ADD_MAGA(LIB_30Rnd_45ACP, ADD_QNTY(WW2_SECTION_SMG));
		ADD_MAGA(LIB_10Rnd_770x56, ADD_QNTY(WW2_SECTION_RIFLE));
		ADD_MAGA(LIB_30Rnd_770x56, ADD_QNTY(WW2_SECTION_MG));

		ADD_MAGA(LIB_1Rnd_G_MillsBomb, ADD_QNTY(WW2_SECTION_RIFLE_GRENADE));
		ADD_MAGA(LIB_MillsBomb, ADD_QNTY(SECTION_GRENADE));
		ADD_MAGA(LIB_No82, ADD_QNTY(WW2_SECTION_AT_GRENADE));
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};

	class TransportWeapons {};
	class TransportBackpacks {};
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE WW2_M5A1
class LIB_UK_M3_Halftrack;
class TWC_Vehicle_WW2_M5A1: LIB_UK_M3_Halftrack {
	scope = 2;
	scopeCurator = 2;
	ADD_FACTION;

	displayname = "M5A1";
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
	
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};

	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC64";
			allowedPositions[] = {"driver", "gunner"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC77";
			isRadioRemovable = 0;
			intercom[] = {};
		};
	};
};