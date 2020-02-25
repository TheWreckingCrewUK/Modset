class ACE_Medical_Actions {
	class Advanced {
		class Bandage;
		class FieldDressing: Bandage {
			treatmentTime = 11;
		};
		
		class QuikClot: FieldDressing {
			treatmentTime = 5;
		};
		
		class PackingBandage: FieldDressing {
			treatmentTime = 11;
			items[] = {{"ACE_packingBandage", "ACE_fieldDressing", "ACE_elasticBandage"}};
			displayName = "Pack Wound";
			displayNameProgress  = "Packing Wound...";
			condition = "((count((_this select 1) getvariable ['ACE_Medical_openWounds', []])) > 0)";
		};
		
		class ElasticBandage: FieldDressing {
			treatmentTime = 15;
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
	};
};
