class CfgFunctions {
	class TWC_UI {
		tag = "TWC_UI";
		class init {
			file = "TWC_UI\functions";

			/** adds a bearing read out to certain slots, on vehicles (for when they don't support it) **/
			class handleKilled {};
			class handleVehicle {};
			class toggleDisplay {};
			class showBearing {};
			class hideBearing {};
			class getVisualBearingLocal {};
			class shouldDisplay {};
			
			/** adds hide functionality to ace spectator camera **/
			class handleSpectateCompass {};
			class toggleSpectateCompass {};
		};
	};
};