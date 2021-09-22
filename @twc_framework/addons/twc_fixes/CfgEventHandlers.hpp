class Extended_PostInit_EventHandlers {
	class TWC_Fixes_EH {
		serverInit = "[] call TWC_Fixes_fnc_serverInit;";
	};
};

class Extended_InitPost_EventHandlers {
	class Helicopter {
		class TWC_Fixes_EH {
			init = "_this call TWC_Fixes_fnc_helicopterInit;";
		};
	};
	
	class Tank {
		class TWC_Fixes_EH {
			init = "_this call TWC_fixes_fnc_tankCrewAdjust;";
		};
	};
};

class Extended_Reloaded_EventHandlers {
	class CAManBase {
		class TWC_Fixes_EH {
			reloaded = "_this call TWC_fixes_fnc_aiReload";
		};
	};
};
