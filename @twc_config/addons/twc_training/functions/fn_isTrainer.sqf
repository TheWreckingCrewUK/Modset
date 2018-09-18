params ["_caller", "_target"];

_trainerArray = missionNamespace getVariable ["TWC_Trainers", []];

if ((getPlayerUID _caller) in _trainerArray) exitWith { true };
false