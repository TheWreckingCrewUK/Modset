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

#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"

class Extended_PostInit_EventHandlers {
	class TWC_AI_Control_Gestures_InitEH {
		init = "_this call TWC_AI_Control_Gestures_fnc_init;";
	};
};