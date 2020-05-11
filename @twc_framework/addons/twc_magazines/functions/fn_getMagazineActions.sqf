params ["_target", "_player", "_params"];
_params params ["_parentMagazineClass"];

private _actions = [];

private _unitMagCounts = [];
private _looseAmmoClass = "";
private _emptiesTo = [(configFile >> "CfgMagazines" >> _parentMagazineClass), "TWC_emptiesTo", ""] call BIS_fnc_returnConfigEntry;

{
	_x params ["_xClassname", "_xCount"];

	private _xFullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _xClassname >> "count");
	private _fills = (configFile >> "CfgMagazines" >> _xClassname >> "TWC_Fills") call BIS_fnc_getCfgDataArray;
	{ _fills set [_forEachIndex, toLower _x]; } forEach _fills;
	
	if (_emptiesTo != "") then {
		if !(isNil "_fills") then {
			private _findIndex = _fills find (toLower _parentMagazineClass);
			
			if (_findIndex != -1) then {
				_looseAmmoClass = _xClassname;
			};
		};
	};

	if (_xClassname == _parentMagazineClass) then {
		_unitMagCounts pushBack [_xCount, _xFullMagazineCount];
	};
} forEach ([_player] call TWC_Magazines_fnc_magazineDetails);

// We have some ammo in some our mags. Good enough to empty!
if (_emptiesTo != "") then {
	_nonEmptyMagCount = {(_x select 0) > 0} count _unitMagCounts;

	if (_nonEmptyMagCount > 0) then {
		private _action = [
			_parentMagazineClass,
			"Empty",
			"twc_magazines\ui\empty_ca.paa",
			{},
			{true},
			{ _this call TWC_Magazines_fnc_getEmptyActions },
			[_parentMagazineClass, _emptiesTo, _nonEmptyMagCount]
		] call ace_interact_menu_fnc_createAction;

		_actions pushBack [_action, [], _player];
	};
};

// We've got a couple of mags (or more) that are partial. We can repack!
if (({(_x select 0) < (_x select 1)} count _unitMagCounts) > 1) then {
	private _action = [format ["%1_repack", _parentMagazineClass], "Repack", "\z\ace\addons\common\UI\repack_ca.paa", { _this call TWC_Magazines_fnc_startRepackingMagazine }, {true}, {}, _parentMagazineClass] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
};

// It supports loose ammo, we've got the loose ammo, and some empty mags!
if (_emptiesTo != "" && {_looseAmmoClass != "" && {({(_x select 0) == 0} count _unitMagCounts) > 0}}) then {
	private _action = [format ["%1_refill", _parentMagazineClass], "Refill", "twc_magazines\ui\refill_ca.paa", { _this call TWC_Magazines_fnc_startRefillingMagazine }, {true}, {}, [_parentMagazineClass, _looseAmmoClass]] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
};

_actions