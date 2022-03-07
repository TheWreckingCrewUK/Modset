class Extended_PostInit_EventHandlers {
	class TWC_Medical_Defib {
		clientInit = "_this call twc_medical_defib_fnc_clientInit;";
	};
};

class Extended_Respawn_EventHandlers {
	class CAManBase {
		class TWC_Medical_Defib {
			clientRespawn = "_this call twc_medical_defib_fnc_handleRespawn;";
		};
	};
};