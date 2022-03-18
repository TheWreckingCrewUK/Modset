class CfgFunctions {
	class twc_medical_vehicle {
		tag = "twc_medical_vehicle";
		
		class init {
			file = "twc_medical_vehicle\functions";
			
			class clientInit {};
			class serverInit {};
			class handleRespawn {};
			
			// Defib
			class canDefib {}; // update to check for IV (can't do with it in)
			class defib {};
			class defibLocal {};
			
			// IV
			class IV {};
			class IVLocal {};
			class unhookIV {};
			class unhookIVLocal {};
			class canUnhookIV {};
			class canHookIV {};
			
			// Burn Treatment
			
			// Life Support (takes over CPR - maybe a better name?)
			class isInTransportVehicle {};
			class isTransportVehicle {};
		};
	};
};