class CfgFunctions {
	class TWC_UI {
		tag = "TWC_UI";
		class init {
			file = "TWC_UI\functions";
			class init { postInit = 1; };
			
			class addDisplay {};
			class getVisualBearingLocal {};
			class hideBearing {};
			class shouldDisplay {};
			class removeDisplay {};
			class showBearing {};
			class hudReset {};
			
			/** adds hide functionality to ace spectator camera **/
			class handleSpectateCompass {};
			class toggleSpectateCompass {};
		};
	};
};