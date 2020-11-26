class Extended_FiredBIS_EventHandlers {
	class AllVehicles {
		class TWC_Suppress {
			clientFiredBIS = "_this call twc_suppress_fnc_fired";
		};
	};
};

class Extended_PreInit_EventHandlers {
	class TWC_Suppress {
		clientInit = "call twc_suppress_fnc_preInit";
	};
};

class Extended_PostInit_EventHandlers {
	class TWC_Suppress {
		clientInit = "call twc_suppress_fnc_postInit";
	};
};