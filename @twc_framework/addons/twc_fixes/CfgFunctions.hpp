class CfgFunctions {
	class TWC_Fixes {
		tag = "twc_fixes";
		class init {
			file = "twc_fixes\functions";

			class serverInit {};
			class helicopterInit {};
			class tankCrewAdjust {};
			class aiReload {};
		};
	};
	
	class A3 {
		class Debug {
			class camera {
				file = "twc_fixes\functions\fn_camera.sqf";
			};
		};
	};
};