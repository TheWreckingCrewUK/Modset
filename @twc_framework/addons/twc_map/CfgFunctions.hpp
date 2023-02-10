class CfgFunctions {
	class twc_map {
		class functions {
			file = "twc_map\functions";

			/** INIT **/
			class initPost {};
			class preInit {};
			class initServerPost {};

			/** CORE **/
			class unfoldMap {};
			class pickupMap {};
			class openMap {};
			class copyMarkers {};
			class removeTempMarkers {};

			/** HELPER FUNCTIONS **/
			class isInMarkers {};
			class markerToArray {};
		};
	};
};