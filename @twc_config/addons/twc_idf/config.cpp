class CfgPatches {
	class twc_idf {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"CUP_Creatures_Military_USArmy",
			"twc_faction",
			"twc_ai"
		};
	};
};

class CfgFactionClasses {
	class TWC_IDF_ColdWar {
		displayName = "Israel Defense Forces (1980)";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class CfgMarkers {
	class Flag;
	class TWC_Flag_Israel: Flag {
		name = "Israel";
		icon = "twc_idf\data\israel.paa";
		texture = "twc_idf\data\israel.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
};

class EventHandlers;

class CfgWeapons {
	#include "weapons.hpp"
};

class CfgVehicles {
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

	#include "backpacks.hpp"
	#include "uniformsV.hpp"

	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define ITEMS(RADIO,ITEMS) RADIO,ITEMS
	#define CW_ITEMS "ACE_EarPlugs","ACRE_PRC343","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
	#define MODERN_ITEMS ITEMS("ACRE_PRC343",CW_ITEMS)
	#define MAG_2(a) a, a
	#define MAG_3(a) a, a, a
	#define MAG_4(a) a, a, a, a
	#define MAG_5(a) a, a, a, a, a
	#define MAG_6(a) a, a, a, a, a, a
	#define MAG_7(a) a, a, a, a, a, a, a
	#define MAG_8(a) a, a, a, a, a, a, a, a
	#define MAG_9(a) a, a, a, a, a, a, a, a, a
	#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
	#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	class CUP_B_M113_USA;
	class TWC_Vehicle_IDF_ColdWar_M113: CUP_B_M113_USA {
		faction = "TWC_IDF_ColdWar";
		CATEGORY(TWC_ForceType_Mechanised)
		hiddenSelectionsTextures[] = {
			"twc_idf\data\m113_1_co.paa",
			"twc_idf\data\m113_2_co.paa"
		};

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
				intercom[] = {"intercom_1"};
			};
		};

		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 20);
			ADD_ITEM(ACE_elasticBandage, 20);
			ADD_ITEM(ACE_quikclot, 20);
			ADD_ITEM(ACE_packingBandage, 20);
			ADD_ITEM(ACE_tourniquet, 6);
			ADD_ITEM(ACE_morphine, 10);
			ADD_ITEM(ACE_epinephrine, 6);
		};

		class TransportMagazines {
			ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 18);
			ADD_MAGA(CUP_35Rnd_556x45_Red_Tracer_Galil_Mag, 6);
			
			ADD_MAGA(CUP_50Rnd_556x45_Galil_Mag, 12);
			ADD_MAGA(CUP_50Rnd_556x45_Red_Tracer_Galil_Mag, 4);
			
			ADD_MAGA(150Rnd_762x51_Box, 6);
			ADD_MAGA(150Rnd_762x51_Box_Tracer, 3);
			
			ADD_MAGA(SmokeShell, 6);
			ADD_MAGA(CUP_HandGrenade_M67, 6);
		};
	};

	#include "coldwar\units.hpp"
};

class CfgGroups {
	class WEST {
		class TWC_Groups_IDF_ColdWar {
			name = "TWC Groups IDF Cold War";
			#include "coldwar\groups.hpp"
			#include "modern\groups.hpp"
		};
	};
};