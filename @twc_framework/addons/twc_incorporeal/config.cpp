class CfgPatches {
	class TWC_Incorporeal {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"twc_framework",
			"twc_sounds",
			"twc_ui",
			"ace_common"
		};

		author[] = {"Bosenator"};
		authorUrl = "thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

#include "CfgDeathScreens.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "CfgIntros.hpp"
#include "CfgOutros.hpp"