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
			class fired {};
			class impact {};
			class mainHandler {};
			class pinnedHandler {};
			class thresholdHandler {};
			class clearImpactEffect {};
			class clearPinnedEffect {};
			class shockwave {};

			// Util
			class readCache {};
		};
	};
};