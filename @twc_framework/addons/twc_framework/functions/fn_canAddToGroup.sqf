params ["_target", "_player"];

if (!alive _target) exitWith { false };
if (!isPlayer _target) exitWith { false };
if (group _target == group _player) exitWith { false };

[_player, _target] call twc_fnc_isHigherRank;