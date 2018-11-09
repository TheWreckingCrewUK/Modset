class CfgMarkers {
	class hd_dot;
	class hd_ambush;
	class hd_pickup;
	class mil_triangle;
	class hd_join;
	class hd_end;
	
	/** TEMPORARY ONES, WILL MACRO & MAKE CUSTOM IMAGES FOR FUTURE **/
	class TWC_Briefing_Temp_BoF: hd_ambush {
		name = "[BoF] Base of Fire";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_OP: hd_ambush {
		name = "[OP] Observation Point";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_FRV: hd_pickup {
		name = "[FRV] Forward Rendezvous";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_IP: mil_triangle {
		name = "[IP] Ingress Point";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_EP: mil_triangle {
		name = "[EP] Egress Point";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_ERV: hd_join {
		name = "[ERV] Emergency Rendezvous";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_HLS: hd_end {
		name = "[HLS] Helicopter Landing Site";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_LZ: hd_end {
		name = "[LZ] Landing Zone";
		markerClass = "TWC_Brief_SOP_Temp":
	};
	
	class TWC_Briefing_Temp_WP: hd_dot {
		name = "[WP] Way Point";
		markerClass = "TWC_Brief_SOP_Temp":
	};
};