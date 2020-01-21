#define REGULAR_77(POSITIONS, INTERCOM) \
class AcreRacks { \
	class Rack_1 { \
		displayName = "Vehicle Radio"; \
		shortName = "Vehicle Radio"; \
		componentName = "ACRE_VRC64"; \
		allowedPositions[] = POSITIONS; \
		disabledPositions[] = {}; \
		defaultComponents[] = {}; \
		mountedRadio = "ACRE_PRC77"; \
		isRadioRemovable = 0; \
		intercom[] = INTERCOM; \
	}; \
};

#define SECTION_FIELDDRESSING 35
#define SECTION_QUIKCLOT 20
#define SECTION_ELASTICBANDAGE 20
#define SECTION_PACKINGBANDAGE 20
#define SECTION_TOURNIQUET 6
#define SECTION_MORPHINE 10
#define SECTION_EPINEPHRINE 6

#define SECTION_SMOKE 6
#define SECTION_GRENADE 6

#define WW2_SECTION_SMG 6
#define WW2_SECTION_RIFLE 40
#define WW2_SECTION_MG 12
#define WW2_SECTION_RIFLE_GRENADE 4
#define WW2_SECTION_AT_GRENADE 2

// Modifiers to the total amount
#define EMPTY_VEHICLE 0
#define WW2_WILLYS 0.5
#define WW2_AUSTINK5 1
#define WW2_M5A1 1

#define WW2_UNICARRIER 1
#define WW2_CRUSADER 0.5
#define WW2_VALENTINE 0.5
#define WW2_VALENTINE_SKIRTS 0.5
#define WW2_SHERMAN 0.5
#define WW2_FIREFLY 0.5
#define WW2_CROMWELL 0.5

#define WW2_GLIDER 2

#define WW2_LCA 2
#define WW2_LCVP 2
#define WW2_LCM 2
#define WW2_LCI 2

#define CURRENT_VEHICLE EMPTY_VEHICLE