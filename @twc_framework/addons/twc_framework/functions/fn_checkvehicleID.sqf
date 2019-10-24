params ["_veh"];
if (isnil "_veh") exitwith {};

_id = _veh getvariable ["twc_vehicleID", -1];

if (_id == -1) then {
	_id = floor ((random 89) + 10);
	_veh setvariable ["twc_vehicleID", _id];
};

hint ("Vehicle ID: " + (str _id));