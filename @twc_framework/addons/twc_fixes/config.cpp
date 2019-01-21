class CfgPatches {
	class TWC_Fixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
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

class CfgWorlds {
	class CAWorld;
	class Chernarus: CAWorld {};
	class Caribou: Chernarus {
		newRoadsShape = "";
	};
};

#include "CfgFunctions.hpp"
#include "CfgWeapons.hpp"

class Extended_PostInit_EventHandlers {
	class TWC_Fixes {
		serverInit = "[] call TWC_Fixes_fnc_serverInit;";
	};
};

class Extended_InitPost_EventHandlers {
	class Helicopter {
		class TWC_Fixes_EH {
			init = "_this call TWC_Fixes_fnc_helicopterInit;";
		};
	};
	
	class Tank {
		class TWC_Fixes_EH {
			init = "_this call TWC_fixes_fnc_tankCrewAdjust;";
		};
	};
};