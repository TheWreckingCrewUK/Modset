class CUP_B_SA330_Puma_HC1_BAF: CUP_SA330_Base {
	class AcreIntercoms {
		class Intercom_1 {
			displayName = "Passenger Intercom";
			shortName = "Pax";
			allowedPositions[] = {"crew", {"cargo", "all"}};
			disabledPositions[] = {};
			masterPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			connectedByDefault = 1;
		};

		class Intercom_2: Intercom_1 {
			displayName = "Crew Intercom";
			shortName = "Crew";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			masterPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			connectedByDefault = 0;
		};
	};

	acre_hasInfantryPhone = 1;
	//acre_infantryPhoneDisableRinging = 0;
	//acre_infantryPhoneCustomRinging[] = {};
	acre_infantryPhoneIntercom[] = {"Intercom_2"};
	acre_infantryPhoneControlActions[] = {"Intercom_2"};
	acre_infantryPhonePosition[] = {0, 0, 0}; // TODO: location by the door!
	
	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC103";
			allowedPositions[] = {"driver", "copilot"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
			intercom[] = {"Intercom_2"};
		};
	};
};

class UK3CB_BAF_Wildcat_AH1_8_Base;
class UK3CB_BAF_Wildcat_AH1_CAS_8A: UK3CB_BAF_Wildcat_AH1_8_Base {
	class AcreIntercoms {
		class Intercom_1 {
			displayName = "Passenger Intercom";
			shortName = "Pax";
			allowedPositions[] = {"crew", {"cargo", "all"}};
			disabledPositions[] = {};
			masterPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			connectedByDefault = 1;
		};

		class Intercom_2: Intercom_1 {
			displayName = "Crew Intercom";
			shortName = "Crew";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			masterPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			connectedByDefault = 0;
		};
	};

	acre_hasInfantryPhone = 1;
	//acre_infantryPhoneDisableRinging = 0;
	//acre_infantryPhoneCustomRinging[] = {};
	acre_infantryPhoneIntercom[] = {"Intercom_2"};
	acre_infantryPhoneControlActions[] = {"Intercom_2"};
	acre_infantryPhonePosition[] = {0, 0, 0}; // TODO: location by the door!
	
	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC103";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
			intercom[] = {"Intercom_2"};
		};
	};
};

class CUP_B_CH47F_GB: CUP_CH47F_base {
	class AcreIntercoms {
		class Intercom_1 {
			displayName = "Passenger Intercom";
			shortName = "Pax";
			allowedPositions[] = {"crew", {"cargo", "all"}};
			disabledPositions[] = {};
			masterPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			connectedByDefault = 1;
		};

		class Intercom_2: Intercom_1 {
			displayName = "Crew Intercom";
			shortName = "Crew";
			allowedPositions[] = {"crew"};
			disabledPositions[] = {};
			masterPositions[] = {};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			connectedByDefault = 0;
		};
	};

	acre_hasInfantryPhone = 1;
	//acre_infantryPhoneDisableRinging = 0;
	//acre_infantryPhoneCustomRinging[] = {};
	acre_infantryPhoneIntercom[] = {"Intercom_2"};
	acre_infantryPhoneControlActions[] = {"Intercom_2"};
	acre_infantryPhonePosition[] = {0, 0, 0}; // TODO: location by the door!
	
	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC103";
			allowedPositions[] = {"driver", "copilot"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
			intercom[] = {"Intercom_2"};
		};
	};
};