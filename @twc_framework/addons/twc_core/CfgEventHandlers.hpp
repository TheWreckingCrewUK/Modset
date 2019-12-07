class Extended_PostInit_EventHandlers {
	class twc_core_eh {
		serverInit = "[] call TWC_Core_fnc_serverEventHandlers;";
		clientInit = "[] call TWC_Core_fnc_clientEventHandlers;";
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class TWC_Core_NightGear_EH {
			init = "_this call TWC_Core_fnc_initNightGear;";
		};
	};
};
