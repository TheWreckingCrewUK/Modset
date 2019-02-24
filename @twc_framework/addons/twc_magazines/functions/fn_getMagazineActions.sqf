params ["_target", "_player", "_params"];
_params params ["_parentMagazineClass"];

private _actions = [];

private _unitMagCounts = [];
private _hasLooseAmmoFor = "";
private _emptiesTo = [(configFile >> "CfgMagazines" >> _parentMagazineClass), "TWC_emptiesTo", ""] call BIS_fnc_returnConfigEntry;

{
	_x params ["_xClassname", "_xCount"];

	private _xFullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _xClassname >> "count");
	private _fills = (configFile >> "CfgMagazines" >> _xClassname >> "TWC_Fills") call BIS_fnc_getCfgDataArray;
	private _continue = true;
	
	if (_emptiesTo != "") then {
		if !(isNil "_fills") then {
			if (count _fills > 0) exitWith {
				if (_parentMagazineClass in _fills) then {
					_hasLooseAmmoFor = _xClassname;
					_continue = false;
				};
			};
		};
	};

	if (_xClassname == _parentMagazineClass && _continue) then {
		_unitMagCounts pushBack [_xCount, _xFullMagazineCount];
	};
} forEach ([_player] call TWC_Magazines_fnc_magazineDetails);

// We have some ammo in some our mags. Good enough to empty!
if (({(_x select 0) > 0} count _unitMagCounts) > 0) then {
	private _action = [_parentMagazineClass, "Empty", "\z\twc_framework\addons\twc_magazines\ui\empty_ca.paa", { hint "test" }, {true}, {}, _parentMagazineClass] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
};

// We've got a couple of mags (or more) that are partial. We can repack!
if (({(_x select 0) < (_x select 1)} count _unitMagCounts) > 1) then {
	private _action = [_parentMagazineClass, "Repack", "\z\ace\addons\common\UI\repack_ca.paa", { _this call ACE_magazinerepack_fnc_startRepackingMagazine }, {true}, {}, _parentMagazineClass] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
};

// It supports loose ammo, we've got the loose ammo, and some empty mags!
if (_emptiesTo != "" && {_hasLooseAmmoFor != "" && {({(_x select 0) == 0} count _unitMagCounts) > 0}}) then {
	private _action = [_parentMagazineClass, "Refill", "\z\twc_framework\addons\twc_magazines\ui\refill_ca.paa", {  hint "test" }, {true}, {}, [_parentMagazineClass, _hasLooseAmmoFor]] call ace_interact_menu_fnc_createAction;
	_actions pushBack [_action, [], _player];
};

_actions