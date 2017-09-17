class CfgPatches {
	class twc_medical {
		requiredAddons[] = {"ace_medical"};
		requiredVersion = 1.7;
		version = "1";
		versionStr = "1";
		author = "Bosenator";
		authorUrl = "http://thewreckingcrew.eu";
		units[]={};
		weapons[]={};
    };
};

class CfgFunctions {
	class twc_medical {
		tag = "twc_medical";
		class init {
			file = "twc_medical\fncs";
			// generics
			class addTime {};
			class init { postInit = 1; };
			class getBloodLoss {};

			// CPR
			class action {};
			class canCPR {};
			class CPR {};
			class CPR_Local {};

			// Defib
			class action_Defib {};
			class canDefib {};
			class Defib {};
			class Defib_Local {};

			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
		};
	};
};

class CfgVehicles {
	class Man;
	
	class CAManBase: Man {
		/* // TODO: Make Self Interaction Entries for the Saline 250ml bags
		class ACE_SelfActions {
			class Medical {
				class ACE_ArmLeft {
					class SalineIV_250: SalineIV {
						displayName = "$STR_ACE_Actions_Saline4_250";
						condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'SalineIV_250')] call DFUNC(canTreatCached));
						statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'SalineIV_250')] call DFUNC(treatment));
						exceptions[] = {"isNotInside"};
					};
				};
			};
		}; */
		
		class ACE_Actions {
			/* class ACE_Torso {
				class fieldDressing;
				class Defib: fieldDressing {
					displayName = "Defibrillate";
					condition = "[_player, _target] call twc_medical_fnc_canDefib";
					statement = "[_player, _target] call twc_medical_fnc_Defib";
					icon = "";
				};
			}; */
		
			class ACE_MainActions {
				class Medical {
					class ACE_Torso {
						class fieldDressing;
						class Defib: fieldDressing {
							displayName = "Defibrillate";
							condition = "[_player, _target] call twc_medical_fnc_canDefib";
							statement = "[_player, _target] call twc_medical_fnc_Defib";
							exceptions[] = {"isNotDragging", "isNotCarrying", "isNotInside", "isNotSwimming"};
							icon = "";
						};
					};
				};
			};
		};
	};
};

class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
			// condition = QUOTE(!([(_this select 1)] call ace_common_fnc_isAwake) && GVAR(enableRevive)>0);
			callbackSuccess = "twc_medical_fnc_action";
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
		
		class QuikClot: fieldDressing {
			treatmentTime = 6;
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
	};
};

class ACE_Medical_Advanced {
	class Treatment {
		class Medication {
			class Morphine {
				painReduce = 0.5;
			};
		};
	};
};

