class CfgFunctions {
	class twc_suppress {
		tag = "twc_suppress";

		class init {
			file = "twc_suppress\functions";

			// Init
			class preInit {};
			class postInit {};

			// AI
			class moduleSuppress {};
			class doSuppress {};
			class doSuppressLocal {};
			class suppressTriggerPlayers {};
			class suppressPlayers {};
			class suppressPos {};

			// Player Effect
			class suppressed {};
			class impact {};
			class mainHandler {};
			class pinnedHandler {};
			class thresholdHandler {};
			class clearImpactEffect {};
			class clearPinnedEffect {};
			
			// Shockwave
			class shockwave {};
			class shockwaveLocal {};

			// Util
			class readCache {};
		};
	};
};