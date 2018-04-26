params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if (!local _unit || !isPlayer _unit) exitWith {};

_weaponUsed = [(configFile >> "CfgWeapons" >> (typeOf _weapon), "ACE_UsedTube", ""] call BIS_fnc_returnConfigEntry;
if (_weaponUsed == "") exitWith {};

[_unit, _weapon, _weaponUsed] spawn {
	params ["_unit", "_weapon", "_weaponUsed"];

	waitUntil {currentWeapon _unit != _weapon};
	waitUntil {cameraView != "Gunner"};
	
	_isUsedLauncher = [(configFile >> "CfgWeapons" >> (typeOf _weaponUsed), "ACE_isUsedLauncher", 0] call BIS_fnc_returnConfigEntry;
	if (_isUsedLauncher == 0) exitWith {};
	
	_unit removeWeapon _weaponUsed;

	private _spentLauncher = createVehicle ["WeaponHolderSimulated", _unit modelToWorldVisual ((_unit selectionPosition "rightHand") vectorAdd [0,-0.45,-0.05]), [], 0, "CAN_COLLIDE"];
	_spentLauncher setDir (getDir _unit + 90);
	_spentLauncher addWeaponCargoGlobal [_weaponUsed, 1];
	_massMod = (getMass _weaponUsed) * 9.807;

	_vel = velocity _unit;
	_spentLauncher setVelocity [
		(_vel select 0) + sin (getdir _unit + 90) * _massMod,
		(_vel select 1) + cos (getdir _unit + 90) * _massMod,
		(_vel select 2)
	];
};