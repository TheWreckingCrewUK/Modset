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
	
	class rhsusf_MATV_SOF_CROWS_base;
	class rhsusf_MATV_SOF_CROWS_M2_base: rhsusf_MATV_SOF_CROWS_base
	{
		class Turrets;
		
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
		maximumLoad = 4000;
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
	};
	
	class rhsusf_MATV_OGPK_base;
	class rhsusf_MATV_OGPK_M2_base: rhsusf_MATV_OGPK_base
	{
		class Turrets;
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
	};
};
#include "weapons.hpp"