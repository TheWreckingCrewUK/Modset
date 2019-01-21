class CfgPatches {
	class TWC_Core {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		
		requiredAddons[] = {
			"ace_common",
			"ace_interaction",
			"cba_main"
		};
		
		author[] = {"Bosenator"};
		authorUrl = "thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgManagement.hpp"
#include "CfgVehicles.hpp"
