class cfgWaypoints {
	class TWC_WPs {
		displayName = "TWC - Special Waypoints";

		//--- Waypoint class
		class wpMove20MPH {
			displayName = "Move at 20mph";
			displayNameDebug = "wpMove20MPH";
			file = "twc_framework\waypoints\fn_wpMove20MPH.sqf";
			icon = "\a3\3den\Data\CfgWaypoints\getInNearest_ca.paa";
		};
		
		class wpMoveAndDelete {
			displayName = "Move then Delete";
			displayNameDebug = "wpMoveAndDelete";
			file = "twc_framework\waypoints\fn_wpMoveAndDelete.sqf";
			icon = "\a3\3den\Data\CfgWaypoints\getInNearest_ca.paa";
		};
		
		class wpMoveTimid {
			displayName = "Move Timid";
			displayNameDebug = "wpMoveTimid";
			file = "twc_framework\waypoints\fn_wpMoveTimid.sqf";
			icon = "\a3\3den\Data\CfgWaypoints\getInNearest_ca.paa";
		};
	};
};