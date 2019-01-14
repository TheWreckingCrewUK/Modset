
params["_object", "_thislist"];

_gunner = (gunner _object);
if ((side _gunner) == west) then {
	_gunner joinsilent (_thislist call bis_fnc_selectrandom);
};


if ((side _gunner) == east) then {
	createVehicleCrew _gunner
};
