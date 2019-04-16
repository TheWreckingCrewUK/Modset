class CfgFunctions {
	class TWC_Medical_Resuscitate {
		tag = "twc_medical_resuscitate";
		
		class init {
			file = "twc_medical_resuscitate\functions";
			// Core
			class clientInit {};
			class resuscitate {};
			class getWakeUp {};
			class badLuckProtection {};
			class handleRespawn {};
			
			// CPR
			class action {};
			class canCPR {};
			class CPR {};
			class CPR_Local {};
			class CPR_onFailure {};
			class CPR_onProgress {};
			
			// Defib
			class action_Defib {};
			class canDefib {};
			class Defib {};
			class Defib_Local {};
		};
	};
};