	class O_G_Survivor_F;
	
	
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
	class Tak_twc_ins_Men_J1: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Bomber 1 (Impact Grenade)";
		uniformClass="CUP_O_TKI_Khet_Jeans_04";
		linkedItems[]=
		{
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemWatch"
		};
				weapons[]=
		{
		"Throw",
		"Put",
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		};
		magazines[]=
		{

		};
		Respawnmagazines[]=
		{

		};
		Items[]=
		{

			"CUP_handgrenade_RGD5"
		};
		respawntems[]=
		{

			"CUP_handgrenade_RGD5"
		};
	};
	
	class Tak_twc_ins_Men_J2: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Bomber 2 (Impact Grenade)";
		uniformClass="CUP_O_TKI_Khet_Partug_03";
		linkedItems[]=
		{
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ItemWatch"
		};
				weapons[]=
		{
		"Throw",
		"Put",
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		};
		magazines[]=
		{

		};
		Respawnmagazines[]=
		{

		};
		Items[]=
		{

			"CUP_handgrenade_RGD5"
		};
		respawntems[]=
		{

			"CUP_handgrenade_RGD5"
		};
	};
	class Tak_twc_ins_Men_J3: Tak_twc_ins_Men_Base
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
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_KTL1: Tak_twc_ins_Men_Base
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
		"handgrenade",
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
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
		
		
	};
	class Tak_twc_ins_Men_KTL2: Tak_twc_ins_Men_Base
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
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"CUP_30Rnd_556x45_Stanag",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_KTL3: Tak_twc_ins_Men_Base
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
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_KTL4: Tak_twc_ins_Men_Base
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
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_KTS1: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (FAL)";
		uniformClass="CUP_O_TKI_Khet_Partug_07";
		linkedItems[]=
		{
			"CUP_H_TKI_SkullCap_02",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_SkullCap_02",
			"ItemWatch"
		};
						weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_FNFAL"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
	"CUP_arifle_FNFAL"
		};
		magazines[]=
		{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"CUP_20Rnd_762x51_FNFAL_M",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_KTS2: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (Short Brown Khet)";
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
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};
	class Tak_twc_ins_Men_KTS3: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (Short Grey Khet)";
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
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};	
	class Tak_twc_ins_Men_KTS4: Tak_twc_ins_Men_Base
	{
		scope=2;
		displayName="Rifleman (Short Cream Khet)";
		uniformClass="CUP_O_TKI_Khet_Partug_05";
		linkedItems[]=
		{
			"CUP_H_TKI_Pakol_1_02",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_H_TKI_Pakol_1_02",
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
		"handgrenade",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{

		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"handgrenade",
		"SmokeShell"
		};
		Items[]=
		{

		};
		respawntems[]=
		{

		};
	};	
