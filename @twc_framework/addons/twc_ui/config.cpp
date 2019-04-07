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

#include "CfgFunctions.hpp"

#include "ui\ACE_Spectator_Display.hpp"
#include "ui\DefaultVehicleSystemsDisplayManager.hpp"
#include "ui\RadioProtocolBase.hpp"
#include "ui\RscTitles.hpp"