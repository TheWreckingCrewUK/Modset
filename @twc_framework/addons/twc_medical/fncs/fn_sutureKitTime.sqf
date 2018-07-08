params ["_caller", "_target"];

(count ((_target) getVariable ['ACE_Medical_bandagedWounds', []]) * 20)