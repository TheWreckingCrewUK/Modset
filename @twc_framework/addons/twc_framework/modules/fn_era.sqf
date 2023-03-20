/*
* Author: [TWC] jayman
* Removes items/functions that'll break immersion for their era.
*
* Arguments:
* 0: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [modern] call twc_fnc_era;
*
* Public: No
*/
params["_era"];

private _approvedFacewear = [
	"G_Aviator",
	"G_LIB_Dienst_Brille",
	"G_LIB_Dienst_Brille2",
	"G_LIB_Dust_Goggles",
	"G_LIB_GER_Gloves4",
	"G_LIB_GER_Gloves5",
	"G_LIB_GER_Gloves2",
	"G_LIB_GER_Gloves1",
	"G_LIB_GER_Gloves3",
	"CUP_TK_NeckScarf",
	"CUP_FR_NeckScarf",
	"CUP_FR_NeckScarf2",
	"G_Spectacles",
	"G_Squares_Tinted",
	"G_Squares",
	"G_Spectacles_Tinted",
	"G_LIB_Watch2",
	"G_LIB_Watch1",
	"G_Shades_Black",
	"G_Shades_Blue",
	"G_Shades_Green",
	"G_Shades_Red",
	"G_Sport_Red",
	"G_Sport_Blackyellow",
	"G_Sport_BlackWhite",
	"G_Sport_Checkered",
	"G_Sport_Blackred",
	"G_Sport_Greenblack",
	"UK3CB_BAF_G_Tactical_Black",
	"UK3CB_BAF_G_Tactical_Clear",
	"UK3CB_BAF_G_Tactical_Grey",
	"UK3CB_BAF_G_Tactical_Orange",
	"UK3CB_BAF_G_Tactical_Yellow",
	"G_Lowprofile",
	"G_Tactical_Clear",
	"G_Tactical_Black",
	"G_Combat",
	"G_Combat_Goggles_tna_F"
];

switch (_era) do {
	case "millennial";
	case "1990": {
		cTab_vehicleClass_has_FBCB2 = [];
		
		_approvedFacewear = ["G_Aviator","G_LIB_Dienst_Brille","G_LIB_Dienst_Brille2","G_LIB_Dust_Goggles","G_LIB_GER_Gloves4","G_LIB_GER_Gloves5","G_LIB_GER_Gloves2","G_LIB_GER_Gloves1","G_LIB_GER_Gloves3","CUP_TK_NeckScarf","CUP_FR_NeckScarf","CUP_FR_NeckScarf2","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted","G_LIB_Watch2","G_LIB_Watch1","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red","G_Sport_Red","G_Sport_Blackyellow","G_Sport_BlackWhite","G_Sport_Checkered","G_Sport_Blackred","G_Sport_Greenblack","UK3CB_BAF_G_Tactical_Black","UK3CB_BAF_G_Tactical_Clear","UK3CB_BAF_G_Tactical_Grey","UK3CB_BAF_G_Tactical_Orange","UK3CB_BAF_G_Tactical_Yellow","G_Lowprofile","G_Combat","G_Combat_Goggles_tna_F"];
	};
	case "coldwar": {
		cTab_vehicleClass_has_FBCB2 = [];
		cTab_vehicleClass_has_TAD = [];
		
		_approvedFacewear = ["G_Aviator","G_LIB_Dienst_Brille","G_LIB_Dienst_Brille2","G_LIB_Dust_Goggles","G_LIB_GER_Gloves4","G_LIB_GER_Gloves5","G_LIB_GER_Gloves2","G_LIB_GER_Gloves1","G_LIB_GER_Gloves3","CUP_TK_NeckScarf","CUP_FR_NeckScarf","CUP_FR_NeckScarf2","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted","G_LIB_Watch2","G_LIB_Watch1","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red"];
	};
	case "ww2": {
		cTab_vehicleClass_has_FBCB2 = [];
		cTab_vehicleClass_has_TAD = [];
		
		_approvedFacewear = ["G_Aviator","G_LIB_Dienst_Brille","G_LIB_Dienst_Brille2","G_LIB_Dust_Goggles","G_LIB_GER_Gloves4","G_LIB_GER_Gloves5","G_LIB_GER_Gloves2","G_LIB_GER_Gloves1","G_LIB_GER_Gloves3","CUP_TK_NeckScarf","CUP_FR_NeckScarf","CUP_FR_NeckScarf2","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted","G_LIB_Watch2","G_LIB_Watch1"];
	};
	case "mmo": {
		cTab_vehicleClass_has_FBCB2 = [];
		cTab_vehicleClass_has_TAD = [];
		
		_approvedFacewear = ["G_Aviator","G_LIB_Dienst_Brille","G_LIB_Dienst_Brille2","G_LIB_Dust_Goggles","G_LIB_GER_Gloves4","G_LIB_GER_Gloves5","G_LIB_GER_Gloves2","G_LIB_GER_Gloves1","G_LIB_GER_Gloves3","CUP_TK_NeckScarf","CUP_FR_NeckScarf","CUP_FR_NeckScarf2","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted","G_LIB_Watch2","G_LIB_Watch1"];
	};
	default { };
};

if !((goggles player) in _approvedFacewear) then {
	removeGoggles player;
};