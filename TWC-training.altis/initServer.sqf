execVM "scripts\weaponLists\crates\modern.sqf";

"ERA" addPublicVariableEventHandler {
	_newEra = _this select 1;
	
	switch (_newEra) do {
		case 0: {execVM "scripts\weaponLists\crates\modern.sqf";};
		case 1: {execVM "scripts\weaponLists\crates\coin.sqf";};
		case 2: {execVM "scripts\weaponLists\crates\coldwar.sqf";};
		case 3: {execVM "scripts\weaponLists\crates\1990.sqf";};
		default {diag_log format ["%1, %2", time, "An error occured when attempting to switch era."];};
	};
};

"timeOfDay" addPublicVariableEventHandler {
	_newTime = _this select 1;
	
	switch (_newTime) do {
		case 0: {setDate [2035, 6, 24, 4, 0]};
		case 1: {setDate [2035, 6, 24, 12, 0]};
		case 2: {setDate [2035, 6, 24, 16, 0]};
		case 3: {setDate [2035, 6, 24, 24, 0]};
		default {diag_log format["%1, %2", time, "An error occured when attempting to switch time of day."];};
	};
};

"tankTarget" addPublicVariableEventHandler {
	_tankTarget = _this select 1;
	
	switch (_tankTarget) do {
		case 0: {execVM "scripts\atRange\tankClose.sqf";};
		case 1: {execVM "scripts\atRange\tankMedium.sqf";};
		case 2: {execVM "scripts\atRange\tankFar.sqf";};
		default {diag_log format ["%1, %2", time, "An error occured when attempting to spawn a tank."];};
	};
};