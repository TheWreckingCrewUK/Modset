
if (is server) then {
while {true} do{
{ deleteVehicle _x; } forEach nearestObjects [getmarkerpos "respawn_west",["WeaponHolder","GroundWeaponHolder"],400];

sleep 100;
};
};