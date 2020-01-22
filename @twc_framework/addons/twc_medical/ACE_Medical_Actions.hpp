class ace_medical_treatment_actions {
	//class Advanced {
		class BasicBandage;
		class FieldDressing: BasicBandage {
			treatmentTime = 9;
		};
		class Morphine;
		class Painkillers: Morphine
		{
			displayName = "Take Painkillers";
			displayNameProgress = "Taking Painkillers";
			condition = "(_patient == _medic)";
			allowedSelections[] = {"head"};
			callbackSuccess = "twc_medical_fnc_painkillers";
		};
		
		class QuikClot: BasicBandage {
			treatmentTime = 3;
		};
		
		class PackingBandage: BasicBandage {
			treatmentTime = 6;
		};
		
		class ElasticBandage: BasicBandage {
			treatmentTime = 12;
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
			treatmentLocations = 0;
			//allowedSelections[] = {"All"};
			allowSelfTreatment = 0;
			requiredMedic = 1;
			treatmentTime = "twc_medical_fnc_sutureKitTime";
			callbackSuccess = "twc_medical_fnc_sutureKitSuccess";
			callbackProgress = "twc_medical_fnc_sutureKitProgress";
			callbackFailure = "twc_medical_fnc_sutureKitFailure";
			itemConsumed = 0;
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";

			litter[] = {
            {"ACE_MedicalLitter_gloves"},
            {"ACE_MedicalLitter_clean"},
            {
                {"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"},
                {"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}
            }
        };
		};
	//};
};
