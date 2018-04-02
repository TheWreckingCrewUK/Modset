class CfgFunctions {
	class twc_medical {
		tag = "twc_medical";
		class init {
			file = "twc_medical\fncs";
			// Generics
			class addTime {};
			class init { postInit = 1; };
			class getBloodVolume {};
			class extendedVitalLoop {};
			class logToRPT {};
			class moduleMedical {};
			class fullyBandageUnit {};
			
			// Uncon Loop
			class extendedUnconLoop {};
			class handleUncon {};
			class handleAIUncon {};

			// CPR
			class action {};
			class canCPR {};
			class CPR {};
			class CPR_Local {};

			// Defib
			class action_Defib {};
			class canDefib {};
			class Defib {};
			class Defib_Local {};

			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
		};
	};
};