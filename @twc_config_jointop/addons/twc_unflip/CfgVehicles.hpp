class CfgVehicles {
	class LandVehicle;
	class Car: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Unflip {
					displayName = "Reorientate";
					condition = "[_player, _target] call TWC_Unflip_fnc_condition";
					statement = "_target call TWC_Unflip_fnc_action";
					exceptions[] = {"isNotSwimming"};
					distance = 5.0;
					icon = "\a3\3den\data\attributes\loiterdirection\cw_ca.paa";
				};
			};
		};
	};
};