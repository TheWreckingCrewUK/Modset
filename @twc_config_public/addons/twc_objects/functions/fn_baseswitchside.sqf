
params["_object", "_thislist"];

_gunner = (gunner _object);
if ((side _gunner) == west) then {
	_gunner joinSilent (selectRandom _thislist);
};


if ((side _gunner) == east) then {
	createVehicleCrew _gunner
};
