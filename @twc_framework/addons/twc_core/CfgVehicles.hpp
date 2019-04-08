class CfgVehicles {
	class Man;

	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Core_AddToGroup {
					displayName = "Add To Group";
					condition = "[_player, _target] call TWC_Core_fnc_canAddToGroup";
					statement = "[_player, _target] call TWC_Core_fnc_addToGroup";
					exceptions[] = {"isNotSwimming"};
				};
			};
		};
	};
};