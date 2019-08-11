params ["_unitClass", "_object"];

_actionName = [(configFile >> "CfgVehicles" >> _unitClass), "displayName", "No Name Found"] call BIS_fnc_returnConfigEntry;

_action = [
	"ChangeLoadout",
	_actionName,
	"",
	{
		params ["_target", "_player", "_params"];
		_params params ["_unitClass"];
		player setUnitLoadout (configFile >> "CfgVehicles" >> _unitClass);
	},
	{
		true
	},
	{},
	[_unitClass],
	[0, 0, 0],
	5
] call ace_interact_menu_fnc_createAction;

[_object, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;