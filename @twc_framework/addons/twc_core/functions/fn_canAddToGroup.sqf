params ["_player", "_target"];

if (!alive _target) exitWith { false };
if (!isPlayer _target) exitWith { false };
if (captive _target) exitWith { false };
if ((side _target) != (side _player)) exitWith { false };
if (group _target == group _player) exitWith { false };

[_player, _target] call TWC_Core_fnc_isHigherRank;