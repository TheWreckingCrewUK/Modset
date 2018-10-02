class CfgPatches {
	
};

class CfgMarkerClasses {
	class TWC_Brief_Action {
		displayName = "TWC Briefing - Friendly Actions";
	};
	
	class TWC_Brief_Effect {
		displayName = "TWC Briefing - Enemy Effect";
	};
};

class CfgMarkers {
	class hd_dot;
	
	// friendly actions
	class twc_briefing_abf: hd_dot {
		name = "";
		icon = "twc_markers\data\_caa.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Action":
	};
	
	class twc_briefing_bof: hd_dot {
		name = "Base of Fire / Support by Fire";
		icon = "twc_markers\data\sbf_ca.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Action";
	};
	
	class twc_briefing_breach: hd_dot {
		name = "";
		icon = "twc_markers\data\_caa.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Action";
	};
	
	class twc_briefing_bypass: hd_dot {
		name = "";
		icon = "twc_markers\data\_caa.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Action";
	};
	
	class twc_briefing_clear: hd_dot {
		name = "";
		icon = "twc_markers\data\_caa.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Action";
	};
	
	class twc_briefing_occupy: hd_dot {
		name = "";
		icon = "twc_markers\data\_caa.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Action";
	};
	
	class twc_briefing_secure: hd_dot {
		name = "";
		icon = "twc_markers\data\_caa.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Action";
	};

	// actions on enemy
	class twc_briefing_fix: hd_dot {
		name = "";
		icon = "twc_markers\data\_caa.paa";
		shadow = 0;
		markerClass = "TWC_Brief_Effect";
	};
	
	
};