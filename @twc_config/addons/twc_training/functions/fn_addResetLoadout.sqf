params ["_object"];

_action = [
	"ResetLoadout",
	"Reset Loadout",
	"",
	{
		player setUnitLoadout (configFile >> "CfgVehicles" >> (typeOf player));
	},
	{
		params ["_target", "_player", "_params"];
		vehicle _player == _player
	},
	{},
	[],
	[0, 0, 0],
	5
] call ace_interact_menu_fnc_createAction;

[_object, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;