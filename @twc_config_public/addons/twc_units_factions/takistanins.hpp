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
		displayName="Rifleman (M4)";
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
			"twc_rhs_weap_m4a1_acog_lazer",
			"Throw",
			"Put"
		};
		respawnweapons[]= {
			"twc_rhs_weap_m4a1_acog_lazer",
			"Throw",
			"Put"
		};

		magazines[]= {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
		};

		Respawnmagazines[]= {
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag"
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
		"CUP_launch_RPG7V"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKS",
		"CUP_launch_RPG7V"
		};
		magazines[]=
		{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_OG7_M",
		"CUP_OG7_M",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_OG7_M",
		"CUP_OG7_M",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
		
		
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
	class Tak_twc_ins_Men_R3: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (SAvz)";
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
		"rhs_weap_savz58p"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_savz58p"
		};
		magazines[]=
		{
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
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
