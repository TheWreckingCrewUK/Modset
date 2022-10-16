class ACE_Medical_Treatment_Actions {
	class FieldDressing;
	class SutureKit: FieldDressing {
		displayName = "Use Suture Kit";
		displayNameProgress = "Suturing";
		condition = "twc_medical_suture_fnc_canSuture";

		// custom handler for items check, to ignore shared gear
		items[] = {};
		treatmentLocations[] = {"All"};
		allowedSelections[] = {"All"};
		allowSelfTreatment = 0;
		requiredMedic = 1;
		treatmentTime = "twc_medical_suture_fnc_sutureKitTime";
		callbackSuccess = "twc_medical_suture_fnc_sutureKitSuccess";
		callbackProgress = "twc_medical_suture_fnc_sutureKitProgress";
		callbackFailure = "twc_medical_suture_fnc_sutureKitFailure";
		itemConsumed = 0;
		animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";

		litter[] = {
			{"ACE_MedicalLitter_gloves"},
			{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}
		};
	};
};