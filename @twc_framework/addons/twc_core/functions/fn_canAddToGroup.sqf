params ["_player", "_target"];

if (!alive _target) exitWith { false };
if (!isPlayer _target) exitWith { false };
if (group _target == group _player) exitWith { false };

[_player, _target] call TWC_fnc_isHigherRank;