class CfgPatches {
	class twc_faction {
		units[] = {};
		
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"a3_characters_f",
			"a3_characters_f_blufor",
			"a3_characters_f_opfor",
			"a3_characters_f_common",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"CUP_Creatures_Military_Russia",
			"CUP_Creatures_Military_Taki"
		};
	};
};

class CfgFactionClasses {
	class TWC_OPFOR_Units_LWP {
		displayName = "Polish People's Army";
		author = "[TWC] Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 0;
	};

	class TWC_OPFOR_Units_CSLA {
		displayName = "Czechoslovak People's Army";
		author = "[TWC] Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 0;
	};

	class TWC_OPFOR_Units_NVA {
		displayName = "National People's Army";
		author = "[TWC] Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 0;
	};
};

class CfgMarkers {
	class flag;
	class TWC_Flag_LWP: Flag {
		name = "Polish People's Republic";
		icon = "twc_opfor_warpac\lwp\data\lwp_flag_ca.paa";
		texture = "twc_opfor_warpac\lwp\data\lwp_flag_ca.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Flag_CSLA: Flag {
		name = "Czechoslovak Socialist Republic";
		icon = "twc_opfor_warpac\csla\data\csla_flag_ca.paa";
		texture = "twc_opfor_warpac\csla\data\csla_flag_ca.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Flag_NVA: Flag {
		name = "German Democratic Republic";
		icon = "twc_opfor_warpac\csla\data\nva_flag_ca.paa";
		texture = "twc_opfor_warpac\csla\data\nva_flag_ca.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
};