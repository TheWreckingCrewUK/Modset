class Extended_PostInit_EventHandlers {
	class TWC_Core {
		serverInit = "[] call TWC_Core_fnc_serverPostInit;";
		clientInit = "[] call TWC_Core_fnc_clientPostInit;";
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class TWC_Core_NightGear_EH {
			init = "_this call TWC_Core_fnc_initNightGear;";
		};
	};
};

class Extended_PreInit_EventHandlers {
	class TWC_Core {
		init = "_this call TWC_Core_fnc_clientPreInit;";
	};
};
