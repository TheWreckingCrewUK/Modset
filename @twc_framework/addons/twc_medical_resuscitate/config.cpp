class CfgPatches {
	class TWC_Medical_Resuscitate {
		projectName = "TWC Framework";
		
		requiredAddons[] = {
			"twc_medical"
		};
		
		requiredVersion = 1.7;
		author = "TheWreckingCrew";
		authors[] = {"Bosenator"};
		url = "http://thewreckingcrew.eu";
		authorUrl = "http://thewreckingcrew.eu";
		
		units[] = {};
		weapons[] = {};
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {1,0,0};
	};
};

#include "ACE_Medical_Actions.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"

class Extended_PostInit_EventHandlers {
	class TWC_Medical_Resuscitate {
		clientInit = "[] call twc_medical_resuscitate_fnc_clientInit;";
	};
};

class Extended_Respawn_EventHandlers {
	class CAManBase {
		class TWC_Medical_Resuscitate {
			clientRespawn = "_this call twc_medical_resuscitate_fnc_handleRespawn;";
		};
	};
};