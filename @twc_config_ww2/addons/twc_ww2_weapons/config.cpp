class CfgPatches {
	class twc_weapons_ww2 {
		units[] = {
			"TWC_Operation_WW2_Ammobox"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"cup_weapons_ammoboxes",
			"ww2_assets_c_vehicles_ammoparameters_c",
			"fow_weapons",
			"fow_weapons_c",
			"BBB_BoysATR"
		};

		version="1";
		projectName="TWC";
		author="jayman";
	};
};

#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgFunctions.hpp"