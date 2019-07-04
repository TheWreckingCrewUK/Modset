params ["_target", "_player"];

_vehicles = _player nearEntities [["Ship", "Car", "ReammoBox_F", "Tank", "Helicopter"], 7.5];

_vehiclesWithInventory = [];

{
	_cachedMaxLoad = _x getVariable ["TWC_maxLoad", -1];
	
	if (_cachedMaxLoad == -1) then {
		_maxLoad = [(configFile >> "CfgVehicles" >> _x), "maximumLoad", 0] call BIS_fnc_returnConfigEntry;
		_x setVariable ["TWC_maxLoad", _maxLoad, true];
	} else {
		_maxLoad = _cachedMaxLoad;
	};
	
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
			[_target, _player, _x] call TWC_Box_Transfer_fnc_transferStart;
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