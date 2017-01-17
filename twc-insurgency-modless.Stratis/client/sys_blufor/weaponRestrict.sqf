/*
* Currentl Unused. Will be re-wrote using event handlers. This is a while true free zone.
_opforWeapons = [
	"CUP_arifle_AKM",
	"CUP_arifle_AK74_GL",
	"CUP_arifle_AKS",
	"CUP_arifle_AKS74U",
	"CUP_airfle_RPK74",
	"CUP_launch_RPG7V",
	"CUP_hgun_Makarov"
];

while {true} do {
    waitUntil {(primaryWeapon player in _opforWeapons)};
    if ((player distance (getMarkerPos "respawn_west")) > 100) then {
        player removeWeapon (primaryWeapon player);
    };
};
