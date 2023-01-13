class CfgPatches {
	class TWC_Vehicles {
		units[] = {
			// TWC Vehicles
			"TWC_Vehicle_Generic_LandRoverAmbulance_Woodland",
			"TWC_Vehicle_Generic_LandRoverAmbulance_Desert",
			"TWC_Vehicle_Generic_FV432Ambulance_Chameleon",
			"TWC_Vehicle_Generic_Hercules_RAF_VIV",
			"TWC_Vehicle_Generic_Chinook_RAF",
			"TWC_Vehicle_Generic_Chinook_RAF_VIV",
			"TWC_Vehicle_Generic_Gazelle",
			"TWC_Vehicle_Generic_RHIB_Black",
			"TWC_Vehicle_Generic_RHIB_HMG_Black",
			"TWC_Vehicle_Generic_Zodiac_Black",
			
			"TWC_Vehicle_Modern_Wildcat_RAF",
			"TWC_Vehicle_Modern_Wildcat_RAF_COIN",
			"TWC_Vehicle_Modern_LandRover_Woodland",
			"TWC_Vehicle_Modern_LandRover_Desert",
			"TWC_Vehicle_Modern_LandRover_Woodland_COIN",
			"TWC_Vehicle_Modern_LandRover_Desert_COIN",
			"TWC_Vehicle_Modern_LandRoverHard_Woodland",
			"TWC_Vehicle_Modern_LandRoverHard_Desert",
			"TWC_Vehicle_Modern_LandRoverHard_Woodland_COIN",
			"TWC_Vehicle_Modern_LandRoverHard_Desert_COIN",
			"TWC_Vehicle_Modern_Mastiff_HMG_Woodland",
			"TWC_Vehicle_Modern_Mastiff_HMG_Woodland_COIN",
			"TWC_Vehicle_Modern_Mastiff_HMG_Desert",
			"TWC_Vehicle_Modern_Mastiff_HMG_Desert_COIN",
			"TWC_Vehicle_Modern_Mastiff_GMG_Woodland",
			"TWC_Vehicle_Modern_Mastiff_GMG_Woodland_COIN",
			"TWC_Vehicle_Modern_Mastiff_GMG_Desert",
			"TWC_Vehicle_Modern_Mastiff_GMG_Desert_COIN",
			"TWC_Vehicle_Modern_LandRoverWMIK_GMG_Woodland_COIN",
			"TWC_Vehicle_Modern_LandRoverWMIK_GMG_Woodland",
			"TWC_Vehicle_Modern_LandRoverWMIK_GMG_Desert_COIN",
			"TWC_Vehicle_Modern_LandRoverWMIK_GMG_Desert",
			"TWC_Vehicle_Modern_LandRoverWMIK_GPMG_Woodland_COIN",
			"TWC_Vehicle_Modern_LandRoverWMIK_GPMG_Woodland",
			"TWC_Vehicle_Modern_LandRoverWMIK_GPMG_Desert_COIN",
			"TWC_Vehicle_Modern_LandRoverWMIK_GPMG_Desert",
			"TWC_Vehicle_Modern_LandRoverWMIK_HMG_Desert_COIN",
			"TWC_Vehicle_Modern_LandRoverWMIK_HMG_Desert",
			"TWC_Vehicle_Modern_LandRoverWMIK_HMG_Woodland_COIN",
			"TWC_Vehicle_Modern_LandRoverWMIK_HMG_Woodland",
			
			"TWC_Vehicle_Modern_Challenger2_Woodland",
			"TWC_Vehicle_Modern_Challenger2_Desert",
			"TWC_Vehicle_Modern_Challenger2_Snow"
		};

		weapons[] = {
			"TWC_Item_30mm_3rd_HET",
			"TWC_Item_30mm_3rd_APDS"
		};

		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Armor_F_Beta",
			"TWC_gearFixes",
			"A3_Boat_F_Exp_Boat_Transport_01",
			"A3_Boat_F_Exp_Boat_Transport_02",
			"UK3CB_BAF_Vehicles_Apache",
			"UK3CB_BAF_Vehicles_Wildcat",
			"UK3CB_BAF_Vehicles_Merlin",
			"UK3CB_BAF_Vehicles_Coyote_Jackal",
			"UK3CB_BAF_Vehicles_LandRover",
			"CUP_TrackedVehicles_Bulldog",
			"CUP_TrackedVehicles_MCV80",
			"CUP_WheeledVehicles_Mastiff",
			"CUP_AirVehicles_C130J",
			"CUP_AirVehicles_CH47",
			"CUP_AirVehicles_AV8B",
			"CUP_AirVehicles_F35",
			"CUP_AirVehciles_SA330",
			"TWC_Faction",
			"ace_cargo",
			"ace_interaction",
			"ace_medical",
			"cba_main"
		};
		
		version = "2";
		projectName = "TWC";
		author = "Bosenator, Saxon, jayman, FakeMatty";
	};
};

class CfgFunctions {
	#include "CfgFunctions.hpp"
};

class Extended_PostInit_EventHandlers {
	/* class twc_vehicles_Init {
		init = "execVM 'twc_vehicles\init.sqf';";
	}; */
};

class CfgAmmo {
	#include "CfgAmmo.hpp"
};

class CfgMagazines {
	#include "CfgMagazines.hpp"
};

class Mode_FullAuto;
class CfgWeapons {
	#include "CfgWeapons.hpp"
};

class DefaultEventhandlers;

class CfgVehicles {
	// Non-Conflict Add Macros for TransportMagazine, TransportWeapon & TransportItem
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}
	#define ADD_QNTY(a) __EVAL(round a * CURRENT_VEHICLE)
	#define ADD_FACTION faction = "TWC_General"

	/*
		An explanation on how the macros in each era works.

		The files below include all the vehicles, and a MACRO for each vehicle called NAME_MOD. This is a modifier, which multiples the amount specified. So 0.5 will halve the amount, and 2 will double. Useful for things like a section being split amongst two vehicles, or a chinhook housing 3 sections.

		Before the change of vehicle, be sure to define CURRENT_VEHICLE to the new vehicle MOD MACRO. This makes copy and pasting a lot easier, ideal for situations where you're just changing the camo.
	*/

	// These are used across eras in different configurations, and as such should be first referenced here.
	class CUP_B_FV432_GB_GPMG;
	class CUP_B_SA330_Puma_HC1_BAF;

	class Helicopter_Base_H;
	class CUP_AW159_Unarmed_Base: Helicopter_Base_H {
		class Components;
	};
	class CUP_AW159_Dynamic_Base: CUP_AW159_Unarmed_Base {
		class Components: Components {
			class TransportPylonsComponent;
		};
	};
	class CUP_B_AW159_GB: CUP_AW159_Dynamic_Base {
		class Components: Components {
			class TransportPylonsComponent: TransportPylonsComponent {
				class pylons;
			};
		};
	};
	
	// section modifiers all eras/types
	#define SECTION_FIELDDRESSING 20
	#define SECTION_QUIKCLOT 20
	#define SECTION_ELASTICBANDAGE 20
	#define SECTION_PACKINGBANDAGE 20
	#define SECTION_TOURNIQUET 6
	#define SECTION_MORPHINE 10
	#define SECTION_EPINEPHRINE 6

	#define SECTION_SMOKE 6
	#define SECTION_GRENADE 6

	//Vehicle Radios
	#define PILOT_POSITIONS {"driver", "copilot"}

	#define REGULAR_117(POSITIONS, INTERCOM) \
	class AcreRacks { \
		class Rack_1 { \
			displayName = "Vehicle Radio"; \
			shortName = "Vehicle Radio"; \
			componentName = "ACRE_VRC103"; \
			allowedPositions[] = POSITIONS; \
			disabledPositions[] = {}; \
			defaultComponents[] = {}; \
			mountedRadio = "ACRE_PRC117F"; \
			isRadioRemovable = 0;\
			intercom[] = INTERCOM; \
		}; \
	};

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
			isRadioRemovable = 0;\
			intercom[] = INTERCOM; \
		}; \
	};

	// Custom TWC vehicles are defined below (they may inherit from above)
	#include "vehicles\warriors.hpp"
	#include "vehicles\lr_softtop.hpp"
	#include "vehicles\lr_hardtop.hpp"
	#include "vehicles\lr_snatch.hpp"
	#include "vehicles\lr_wmik.hpp"
	#include "vehicles\wildcat.hpp"
	#include "vehicles\challenger2.hpp"
	
	#include "generic\generic.hpp"
	#include "modern\modern.hpp"
	
	// delete this in a few months once we've gone through submitted ops
	#include "oldVehicles.hpp"
};
