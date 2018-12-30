/*
* Author: [TWC] Rik
* Replaces the weapon/magazines of a weapon with dummy bullets.
*
* Arguments:
* 0: Weapon Carrier <OBJECT>
*
* Return Value:
* NOTHING
*
* Example:
* [static_mg] call twc_fnc_dummyBullets;
*
* Public: No
*/
params ["_static"];

if !(local _static) exitwith {};

_owner = _static turretOwner [0];
_weapon = (_static weaponsTurret [0]) select 0;

_dummyWeapon = ["twc_dummyweapon_", _weapon] joinString "";

if (!(isClass (configFile >> "CfgWeapons" >> _dummyWeapon))) exitwith {
	hint format ["This weapon does not yet have a dummy weapon defined. Please contact management to get it added: %1", _dummyWeapon];
};

_magazines = _static magazinesTurret [0];
_magazineCount = count _magazines;
_static removeWeaponTurret [_weapon, [0]];
_static addWeaponTurret [_dummyWeapon, [0]];
_magazineType = (getArray (configFile >> "CfgWeapons" >> _dummyWeapon >> "magazines")) select 0;

for "_i" from 1 to _magazineCount do {
	_static addMagazineTurret [_magazineType, [0]];
};

_static addEventHandler ["GetIn", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	_magazine = (_vehicle magazinesTurret _turret) select 0;
	_vehicle removeMagazinesTurret [_magazine, _turret];
}];