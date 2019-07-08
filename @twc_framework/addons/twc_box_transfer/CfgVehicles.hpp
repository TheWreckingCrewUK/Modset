class CfgVehicles {
	class ThingX;
	class ReammoBox_F: ThingX {
		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Transfer_Contents {
					displayName = "Transfer Contents";
					condition = "true";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					insertChildren = "_this call TWC_Box_Transfer_fnc_getTransferChildren";
					icon = "twc_box_transfer\ui\transfer_ca.paa";
				};
			};
		};
	};
	
	class LandVehicle;
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Transfer_Contents {
					displayName = "Transfer Contents";
					condition = "true";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					insertChildren = "_this call TWC_Box_Transfer_fnc_getTransferChildren";
					icon = "twc_box_transfer\ui\transfer_ca.paa";
				};
			};
		};
	};
};
