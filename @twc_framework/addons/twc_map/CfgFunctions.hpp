class CfgFunctions {
	class twc_map {
		tag = "twc_map";
		
		class twc_map {
			file = "twc_map/functions";

			/** CORE **/
			class initPost {};
			class unfoldMap {};
			class pickupMap {};
			class openMap {};
			class removeTempMarkers {};

			/** HELPER FUNCTIONS **/
			class isInMarkers {};
			class markerToArray {};
		};
	};
};