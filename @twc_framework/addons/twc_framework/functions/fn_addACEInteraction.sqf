params ["_object", "_displayName", "_condition", "_execute"];

_action = [
	"TWC_Custom_Interact",
	_displayName,
	"",
	_execute,
	_condition
] call ace_interact_menu_fnc_createAction;

[
	_object,
	0,
	["TWC_Custom_Interact"],
	_action
] call ace_interact_menu_fnc_addActionToObject;