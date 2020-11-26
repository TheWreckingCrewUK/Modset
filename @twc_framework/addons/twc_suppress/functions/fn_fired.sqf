params ["_unit", "_weapon", "", "", "_ammo", "", "_projectile"];

if (!(hasInterface) || isDedicated) exitWith {};
if (side _unit == side player) exitWith {}; // don't trigger ourselves
if (toLower(_weapon) in ["put", "throw"]) exitWith {};
if ((player distance _unit) >= 1000) exitWith {};
if (isNull _projectile) then { _projectile = nearestObject [_unit, _ammo]; };

if ((side effectiveCommander (vehicle _unit)) != (side (vehicle player))) then {
	_hit = [_ammo, format ["twc_suppress_cached_hit_%1", _ammo]] call TWC_Suppress_fnc_readCache;
	if (_hit == 0) exitWith {};

	_dDist = (5 + (_hit / 3)) min 28;
	TWC_Suppress_Queue pushBack [_projectile, _dDist, _hit];
};
