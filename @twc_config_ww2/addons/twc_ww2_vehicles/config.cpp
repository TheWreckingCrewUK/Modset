class CfgPatches
{
	class twc_vehicles_ww2
	{
		units[]={
			"TWC_HADRIAN","TWC_HORSA","TWC_UniversalCarrier","TWC_Willys_MB"
		};
		weapons[]=
		{

		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"TWC_AmmoBoxes",
			"ace_cargo",
			"ace_medical",
			"ww2_assets_c_vehicles_wheeled_c",
			"ww2_assets_c_vehicles_planes_c",
			"fow_tracked_c"
		};
	};
};
class CfgVehicles
{
	class LIB_MKI_HADRIAN;
	class LIB_HORSA_RAF;
	class LIB_US_Willys_MB;
	class fow_v_universalCarrier;
	class TWC_Willys_MB: LIB_US_Willys_MB
	{
		faction = "twc_faction_independent";
        ace_cargo_size = 10;
        ace_cargo_canLoad = 1;	
	};
	class TWC_UniversalCarrier: fow_v_universalCarrier
	{
		faction = "twc_faction_independent";
        ace_cargo_size = 14;
        ace_cargo_canLoad = 1;		
	};
	class TWC_HADRIAN: LIB_MKI_HADRIAN
	{
		faction = "twc_faction_independent";
	};
	class TWC_HADRIAN_V: LIB_MKI_HADRIAN
	{
		displayname = "Mk I. Hadrian (Vehicle Transport)";
		faction = "twc_faction_independent";
		transportSoldier = 5;
		cargoIsCoDriver[] = {true, false, false, false, false};
		cargoAction[] = {"passenger_generic01_leanright","passenger_generic01_leanleft","passenger_mantisrear","passenger_generic01_leanright","passenger_generic01_foldhands"};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 16;
	};
	class TWC_HORSA: LIB_HORSA_RAF
	{
		faction = "twc_faction_independent";
	};
};