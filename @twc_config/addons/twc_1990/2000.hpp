	class 2000_British_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base (00's Woodland)";
		faction="twc_faction";
		editorSubcategory = "Men_2000W";
		vehicleClass="Men_2000W";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="TWC_Smock_Temperate";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DPMT",
			"UK3CB_BAF_H_Mk6_DPMT_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DPMT",
			"UK3CB_BAF_H_Mk6_DPMT_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_MapTools",
			"ACRE_PRC343"	
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACRE_PRC343"	
		};		
	};
	class 2000_British_SectionCommander: 2000_British_Base
	{
		scope=2;
		displayName="Section Leader (00's Woodland)";
		icon="iconManLeader";
		backpack="TWC_Backpack_1990_Sectionlead";
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 2000_British_Rifleman: 2000_British_Base
	{
		scope=2;
		displayName="Rifleman(00's Woodland)";
		backpack="TWC_Backpack_1990_Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};	
	};
	class 2000_British_Rifleman_AT: 2000_British_Base
	{
		scope=2;
		displayName="RifleMan AT(00's Woodland)";
		backpack="TWC_Backpack_1990_Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_ILAW_HEDP"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_ILAW_HEDP"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};	
	};
	class 2000_British_AutoRifleman: 2000_British_Base
	{
		scope=2;
		displayName="Auto-Rifleman (00's Woodland)";
		icon="iconManMG";
		backpack="TWC_Backpack_2000_AutoRifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L110A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L110A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 2000_British_2IC: 2000_British_Rifleman
	{
		displayName="2IC(00's Woodland)";
		backpack="TWC_Backpack_1990_2IC";
	};
	class 2000_British_Marksman: 2000_British_Base
	{
		scope=2;
		displayName="Marksman (00's Woodland)";
		icon="iconManMG";
		backpack="TWC_Backpack_1990_Gunner";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A2_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A2_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
	};
	class 2000_British_Platoon_Commander: 2000_British_Base
	{
		scope=2;
		displayName="Platoon Commander(00's Woodland)";
		backpack="TWC_Backpack_1990_Platoon_Command";
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
	};
	class 2000_British_Platoon_Sergeant: 2000_British_Platoon_Commander
	{
		displayName="Platoon Sergeant(00's Woodland)";
		backpack="TWC_Backpack_1990_Platoon_Sergeant";
	};
	class 2000_British_Platoon_CSM: 2000_British_Platoon_Commander
	{
		displayName="Company Sergeant Major(00's Woodland)";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_isMolar"",true]};";
		};
	};
	class 2000_British_Medic: 2000_British_Base
	{
		scope=2;
		displayName="Medic(00's Woodland)";
		backpack="TWC_Backpack_1990_Medic";
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		class EventHandlers: EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class 2000_British_HeliPilot: 2000_British_Base
	{
		scope=2;
		displayName="Helicopter Pilot (00's Woodland)";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"

		};
	};
	class 2000_British_JetPilot: 2000_British_HeliPilot
	{
		displayName="Jet Pilot (00's Woodland)";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};	
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 2000_British_MilanGunner: 2000_British_Base
	{
		scope=2;
		displayName="Milan Gunner (00's Woodland)";
		backpack="TWC_Backpack_1990_Milan";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_Milan_Tripod_Disassemabled"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"TWC_Milan_Tripod_Disassemabled"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell"
		};
	};
	class 2000_British_MilanAssistant: 2000_British_MilanGunner
	{
		displayName="Milan Assistant(00's Woodland)";
		backpack="TWC_Backpack_1990_Milan";
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"TWC_Milan_Launcher_Disassemabled"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_Milan_Launcher_Disassemabled"
		};
	};
	class 2000_British_MortarGunner: 2000_British_Rifleman
	{
		displayName="Mortar Gunner(00's Woodland)";
		backpack="TWC_Backpack_1990_Mortar";
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"UK3CB_BAF_M6"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"UK3CB_BAF_M6"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",
			"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White"
		};	
	};
	class 2000_British_CGG: 2000_British_Rifleman
	{
		displayName="Carl-Gustaf Gunner (00's Woodland)";
		backpack="TWC_Backpack_1990_CG";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_Carl_Gustav"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_Carl_Gustav"
		};
	};
	class 2000_British_CGAss: 2000_British_Rifleman
	{
		displayName="Carl-Gustaf Assistant(00's Woodland)";
		backpack="TWC_Backpack_1990_CGAss";
	};
	
//////////////////////////////  Mounted  //////////////////////////////
	class 2000_British_Rifleman_Mounted: 2000_British_Rifleman
	{
		displayName="Rifleman (00's Mounted)";
		backpack="";
	};
	class 2000_British_Rifleman_AT_Mounted: 2000_British_Rifleman
	{
		displayName="Rifleman AT (00's Mounted)";
		backpack="";
	};
	class 2000_British_AutoRifleman_Mounted: 2000_British_AutoRifleman
	{
		displayName="Auto-Rifleman (00's Mounted)";
		backpack="TWC_Backpack_2000_AutoRifleman_Kitbag";
	};
	class 2000_British_2IC_Mounted: 2000_British_Marksman
	{
		displayName="2IC (00's Mounted)";
		backpack="TWC_Backpack_1990_2IC_Mounted";
	};
	class 2000_British_Marksman_Mounted: 2000_British_Marksman
	{
		displayName="Marksman (00's Mounted)";
		backpack="";
	};
	class 2000_British_Vehicle_Commander: 2000_British_Base
	{
		displayName="Vehicle Commander (00's Woodland)";
		uniformClass="UK3CB_BAF_U_CombatUniform_DPMT";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
	};
    class 2000_British_Vehicle_Crew: 2000_British_Vehicle_Commander
	{
		displayName="Vehicle Crew(00's Woodland)";
		backpack="";
	};
//////////////////////////////////////////////////////////////////
//                                                              //
//                    2000 Desert British                       //
//                                                              //
//////////////////////////////////////////////////////////////////

	class 2000_British_SectionCommander_Desert: 2000_British_SectionCommander
	{
		displayName="Section Leader(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Sectionlead_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Rifleman_Desert: 2000_British_Rifleman
	{
		displayName="RifleMan(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Rifleman_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Rifleman_AT_Desert: 2000_British_Rifleman
	{
		displayName="RifleMan AT(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Rifleman_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_AutoRifleman_Desert: 2000_British_AutoRifleman
	{
		displayName="Auto-Rifleman (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_2000_AutoRifleman_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_2IC_Desert: 2000_British_2IC
	{
		displayName="2IC (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_2IC_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Marksman_Desert: 2000_British_Marksman
	{
		displayName="Gunner(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Gunner_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Platoon_Commander_Desert: 2000_British_Platoon_Commander
	{
		displayName="Platoon Commander(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Platoon_Command_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Platoon_Sergeant_Desert: 2000_British_Platoon_Sergeant
	{
		scope=2;
		displayName="Platoon Sergeant(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Platoon_Sergeant_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Platoon_CSM_Desert: 2000_British_Platoon_Commander_Desert
	{
		displayName="Company Sergeant Major(00's Desert)";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_isMolar"",true]};";
		};
	};
	class 2000_British_Medic_Desert: 2000_British_Medic
	{
		displayName="Medic(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Medic_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		class EventHandlers: EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
    class 2000_British_HeliPilot_Desert: 2000_British_HeliPilot
	{
		displayName="Helicopter Pilot(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_MilanGunner_Desert: 2000_British_MilanGunner
	{
		displayName="Milan Gunner(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Milan_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_MilanAssistant_Desert: 2000_British_MilanAssistant
	{
		displayName="Milan Assistant(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Milan_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_MortarGunner_Desert: 2000_British_MortarGunner
	{
		displayName="Mortar Gunner(00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Mortar_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_Mk6_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};	
	};
	class 2000_British_CGG_Desert: 2000_British_CGG
	{
		displayName="Carl-Gustaf Gunner (00's Desert)";
		backpack="TWC_Backpack_1990_CG_Desert";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_Carl_Gustav"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT3D",
			"TWC_Carl_Gustav"
		};
	};
	class 2000_British_CGAss_Desert: 2000_British_CGAss
	{
		displayName="Carl-Gustaf Assistant(00's Desert)";
		backpack="TWC_Backpack_1990_CGAss_Desert";
	};
//////////////////////////////  Mounted  //////////////////////////////
	class 2000_British_Rifleman_Mounted_Desert: 2000_British_Rifleman_Desert
	{
		displayName="Rifleman (00's Mounted Desert)";
		backpack="";
	};
	class 2000_British_Rifleman_AT_Mounted_Desert: 2000_British_Rifleman_Desert
	{
		displayName="Rifleman AT (00's Mounted Desert)";
		backpack="";
	};
	class 2000_British_Marksman_Mounted_Desert: 2000_British_Marksman_Desert
	{
		displayName="Marksman (00's Mounted Desert)";
		backpack="";
	};
	class 2000_British_AutoRifleman_Mounted_Desert: 2000_British_AutoRifleman_Desert
	{
		displayName="Auto-Rifleman (00's Mounted Desert)";
		backpack="TWC_Backpack_2000_AutoRifleman_Kitbag_Desert";
	};
	class 2000_British_2IC_Mounted_Desert: 2000_British_Marksman_Desert
	{
		displayName="2IC (00's Mounted Desert)";
		backpack="TWC_Backpack_1990_2IC_Desert_Mounted";
	};
    class 2000_British_Vehicle_Commander_Desert: 2000_British_Vehicle_Commander
	{
		displayName="Vehicle Commander (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
    class 2000_British_Vehicle_Crew_Desert: 2000_British_Vehicle_Crew
	{
		displayName="Vehicle Crew (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_DDPM",
			"UK3CB_BAF_H_CrewHelmet_DDPM_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class 2000_British_Tank_Commander_Desert: B_Soldier_base_F
	{
		_generalMacro="2000_Desert_British_Tank Commander";
		scope=2;
		displayName="Vehicle Commander (00's Desert)";
		faction="twc_faction";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_1990_Platoon_Command";
		linkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		respawnLinkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_ESS_A",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		weapons[]=
		{
		"Throw",
		"Put",	
		"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"ukcw_sterling_sub"
		};
		magazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_tourniquet",
		"ACE_EarPlugs",
		"UK3CB_BAF_HMNVS"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_Flashlight_KSF1",
		"ACE_IR_Strobe_Item",
	    "ACE_MapTools",
		"UK3CB_BAF_HMNVS",
		"ACRE_PRC148",
		"ACE_EarPlugs"
		};
	};
    class 2000_British_Tank_Crew_Desert: B_Soldier_base_F
	{
		_generalMacro="2000_Desert_Tank_Crew";
		scope=2;
		displayName="Vehicle Crew (00's Desert)";
		faction="twc_faction";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="TWC_Smock_Desert";
		linkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_A",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		respawnLinkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_DDPM",
		"UK3CB_BAF_H_CrewHelmet_DDPM_A",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		weapons[]=
		{
		"Throw",
		"Put",	
		"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"ukcw_sterling_sub"
		};
		magazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_quikclot",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_tourniquet",
		"ACE_EarPlugs",
		"UK3CB_BAF_HMNVS"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs",
		"ACRE_PRC148",
		"UK3CB_BAF_HMNVS"		
		};
	};