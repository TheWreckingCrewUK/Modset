if (!hasInterface) exitWith {};
//if (!isPlayer player) exitWith {};

["vehicle", {
	params ["_playerUnit", "_newVehicle"];
	
	if (_playerUnit call TWC_UI_fnc_shouldDisplay) then {
		[] call TWC_UI_fnc_addDisplay;
	} else {
		[] call TWC_UI_fnc_removeDisplay;
	};
}] call CBA_fnc_addPlayerEventHandler;

[player, "GetInMan", {
	params ["_playerUnit"];
	
	if (_playerUnit call TWC_UI_fnc_shouldDisplay) then {
		[] call TWC_UI_fnc_addDisplay;
	} else {
		[] call TWC_UI_fnc_removeDisplay;
	};
}, player] call CBA_fnc_addBISEventHandler;

[player, "GetOutMan", {
	params ["_playerUnit"];
	
	if (_playerUnit call TWC_UI_fnc_shouldDisplay) then {
		[] call TWC_UI_fnc_addDisplay;
	} else {
		[] call TWC_UI_fnc_removeDisplay;
	};
}, player] call CBA_fnc_addBISEventHandler;

[player, "SeatSwitchedMan", {
	params ["_playerUnit"];
	
	if (_playerUnit call TWC_UI_fnc_shouldDisplay) then {
		[] call TWC_UI_fnc_addDisplay;
	} else {
		[] call TWC_UI_fnc_removeDisplay;
	};
}, player] call CBA_fnc_addBISEventHandler;

[player, "Killed", {
	params ["_unit"];
	
	if (_unit == player) then {
		[] call TWC_UI_fnc_removeDisplay;
	};
}, player] call CBA_fnc_addBISEventHandler;