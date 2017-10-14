class CfgPatches {
	class TWC_FRAMEWORK_VEHICLES {
		name = "TWC_FRAMEWORK_VEHICLES";
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
	class TWC_FRAMEWORK_VEHICLES {
		tag = "TWC_vehicles";

		class init {
			file = "twc_vehicles\functions";
			class init { postInit = 1; };
		};
	};
};
