/*
local _allowedWeapons = [
    "",
    "rhs_weap_ak74m",
    "rhs_weap_ak74m_folded",
    "rhs_weap_pkp",
    "rhs_weap_svdp_wd",
    "hgun_Rook40_F",
    "rhs_weap_rpg7_pgo",
    "ACE_fieldDressing",
    "ACE_morphine",
    "rhs_weap_akm",
    "rhs_weap_akms",
    "rhs_weap_svdp",
    "rhs_weap_akms_gp25",
    "rhs_weap_ak103_dtk",
    "rhs_weap_pkm"
];

while {true} do {
    waitUntil {!((primaryWeapon player) in _allowedWeapons)};
    if ((player distance (getMarkerPos "respawn_civilian")) > 100) then {
        player removeWeapon (primaryWeapon player);
    };
};
