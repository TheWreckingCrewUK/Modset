#include "\z\ace\addons\mk6mortar\script_component.hpp"

params ["_mortar"];

if (_mortar getVariable [QGVAR(initialized),false]) exitWith {TRACE_1("Exit",_mortar)};
if (!(_mortar turretLocal [0])) exitWith {TRACE_1("Exit - turret not local",_mortar)};

// Changes behaviour to an include methodology, as opposed to an exclude one.
_doEmptyClass = [(configFile >> "CfgVehicles" >> typeOf(_mortar)), "TWC_HandleAmmo_Include", false] call BIS_fnc_returnConfigEntry;
_doEmptyObject = _mortar getVariable ["TWC_handleAmmo_include", false];
if (_doEmptyClass || _doEmptyObject) exitWith {};

// Remove all magazines from turret
if (count magazines _mortar > 0) then {
	{
		_mortar removeMagazineTurret [_x, [0]];
	} forEach magazines _mortar;
};

// Replace current turret weapon with ammo handling weapon
private _currentWeapon = _mortar weaponsTurret [0] select 0;
private _newWeapon = "";

if (_currentWeapon == "mortar_82mm") then {
	_newWeapon = "ace_mortar_82mm";
} else {
	_newWeapon = getText (configFile >> "CfgWeapons" >> _currentWeapon >> QGVAR(replaceWith));
};

if (_newWeapon != "") then {
	_mortar removeWeaponTurret [_currentWeapon, [0]];
	_mortar addWeaponTurret [_newWeapon, [0]];
};

_mortar setVariable [QGVAR(initialized),true,true];
TRACE_1("Init complete",_mortar);
