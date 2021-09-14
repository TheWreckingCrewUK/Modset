class CfgFunctions {
	// Core ACE adjustments
	class ace_medical_statemachine {
		tag = "ace_medical_statemachine";
		
		// CPR override, to make the timer stop whilst under CPR
		class ace_medical_statemachine {
			class handleStateCardiacArrest {
				file = "twc_medical_core\functions\fn_handleStateCardiacArrest.sqf";
			};
		};
	};
	
	class twc_medical {
		tag = "twc_medical";
		class init {
			file = "twc_medical_core\functions";
			// Init
			class init {};
			class serverInit {};
			//class settings {};
			
			// Generics
			class getBloodVolume {};
			class fullyBandageUnit {};
			class fullHealWithoutLog {};
			class removeMedicalItem {};
			class addPain {};

			// Uncon Loop
			class unconSoundLoop {};

			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
		};
		
		class curator {
			file = "twc_medical\curator";
			
			class resuscitateUnit {};
			class fullHealUnit {};
			class killUnit {};
			class inspectUnit {};
		};
	};
};