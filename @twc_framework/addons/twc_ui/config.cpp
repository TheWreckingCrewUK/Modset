class CfgPatches {
	class TWC_UI {
		name = "TWC_UI";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		
		requiredAddons[] = {
			"cba_main",
			"A3_Modules_F",
			"A3_Dubbing_Radio_F"
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
			
			/** adds hide functionality to ace spectator camera **/
			class handleSpectateCompass {};
			class toggleSpectateCompass {};
		};
	};
};

#include "RscTitles.hpp"
#include "DefaultVehicleSystemsDisplayManager.hpp"
#include "RadioProtocolBase.hpp"
#include "ACE_Spectator_Display.hpp"