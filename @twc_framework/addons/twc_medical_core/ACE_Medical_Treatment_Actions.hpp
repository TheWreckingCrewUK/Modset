class ACE_Medical_Treatment_Actions {
	// Override default to enable bandaging option always for gameplay reasons (failure to pay attention results in logistical constraint)
	class BasicBandage {
		displayName = "Basic Bandage";
		displayNameProgress = "Bandaging...";
		icon = "\z\ace\addons\medical_gui\ui\bandage.paa";
		category = "bandage";

		consumeItem = 1;
		items[] = {"ACE_fieldDressing", "ACE_packingBandage", "ACE_elasticBandage", "ACE_quikclot"};

		medicRequired = 0;
		allowSelfTreatment = 1;
		allowedSelections[] = {"All"};
		condition = "true"; // edit to always show bandages
		treatmentLocations = 0; // all locations

		treatmentTime = "ace_medical_treatment_fnc_getBandageTime";
		treatmentTimeSelfCoef = 1; // todo: this isn't used anywhere, remove?

		callbackStart = "";
		callbackProgress = "";
		callbackSuccess = "ace_medical_treatment_fnc_bandage";
		callbackFailure = "";

		animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
		animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
		animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
		animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";

		litter[] = {
			{},
			{"ACE_MedicalLitter_clean"},
			{{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}
		};
	};
	
	/*
	 * Blood is by default larger, this is to give the medical vehicles a benefit
	 * As ambulances are the only things stocked with blood, everything else is Saline
	 */
	class BloodIV: BasicBandage {
		displayName = "Give Blood (1500ml)";
	};
	
	class BloodIV_500: BloodIV {
		displayName = "Give Blood (750ml)";
	};
	
	class BloodIV_250: BloodIV {
		displayName = "Give Blood (375ml)";
		allowSelfTreatment = 1;
	};
	
	class PlasmaIV_250: BloodIV {
		allowSelfTreatment = 1;
	};
	
	class SalineIV: BloodIV {
		displayName = "Give Saline (1250ml)";
	};
	
	class SalineIV_500: BloodIV {
		displayName = "Give Saline (625ml)";
	};
	
	class SalineIV_250: BloodIV {
		displayName = "Give Saline (300ml)";
		allowSelfTreatment = 1;
	};
	
	/* class SutureKit: BasicBandage {
		displayName = "Use Suture Kit";
		displayNameProgress = "Suturing";
		condition = "twc_medical_fnc_canSuture";

		// custom handler for items check, to ignore shared gear
		items[] = {};
		treatmentLocations[] = {"All"};
		allowedSelections[] = {"All"};
		allowSelfTreatment = 0;
		requiredMedic = 1;
		treatmentTime = "twc_medical_fnc_sutureKitTime";
		callbackSuccess = "twc_medical_fnc_sutureKitSuccess";
		callbackProgress = "twc_medical_fnc_sutureKitProgress";
		callbackFailure = "twc_medical_fnc_sutureKitFailure";
		itemConsumed = 0;
		animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";

		litter[] = {
			{"All", "", {"ACE_MedicalLitter_gloves"}},
			{"All", "", {{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}}
		};
	}; */
};