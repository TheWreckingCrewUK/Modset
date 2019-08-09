class CfgFunctions {
	class TWC_AI_Control_Gestures {
		class functions {
			file = "twc_ai_control_gestures\functions";
			
			/** Init **/
			class init {};
			class clientPreInit {};
			
			class signalAdvance {};
			class signalHalt {};
			class signalSurrender {};
			
			class presenceCheckLoop {};
			
			/** Modules **/
			class moduleMissionIgnoreGestures {};
			class moduleSetHaltIgnoreChance {};
			class moduleSetSurrenderChance {};
		};
	};
};