class ACE_Medical_Actions {
	class Advanced {
		class Bandage;
		class FieldDressing: Bandage {
			treatmentTime = 9;
		};
		
		class QuikClot: FieldDressing {
			treatmentTime = 3;
		};
		
		class PackingBandage: FieldDressing {
			displayName = "Pack Wound";
			displayNameProgress  = "Packing Wound...";
			treatmentTime = 6;
		};
		
		class ElasticBandage: FieldDressing {
			treatmentTime = 12;
		};
		
		class CheckPulse;
		class LogDebug: CheckPulse {
			displayName = "Medical to RPT (DEBUG)";
			displayNameProgress = "Logging Medical State";
			callbackSuccess = "twc_medical_fnc_logToRPT";
			condition = "false"; // comment out to re-enable
		};
		
		class BloodIV: FieldDressing{
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
	};
};