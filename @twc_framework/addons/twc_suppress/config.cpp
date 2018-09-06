class CfgPatches {
	class twc_suppress {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"twc_framework"};
		author[] = {"Bosenator"};
		authorUrl = "http://thewreckingcrew.eu";
	};
};

class CfgFunctions {
	class twc_suppress {
		tag = "twc_suppress";

		class init {
			file = "twc_suppress\functions";

			class module {};
		};
	};
};

#include "CfgVehicles.hpp"