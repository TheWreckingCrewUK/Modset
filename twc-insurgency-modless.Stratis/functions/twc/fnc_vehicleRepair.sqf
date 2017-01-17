/*
* Simple Function to fix up a vehicle
* Called by an addaction by a vehicle pad
*
*/

_veh = nearestObjects [(getPos ammoCrateSpawnPad), ["LandVehicle","Air"], 10];
if(str _veh == "[]")exitWith{hint "No Vehicle on the Repair Pad"};
_veh = _veh select 0;
_veh setFuel 1;
_veh setVehicleAmmo 1;
_veh setDamage 0;