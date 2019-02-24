// mimics armas magazinedetails but also incoporates empty magazines as arma doesn't count those
params ["_unit"];

_mags = [];

if !(isNull (uniformContainer _unit)) then {
	_mags = _mags + (magazinesAmmoCargo uniformContainer _unit);
};

if !(isNull (vestContainer _unit)) then {
	_mags = _mags + (magazinesAmmoCargo vestContainer _unit);
};

if !(isNull (unitBackpack _unit)) then {
	_mags = _mags + (magazinesAmmoCargo backpackContainer _unit);
};

if !(primaryWeaponMagazine _unit isEqualTo []) then { _mags pushBack [(primaryWeaponMagazine _unit select 0), (_unit ammo (primaryWeapon _unit))]; };
if !(secondaryWeaponMagazine _unit isEqualTo []) then {  _mags pushBack [(secondaryWeaponMagazine _unit select 0), (_unit ammo (secondaryWeapon _unit))]; };
if !(handgunMagazine _unit isEqualTo []) then { _mags pushBack [(handgunMagazine _unit select 0), (_unit ammo (handgunWeapon _unit))]; };

_mags;