class CfgFunctions {
	class TWC_Fixes {
		tag = "twc_fixes";
		class init {
			file = "twc_fixes\functions";

			class serverInit {};
			class helicopterInit {};
			class tankCrewAdjust {};
			class checkIfRocket {};
			class aiReload {};
		};
	};

	class ace_mk6mortar {
		tag = "ace_mk6mortar";
		
		class ace_mk6mortar {
			class mortarInit {
				file = "twc_fixes\functions\fn_mortarInit.sqf";
			};
		};
	};
	
	class ace_cup_artillery {
		tag = "ace_cup_artillery";
		
		class ace_cup_artillery {
			class mortarInit {
				file = "twc_fixes\functions\fn_mortarInit.sqf";
			};
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