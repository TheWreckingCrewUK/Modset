class ACE_Medical_Actions {
	class Advanced {
		class FieldDressing;
		class CPR: FieldDressing {
			/*
			callbackSuccess = "twc_medical_resuscitate_fnc_action";
			callbackProgress = "twc_medical_resuscitate_fnc_CPR_onProgress";
			callbackFailure = "twc_medical_resuscitate_fnc_CPR_onFailure";
			*/
			animationCaller = "AinvPknlMstpSnonWnonDr_medic0";
			animationCallerProne = "AinvPknlMstpSnonWnonDr_medic0";
		};
		
		class Defib: CPR {
			displayName = "Defibrillate";
			displayNameProgress = "Defibrillating...";
			treatmentLocations[] = {"MedicalVehicle", "MedicalFacility"};
			allowedSelections[] = {"body"};
			//this now has an isserver check to only work on singleplayer for the moment
			condition = "(([(_this select 0), (_this select 1)] call twc_medical_resuscitate_fnc_canDefib) && (isserver))";
			allowSelfTreatment = 0;
			requiredMedic = 2;
			treatmentTime = 10;
			patientStateCondition = 1;
			callbackSuccess = "twc_medical_resuscitate_fnc_action_Defib";
		};
		
	};
};