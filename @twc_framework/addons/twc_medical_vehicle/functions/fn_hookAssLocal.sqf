#include "script_component.hpp"

params ["_medic", "_patient", "_bodyPart", "_treatmentClassname"];

if !([_patient] call TWC_Medical_Vehicle_fnc_canHookAss) exitWith {}; // no longer can receive ASS, end loop

private _timeDiff = CBA_missionTime - (_patient getVariable ["ace_medical_statemachine_cardiacArrestTimeLastUpdate", 0]);
private _timeLeft = _patient getVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", -1];

// minus this one second loop aka each second delay death by a second
_timeLeft = _timeLeft - 1;
_patient setVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", _timeLeft];

// call self again in 3 seconds for recursive function (aka loop)
[{_this call TWC_Medical_Vehicle_fnc_hookAssLocal}, _this, 1] call CBA_fnc_waitAndExecute;