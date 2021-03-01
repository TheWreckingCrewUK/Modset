params ["_chute", "_caller"];

moveOut _caller;
deleteVehicle _chute;
_caller allowDamage true;