class CfgFunctions {
	// Core ACE adjustments
	/* class ace_medical {
		tag = "ace_medical";
		
		class ace_medical {
			class displayPatientInformation {
				file = "twc_medical\functions\fn_displayPatientInformation.sqf";
			};
		};
	}; */
	
	class twc_medical_suture {
		tag = "twc_medical_suture";
		class init {
			file = "twc_medical_suture\functions";

			// Suture
			class canSuture {};
			class sutureKitTime {};
			class sutureKitSuccess {};
			class sutureKitProgress {};
			class sutureKitFailure {};
			class selectSutureWound {};
		};
	};
};