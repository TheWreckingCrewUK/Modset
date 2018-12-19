class ACE_Medical_Actions {
	class Advanced {
		class Bandage;
		class FieldDressing: Bandage {
			treatmentTime = 9;
		};
		
		class QuikClot: FieldDressing {
			treatmentTime = 4;
		};
		
		class PackingBandage: FieldDressing {
			treatmentTime = 6;
		};
		
		class ElasticBandage: FieldDressing {
			treatmentTime = 15;
		};
		
		class CPR: FieldDressing {
			callbackSuccess = "twc_medical_fnc_action";
			animationCaller = "AinvPknlMstpSnonWnonDr_medic0";
			animationCallerProne = "AinvPknlMstpSnonWnonDr_medic0";
		};
		
		class Defib: CPR {
			displayName = "Defibrillate";
			displayNameProgress = "Defibrillating...";
			treatmentLocations[] = {"MedicalVehicle"};
			allowedSelections[] = {"body"};
			condition = "[(_this select 0), (_this select 1)] call twc_medical_fnc_canDefib";
			allowSelfTreatment = 0;
			requiredMedic = 2;
			treatmentTime = 10;
			patientStateCondition = 1;
			callbackSuccess = "twc_medical_fnc_action_Defib";
		};
		
		class CheckPulse;
		class LogDebug: CheckPulse {
			displayName = "Medical to RPT (DEBUG)";
			displayNameProgress = "Logging Medical State";
			callbackSuccess = "twc_medical_fnc_logToRPT";
			condition = "false"; // comment out to re-enable
		};
		
		class BloodIV: FieldDressing{};
		
		class BloodIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class PlasmaIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class SalineIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class Tourniquet: FieldDressing {
			treatmentTime = 2;
		};
		
		class SutureKit: FieldDressing {
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
		};

		/** Field Tent Action. Used to fully heal individuals in a field tent. Limited use. **/
		class FieldSurgery: SutureKit {
			displayName = "Field Surgery";
			displayNameProgress = "Conducting Field Surgery";
			condition = "twc_medical_fnc_canFieldSurgery";
			category = "advanced";
			allowedSelections[] = {"body"};
			treatmentLocations[] = {"MedicalFacility"};
			requiredMedic = 2;
			treatmentTime = "twc_medical_fnc_fieldSurgeryTime";
			callbackProgress = "twc_medical_fnc_fieldSurgeryProgress";
			callbackSuccess = "twc_medical_fnc_fieldSurgery";
			callbackFailure = "";
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
			litter[] = {
				{"All", "", {"ACE_MedicalLitter_gloves"}},
				{"All", "_bloodLossOnSelection > 0", {{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}},
				{"All", "_bloodLossOnSelection > 0", {{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}},
				{"All", "_bloodLossOnSelection <= 0", {"ACE_MedicalLitter_clean"}}
			};
		};
		
		/** Handover Action. Used to fully heal individuals in a permenant bulding. Limited use (no item requirement, however). **/
		class Handover: SutureKit {
			displayName = "Handover Patient";
			displayNameProgress = "Handing Over Patient";
			condition = "twc_medical_fnc_canSurgery";
			category = "advanced";
			allowedSelections[] = {"body"};
			treatmentLocations[] = {"MedicalFacility"};
			requiredMedic = 2; // handled by canHandover
			treatmentTime = 1; // handled on the patients end
			callbackSuccess = "twc_medical_fnc_surgery";
			callbackFailure = "";
			animationCaller = "";
			litter[] = {};
		};
	};
};
