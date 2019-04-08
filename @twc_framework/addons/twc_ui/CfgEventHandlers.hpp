class Extended_Killed_EventHandlers {
	class CAManBase {
		class TWC_UI {
			clientKilled = "_this call TWC_UI_fnc_handleVehicle";
		};
	};
};

class Extended_GetInMan_EventHandlers {
	class CAManBase {
		class TWC_UI {
			getInMan = "_this call TWC_UI_fnc_handleVehicle";
		};
	};
};

class Extended_GetOutMan_EventHandlers {
	class CAManBase {
		class TWC_UI {
			getOutMan = "_this call TWC_UI_fnc_handleVehicle";
		};
	};
};

class Extended_SeatSwitchedMan_EventHandlers {
	class CAManBase {
		class TWC_UI {
			seatSwitchedMan = "_this call TWC_UI_fnc_handleVehicle";
		};
	};
};

/*
 *
 * Legacy from the old init.sqf
 * Shouldn't be necessary, with the above EH
 * Storing it here, just incase
 *
 *
 
["vehicle", {
	params ["_playerUnit", "_newVehicle"];
	
	if (_playerUnit call TWC_UI_fnc_shouldDisplay) then {
		[] call TWC_UI_fnc_addDisplay;
	} else {
		[] call TWC_UI_fnc_removeDisplay;
	};
}] call CBA_fnc_addPlayerEventHandler; */