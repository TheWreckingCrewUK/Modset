class CfgPatches {
	class TWC_gearFixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"cup_airvehicles_av8b",
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class CfgWeapons {
	class Rifle_Long_Base_F;
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		displayname = "L7A2 GPMG";

		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
	};
	
	class twc_L7A2: UK3CB_BAF_L7A2 {};

	class missiles_titan;
	class UK3CB_BAF_Milan_Launcher: missiles_titan {
		ace_overpressure_angle = 90;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.7;
	};
};

class CfgVehicles {
	#include "acre_apcs.hpp"
	#include "acre_boats.hpp"
	#include "acre_cars.hpp"
	#include "acre_helicopters.hpp"
	#include "acre_planes.hpp"
	#include "acre_tanks.hpp"
};
