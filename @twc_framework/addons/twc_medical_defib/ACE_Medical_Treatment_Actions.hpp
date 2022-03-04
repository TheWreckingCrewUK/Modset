class ACE_Medical_Treatment_Actions {
	class CPR;
	class Defib: CPR {
		displayName = "Defibrillate";
		displayNameProgress = "Defibrillating...";
		treatmentLocations = 3;
		allowedSelections[] = {"Body"};
		condition = "[(_this select 0), (_this select 1)] call twc_medical_defib_fnc_canDefib";
		allowSelfTreatment = 0;
		medicRequired = 1;
		treatmentTime = 10;
		callbackSuccess = "twc_medical_defib_fnc_action_Defib";
	};
};