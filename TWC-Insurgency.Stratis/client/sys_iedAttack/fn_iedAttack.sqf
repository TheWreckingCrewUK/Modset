params ["_attackPos"];

if ((random 100) > 87) exitWith {};

_spawnPos = [_attackPos, 225] call CBA_fnc_randPos;
_attackSquad = [_spawnPos, EAST, (configfile >> "CfgGroups" >> "Indep" >> "rhs_faction_insurgents" >> "Infantry" >> "IRG_InfTeam")] call BIS_fnc_spawnGroup;
[_attackSquad, _attackPos, 20] call CBA_fnc_taskAttack;
