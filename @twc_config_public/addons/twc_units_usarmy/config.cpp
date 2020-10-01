class CfgPatches
{
	class twc_framework_public_modern_us
	{
		units[]=
		{
			"TWC_2000_US_Army_Base",
			"TWC_2000_US_Army_SectionCommander",
			"TWC_2000_US_Army_TeamLeader",
			"TWC_2000_US_Army_Rifleman",
			"TWC_2000_US_Army_Grenadier",
			"TWC_2000_US_Army_AutomaticRifleman",
			"TWC_2000_US_Army_Marksman",
			"TWC_2000_US_Army_Medic",
			
			"TWC_Modern_US_Army_Base",
			"TWC_Modern_US_Army_SectionCommander",
			"TWC_Modern_US_Army_TeamLeader",
			"TWC_Modern_US_Army_Rifleman",
			"TWC_Modern_US_Army_Grenadier",
			"TWC_Modern_US_Army_AutomaticRifleman",
			"TWC_Modern_US_Army_Marksman",
			"TWC_Modern_US_Army_Medic"
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_c_matv",
			"rhsusf_stryker",
			"rhsusf_c_weapons",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};

	};
};
class CfgEditorSubCategories
{
	class US_Men_Modern
	{
		displayName = "Men (US Army Modern)";
	};
	class US_Men_2000
	{
		displayName = "Men (US Army 2000)";
	};
};
class CfgFactionClasses
{
	class twc_public_us
	{
		displayName="TWC Public US Units";
		author="The Wrecking Crew";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
};
#include "compositions.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	
	#include "usarmy.hpp"
	
	#include "usbackpacks.hpp"
	
	class rhsusf_stryker_m1126_m2_base;
	class rhsusf_stryker_m1126_m2_wd: rhsusf_stryker_m1126_m2_base
	{
		class Turrets;
		class Wheels;
	};
	class twc_stryker_wd_base: rhsusf_stryker_m1126_m2_wd
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Wheels: Wheels
		{
			class L1;
			class L2;
			class L3;
			class L4;
			class R1;
			class R2;
			class R3;
			class R4;
		};
	};
	class twc_stryker_wd: twc_stryker_wd_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		maximumload = 4000;
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
		};
		
		class Wheels: Wheels
		{
			class L1: L1
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
			class L2: L2
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
			class L3: L3
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
			class L4: L4
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
			class R1: R1
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
			class R2: R2
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
			class R3: R3
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
			class R4: R4
			{
				maxBrakeTorque = 12500;
				mass = 60;
				MOI = 115;
				maxCompression = 0.4;
				sprungMass = 4250;
				springStrength = 155000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.01; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 0.9; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.7; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhsusf_MATV_SOF_CROWS_base;
	class rhsusf_MATV_SOF_CROWS_M2_base: rhsusf_MATV_SOF_CROWS_base
	{
		class Turrets;
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.3; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.8; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.1; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.6; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		
	};
	class rhsusf_m1245_m2crows_socom_deploy: rhsusf_MATV_SOF_CROWS_M2_base
	{
		class Turrets:Turrets
		{
			class CROWS_Turret;
		};
	};
	class twc_rhsusf_m1245_m2crows_socom_deploy: rhsusf_m1245_m2crows_socom_deploy {
		
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		maximumLoad = 5000;
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
		};
	};
	
	class rhsusf_MATV_CROWS_base;
	class rhsusf_MATV_CROWS_M2_base: rhsusf_MATV_CROWS_base
	{
		class Turrets;
		
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.3; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.8; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.1; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.6; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	class rhsusf_m1240a1_m2crows_usarmy_d: rhsusf_MATV_CROWS_M2_base
	{
		class Turrets:Turrets
		{
			class CROWS_Turret;
		};
	};
	class twc_rhsusf_m1240a1_m2crows_usarmy_d: rhsusf_m1240a1_m2crows_usarmy_d {
		
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
		};
		maximumLoad = 4000;
	};
	
	class rhsusf_MATV_OGPK_base;
	class rhsusf_MATV_OGPK_M2_base: rhsusf_MATV_OGPK_base
	{
		class Turrets;
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.3; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.8; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.1; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	class rhsusf_m1240a1_m2_usarmy_d: rhsusf_MATV_OGPK_M2_base
	{
		class Turrets:Turrets
		{
			class OGPK_Turret;
		};
	};
	class twc_rhsusf_m1240a1_m2_usarmy_d: rhsusf_m1240a1_m2_usarmy_d {
		
		class Turrets: Turrets
		{
			class OGPK_Turret: OGPK_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
		};
		maximumLoad = 4000;
	};
};
#include "weapons.hpp"