class CfgFunctions {
	class twc_suppress {
		tag = "twc_suppress";

		class init {
			file = "twc_suppress\functions";

			// Init
			class preInit {};
			class postInit {};

			// AI
			class module {};
			class doSuppress {};
			class doSuppressLocal {};

			// Player Effect
			class fired {};
			class impact {};
			class mainHandler {};
			class pinnedHandler {};
			class thresholdHandler {};
			class clearPinnedEffect {};
			class clearImpactEffect {};
			
			// Util
			class readCache {};
		};
	};
};