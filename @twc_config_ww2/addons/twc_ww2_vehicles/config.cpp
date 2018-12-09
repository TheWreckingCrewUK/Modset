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
class CfgWeapons
{
	class HMG_M2;
	class Bomb_04_Plane_CAS_01_F;
	class GMG_20mm;
	
	//Spitfire CAS Module Compatibility
	class 4xBrowning_303: HMG_M2 {
		cursor = "EmptyCursor";
		cursoraim = "mg";
	};
	class hispano_mkII_20mm: GMG_20mm {
		cursor = "EmptyCursor";
		cursoraim = "mg";
	};
	class 7Y_Bomblauncher: Bomb_04_Plane_CAS_01_F {
		cursor = "EmptyCursor";
		cursorAim = "bomb";
	};
	
	//P-47 CAS Module Compatibility
	class LIB_PlaneMGun_base;
	class RocketPods;
	class LIB_8xM2_P47: LIB_PlaneMGun_base {
		cursoraim = "mg";
	};
	class LIB_M8_Launcher_P47: RocketPods {
		cursorAim = "missile";
	};
};
class CfgVehicles
{
	class LIB_MKI_HADRIAN;
	class LIB_HORSA_RAF;
	class LIB_US_Willys_MB;
	/*	A3 DEFAULT INHERITANCE TREE START */
	// Do not modify the inheritance tree, unless you want to alter game's internal configs, or REALLY know what you're doing.
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	/*	A3 DEFAULT INHERITANCE TREE END	*/
	class fow_v_universalCarrier: Tank_F
	{
		class Turrets: Turrets
		{
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class Turret_1;
			class Turret_2;
		};
	};
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
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				gunnerCompartments = "Compartment1";
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerCompartments = "Compartment1";
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerCompartments = "Compartment1";
			};
			class Turret_1: Turret_1 {};
			class Turret_2: Turret_2 {};
		};
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