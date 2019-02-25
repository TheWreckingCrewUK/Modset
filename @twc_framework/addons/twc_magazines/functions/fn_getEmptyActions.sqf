params ["_target", "_player", "_params"];
_params params ["_parentMagazineClass", "_emptiesTo", "_magCount"];

private _actions = [];

private _action = [_parentMagazineClass, "1x", "", { _this call TWC_magazines_fnc_startEmptyingMagazine }, {true}, {}, [_parentMagazineClass, _emptiesTo, 1]] call ace_interact_menu_fnc_createAction;
_actions pushBack [_action, [], _player];

if (_magCount > 1) then {
	private _action = [_parentMagazineClass, "2x", "", { _this call TWC_magazines_fnc_startEmptyingMagazine }, {true}, {}, [_parentMagazineClass, _emptiesTo, 2]] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
};

if (_magCount > 2) then {
	private _action = [_parentMagazineClass, "3x", "", { _this call TWC_magazines_fnc_startEmptyingMagazine }, {true}, {}, [_parentMagazineClass, _emptiesTo, 3]] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
};

_actions;