class CfgPatches {
	class TWC_Cache {
		units[] = {
			"TWC_Cache_Module"
		};
		
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"TWC_Core"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;
	
	class TWC_Cache_Modules: NO_CATEGORY {
		displayName = "TWC - Cache Modules";
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"