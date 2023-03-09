class Modern_ger_Base: B_Soldier_base_F
	{
		scope=2;
		displayName="Rifleman";
		faction = "twc_modern_public";
		editorSubcategory = "TWC_Infantry_2010_GER_Woodland";
		vehicleClass="Men_twc_woodland";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_B_GER_Flecktarn_1";
		twc_radioType = "ACRE_PRC148";
		backpack="ger_backpack_rif_flk";
		class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_RFL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_RFL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"CUP_arifle_G36A",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36A",
			"Throw",
			"Put"
		};
		Items[]=
		{
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};
		respawnitems[]=
		{
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_556x45_G36"),
			MAG_2("HandGrenade"),
			MAG_3("SmokeShell")
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_556x45_G36"),
			MAG_2("HandGrenade"),
			MAG_3("SmokeShell")
		};
	};

	class Modern_ger_Base_d: Modern_ger_Base
	{
		scope=2;
		editorSubcategory = "TWC_Infantry_2010_GER_Desert";
		backpack="ger_backpack_rif_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_RFL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_RFL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class Modern_ger_rif_AT: Modern_ger_Base
	{
		scope=2;
		displayName="Rifleman AT";
		backpack="ger_backpack_at_flk";
		
		weapons[]=
		{
			"CUP_arifle_G36A",
			"CUP_launch_MAAWS_Scope",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36A",
			"CUP_launch_MAAWS_Scope",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_556x45_G36"),
			"CUP_MAAWS_HEDP_M",
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_556x45_G36"),
			"CUP_MAAWS_HEDP_M",
			"HandGrenade",
			"SmokeShell"
		};
	};

	class Modern_ger_rif_AT_d: Modern_ger_rif_AT
	{
		scope=2;
		editorSubcategory = "TWC_Infantry_2010_GER_Desert";
		backpack="ger_backpack_at_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_RFL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_RFL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_grenadier: Modern_ger_Base
	{
		scope=2;
		displayName="Grenadier";
		backpack="ger_backpack_rif_flk";
		weapons[]=
		{
			"CUP_arifle_AG36",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_AG36",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_7("CUP_30Rnd_556x45_G36"),
			MAG_10("1Rnd_HE_Grenade_shell"),
			MAG_2("SmokeShell"),
			"HandGrenade"
		};
		Respawnmagazines[]=
		{
			MAG_7("CUP_30Rnd_556x45_G36"),
			MAG_10("1Rnd_HE_Grenade_shell"),
			MAG_2("SmokeShell"),
			"HandGrenade"
		};
	};
	
	class Modern_ger_grenadier_d: Modern_ger_grenadier
	{
		scope=2;
		editorSubcategory = "TWC_Infantry_2010_GER_Desert";
		backpack="ger_backpack_rif_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_Gren",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_Gren",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_mg: Modern_ger_Base
	{
		scope=2;
		displayName="Machinegunner";
		backpack="ger_backpack_mg";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_RFL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_RFL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"CUP_lmg_MG3",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_lmg_MG3",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_2("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
			"HandGrenade",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			MAG_2("CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
			"HandGrenade",
			"SmokeShell"
		};
	};
	
	class Modern_ger_mg_d: Modern_ger_mg
	{
		scope=2;
		editorSubcategory = "TWC_Infantry_2010_GER_Desert";
		backpack="ger_backpack_mg_d";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_MG",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_MG",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_commander: Modern_ger_Base
	{
		scope=2;
		displayName="Section Commander @Bundeswehr";
		backpack="ger_backpack_leader";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_TL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_TL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		weapons[]=
		{
			"CUP_arifle_G36A",
			"ACE_Vector",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"CUP_arifle_G36A",
			"ACE_Vector",
			"Throw",
			"Put"
		};
	};
	
	class Modern_ger_commander_d: Modern_ger_commander
	{
		scope=2;
		editorSubcategory = "TWC_Infantry_2010_GER_Desert";
		backpack="ger_backpack_leader_d";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_TL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_TL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
	};
	
	
	class Modern_ger_subcommander: Modern_ger_commander
	{
		scope=2;
		displayName="2ic";
		backpack="ger_backpack_2ic";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_TL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_TL",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_ger_subcommander_d: Modern_ger_subcommander
	{
		scope=2;
		editorSubcategory = "TWC_Infantry_2010_GER_Desert";
		backpack="ger_backpack_2ic_d";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_TL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_TL",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_ger_medic: Modern_ger_base
	{
		scope=2;
		displayName="Medic";
		attendant = 1;
		backpack="ger_backpack_medic_flk";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_Med",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Fleck_Med",
			"CUP_H_Ger_M92_Cover",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_ger_medic_d: Modern_ger_medic
	{
		scope=2;
		editorSubcategory = "TWC_Infantry_2010_GER_Desert";
		backpack="ger_backpack_medic_trp";
		uniformClass="CUP_U_B_GER_Tropentarn_1";
		linkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_Med",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_GER_PVest_Trop_Med",
			"CUP_H_Ger_M92_Cover_Trop",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};