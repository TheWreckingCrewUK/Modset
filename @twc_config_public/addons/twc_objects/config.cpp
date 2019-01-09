class CfgPatches {
	class twc_objects {
		units[]= {
			"twc_radioTable",
			"twc_portableGenerator"
		};
		
		weapons[] = {};
		requiredVersion = 0.1;
		
		requiredAddons[] = {
			"ace_interaction"
		};
	};
};
class EventHandlers;

class cfgFunctions {
	class TWC {
		class insurgencyObjects {
			file = "twc_objects\functions";
			class setUpForwardBase {};
			class tearDownForwardBase {};
			class createDefenses {};
			class setcamocoef {};
			class baseswitchside {};
			class baseobject {};
		};
		
		class Public_Items {
			file = "twc_objects\functions";
			class getLOCSTATReport {};
		};
	};
};

class CfgVehicles {
	class rhsusf_m1085a1p2_B_WD_Medical_fmtv_usarmy;
	class Land_CampingTable_F;
	class Land_Portable_generator_F;
	class Land_BagFence_Corner_F;
	class Land_BagFence_Long_F;
	class Land_BagFence_Short_F;
	class Land_BagFence_End_F;
	class Land_BagFence_Round_F;
	class Land_BagBunker_Small_F;
	class Land_File_research_F;
	class FlagSmall_F;
	
	class twc_flag_eod: FlagSmall_F {
		displayname = "TWC EOD Flag";
		ace_dragging_canDrag = 1;
		ace_dragging_carryDirection = 0;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;		
	};
	
	class twc_medical_hemtt: rhsusf_m1085a1p2_B_WD_Medical_fmtv_usarmy {
		ace_cargo_hasCargo = -1;

		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""ace_medical_isMedicalFacility"",true,true];";
		};
	};
	
	class twc_Land_BagFence_Corner_F: Land_BagFence_Corner_F {
		class EventHandlers: EventHandlers {
			init = "[(_this select 0),true,[0,1,0],0] call ace_dragging_fnc_setCarryable;";
		};
	};

	class twc_Land_BagFence_Long_F: Land_BagFence_Long_F {
		class EventHandlers: EventHandlers {
			init = "[(_this select 0),true,[0,1,0],0] call ace_dragging_fnc_setCarryable;";
		};
	};

	class twc_Land_BagFence_Short_F: Land_BagFence_Short_F {
		class EventHandlers: EventHandlers {
			init = "[(_this select 0),true,[0,1,0],0] call ace_dragging_fnc_setCarryable;";
		};
	};

	class twc_Land_BagFence_End_F: Land_BagFence_End_F {
		class EventHandlers: EventHandlers {
			init = "[(_this select 0),true,[0,1,0],0] call ace_dragging_fnc_setCarryable;";
		};
	};

	class twc_Land_BagFence_Round_F: Land_BagFence_Round_F {
		class EventHandlers: EventHandlers {
			init = "[(_this select 0),true,[0,1,0],0] call ace_dragging_fnc_setCarryable;";
		};
	};

	class twc_Land_BagBunker_Small_F: Land_BagBunker_Small_F {
		class EventHandlers: EventHandlers {
			init = "[(_this select 0),true,[0,0,0],180] call ace_dragging_fnc_setCarryable;";
		};
	};

	class twc_radioTable: Land_CampingTable_F {
		displayname = "TWC RadioTable";
		ace_dragging_canDrag = 1;
		ace_dragging_carryDirection = 0;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;

		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_forwardBaseDeployed"",false]";
		};

		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
				distance = 2;
				condition = "true";
				position = "[0,0,0.4]";

				class twc_placeRadio {
					displayName = "Activate Forward Base";
					condition = "!(_target getVariable 'twc_forwardBaseDeployed')";
					statement = "_return = [_target,_player] call twc_fnc_setUpForwardBase; hint _return;";
					icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
				};

				class twc_RemoveRadio {
					displayName = "Tear Down Forward Base";
					condition = "(_target getVariable 'twc_forwardBaseDeployed')";
					statement = "_return = [_target,_player] call twc_fnc_tearDownForwardBase; hint _return;";
					icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
				};
			};
		};
	};

	class twc_portableGenerator: Land_Portable_generator_F {
		ace_cargo_size = 1;
		ace_cargo_canLoad = 1;

		class EventHandlers: EventHandlers {
			init = "[(_this select 0),true,[0,1,0],270] call ace_dragging_fnc_setDraggable;";
		};
	};

	class TWC_Item_Public_Base_LOCSTAT: Land_File_research_F {
		displayName = "LOCSTAT Reports";
		ace_cargo_canLoad = 0;
		ace_dragging_canDrag = 0;
		ace_cargo_size = 10000; // pretty big... for you
		
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
				distance = 2;
				condition = "true";
				position = "[0, 0, 0]";

				class TWC_Item_Public_Base_LOCSTAT_Report {
					displayName = "Retrieve Latest Report";
					condition = "true";
					statement = "[] call twc_fnc_getLOCSTATReport;";
					icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
				};
			};
		};
	};
	class B_supplyCrate_F;
	class TWC_AmmoBox_Other_Pallet_pub: B_supplyCrate_F {
	scope = 1;
	scopeCurator = 2;
	displayName = "Cargo Pallet";
	author      = "Bosenator";


	class TransportMagazines { };
	class TransportItems     { };
	class TransportWeapons   { };
	class TransportBackpacks { };
	
	ace_dragging_canCarry = 0;
	ace_dragging_canDrag  = 1;
	
	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 5;
	ace_cargo_hasCargo    = 1;
	ace_cargo_space = 8;

	// Disable inventory on it
	maximumLoad           = 0;
	transportMaxMagazines = 0;
	transportMaxWeapons   = 0;
	transportMaxBackpacks = 0;
};

};