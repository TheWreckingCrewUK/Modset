
_opforWeapons = [
];

while {true} do {
    waitUntil {(primaryWeapon player) in _opforWeapons};
    if ((player distance (getMarkerPos "respawn_west")) > 100) then {
        player removeWeapon (primaryWeapon player);
    };
};
