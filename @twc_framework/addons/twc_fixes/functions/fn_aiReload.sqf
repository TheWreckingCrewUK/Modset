params ["_unit", "", "", "", "_oldMagazine"];

if !(local _unit) exitWith {};
if (isPlayer _unit) exitWith {};

private _reloadCount = _unit getVariable ["TWC_Fixes_ReloadCount", 0];
if (_reloadCount > 3) exitWith {};

if (currentWeapon (vehicle _unit) isEqualTo primaryWeapon _unit) then {
	_unit addMagazine (_oldMagazine #0);
	_reloadCount = _reloadCount + 1;
	_unit setVariable ["TWC_Fixes_ReloadCount", _reloadCount];
};
