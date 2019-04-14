params ["_originalProbability", "_target", ["_type", "CPR"]];

_bloodVolume = [_target] call TWC_Medical_fnc_getBloodVolume;

if (_type == "Defib") exitWith {
	_attempts = _target getVariable ["TWC_Medical_Resuscitate_Defib_Attempts", 0];
	_attempts = _attempts + 1;
	_target setVariable ["TWC_Medical_Resuscitate_Defib_Attempts", _attempts, true];

	_chancePer = 7.5 * _bloodVolume;
	(_originalProbability + (_attempts * _chancePer))
};

_attempts = _target getVariable ["TWC_Medical_Resuscitate_CPR_Attempts", 0];
_attempts = _attempts + 1;
_target setVariable ["TWC_Medical_Resuscitate_CPR_Attempts", _attempts, true];

_chancePer = 0.75 * _bloodVolume;
(_originalProbability + (_attempts * _chancePer))