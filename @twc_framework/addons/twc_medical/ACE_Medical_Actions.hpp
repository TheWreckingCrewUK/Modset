class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
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
			requiredMedic = 1;
			treatmentTime = 10;
			patientStateCondition = 1;
			callbackSuccess = "twc_medical_fnc_action_Defib";
		};

		class CheckPulse;
		class LogDebug: CheckPulse {
			displayName = "Medical to RPT (DEBUG)";
			displayNameProgress = "Logging Medical State";
			callbackSuccess = "twc_medical_fnc_logToRPT";
		};
		
		class QuikClot: fieldDressing {
			treatmentTime = 5;
		};
		
		class ElasticBandage: fieldDressing {
			treatmentTime = 12;
		};
		
		class BloodIV: fieldDressing{};
		
		class BloodIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class PlasmaIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class SalineIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class Tourniquet: fieldDressing {
			treatmentTime = 2;
		};
		
		class SutureKit: fieldDressing {
			displayName = "Use Suture Kit";
			displayNameProgress = "Suturing";
			category = "advanced";
			condition = "[(_this select 0), (_this select 1)] call twc_medical_fnc_canSuture";

			items[] = {
				"TWC_Item_Medical_SutureKit_1",
				"TWC_Item_Medical_SutureKit_2",
				"TWC_Item_Medical_SutureKit_3",
				"TWC_Item_Medical_SutureKit_4",
				"TWC_Item_Medical_SutureKit_5",
				"TWC_Item_Medical_SutureKit_6",
				"TWC_Item_Medical_SutureKit_7",
				"TWC_Item_Medical_SutureKit_8",
				"TWC_Item_Medical_SutureKit_9",
				"TWC_Item_Medical_SutureKit_10",
				"TWC_Item_Medical_SutureKit_11",
				"TWC_Item_Medical_SutureKit_12",
				"TWC_Item_Medical_SutureKit_13",
				"TWC_Item_Medical_SutureKit_14",
				"TWC_Item_Medical_SutureKit_15",
				"TWC_Item_Medical_SutureKit_16",
				"TWC_Item_Medical_SutureKit_17",
				"TWC_Item_Medical_SutureKit_18",
				"TWC_Item_Medical_SutureKit_19",
				"TWC_Item_Medical_SutureKit_20"
			};

			treatmentLocations[] = {"All"};
			allowSelfTreatment = 0;
			requiredMedic = 1;
			patientStateCondition = 0;
			treatmentTime = "[_target] call twc_medical_fnc_sutureKitTime";
			callbackSuccess = "";
			callbackProgress = "this call twc_medical_fnc_sutureKitProgress"; // removes suture kit per wound
			itemConsumed = 0;
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";

			litter[] = {
				{"All", "", {"ACE_MedicalLitter_gloves"}},
				{"All", "", {{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}},
				{"All", "", {{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}}
			};
		};
	};
};