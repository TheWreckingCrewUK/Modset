class CfgFunctions {
	/* Core ACE adjustments */
	class ace_medical_statemachine {
		tag = "ace_medical_statemachine";
		
		// CPR override, to make the timer stop whilst under CPR
		class ace_medical_statemachine {
			class handleStateCardiacArrest {
				file = "twc_medical_core\overrides\fn_handleStateCardiacArrest.sqf";
			};
			
			class leftStateCardiacArrest {
				file = "twc_medical_core\overrides\fn_leftStateCardiacArrest.sqf";
			};
		};
	};
	
	class ace_medical_vitals {
		tag = "ace_medical_vitals";
		
		// Tourniquet override
		class ace_medical_vitals {
			class handleUnitVitals {
				file = "twc_medical_core\overrides\fn_handleUnitVitals.sqf";
			};
		};
	};
	
	class ace_medial_treatment {
		tag = "ace_medical_treatment";
		
		class ace_medical_treatment {
			class cprLocal {
				file = "twc_medical_core\overrides\fn_cprLocal.sqf";
			};
			
			// Override the default bandaging time calculation
			// If the default turns out to be meh
			// Really hope not to change, for compat with other communities in joint ops etc.
			/* class getBandageTime {
				file = "twc_medical_core\overrides\fn_getBandageTime.sqf";
			}; */
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
			class resuscitateUnitLocal {};
			class removeMedicalItem {};
			class addPain {};
			
			// Set Dead
			class SetDead {};
			class SetDeadLocal {};
			
			// Clean Corpse
			class cleanCorpse {};
			class cleanCorpseLocal {};

			// Uncon Loop
			class unconSoundLoop {};

			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
		};
		
		class curator {
			file = "twc_medical_core\curator";
			
			class resuscitateUnit {};
			class killUnit {};
			class fullHealUnit {};
			class inspectUnit {};
		};
	};
};