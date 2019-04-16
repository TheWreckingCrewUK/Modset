params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_caller", "_target"];

_hasMoved = _caller getVariable ["TWC_Medical_Resuscitate_hasMoved", false];
if (_elapsedTime > 0 && !_hasMoved) then {
	// animation movement fix
	_caller setPos (_caller modelToWorld [0, 0.17, 0]);
	_hasMoved = _caller setVariable ["TWC_Medical_Resuscitate_hasMoved", true, true];
};

true