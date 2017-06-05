class CfgPatches
{
	class twc_cpr
	{
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
	class twc_cpr {
		tag = "twc_cpr";
		class init {
			file = "twc_cpr\fncs";
			class action {};
			class addTime {};
			class init { postInit = 1; };
			class canCPR {};
			class CPR {};
			class CPR_Local {};
			class getBloodLoss {};
		};
	};
};

/* TODO: Make Self Interaction Entries for the Saline 250ml bags
class CfgVehicles {
	class Man;
	
	class CAManBase: Man {
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
		};
	};
}; */

class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
			callbackSuccess = "twc_cpr_fnc_action";
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

