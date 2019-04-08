class TWC_AmmoBox_WW2_Portable;
class TWC_AmmoBox_TWC_USMC_Squad: TWC_AmmoBox_WW2_Portable  
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Resupply";
	author      = "Rik";
	
	editorSubcategory = "TWC_WW2_Crates";

	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 1;
	ace_cargo_hasCargo    = 0;
	
	ace_dragging_canCarry = 1;
	ace_dragging_canDrag  = 1;
	
	class TransportItems 
	{
		class _XX_fieldressing_item
		{
			name = "ACE_fieldDressing";
			count = 16;
		};
		class _XX_elasticBandage_item
		{
			name = "ACE_elasticBandage";
			count = 16;
		};
		class _XX_quickClot_item
		{
			name = "ACE_quikclot";
			count = 16;
		};
		class _XX_packingBandage_item
		{
			name = "ACE_packingBandage";
			count = 16;
		};
		class _XX_morphine_item
		{
			name = "ACE_morphine";
			count = 16;
		};
		class _XX_epinephrine_item
		{
			name = "ACE_epinephrine";
			count = 16;
		};
		class _XX_tourniquet_item
		{
			name = "ACE_tourniquet";
			count = 6;
		};
	};
	
	class TransportMagazines 
	{
		// M1A1 Thompson/M3 Grease Gun
		class _XX_SMG_Mag
		{
			magazine = "fow_30Rnd_45acp";
			count = 21;
		};
		// M1 Garand
		class _XX_Rifle_Mag
		{
			magazine = "fow_8Rnd_762x63";
			count = 30;
		};
		// M1918 BAR
		class _XX_BAR_Mag
		{
			magazine = "fow_20Rnd_762x63";
			count = 15;
		};
		//Throwables
		class _XX_Flare_Mag
		{
			magazine = "ACE_HandFlare_White";
			count = 2;
		};
		class _XX_Grenade_Mag
		{
			magazine = "fow_e_mk2";
			count = 6;
		};
		class _XX_Smoke_Mag
		{
			magazine = "SmokeShell";
			count = 6;
		};
	};
};
class TWC_AmmoBox_TWC_USMC_Rockets: TWC_AmmoBox_WW2_Portable 
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rocket Resupply";
	author      = "Rik";
	
	editorSubcategory = "TWC_WW2_Crates";
	
	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 1;
	ace_cargo_hasCargo    = 0;
	
	ace_dragging_canCarry = 1;
	ace_dragging_canDrag  = 1;	
	
	class TransportMagazines
	{
		class _XX_Rockets_Mag
		{
			magazine = "fow_1Rnd_m6a1";
			count = 6;
		};
		class _XX_Carbine_Mag
		{
			magazine = "fow_30Rnd_45acp";
			count = 6;
		};
	};
};