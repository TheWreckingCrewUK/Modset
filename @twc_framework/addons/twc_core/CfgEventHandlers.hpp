class Extended_PostInit_EventHandlers {
	class twc_core_eh {
		serverInit = "[] call TWC_Core_fnc_serverEventHandlers;";
		clientInit = "[] call TWC_Core_fnc_clientEventHandlers;";
	};
};

class Extended_Init_EventHandlers {
	class CAManBase {
		class twc_core_nightgear {
			clientInit = "_this call TWC_Core_fnc_initNightGear;";
		};
	};
};