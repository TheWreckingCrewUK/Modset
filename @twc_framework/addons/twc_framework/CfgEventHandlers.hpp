class Extended_InitPost_EventHandlers {
	class CAManBase {
		
		class twc_AIItemCheckInit {
			init = "_this call twc_fnc_confiscateBadItems;";
		};
	};	
	class TWC_Module_WaveSpawn {
		class TWC_ModuleWaveSpawnInit {
			init = "_this call TWC_fnc_moduleWaveSpawnInit;";
		};
	};
};

class Extended_PostInit_EventHandlers {
	class TWC_Framework {
		init = "_this call TWC_fnc_postInit;";
	};
};
