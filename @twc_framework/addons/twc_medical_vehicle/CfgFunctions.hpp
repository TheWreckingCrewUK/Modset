class CfgFunctions {
	class twc_medical_vehicle {
		tag = "twc_medical_vehicle";
		
		class init {
			file = "twc_medical_vehicle\functions";
			
			class clientInit {};
			class handleRespawn {};
			
			// Defib
			class canDefib {}; // update to check for IV (can't do with it in)
			class defib {};
			class defibLocal {};
			
			// IV
			class IV {};
			class IVLocal {};
			class unhookIV {};
			class canUnhookIV {};
			class canHookIV {};
			
			// Burn Treatment
			
			// Automated Stablisation System (A.S.S.)
			class isInTransportVehicle {};
			class isTransportVehicle {};
			class canAss {};
			class hookAss {};
			class hookAssLocal {};
			class unhookAss {};
		};
	};
};