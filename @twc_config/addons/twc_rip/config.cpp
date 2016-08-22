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
	
	class twc_rip
	{
		units[]=
		{
			"SUD_NATO_Soldier"
		};
		weapons[]=
		{
			"V_sud_nato_vest01",
			"V_sud_nato_vest02",
			"V_sud_nato_vest03",
			"V_sud_nato_vest04",
			"V_sud_nato_vest05"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_INDEP",
			"A3_Weapons_F_beta"
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
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;



	


    class SP_MkBushHelmet_Forrest: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk Bush Helmet (Forrest)";
		picture = "\twc_rip\Hats\mkbushhelmet\Forrest.jpg";
		model = "\twc_rip\Models\MkBushHelmet";
                hiddenSelectionsTextures[] = {"\twc_rip\Hats\Mk7Helmet\Green.paa","\twc_rip\Hats\PASGTHelmet\Black.paa","\twc_rip\Hats\mkbushhelmet\Forrest.paa"};
                hiddenSelections[] = {"Camo","Camo1","Camo2"};
                author = "SP Craig";
                
                  

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\twc_rip\Models\MkBushHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
                        hiddenSelectionsTextures[] = {"\twc_rip\Hats\Mk7Helmet\Green.paa","\twc_rip\Hats\PASGTHelmet\Black.paa","\twc_rip\Hats\mkbushhelmet\Forrest.paa"};
                        hiddenSelections[] = {"Camo","Camo1","Camo2"};



		};
	};



        class SP_MkBushHelmet_Tropical: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk Bush Helmet (Tropical)";
		picture = "\twc_rip\Hats\mkbushhelmet\Tropical.jpg";
		model = "\twc_rip\Models\MkBushHelmet";
                hiddenSelectionsTextures[] = {"\twc_rip\Hats\Mk7Helmet\Tan.paa","\twc_rip\Hats\PASGTHelmet\Black.paa","\twc_rip\Hats\mkbushhelmet\Tropical.paa"};
                hiddenSelections[] = {"Camo","Camo1","Camo2"};
                author = "SP Craig";
                
                  

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\twc_rip\Models\MkBushHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
                        hiddenSelectionsTextures[] = {"\twc_rip\Hats\Mk7Helmet\Tan.paa","\twc_rip\Hats\PASGTHelmet\Black.paa","\twc_rip\Hats\mkbushhelmet\Tropical.paa"};
                        hiddenSelections[] = {"Camo","Camo1","Camo2"};








		};
	};
	
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
	class Vest_Camo_Base;
	class itemInfo;

	class V_sud_nato_vest01: Vest_Camo_Base
	{
		scope=2;
		displayName="NATO Vest";
		picture="\twc_rip\data\pic\nato_vest01";
		model="twc_rip\sud_nato_vest01.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="twc_rip\sud_nato_vest01.p3d";
			containerClass="Supply80";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
		};
	};
	class V_sud_nato_vest02: Vest_Camo_Base
	{
		scope=2;
		displayName="NATO MG Vest";
		picture="\twc_rip\data\pic\nato_vest02";
		model="twc_rip\sud_nato_vest02.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="twc_rip\sud_nato_vest02.p3d";
			containerClass="Supply80";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
		};
	};
	class V_sud_nato_vest03: Vest_Camo_Base
	{
		scope=2;
		displayName="NATO Vest";
		picture="\twc_rip\data\pic\nato_vest01";
		model="twc_rip\sud_nato_vest03.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="twc_rip\sud_nato_vest03.p3d";
			containerClass="Supply80";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
		};
	};
	class V_sud_nato_vest04: Vest_Camo_Base
	{
		scope=2;
		displayName="NATO Vest";
		picture="\twc_rip\data\pic\nato_vest01";
		model="twc_rip\sud_nato_vest04.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="twc_rip\sud_nato_vest04.p3d";
			containerClass="Supply80";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
		};
	};
	class V_sud_nato_vest05: Vest_Camo_Base
	{
		scope=2;
		displayName="NATO Vest";
		picture="\twc_rip\data\pic\nato_vest01";
		model="twc_rip\sud_nato_vest05.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="twc_rip\sud_nato_vest05.p3d";
			containerClass="Supply80";
			mass=50;
			armor="5*0.5";
			passThrough=0.69999999;
		};
	};
};


