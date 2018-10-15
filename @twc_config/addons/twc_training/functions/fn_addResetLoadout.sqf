_action = [
	"ResetLoadout",
	"Reset Loadout",
	"",
	{
		player setUnitLoadout (configFile >> "CfgVehicles" >> (typeOf player));
	},
	{
		vehicle _caller == _caller
	},
	{},
	[],
	[0, 0, 0],
	5
] call ace_interact_menu_fnc_createAction;

[_object, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;