params ["_target", "_player"];

_resupplyAvailability = [_target] call TWC_Box_Replenish_fnc_getReplenishCounts;
_boxes = _player nearEntities [["ReammoBox_F"], 7.5];
_eligibleReplenishTargets = [];

{
	_ammoboxType = [(configFile >> "CfgVehicles" >> (typeOf _x)), "twc_ammobox_type", nil] call BIS_fnc_returnConfigEntry;
	if (isNil "_ammoboxType") exitWith {};
	if (_ammoboxType == "other") exitWith {};
	
	if (_x != _target && {(_resupplyAvailability findIf {(_x select 0) == _ammoboxType} != -1)}) then {
		_eligibleReplenishTargets pushBack _x;
	};
} forEach _boxes;

private _actions = [];

{
	private _displayName = format ["%1 (%2 m)", getText (configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName"), ((_target distance _x) toFixed 1)];
	
	private _action = [
		_x,
		_displayName,
		"",
		{
			_this call TWC_Box_Replenish_fnc_startReplenish;
		},
		{
			true
		},
		{},
		[_target, _player, _x],
		[0, 0, 0],
		7.5
	] call ace_interact_menu_fnc_createAction;
	
	_actions pushBack [_action, [], _target];
} forEach _eligibleReplenishTargets;

_actions