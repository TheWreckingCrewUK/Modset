
_allowedWeapons = [
];

while {true} do {
    waitUntil {!((primaryWeapon player) in _allowedWeapons)};
    if ((player distance (getMarkerPos "respawn_civilian")) > 100) then {
        player removeWeapon (primaryWeapon player);
    };
};
