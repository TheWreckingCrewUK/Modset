class CfgVehicles {
	// TODO: Add UI element for this, at some point
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
	
	// TODO: Add UI element for this, at some point
	class Air;
	class Helicopter: Air {
		class ACE_SelfActions {
			class TWC_GetOut_Left {
				displayName = "Get Out Left";
				condition = "_this call TWC_Core_fnc_canGetOutSide";
				statement = "[_this] call TWC_Core_fnc_getOutSide";
			};
			
			class TWC_GetOut_Right {
				displayName = "Get Out Right";
				condition = "_this call TWC_Core_fnc_canGetOutSide";
				statement = "[_this, 'right'] call TWC_Core_fnc_getOutSide";
			};
		};
	};
};