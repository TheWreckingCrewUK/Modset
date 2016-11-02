params["_vehicle"];

_oldVeh = nearestObjects [airSpawnPad, ["Air"],10];
{deleteVehicle _x}forEach _oldVeh;
sleep 1;
_veh = _vehicle createVehicle (position airSpawnPad);
_dir = getDir airSpawnPad; _dir = _dir + 180;
_veh setDir _dir;
_veh setPos (position airSpawnPad);
[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"