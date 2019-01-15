class CfgPatches {
	class twc_cleanup {
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
	class twc_cleanup {
		tag = "twc_cleanup";
		
		class init {
			file = "twc_cleanup\functions";
			
			/** INIT **/
			//class preInit {};
			class serverInit {};
			
			/** BUILDING **/
			class cleanBuildingUp {};
			
			/** CORPSE MANAGEMENT **/
			// TODO!
			// class corpseManager {}; // add on EH, max queue it, delete based on FIFO
			// (time stamp managed too, with an ignore flag)
		};
	};
};

class Extended_PostInit_EventHandlers {
	class twc_cleanup {
		serverInit = "this call twc_cleanup_fnc_serverInit";
		disableModuload = true;
	};
};

/* class Extended_PreInit_EventHandlers {
	class twc_cleanup {
		init = "this call twc_cleanup_fnc_preInit";
		disableModuload = true;
	};
}; */