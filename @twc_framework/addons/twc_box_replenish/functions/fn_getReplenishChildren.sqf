params ["_target", "_player"];

_resupplyAvailability = [_target] call TWC_Box_Replenish_fnc_getReplenishCounts;
_boxes = _player nearEntities [["ReammoBox_F"], 7.5];
_eligibleReplenishTargets = [];

{
	_ammoboxType = [(configFile >> "CfgVehicles" >> (typeOf _x)), "twc_ammobox_type", "none"] call BIS_fnc_returnConfigEntry;
	
	if (_x != _target && {(_resupplyAvailability findIf {(_x select 0) == _ammoboxType} != 0)}) then {
		_eligibleReplenishTargets pushBack [_ammoboxType, _x];
	};
} forEach _boxes;

private _actions = [];

{
	private _displayName = format ["%1 (%2 m)", getText (configFile >> "CfgVehicles" >> (typeOf (_x select 1)) >> "displayName"), ((_target distance (_x select 1)) toFixed 1)];
	
	private _action = [
		(_x select 1),
		_displayName,
		"",
		{
			_this call TWC_Box_Replenish_fnc_startReplenish;
		},
		{
			true
		},
		{},
		[(_x select 0), (_x select 1)],
		[0, 0, 0],
		7.5
	] call ace_interact_menu_fnc_createAction;
	
	_actions pushBack [_action, [], _target];
} forEach _eligibleReplenishTargets;

_actions