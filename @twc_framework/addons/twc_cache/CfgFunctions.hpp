class CfgFunctions {
	class TWC_Cache {
		class functions {
			file = "twc_cache\functions";
			
			// Init
			class handleInitMan {};
			class handleInitVehicle {};
			class settings {};
			class updatedSettings {};
			
			// Locality
			class handleLocalMan {}:
			class handleLocalVehicle {}:
			
			// Loops
			class infantryLoop {};
			class vehicleLoop {};
			
			// Caching
			class cacheGroup {};
			class cacheVehicle {};
			class unCacheGroup {};
			class unCacheVehicle {};
		};
	};
};