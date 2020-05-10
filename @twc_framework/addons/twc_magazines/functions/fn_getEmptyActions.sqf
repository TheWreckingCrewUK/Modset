params ["_target", "_player", "_params"];
_params params ["_parentMagazineClass", "_emptiesTo", "_magCount"];

private _actions = [];

for "_i" from 1 to (_magCount min 3) do {
	private _action = [
		_parentMagazineClass,
		format ["%1x", _i],
		"",
		{ _this call TWC_magazines_fnc_startEmptyingMagazine; },
		{true},
		{},
		[_parentMagazineClass, _emptiesTo, _i]
	] call ace_interact_menu_fnc_createAction;
	
	_actions pushBack [_action, [], _player];
};

_actions;