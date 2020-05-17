class CfgPatches {
	class twc_cleanup {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		requiredAddons[] = {"cba_main"};
		author[] = {"thewreckingcrew.eu"};
		authorUrl = "thewreckingcrew.eu";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class twc_cleanup {
		tag = "twc_cleanup";
		
		class init {
			file = "twc_cleanup\functions";
			
			/** INIT **/
			//class preInit {};
			class serverInit {};
			class settings {};
			
			/** BUILDING **/
			class cleanBuildingUp {};
			
			/** CORPSE MANAGEMENT **/
			class corpseManager {}; // max queue it, delete based on FIFO
			// (time stamp managed too, with an ignore flag)
		};
	};
};

class Extended_PostInit_EventHandlers {
	class twc_cleanup {
		serverInit = "_this call twc_cleanup_fnc_serverInit";
		disableModuload = true;
	};
};

class Extended_PreInit_EventHandlers {
	class TWC_Cleanup_PreInitEH {
		init = "_this call TWC_Cleanup_fnc_settings;";
	};
};

/* class Extended_PreInit_EventHandlers {
	class twc_cleanup {
		init = "_this call twc_cleanup_fnc_preInit";
		disableModuload = true;
	};
}; */