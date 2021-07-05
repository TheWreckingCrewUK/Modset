class CfgFunctions {
	class TWC_Box_Replenish {
		class functions {
			file = "twc_box_replenish\functions";
			
			class getReplenishChildren {};
			class getReplenishCounts {};
			class startReplenish {};
			class finishReplenish {};
			class checkCounts {};
		};
		
		class module {
			file = "twc_box_replenish\modules";
			
			class moduleSetReplenishQuantity {};
		};
	};
};
