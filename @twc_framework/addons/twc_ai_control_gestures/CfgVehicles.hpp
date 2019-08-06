class CfgVehicles {
	class Man;

	class CAManBase: Man {
		class ACE_SelfActions {
			class TWC_Gestures {
				displayName = "Issue Order";
				condition = "(canStand _target) && { TWC_Show_Gestures == 1 }";
				statement = "";
				exceptions[] = {"isNotSwimming"};
				showDisabled = 1;
				icon = "";
				
				class TWC_AI_Control_Gesture_Advance {
					displayName = "Advance";
					condition = "true";
					statement = "[_target] call TWC_AI_Control_Gestures_fnc_signalAdvance";
					showDisabled = 1;
				};
				
				class TWC_AI_Control_Gesture_Halt {
					displayName = "Halt";
					condition = "true":
					statement = "[_target] call TWC_AI_Control_Gestures_fnc_signalHalt";
					showDisabled = 1;
				};
			};
		};
	};
};