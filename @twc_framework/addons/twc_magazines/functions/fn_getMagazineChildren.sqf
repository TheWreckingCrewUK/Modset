params ["_target", "_player"];


private _unitMagazines = [];
private _unitMagCounts = [];
private _looseAmmo = [];

{
	_x params ["_xClassname", "_xCount", "_xLoaded", "_xType"];
	private _xFullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _xClassname >> "count");
	private _fills = (configFile >> "CfgMagazines" >> _xClassname >> "TWC_Fills") call BIS_fnc_getCfgDataArray;
	
	if !(isNil _fills) exitWith {
		if (count _fills > 0) then {
			_looseAmmoClasses pushBack [_xClassname, _fills];
		} else {
			systemChat format ["Incorrectly configured loose ammo: %1", _xClassname];
		};
	};

	if ((_xCount < _xFullMagazineCount) && {(!_xLoaded) || {_player canAdd _xClassname}}) then {
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
	private _displayName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
	private _picture = getText (configFile >> "CfgMagazines" >> _x >> "picture");
	private _hasRefill = false;
	private _magazine = _x;
	private _refillAction = "";

	{
		if (_magazine in (_x select 1)) then {
			private _refillPicture = getText (configFile >> "CfgMagazines" >> _x >> "picture");
			_refillAction = [(_x select 0), "Refill", _refillPicture, { _this call twc_magazines_fnc_startRefillingMagazine}, {true}, {}, (_x select 0)] call ace_interact_menu_fnc_createAction;
			_hasRefill = true;
		};
	} forEach _looseAmmo;

	if (({_x > 0} count (_unitMagCounts select _forEachIndex)) == 0 && _hasRefill) then {
		private _action = [_x, _displayName, _picture, { /** no repacking, as there's nothing to repack **/ }, {true}, { _refillAction }, _x] call ace_interact_menu_fnc_createAction;
		_actions pushBack [_action, [], _player];
	} else {
		if (_hasRefill) then {
			private _action = [_x, _displayName, _picture, {_this call ace_magazines_fnc_startRepackingMagazine}, {true}, { _refillAction }, _x] call ace_interact_menu_fnc_createAction;
			_actions pushBack [_action, [], _player];
		} else {
			// No loose ammo, just bog standard repacking!
			if ((count (_unitMagCounts select _forEachIndex)) >= 2) then {
				private _action = [_x, _displayName, _picture, {_this call ace_magazines_fnc_startRepackingMagazine}, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
				_actions pushBack [_action, [], _player];
			};
		};
	};
} forEach _unitMagazines;

_actions