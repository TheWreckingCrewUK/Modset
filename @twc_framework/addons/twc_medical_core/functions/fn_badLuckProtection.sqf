// Increases likelihood of CPR success overtime
// Aka bad luck protection
params ["_originalProbability", "_target"];

_attempts = _target getVariable ["TWC_Medical_CPR_Attempts", 0];
_attempts = _attempts + 1;
_target setVariable ["TWC_Medical_CPR_Attempts", _attempts, true];

(_originalProbability + (_attempts * 0.05));