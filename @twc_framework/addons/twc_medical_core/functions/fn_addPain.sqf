#include "\z\ace\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"

params ["_target", ["_amount", 0, [0]]];

private _currentPain = _target getVariable [VAR_PAIN, 0];
_newPain = _currentPain + _amount;

_target setVariable [VAR_PAIN, _newPain, true];