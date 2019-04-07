class Extended_PostInit_EventHandlers {
	class TWC_Fixes {
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

class Extended_GetOutMan_EventHandlers {
	class CAManBase {
		class TWC_UI {
			getOutMan = "_this call TWC_fixes_fnc_checkIfRocket";
		};
	};
};