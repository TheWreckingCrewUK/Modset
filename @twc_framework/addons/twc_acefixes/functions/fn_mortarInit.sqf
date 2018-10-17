#include "\z\ace\addons\mk6mortar\script_component.hpp"

params ["_mortar"];

if (_mortar getVariable ["ace_mk6mortar_initialized", false] || _mortar getVariable ["ace_mk6mortar_exclude", false]) exitWith {TRACE_1("Exit",_mortar)};

_turret = [0];
if (typeOf _mortar == "ukcw_fv432_mortar") then { _turret = [1] };
if (!(_mortar turretLocal _turret)) exitWith {TRACE_1("Exit - turret not local",_mortar)};

// Changes behaviour to an include methodology, as opposed to an exclude one.
_includeEmpty = [(configFile >> "CfgVehicles" >> typeOf(_mortar)), "TWC_HandleAmmo_Include", 0] call BIS_fnc_returnConfigEntry;
_includeObject = _mortar getVariable ["TWC_HandleAmmo_Include", false];

if (_includeEmpty < 1 && !_includeObject) exitWith {
	_mortar setVariable ["ace_mk6mortar_initialized", true, true];
};

// Remove all magazines from turret
if (typeOf _mortar == "ukcw_fv432_mortar") then {
	if ((count (_mortar magazinesTurret [1])) > 0) then {
		{
			_mortar removeMagazineTurret [_x, [1]];
		} forEach (_mortar magazinesTurret [1]);
	};
} else {
	if (count magazines _mortar > 0) then {
		{
			_mortar removeMagazineTurret [_x, _turret];
		} forEach magazines _mortar;
	};
};

// Replace current turret weapon with ammo handling weapon
private _currentWeapon = (_mortar weaponsTurret _turret) select 0;
private _newWeapon = "";

// I have no idea why this doesn't utilise the replaceWith config entry...
switch (_currentWeapon) do {
	case "CUP_Vcannon_M119_veh";
	case "ukcw_cannon_l118": { _newWeapon = "ACE_CUP_Vcannon_M119_veh"; };
	case "CUP_Vcannon_D30_veh": { _newWeapon = "ACE_CUP_Vcannon_D30_veh"; };
	case "CUP_Vcannon_D30AT_veh": { _newWeapon = "ACE_CUP_Vcannon_D30AT_veh"; };
	case "mortar_82mm": { _newWeapon = "ace_mortar_82mm"; };
	default { _newWeapon = getText (configFile >> "CfgWeapons" >> _currentWeapon >> QGVAR(replaceWith)); };
};

if (_newWeapon != "") then {
	_mortar removeWeaponTurret [_currentWeapon, [0]];
	_mortar addWeaponTurret [_newWeapon, [0]];
};

_mortar setVariable ["ace_mk6mortar_initialized", true, true];
TRACE_1("Init complete", _mortar);
