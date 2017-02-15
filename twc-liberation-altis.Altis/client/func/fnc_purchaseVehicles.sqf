params["_type","_cost"];

if((friendlyMoney - _cost) < 0)exitWith{hint "You cannot afford this Vehicle"};


_veh = _type createVehicle (getPos player);


friendlyMoney = friendlyMoney - _cost;
publicVariable "friendlyMoney";