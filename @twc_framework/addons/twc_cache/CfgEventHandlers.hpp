class Extended_PreInit_EventHandlers {
	class TWC_Cache {
		init = "_this call TWC_Cache_fnc_settings;";
	};
};

class Extended_InitPost_EventHandlers {
	class AllVehicles {
		class TWC_Cache_initEH {
			init = "_this call TWC_Cache_fnc_handleInitVehicle;";
			local = "_this call TWC_Cache_fnc_handleLocalVehicle;";
			exclude = "CAManBase";
		};
	};
	
	class CAManBase {
		class TWC_Cache_initEH {
			init = "_this call TWC_Cache_fnc_handleInitMan;";
			local = "_this call TWC_Cache_fnc_handleLocalMan;";
		};
	};
};