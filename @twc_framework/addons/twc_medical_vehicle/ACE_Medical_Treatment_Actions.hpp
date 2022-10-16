class ACE_Medical_Treatment_Actions {
	class CPR;
	class Defib: CPR {
		displayName = "Defibrillate";
		displayNameProgress = "Defibrillating...";
		treatmentLocations = 3;
		allowedSelections[] = {"Body"};
		condition = "[(_this select 0), (_this select 1)] call twc_medical_vehicle_fnc_canDefib";
		allowSelfTreatment = 0;
		medicRequired = 1;
		treatmentTime = 8;
		callbackSuccess = "twc_medical_vehicle_fnc_Defib";
	};
	
	class BloodIV;
	class IVDrip: BloodIV {
		displayName = "Insert IV Drip";
		displayNameProgress = "Inserting Drip...";
		condition = "twc_medical_vehicle_fnc_canHookIV";
		treatmentTime = 3;
		callbackSuccess = "twc_medical_vehicle_fnc_IV";
	};
	
	class UnhookIV: IVDrip {
		displayName = "Unhook IV Drip";
		displayNameProgress = "Unhooking IV Drip...";
		treatmentLocations = 3;
		condition = "twc_medical_vehicle_fnc_canUnhookIV";
		treatmentTime = 3;
		callbackSuccess = "twc_medical_vehicle_fnc_unhookIV";
	};
};