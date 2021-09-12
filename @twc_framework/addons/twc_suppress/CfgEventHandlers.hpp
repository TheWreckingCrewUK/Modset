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

class Extended_Killed_EventHandlers {
	class Car {
		clientKilled = "_this call TWC_Suppress_fnc_shockwave";
	};
	
	class Tank {
		clientKilled = "_this call TWC_Suppress_fnc_shockwave";
	};
	
	class Air {
		clientKilled = "_this call TWC_Suppress_fnc_shockwave";
	};
	
	class Ship {
		clientKilled = "_this call TWC_Suppress_fnc_shockwave";
	};
};