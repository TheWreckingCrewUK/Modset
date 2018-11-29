class CfgFunctions {
	// Core ACE adjustments
	class ace_medical {
		tag = "ace_medical";
		
		class ace_medical {
			class displayPatientInformation {
				file = "twc_medical\functions\fn_displayPatientInformation.sqf";
			};
		};
	};
	
	class ace_medical_menu {
		tag = "ace_medical_menu";
		
		class ace_medical_menu {
			class updateUIInfo {
				file = "twc_medical\functions\fn_updateUIInfo.sqf";
			};
			
			class updateBodyImage {
				file = "twc_medical\functions\fn_updateBodyImage.sqf";
			};
		};
	};
	
	class twc_medical {
		tag = "twc_medical";
		class init {
			file = "twc_medical\functions";
			// Init
			class init {};
			class serverInit {};
			
			// Generics
			class addTime {};
			class getBloodVolume {};
			class extendedVitalLoop {};
			class logToRPT {};
			class fullyBandageUnit {};
			class fullHealWithoutLog {};
			class isInFieldTent {};
			class resuscitate {};
			class getWakeUp {};

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
			class canFieldSurgery {};
			class fieldSurgery {};
			class fieldSurgeryLocal {};
			class fieldSurgeryProgress {};
			class fieldSurgeryTime {};

			// Surgery
			class canSurgery {};
			class surgery {};
			class surgeryLocal {};
			class surgeryTime {};

			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
		};
		
		class modules {
			file = "twc_medical\modules";
			
			class moduleMedical {}; // public CPR chance
			class moduleAssignFieldTent {}; // makes it so field surgery happens
		};
		
		class curator {
			file = "twc_medical\curator";
			
			class resuscitateUnit {};
			class fullHealUnit {};
			class killUnit {};
			class inspectUnit {};
			class logUnit {}; // adds the above to RPT
			class setFieldTent {};
		};
	};
};