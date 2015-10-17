if (isServer) then {
    while {true} do{
        {
            deleteVehicle _x;
        } forEach nearestObjects [getMarkerPos "respawn_west", ["WeaponHolder", "GroundWeaponHolder"], 400];
        sleep 120;
    };
};
