
params["_object", "_thislist"];

_gunner = (gunner _object);
if ((side _gunner) == west) then {
	_randomGroup = _thislist call bis_fnc_selectRandom;
	_gunner joinSilent _randomGroup;
};


if ((side _gunner) == east) then {
	createVehicleCrew _gunner
};
