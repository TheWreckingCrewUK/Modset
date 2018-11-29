params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_caller", "_target", "_selectionName", "_className", "_items", "_usersOfItems"];

_reviveStartTime = _target getVariable ["ace_medical_reviveStartTime", 0];
_timeToAdd = _reviveStartTime + _elapsedTime;
_target setVariable ["ace_medical_reviveStartTime", _timeToAdd, true];