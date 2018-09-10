class Extended_FiredBIS_EventHandlers {
	class AllVehicles {
		class TWC_Suppress {
			clientFiredBIS = "_this call twc_suppress_fnc_fired";
		};
	};
};

class Extended_Init_EventHandlers {
	class Man {
		class TWC_Suppress {
			onRespawn = true;
			clientInit = "[] call twc_suppress_fnc_init";
		};
	};
};