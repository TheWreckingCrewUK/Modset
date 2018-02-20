class CfgPatches {
	class TWC_UI {
		name = "TWC_UI";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		
		requiredAddons[] = {
			"cba_main",
			"A3_Modules_F"
		};
		
		author = "Bosenator";
		authors[] = {"Bosenator"};
		url = "http://thewreckingcrew.eu";
		version = 1;
		versionStr = "1";
    };
};

class CfgFunctions {
	class TWC_UI {
		tag = "TWC_UI";
		class init {
			file = "TWC_UI\functions";
			class init { postInit = 1; };
			
			class addDisplay {};
			class getVisualBearingLocal {};
			class hideBearing {};
			class shouldDisplay {};
			class removeDisplay {};
			class showBearing {};
			class hudReset {};
		};
	};
};

/* class Extended_DisplayUnload_EventHandlers {
	class RscDiary {
		ace_ui = "[{[] call TWC_UI_fnc_hudReset}] call CBA_fnc_execNextFrame";
	};
}; */

#include "RscTitles.hpp"
#include "DefaultVehicleSystemsDisplayManager.hpp"