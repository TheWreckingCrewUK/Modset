class CfgPatches {
	class twc_discord {
		units[] = {};
		weapons[] = {};
		
		requiredAddons[] = {
			"TWC_Core"
		};
		
		author = "ConnorAU / Bosenator";
		authorUrl = "http://thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
		requiredVersion = 2;
	};
};

#include "CfgDiscordRichPresence.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"