class CfgPatches {
	class twc_weapons_ww2 {
		units[] = {
			"TWC_Operation_WW2_Ammobox"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"cup_weapons_ammoboxes",
			"fow_weapons",
			"fow_weapons_c",
			"BBB_BoysATR"
		};

		version="1";
		projectName="TWC";
		author="jayman";
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"