/*
params["_unit"];
_pos = getPos _unit;

waitUntil {{_x distance _pos < 600 && side _x == west} count allunits == 0};

deleteVehicle _unit;