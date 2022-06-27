class CfgPatches
{
	class twc_40k {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"twc_ai"
		};
	};
};

class CfgFactionClasses {
	class TWC_40k_ImperialGuard {
		displayName = "TWC Imperial Guard";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class CfgEditorSubcategories {
	class TWC_40k_ImperialGuard {
		displayName = "TWC Imperial Guard";
	};
};

class EventHandlers;

class CfgVehicles
{
	

	class B_Soldier_base_F;
	
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

	#define MEDICAL_LOADOUT "ACRE_PRC343","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
	#define MAG_2(a) a, a
	#define MAG_3(a) a, a, a
	#define MAG_4(a) a, a, a, a
	#define MAG_5(a) a, a, a, a, a
	#define MAG_6(a) a, a, a, a, a, a
	#define MAG_7(a) a, a, a, a, a, a, a
	#define MAG_8(a) a, a, a, a, a, a, a, a
	#define MAG_9(a) a, a, a, a, a, a, a, a, a
	#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
	#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;
	class TIOW_IG_WeaponBox1_836;
	class TWC_AmmoBox_IG_Portable: TIOW_IG_WeaponBox1_836 {
		scope = 2;
		scopeCurator = 2;
		displayName = "IG Section Resupply (Portable)";
		editorCategory = "TWC_Crates";
		editorSubcategory = "TWC_Crates_Other";

		ace_cargo_canLoad     = 0;
		ace_cargo_hasCargo    = 0;

		ace_dragging_canCarry = 0;
		ace_dragging_canDrag  = 0;
		
		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 12);
			ADD_ITEM(ACE_elasticBandage, 12);
			ADD_ITEM(ACE_quikclot, 12);
			ADD_ITEM(ACE_packingBandage, 12);
			
			ADD_ITEM(ACE_morphine, 6);
			ADD_ITEM(ACE_epinephrine, 6);
			ADD_ITEM(ACE_tourniquet, 6);
		};
		
		class TransportMagazines {
			ADD_MAGA(LuciusLaspistol_mag, 6);
			ADD_MAGA(M36KantRifle_mag, 14);
			ADD_MAGA(DK_PlasmaGun_Flask, 6);
			ADD_MAGA(TIOW_Meltagun_Mag, 4);
			ADD_MAGA(TIOW_ig_frag_grenade_mag, 6);
		};
	};

	class TIOW_CadBackpack;
	class TIOW_CadMedicaeBackpack;
	class TWC_40k_IG_Backpack_Guardsman: TIOW_CadBackpack {
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
			ADD_MAGA(M36KantRifle_mag,16);
			ADD_MAGA(TIOW_ig_frag_grenade_mag,2);
		};
	};
	class TWC_40k_IG_Backpack_Plasmagunner: TIOW_CadBackpack {
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
			ADD_MAGA(TIOW_Meltagun_Mag,6);
			ADD_MAGA(TIOW_ig_frag_grenade_mag,2);
		};
	};
	class TWC_40k_IG_Backpack_Meltagunner: TIOW_CadBackpack {
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
			ADD_MAGA(LuciusLaspistol_mag,8);
			ADD_MAGA(TIOW_Meltagun_Mag,6);
			ADD_MAGA(TIOW_ig_frag_grenade_mag,2);
		};
	};
	class TWC_40k_IG_Backpack_Subcommander: TIOW_CadBackpack {
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
			ADD_MAGA(DK_PlasmaGun_Flask,4);
			ADD_MAGA(M36KantRifle_mag,10);
			ADD_MAGA(TIOW_Meltagun_Mag,4);
			ADD_MAGA(TIOW_ig_frag_grenade_mag,2);
		};
	};
	class TWC_40k_IG_Backpack_Medic: TIOW_CadMedicaeBackpack {
		scope = 1;
		scopeArsenal = 1;
		class TransportItems {
			ADD_ITEM(ACE_fieldDressing,20);
			ADD_ITEM(ACE_morphine,10);
			ADD_ITEM(ACE_elasticBandage,20);
			ADD_ITEM(ACE_quikclot,20);
			ADD_ITEM(ACE_packingBandage,20);
			ADD_ITEM(ACE_adenosine,4);
			ADD_ITEM(ACE_atropine,4);
			ADD_ITEM(ACE_epinephrine,10);
			ADD_ITEM(ACE_salineIV_500,6);
			ADD_ITEM(ACE_tourniquet,4);
			ADD_ITEM(ACE_personalAidKit,1);
			ADD_ITEM(TWC_Item_Medical_SutureKit_25,1);
		};
	};
	
	class TWC_40k_IG_Base: B_Soldier_base_F {
		scope = 1;
		displayName = "Base (Imperial Guard)";
		faction = "TWC_40k_ImperialGuard";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "CadUni836th";
		backpack = "";
		CBA_facewearList[] = {"TIOW_IG_Headset", 1};

		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};

		linkedItems[] = {
			"Cad_Gear836th",
			"Cad_Inf_Helm836th",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"Cad_Gear836th",
			"Cad_Inf_Helm836th",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
		};

		weapons[] = {
			"Throw",
			"Put"
		};

		respawnweapons[] = {
			"Throw",
			"Put"
		};

		magazines[] = {};
		respawnmagazines[] = {};

		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	class TWC_40k_IG_Guardsman: TWC_40k_IG_Base {
		scope = 2;
		displayName = "Guardsman";
		backpack = "TWC_40k_IG_Backpack_Guardsman";
		weapons[] =
		{
			"M36KantRifle836",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"M36KantRifle836",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_7("M36KantRifle_mag"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
		respawnmagazines[] =
		{
			MAG_7("M36KantRifle_mag"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
	};
	class TWC_40k_IG_Plasmagunner: TWC_40k_IG_Guardsman {
		scope = 2;
		displayName = "Plasmagunner";
		backpack = "TWC_40k_IG_Backpack_Plasmagunner";
		weapons[] =
		{
			"TIOW_IG_Plasmagun_01",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"TIOW_IG_Plasmagun_01",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_3("DK_PlasmaGun_Flask"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
		respawnmagazines[] =
		{
			MAG_3("DK_PlasmaGun_Flask"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
	};
	class TWC_40k_IG_Meltagunner: TWC_40k_IG_Guardsman {
		scope = 2;
		displayName = "Meltagunner";
		backpack = "TWC_40k_IG_Backpack_Meltagunner";
		weapons[] =
		{
			"LuciusLaspistolBlack",
			"TIOW_MeltaGun_01",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"LuciusLaspistolBlack",
			"TIOW_MeltaGun_01",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_4("LuciusLaspistol_mag"),
			MAG_3("TIOW_Meltagun_Mag"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
		respawnmagazines[] =
		{
			MAG_4("LuciusLaspistol_mag"),
			MAG_3("TIOW_Meltagun_Mag"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
	};
	class TWC_40k_IG_Subcommander: TWC_40k_IG_Guardsman {
		displayName = "Sub-Commander";
		backpack = "TWC_40k_IG_Backpack_Subcommander";
		CBA_facewearList[] = {"", 1};

		linkedItems[] = {
			"Cad_Gear836th",
			"Cad_Inf_Helm836th",
			"TIOW_CadPreysenseGoggles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"Cad_Gear836th",
			"Cad_Inf_Helm836th",
			"TIOW_CadPreysenseGoggles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class TWC_40k_IG_Sergeant: TWC_40k_IG_Guardsman {
		scope = 2;
		displayName = "Sergeant";
		backpack = "TWC_40k_IG_Backpack_Subcommander";
		weapons[] =
		{
			"LuciusLaspistolBlack",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"LuciusLaspistolBlack",
			"Throw",
			"Put"
		};
		linkedItems[] =
		{
			"TIOW_IG_Sergeant_Armour_836",
			"Cad_Inf_Helm836th",
			"TIOW_CadPreysenseGoggles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"TIOW_IG_Sergeant_Armour_836",
			"Cad_Inf_Helm836th",
			"TIOW_CadPreysenseGoggles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		magazines[] =
		{
			MAG_7("LuciusLaspistol_mag"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
		respawnmagazines[] =
		{
			MAG_7("LuciusLaspistol_mag"),
			MAG_2("TIOW_ig_frag_grenade_mag")
		};
	};
	class TWC_40k_IG_PltMedic: TWC_40k_IG_Guardsman {
		scope = 2;
		displayName = "Medic";
		backpack = "TWC_40k_IG_Backpack_Medic";
	};
	
	class TWC_40k_IG_PltCommander: TWC_40k_IG_Sergeant {
		displayName = "Platoon Commander";
		uniformClass = "U_TIOW_Captain_836_I";
		backpack = "";
		linkedItems[] =
		{
			"TIOW_IG_Officer_Armour_836",
			"TIOW_IG_Officer_Cap2_836",
			"TIOW_Bionic_Eye_2",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"TIOW_IG_Officer_Armour_836",
			"TIOW_IG_Officer_Cap2_836",
			"TIOW_Bionic_Eye_2",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class TWC_40k_IG_Commissar: TWC_40k_IG_PltCommander {
		displayName = "Platoon Commissar";
		uniformClass = "U_TIOW_Comissar";
		backpack = "";
		linkedItems[] =
		{
			"TIOW_Comissar_Cap",
			"TIOW_Bionic_Eye_2",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"TIOW_Comissar_Cap",
			"TIOW_Bionic_Eye_2",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
};

