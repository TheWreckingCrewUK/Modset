params ["_chute", "_caller", "_id"];

_caller removeAction _id;

moveOut _caller;
deleteVehicle _chute;
_caller allowDamage true;