class CfgPatches {
	class TWC_Cache {
		units[] = {};
		weapons[] = {};
		
		requiredAddons[] = {
			"TWC_Core",
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
