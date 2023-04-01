// runs once per unit/vehicle after the PostInit stage
class Extended_InitPost_EventHandlers {
	class AllVehicles {
		class TWC_Cache_InitPost_EH {
			serverInit = "_this call TWC_Cache_fnc_initVehicleCache";
			exclude = ["CAManBase", "Static"];
		};
	};
	
	class CAManBase {
		class TWC_Cache_InitPost_EH {
			serverInit = "_this call TWC_Cache_fnc_initAICache";
			exclude = ["Static"];
		};
	};
};

/* class Extended_PostInit_EventHandlers {
	
}; */
