class Extended_PostInit_EventHandlers {
	class twc_medical_vehicle {
		clientInit = "_this call twc_medical_vehicle_fnc_clientInit;";
	};
};

class Extended_Respawn_EventHandlers {
	class CAManBase {
		class twc_medical_vehicle {
			clientRespawn = "_this call twc_medical_vehicle_fnc_handleRespawn;";
		};
	};
};