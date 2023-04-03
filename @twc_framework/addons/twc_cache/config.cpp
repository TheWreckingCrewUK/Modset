class CfgPatches {
	class TWC_Cache {
		units[] = {
			"TWC_Module_CacheConfig",
			"TWC_Module_TriggerUncache",
			"TWC_Module_DisableCaching",
			"TWC_Zeus_forceUncache"
		};
		weapons[] = {};
		
		requiredAddons[] = {
			"TWC_Core",
			"TWC_Faction",
			"TWC_Framework"
		};
		
		author = "";
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
