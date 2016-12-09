#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define true	1
#define false	0

#define VSoft		0
#define VArmor		1
#define VAir		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2 

class CfgPatches
{
	class SP_Craig_MkBushHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	
	class STOP_BLUFOR_Config
	{
		units[]=
		{
			
		};
		weapons[]=
		{
			"MNP_CombatUniform_DPMR",
			"MNP_CombatUniform_DDPMR"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F"
		};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class MNP_DPM_A: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="MNP_CombatUniform_DPMR";
		backpack="B_FieldPack_oli";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F_Beta\INDEP\Data\officer.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"
			};
		};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		weapons[]=
		{
			"arifle_MX_Black_Hamr_pointer_F",
			"Throw",
			"put"
		};
		respawnweapons[]=
		{
			"arifle_MX_Black_Hamr_pointer_F",
			"Throw",
			"put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag"
		};
		respawnmagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\twc_rip\Data\C_DPM_A.paa",
			"\twc_rip\Data\C_DPM_B.paa"
		};
		linkedItems[]=
		{
			"MNP_Beret_2PARA",
			"MNP_Vest_Light_DPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MNP_Beret_2PARA",
			"MNP_Vest_Light_DPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		author="Killoch";
	};
	class MNP_DDPM_A: B_Soldier_base_F
	{
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Rifleman";
		nakedUniform="U_BasicBody";
		uniformClass="MNP_CombatUniform_DDPMR";
		backpack="B_Kitbag_cbr";
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F_Beta\INDEP\Data\officer.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"
			};
		};
		model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		weapons[]=
		{
			"arifle_MX_Black_Hamr_pointer_F",
			"Throw",
			"put"
		};
		respawnweapons[]=
		{
			"arifle_MX_Black_Hamr_pointer_F",
			"Throw",
			"put"
		};
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag"
		};
		respawnmagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\twc_rip\Data\C_DDPM_A.paa",
			"\twc_rip\Data\C_DDPM_B.paa"
		};
		linkedItems[]=
		{
			"MNP_Beret_2PARA",
			"MNP_Vest_Light_DPM_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"MNP_Beret_2PARA",
			"MNP_Vest_Light_DPM_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		author="Killoch";
	};
};
	
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class U_I_OfficerUniform;
	class MNP_CombatUniform_DPMR: U_I_OfficerUniform
	{
		scope=2;
		displayName="MNP: DPM Uniform";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\twc_rip\Data\C_DPM_A.paa",
			"\twc_rip\Data\C_DPM_B.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass="MNP_DPM_A";
			containerClass="Supply60";
			mass=20;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
	class MNP_CombatUniform_DDPMR: U_I_OfficerUniform
	{
		scope=2;
		displayName="MNP: DPM Uniform(Desert)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"\twc_rip\Data\C_DDPM_A.paa",
			"\twc_rip\Data\C_DDPM_B.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformmodel="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass="MNP_DDPM_A";
			containerClass="Supply60";
			mass=20;
			hiddenSelections[]=
			{
				"Camo"
			};
		};
	};
};


