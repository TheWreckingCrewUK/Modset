/*
* Author: [TWC] Bosenator
* Returns if first unit has a higher rank than the second unit.
*
* Arguments:
* 0: Caller <OBJECT>
* 1: Target (unit to compare against) <OBJECT>
*
* Return Value:
* 0: If unit is higher rank or not <BOOLEAN>
*
* Public: No
*/
params ["_caller", "_target"];

_ranks = ["PRIVATE", "CORPORAL", "SERGEANT", "LIEUTENANT", "CAPTAIN", "MAJOR", "COLONEL"];

_callerRank = _ranks find (rank _caller);
_targetRank = _ranks find (rank _target);

if (_callerRank > _targetRank) then { true; } else { false; };