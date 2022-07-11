params ["_unit"];

_unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", nil];
_unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLastUpdate", nil];
_unit setVariable ["TWC_Medical_CPR_Attempts", 0, true];

[_unit, false] call ace_medical_status_fnc_setCardiacArrestState;
