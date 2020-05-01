class CfgPatches {
	class TWC_Fixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"A3_Structures_F_Dominants_Castle",
			"ace_common",
			"ace_logistics_wirecutter"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"