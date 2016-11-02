params["_vehicle"];

_oldVeh = nearestObjects [groundSpawnPad, ["Car","Tank"],10];
{deleteVehicle _x}forEach _oldVeh;
sleep 1;
_veh = _vehicle createVehicle (position groundSpawnPad);
_dir = getDir groundSpawnPad; _dir = _dir + 180;
_veh setDir _dir;
_veh setPos (position groundSpawnPad);
[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"