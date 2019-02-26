// mimics armas magazinedetails but also incoporates empty magazines as arma doesn't count those
// If fullDetails is enabled, it'll mimic magazineDetailsFull
// ["_xClassname", "_xCount", "_xLoaded", "_xType"]
params ["_unit", ["_fullDetails", false]];

_mags = [];

if !(isNull (uniformContainer _unit)) then {
	if !(_fullDetails) then {
		_mags = _mags + (magazinesAmmoCargo uniformContainer _unit);
	} else {
		_temp = (magazinesAmmoCargo uniformContainer _unit);
		{ _x set [2, false]; _x set [3, -1]; } forEach _temp;
		_mags = _mags + _temp;
	};
};

if !(isNull (vestContainer _unit)) then {
	if !(_fullDetails) then {
		_mags = _mags + (magazinesAmmoCargo vestContainer _unit);
	} else {
		_temp = (magazinesAmmoCargo vestContainer _unit);
		{ _x set [2, false]; _x set [3, -1]; } forEach _temp;
		_mags = _mags + _temp;
	};
};

if !(isNull (unitBackpack _unit)) then {
	if !(_fullDetails) then {
		_mags = _mags + (magazinesAmmoCargo backpackContainer _unit);
	} else {
		_temp = (magazinesAmmoCargo backpackContainer _unit);
		{ _x set [2, false]; _x set [3, -1]; } forEach _temp;
		_mags = _mags + _temp;
	};
};

if !(primaryWeaponMagazine _unit isEqualTo []) then {
	if !(_fullDetails) then {
		_mags pushBack [(primaryWeaponMagazine _unit select 0), (_unit ammo (primaryWeapon _unit))];
	} else {
		_mags pushBack [(primaryWeaponMagazine _unit select 0), (_unit ammo (primaryWeapon _unit)), true, 1];
	};
};

if !(secondaryWeaponMagazine _unit isEqualTo []) then {
	if !(_fullDetails) then {
		_mags pushBack [(secondaryWeaponMagazine _unit select 0), (_unit ammo (secondaryWeapon _unit))];
	} else {
		_mags pushBack [(secondaryWeaponMagazine _unit select 0), (_unit ammo (secondaryWeapon _unit)), true, 4];
	};
};

if !(handgunMagazine _unit isEqualTo []) then {
	if !(_fullDetails) then {
		_mags pushBack [(handgunMagazine _unit select 0), (_unit ammo (handgunWeapon _unit))];
	} else {
		_mags pushBack [(handgunMagazine _unit select 0), (_unit ammo (handgunWeapon _unit)), true, 2];
	};
};

_mags;