params ["_target", ["_amount", 0, [0]]];

private _currentPain = _target getVariable ["ace_medical_pain", 0];
_newPain = _currentPain + _amount;

_target setVariable ["ace_medical_pain", _newPain, true];