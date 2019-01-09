	class O_G_Survivor_F;
	class CUP_O_TK_INS_Commander;
		class CUP_O_TK_INS_Commander_twc: CUP_O_TK_INS_Commander
	{
		scope=2;
		displayName="Warlord (Gold)";

				weapons[]=
		{
		"CUP_arifle_AKS_Gold",
		"Throw",
		"Put"
		};
		respawnweapons[]=
		{
		"CUP_arifle_AKS_Gold",
		"Throw",
		"Put"
		};
		magazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"handgrenade"
		};
		Respawnmagazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"handgrenade"
		};

	};

	
	
	class Tak_twc_ins_Men_Base: O_G_Survivor_F
	{
		author="Hobbs";
		scope=1;
		displayName="Takistani insurgent Base";
		faction="CUP_O_TK_MILITIA";
		editorSubcategory = "Men_tak_twc_ins";
		vehicleClass="Men_tak_twc_ins";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
		
	};

	class Tak_twc_ins_Men_B1: Tak_twc_ins_Men_Base {
		scope=2;
		displayName="Rifleman (M1)";
		uniformClass="CUP_O_TKI_Khet_Jeans_01";

		linkedItems[]= {
			"CUP_V_OI_TKI_Jacket4_05",
			"H_ShemagOpen_khk",
			"ItemWatch"
		};
		
		respawnLinkedItems[]= {
			"CUP_V_OI_TKI_Jacket4_05",
			"H_ShemagOpen_khk",
			"ItemWatch"
		};
		
		weapons[]= {
			"rhs_weap_m1garand_sa43",
			"Throw",
			"Put"
		};
		respawnweapons[]= {
			"rhs_weap_m1garand_sa43",
			"Throw",
			"Put"
		};

		magazines[]= {
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle"
		};

		Respawnmagazines[]= {
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle",
			"rhsgref_8Rnd_762x63_M2B_M1rifle"
		};
		
		Items[]= { };
		respawntems[]= { };
	};
	
	class Tak_twc_ins_Men_B2: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (M70)";
		uniformClass="CUP_O_TKI_Khet_Partug_02";

		linkedItems[]= {
			"UK3CB_BAF_V_PLCE_Webbing_Plate_OLI",
			"CUP_H_TKI_Lungee_Open_01",
			"ItemWatch"
		};
		
		respawnLinkedItems[]= {
			"UK3CB_BAF_V_PLCE_Webbing_Plate_OLI",
			"CUP_H_TKI_Lungee_Open_01",
			"ItemWatch"
		};
		
		weapons[]= {
			"rhs_weap_m70b1",
			"Throw",
			"Put"
		};
		respawnweapons[]= {
			"rhs_weap_m70b1",
			"Throw",
			"Put"
		};

		magazines[]= {
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm"
		};

		Respawnmagazines[]= {
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm"
		};
		
		Items[]= { };
		respawntems[]= { };
	};
	class Tak_twc_ins_Men_Bombmaker: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Bomb Maker";
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		backpack="Backpack_twc_bombmaker";
		linkedItems[]=
		{
			"ItemWatch",
			"binocular"
		};
		respawnLinkedItems[]=
		{
			"ItemWatch",
			"binocular"
		};

	};

	class Tak_twc_ins_Men_R1: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (AKM)";
		uniformClass="CUP_O_TKI_Khet_Jeans_01";
		linkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket1_05",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_OI_TKI_Jacket1_05",
			"ItemWatch"
		};
				weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKM"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
	"CUP_arifle_AKM"
		};
		magazines[]=
		{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_R1_2: Tak_twc_ins_Men_R1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		scope=1;
	};
	class Tak_twc_ins_Men_R1_3: Tak_twc_ins_Men_R1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		scope=1;
	};
	class Tak_twc_ins_Men_R1_4: Tak_twc_ins_Men_R1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_R1_5: Tak_twc_ins_Men_R1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		scope=1;
	};
	class Tak_twc_ins_Men_R1_6: Tak_twc_ins_Men_R1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_R1_7: Tak_twc_ins_Men_R1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		scope=1;
	};
	class Tak_twc_ins_Men_R1_8: Tak_twc_ins_Men_R1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_RPG1: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="RPG Gunner";
		uniformClass="CUP_O_TKI_Khet_Jeans_02";
		backpack="Backpack_AT_og7";
		linkedItems[]=
		{
			"CUP_H_TKI_Lungee_Open_01",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_Lungee_Open_01",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKS",
		"twc_rhs_rpg7_ins"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKS",
		"twc_rhs_rpg7_ins"
		};
		magazines[]=
		{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"rhs_rpg7_PG7V_mag",
		"rhs_rpg7_PG7V_mag",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"rhs_rpg7_PG7V_mag",
		"rhs_rpg7_PG7V_mag",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
		
		
	};
	class Tak_twc_ins_Men_RPG1_2: Tak_twc_ins_Men_RPG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		scope=1;
	};
	class Tak_twc_ins_Men_RPG1_3: Tak_twc_ins_Men_RPG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		scope=1;
	};
	class Tak_twc_ins_Men_RPG1_4: Tak_twc_ins_Men_RPG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_RPG1_5: Tak_twc_ins_Men_RPG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		scope=1;
	};
	class Tak_twc_ins_Men_RPG1_6: Tak_twc_ins_Men_RPG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_RPG1_7: Tak_twc_ins_Men_RPG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		scope=1;
	};
	class Tak_twc_ins_Men_RPG1_8: Tak_twc_ins_Men_RPG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_R2: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (M16)";
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		linkedItems[]=
		{
			"CUP_H_TKI_Pakol_1_01",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_Pakol_1_01",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_M16A2"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
	"CUP_arifle_M16A2"
		};
		magazines[]=
		{
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_R2_2: Tak_twc_ins_Men_R2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		scope=1;
	};
	class Tak_twc_ins_Men_R2_3: Tak_twc_ins_Men_R2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		scope=1;
	};
	class Tak_twc_ins_Men_R2_4: Tak_twc_ins_Men_R2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_R2_5: Tak_twc_ins_Men_R2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		scope=1;
	};
	class Tak_twc_ins_Men_R2_6: Tak_twc_ins_Men_R2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_R2_7: Tak_twc_ins_Men_R2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		scope=1;
	};
	class Tak_twc_ins_Men_R2_8: Tak_twc_ins_Men_R2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_AR1: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Autorifleman";
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		backpack="Backpack_rpk";
		linkedItems[]=
		{
			"CUP_H_TKI_Pakol_2_01",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_Pakol_2_01",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_RPK74"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
	"CUP_arifle_RPK74"
		};
		magazines[]=
		{
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_AR1_2: Tak_twc_ins_Men_AR1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		scope=1;
	};
	class Tak_twc_ins_Men_AR1_3: Tak_twc_ins_Men_AR1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		scope=1;
	};
	class Tak_twc_ins_Men_AR1_4: Tak_twc_ins_Men_AR1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_AR1_5: Tak_twc_ins_Men_AR1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		scope=1;
	};
	class Tak_twc_ins_Men_AR1_6: Tak_twc_ins_Men_AR1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_AR1_7: Tak_twc_ins_Men_AR1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		scope=1;
	};
	class Tak_twc_ins_Men_AR1_8: Tak_twc_ins_Men_AR1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_MG1: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Machinegunner";
		backpack="Afr_Backpack_MG";
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		linkedItems[]=
		{
			"CUP_H_TKI_SkullCap_03",
			"ItemWatch",
			"CUP_V_OI_TKI_Jacket5_04"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_SkullCap_03",
			"CUP_V_OI_TKI_Jacket5_04",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"CUP_lmg_PKM"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_lmg_PKM"
		};
		magazines[]=
		{
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_MG1_2: Tak_twc_ins_Men_MG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		scope=1;
	};
	class Tak_twc_ins_Men_MG1_3: Tak_twc_ins_Men_MG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		scope=1;
	};
	class Tak_twc_ins_Men_MG1_4: Tak_twc_ins_Men_MG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_MG1_5: Tak_twc_ins_Men_MG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		scope=1;
	};
	class Tak_twc_ins_Men_MG1_6: Tak_twc_ins_Men_MG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_MG1_7: Tak_twc_ins_Men_MG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		scope=1;
	};
	class Tak_twc_ins_Men_MG1_8: Tak_twc_ins_Men_MG1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_R3: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (Type 56)";
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		linkedItems[]=
		{
			"H_Shemag_olive",
			"CUP_V_I_RACS_Carrier_Rig_2",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Shemag_olive",
			"CUP_V_I_RACS_Carrier_Rig_2",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_TYPE_56_2"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_TYPE_56_2"
		};
		magazines[]=
		{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_R3_2: Tak_twc_ins_Men_R3
	{
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		scope=1;
	};
	class Tak_twc_ins_Men_R3_3: Tak_twc_ins_Men_R3
	{
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		scope=1;
	};
	class Tak_twc_ins_Men_R3_4: Tak_twc_ins_Men_R3
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_R3_5: Tak_twc_ins_Men_R3
	{
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		scope=1;
	};
	class Tak_twc_ins_Men_R3_6: Tak_twc_ins_Men_R3
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_R3_7: Tak_twc_ins_Men_R3
	{
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		scope=1;
	};
	class Tak_twc_ins_Men_R3_8: Tak_twc_ins_Men_R3
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_a1: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Assaulter (Shotgun)";
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		linkedItems[]=
		{
			"CUP_H_TKI_Lungee_Open_02",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_Lungee_Open_02",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_M590_5RD"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_M590_5RD"
		};
		magazines[]=
		{
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_00Buck",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_a1_2: Tak_twc_ins_Men_a1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		scope=1;
	};
	class Tak_twc_ins_Men_a1_3: Tak_twc_ins_Men_a1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		scope=1;
	};
	class Tak_twc_ins_Men_a1_4: Tak_twc_ins_Men_a1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_a1_5: Tak_twc_ins_Men_a1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		scope=1;
	};
	class Tak_twc_ins_Men_a1_6: Tak_twc_ins_Men_a1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_a1_7: Tak_twc_ins_Men_a1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		scope=1;
	};
	class Tak_twc_ins_Men_a1_8: Tak_twc_ins_Men_a1
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_a2: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Assaulter (SMG)";
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		linkedItems[]=
		{
			"CUP_H_TKI_Pakol_2_02",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_Pakol_2_02",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_savz61"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_savz61"
		};
		magazines[]=
		{
		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"rhsgref_20rnd_765x17_vz61",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};	
	class Tak_twc_ins_Men_a2_2: Tak_twc_ins_Men_a2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		scope=1;
	};
	class Tak_twc_ins_Men_a2_3: Tak_twc_ins_Men_a2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_02";
		scope=1;
	};
	class Tak_twc_ins_Men_a2_4: Tak_twc_ins_Men_a2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		scope=1;
	};
	class Tak_twc_ins_Men_a2_5: Tak_twc_ins_Men_a2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_04";
		scope=1;
	};
	class Tak_twc_ins_Men_a2_6: Tak_twc_ins_Men_a2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		scope=1;
	};
	class Tak_twc_ins_Men_a2_7: Tak_twc_ins_Men_a2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_08";
		scope=1;
	};
	class Tak_twc_ins_Men_a2_8: Tak_twc_ins_Men_a2
	{
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		scope=1;
	};
	class Tak_twc_ins_Men_sniper: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Sniper";
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		linkedItems[]=
		{
			"CUP_H_TK_Lungee",
			"rhsgref_alice_webbing",
			"binoculars",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TK_Lungee",
			"rhsgref_alice_webbing",
			"binoculars",
			"ItemWatch"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"CUP_hgun_Makarov",
		"CUP_srifle_SVD_des_ghillie_pso"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_hgun_Makarov",
	"CUP_srifle_SVD_des_ghillie_pso"
		};
		magazines[]=
		{
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};	


class Tak_twc_ins_Men_sniper_h: Tak_twc_ins_Men_sniper
	{
		scope=2;
		displayName="Heavy Sniper";
		uniformClass="CUP_O_TKI_Khet_Partug_01";
		linkedItems[]=
		{
			"H_Shemag_olive",
			"rhsgref_alice_webbing",
			"binoculars",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"H_Shemag_olive",
			"rhsgref_alice_webbing",
			"binoculars",
			"ItemWatch"
		};
				weapons[]=
		{
		"Throw",
		"Put",
		"CUP_hgun_Makarov",
		"twc_ksvk"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_hgun_Makarov",
		"twc_ksvk"
		};
		
		magazines[]=
		{
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"twc_23mm_1rnd",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"handgrenade",
		"SmokeShell"
		};
		
	};

	class Tak_twc_ins_Men_Scout: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Scout";
		uniformClass="CUP_O_TKI_Khet_Partug_06";
		linkedItems[]=
		{
			"CUP_H_TKI_Pakol_1_02",
			"binoculars",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_Pakol_1_02",
			"binoculars",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"CUP_hgun_Makarov"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_hgun_Makarov"
		};
		magazines[]=
		{
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"rhs_mag_rgn"
		};
		Respawnmagazines[]=
		{
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"rhs_mag_rgn"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};	
