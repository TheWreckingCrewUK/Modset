class CfgPatches {
	class twc_vehicles_ww2 {
		units[] = {
			/** LEGACY **/
			"TWC_HADRIAN",
			"TWC_HADRIAN_V",
			"TWC_HORSA",
			"TWC_UniversalCarrier",
			"TWC_Willys_MB",
			
			/** NEW **/
			"TWC_Vehicle_WW2_Willys_Woodland",
			"TWC_Vehicle_WW2_Hadrian_Woodland",
			"TWC_Vehicle_WW2_Hadrian_VIV_Woodland",
			"TWC_Vehicle_WW2_Horsa_Woodland",
			"TWC_Vehicle_WW2_UniversalCarrier_Woodland"
		};

		weapons[] = { };

		requiredVersion = 0.1;
		requiredAddons[] =  {
			"TWC_AmmoBoxes",
			"ace_cargo",
			"ace_medical",
			"ww2_assets_c_vehicles_wheeled_c",
			"ww2_assets_c_vehicles_planes_c",
			"fow_tracked_c",
			"TWC_Faction"
		};
	};
};

#include "CfgWeapons.hpp"

class CfgVehicles {
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}
	#define ADD_QNTY(a) __EVAL(round a * CURRENT_VEHICLE)
	#define ADD_FACTION faction = "TWC_WW2"

	#include "vehicles/defines.hpp"
	#include "vehicles/overwrites.hpp"
	
	#include "vehicles/airborne.hpp"
	//#include "vehicles/amphibious.hpp"
	#include "vehicles/armoured.hpp"
	#include "vehicles/motorised.hpp"
	
	// To be deleted after a few months
	#include "vehicles/legacy.hpp"

	// Objects that can be cut by Wire Cutter
	#include "ACE_WireCutter_Support.hpp"
};