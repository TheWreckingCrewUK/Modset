params ["_target", "_player"];

_vehicles = _player nearEntities [
		["Ship", "Car", "ReammoBox_F", "Tank", "Helicopter"],
		7.5
	];

_vehiclesWithInventory = [];

{
	_maxLoad = [(configFile >> "CfgVehicles" >> _x), "maximumLoad", -1] call BIS_fnc_returnConfigEntry;
	
	if (_maxLoad > 0) then { _vehiclesWithInventory pushBack _x; };
} forEach _vehicles;

private _actions = [];

{
	private _displayName = getText (configFile >> "CfgVehicles" >> _x >> "displayName");
	
	private _action = [
		_x,
		_displayName,
		"",
		{
			_this call TWC_Box_Transfer_fnc_transferStart;
		},
		{
			true
		},
		{},
		_x,
		[0, 0, 0],
		7.5
	] call ace_interact_menu_fnc_createAction;
	
	_actions pushBack [_action, [], _target];
} forEach _vehiclesWithInventory;

_actions