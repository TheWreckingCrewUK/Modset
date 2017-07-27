class CfgPatches {
	class TWC_UI {
		name = "TWC_UI";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		requiredAddons[] = {"cba_main"};
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
			class isVehicleCrew {};
			class removeDisplay {};
			class showBearing {};
		};
	};
};

#include "RscTitles.hpp"