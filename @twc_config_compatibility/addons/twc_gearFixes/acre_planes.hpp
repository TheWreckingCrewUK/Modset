class Plane;
class CUP_AV8B_Base: Plane {
	thrustCoef[] = {1,1,0.9,0.9,0.9,0.9,0.8,0.7,0.5,0.2,0.1,0,0};
	flapsFrictionCoef = 0.8;
	gearsUpFrictionCoef = 0.9;
	camouflage = 500;
	
	acre_hasInfantryPhone = 0;
	
	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC103";
			allowedPositions[] = {"inside"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
		};
	};
};

class CUP_C130J_Base;
class CUP_B_C130J_GB: CUP_C130J_Base {
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
			masterPositions[] = {"driver"};
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

class CUP_C130J_VIV_Base;
class CUP_B_C130J_Cargo_GB: CUP_C130J_VIV_Base {
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
			masterPositions[] = {"driver"};
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

class CUP_B_F35B_USMC;
class CUP_B_F35B_BAF: CUP_B_F35B_USMC {
	acre_hasInfantryPhone = 0;
	
	class AcreRacks {
		class Rack_1 {
			displayName = "Vehicle Radio";
			shortName = "Vehicle Radio";
			componentName = "ACRE_VRC103";
			allowedPositions[] = {"inside"};
			disabledPositions[] = {};
			defaultComponents[] = {};
			mountedRadio = "ACRE_PRC117F";
			isRadioRemovable = 0;
		};
	};
};