class CfgPatches {
	class TWC_Box_Transfers {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"ace_common",
			"twc_core"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class TWC_Box_Transfer {
		class functions {
			file = "twc_box_transfer\functions";
			
			class getTransferChildren {};
			class simulateTransfer {};
			class transferFinish {};
			class transferProgress {};
			class transferStart {};
		};
	};
};

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
	
	class Tank: LandVehicle {
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
	
	class Air;
	class Helicopter: Air {
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
	
	class Ship;
	class Ship_F: Ship {
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
