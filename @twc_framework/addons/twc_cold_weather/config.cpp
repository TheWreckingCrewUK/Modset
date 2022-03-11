class CfgPatches {
	class TWC_Cold_Weather {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		requiredAddons[] = {"cba_xeh"};
		author[] = {"thewreckingcrew.eu"};
		authorUrl = "thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class TWC_Cold_Weather {
		tag = "twc_disposable";
		
		class init {
			file = "TWC_Cold_Weather\functions";
			
			class clientInit {};
			
			class breathEffect {};
		};
	};
};

class Extended_PostInit_EventHandlers {
	class TWC_Cold_Weather {
		clientInit = "call TWC_Cold_Weather_fnc_clientInit;";
	};
};

class Extended_Init_EventHandlers {
	class CAManBase {
		class TWC_Cold_Weather {
			clientInit = "_this call TWC_Cold_Weather_fnc_unitInit;";
		};
	};
};