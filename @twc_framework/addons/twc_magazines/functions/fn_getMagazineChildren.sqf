params ["_target", "_player"];


private _unitMagazines = [];
private _unitMagCounts = [];
private _looseAmmoMags = [];
private _looseAmmoClasses = [];

{
	_x params ["_xClassname", "_xCount", "_xLoaded", "_xType"];
	private _xFullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _xClassname >> "count");
	private _fills = (configFile >> "CfgMagazines" >> _xClassname >> "TWC_Fills") call BIS_fnc_getCfgDataArray;
	private _continue = true;
	
	if !(isNil _fills) exitWith {
		_looseAmmoClasses pushBack _xClassname;
		{ _looseAmmoMags pushBack _x; } forEach _fills;
	};

	if ((_xCount < _xFullMagazineCount) && {_xCount > 0} && {(!_xLoaded) || {_player canAdd _xClassname}}) then {
		private _index = _unitMagazines find _xClassname;

		if (_index == -1) then {
			_unitMagazines pushBack _xClassname;
			_unitMagCounts pushBack [_xCount];
		} else {
			(_unitMagCounts select _index) pushBack _xCount;
		};
	};
} forEach (magazinesAmmoFull _player);


private _actions = [];

{
	if ((count (_unitMagCounts select _forEachIndex)) >= 2) then {
		private _displayName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
		private _picture = getText (configFile >> "CfgMagazines" >> _x >> "picture");

		private _action = [_x, _displayName, _picture, {_this call ace_magazines_fnc_startRepackingMagazine}, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
		_actions pushBack [_action, [], _player];
	};
} forEach _unitMagazines;

_actions