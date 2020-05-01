class CfgPatches {
	class TWC_AI_Control_Gestures {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"ace_gestures",
			"twc_core"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;
	
	class TWC_AI_Control_Gestures: NO_CATEGORY {
		displayName = "TWC - AI Control Gesture Settings";
	};
};

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"

class Extended_PreInit_EventHandlers {
	class TWC_AI_Control_Gestures {
		init = "_this call TWC_AI_Control_Gestures_fnc_clientPreInit;";
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class TWC_AI_Control_Gestures {
			init = "_this call TWC_AI_Control_Gestures_fnc_init;";
		};
	};
};