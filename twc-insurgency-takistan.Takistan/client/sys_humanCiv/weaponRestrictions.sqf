
_allowedPrimaryWeapons = [
//Insurgent Weapons
	"",
	"CUP_arifle_AKM",
	"CUP_arifle_AK74_GL",
	"CUP_arifle_AKS",
	"CUP_arifle_AKS74U",
	"CUP_airfle_RPK74",
//Box Weapons
	"CUP_arifle_AK74",
	"CUP_arifle_AKS_Gold",
	"CUP_arifle_FNFAL"
];

while {true} do {
    waitUntil {!(primaryWeapon player in _allowedPrimaryWeapons)};
    if ((player distance (getMarkerPos "respawn_civilian")) > 100) then {
        player removeWeapon (primaryWeapon player);
    };
};