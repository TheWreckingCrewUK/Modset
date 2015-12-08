local _opforWeapons = [
    "rhs_weap_ak74m",
    "rhs_weap_ak74m_folded",
    "rhs_weap_pkp",
    "rhs_weap_svdp_wd",
    "hgun_Rook40_F",
    "rhs_weap_akm",
    "rhs_weap_akms",
    "rhs_weap_svdp",
    "rhs_weap_akms_gp25",
    "rhs_weap_ak103_dtk",
    "rhs_weap_pkm"
];

while {true} do {
    waitUntil {(primaryWeapon player) in _opforWeapons};
    if ((player distance (getMarkerPos "respawn_west")) > 100) then {
        player removeWeapon (primaryWeapon player);
    };
};
