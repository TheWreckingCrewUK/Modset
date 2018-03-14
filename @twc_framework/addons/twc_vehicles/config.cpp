class CfgPatches {
	class TWC_Framework_Vehicles {
		name = "TWC_Framework_Vehicles";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		requiredAddons[] = {"cba_main", "ace_interaction"};
		author = "Bosenator";
		authors[] = {"Bosenator"};
		url = "http://thewreckingcrew.eu";
		version = 1;
		versionStr = "1";
	};
};

class CfgFunctions {
	class TWC_Framework_Vehicles {
		tag = "TWC_Vehicles";

		class init {
			file = "twc_vehicles\functions";
			class init { postInit = 1; };
		};
	};
};
