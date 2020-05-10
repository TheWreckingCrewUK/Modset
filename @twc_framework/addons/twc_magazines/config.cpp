class CfgPatches {
	class twc_magazines {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"TWC_Core",
			"ace_common",
			"ace_interaction",
			"ace_magazinerepack"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class Extended_Reloaded_EventHandlers {
	class CAManBase {
		class TWC_Magazines {
			reloaded = "_this call twc_magazines_fnc_handleReloaded";
		};
	};
};

#include "CfgFunctions.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"