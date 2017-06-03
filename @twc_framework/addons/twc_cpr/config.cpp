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

class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
			callbackSuccess = "twc_cpr_fnc_action";
		};
	};
};