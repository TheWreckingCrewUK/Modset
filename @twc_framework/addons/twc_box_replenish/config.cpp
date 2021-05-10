class CfgPatches {
	class TWC_Box_Replenish {
		units[] = {};
		weapons[] = {};
		
		requiredAddons[] = {
			"ace_common",
			"twc_core"
		};
		
		author[] = {"User 1", "User 2"};
		authorUrl = "http://thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
		requiredVersion = 2;
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"