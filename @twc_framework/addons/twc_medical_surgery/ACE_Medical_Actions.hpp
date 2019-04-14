class ACE_Medical_Actions {
	class Advanced {
		class FieldDressing;

		/** Field Tent Action. Used to fully heal individuals in a field tent. Limited use. **/
		class FieldSurgery: FieldDressing {
			displayName = "Field Surgery";
			displayNameProgress = "Conducting Field Surgery";
			condition = "twc_medical_surgery_fnc_canFieldSurgery";
			category = "advanced";
			allowedSelections[] = {"body"};
			treatmentLocations[] = {"MedicalFacility"};
			requiredMedic = 2;
			treatmentTime = "twc_medical_surgery_fnc_fieldSurgeryTime";
			callbackProgress = "twc_medical_surgery_fnc_fieldSurgeryProgress";
			callbackSuccess = "twc_medical_surgery_fnc_fieldSurgery";
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
		class Handover: FieldDressing {
			displayName = "Handover Patient";
			displayNameProgress = "Handing Over Patient";
			condition = "twc_medical_surgery_fnc_canSurgery";
			category = "advanced";
			allowedSelections[] = {"body"};
			treatmentLocations[] = {"MedicalFacility"};
			requiredMedic = 2; // handled by canHandover
			treatmentTime = 1; // handled on the patients end
			callbackSuccess = "twc_medical_surgery_fnc_surgery";
			callbackFailure = "";
			animationCaller = "";
			litter[] = {};
		};
	};
};