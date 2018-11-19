class CfgFunctions {
	// Core ACE adjustments
	class ace_medical {
		tag = "ace_medical";
		
		class ace_medical {
			class displayPatientInformation {
				file = "twc_medical\fncs\fn_displayPatientInformation.sqf";
			};
		};
	};
	
	class ace_medical_menu {
		tag = "ace_medical_menu";
		
		class ace_medical_menu {
			class updateUIInfo {
				file = "twc_medical\fncs\fn_updateUIInfo.sqf";
			};
			
			class updateBodyImage {
				file = "twc_medical\fncs\fn_updateBodyImage.sqf";
			};
		};
	};
	
	class twc_medical {
		tag = "twc_medical";
		class init {
			file = "twc_medical\fncs";
			// Init
			class init {};
			class serverInit {};
			
			// Generics
			class addTime {};
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

			// Suture
			class canSuture {};
			class sutureKitTime {};
			class sutureKitSuccess {};
			class sutureKitProgress {};
			class sutureKitFailure {};
			class removeSutureThread {};
			class selectSutureWound {};

			// Field Surgery
			

			// Surgery
			class canSurgery {};
			class surgery {};
			class surgeryLocal {};
			class surgeryTime {};

			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
		};
	};
};