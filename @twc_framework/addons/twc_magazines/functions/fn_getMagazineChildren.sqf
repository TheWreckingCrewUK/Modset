params ["_target", "_player"];


private _unitMagazines = [];
private _unitMagCounts = [];
private _looseAmmo = [];

{
	_x params ["_xClassname", "_xCount"];
	private _xFullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _xClassname >> "count");
	private _fills = (configFile >> "CfgMagazines" >> _xClassname >> "TWC_Fills") call BIS_fnc_getCfgDataArray;
	private _continue = true;
	
	if !(isNil "_fills") then {
		if (count _fills > 0) exitWith {
			_looseAmmo pushBackUnique [_xClassname, _fills];
			_continue = false;
		};
	};

	if (_xFullMagazineCount != 1 && _continue) then {
		private _index = _unitMagazines find _xClassname;

		if (_index == -1) then {
			_unitMagazines pushBack _xClassname;
			_unitMagCounts pushBack [_xCount];
		} else {
			(_unitMagCounts select _index) pushBack _xCount;
		};
	};
} forEach ([_player] call TWC_Magazines_fnc_magazineDetails);

private _actions = [];

{
	private _displayName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
	private _picture = getText (configFile >> "CfgMagazines" >> _x >> "picture");

	private _action = [_x, _displayName, _picture, {}, {true}, { _this call TWC_Magazines_fnc_getMagazineActions }, _x] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
} forEach _unitMagazines;

_actions