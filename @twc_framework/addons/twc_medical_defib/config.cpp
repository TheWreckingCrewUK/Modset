class CfgPatches {
	class twc_medical_suture {
		requiredAddons[] = {
			"ace_medical",
			"ace_medical_gui",
			"ace_medical_engine",
			"ace_medical_treatment",
			"twc_medical_core"
		};

		requiredVersion = 1.7;
		version = "1";
		versionStr = "1";
		author = "Bosenator";
		authorUrl = "http://thewreckingcrew.eu";

		units[] = { };
		weapons[] = {};
	};
};

#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgFunctions.hpp"
#include "CfgSounds.hpp"