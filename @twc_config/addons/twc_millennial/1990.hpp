	class 1990_British_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base";
		faction="TWC_Millenial";
		editorSubcategory = "Men_1990_Woodland_Dismounted";
		vehicleClass="Men_1990_Woodland_Dismounted";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="TWC_Smock_Temperate";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
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
			"ACE_MapTools",
			"ACRE_PRC343"
		};		
	};
	class 1990_British_SectionCommander: 1990_British_Base
	{
		scope=2;
		displayName="Section Leader ";
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
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer"
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
	class 1990_British_Rifleman: 1990_British_Base
	{
		scope=2;
		displayName="Rifleman";
		backpack="TWC_Backpack_1990_Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D"
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
	class 1990_British_Rifleman_AT: 1990_British_Base
	{
		scope=2;
		displayName="RifleMan AT";
		backpack="TWC_Backpack_1990_Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukf_law80launcher"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukf_law80launcher"
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
	class 1990_British_Gunner: 1990_British_Base
	{
		scope=2;
		displayName="Gunner";
		icon="iconManMG";
		backpack="TWC_Backpack_1990_Gunner";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L86A1_SUSAT3D"
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
	class 1990_British_2IC: 1990_British_Rifleman
	{
		displayName="2IC";
		backpack="TWC_Backpack_1990_2IC";
	};
	class 1990_British_Platoon_Commander: 1990_British_Base
	{
		scope=2;
		displayName="Platoon Commander(90`s Woodland)";
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
	class 1990_British_Platoon_Sergeant: 1990_British_Platoon_Commander
	{
		displayName="Platoon Sergeant";
		backpack="TWC_Backpack_1990_Platoon_Sergeant";
	};
	class 1990_British_Platoon_CSM: 1990_British_Platoon_Commander
	{
		displayName="Company Sergeant Major(90`s Woodland)";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_isMolar"",true];";
		};
	};
	class 1990_British_Medic: 1990_British_Base
	{
		scope=2;
		displayName="Medic";
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
			init = "(_this select 0) setVariable [""ace_medical_medicClass"",1];";
		};
	};
	class 1990_British_HeliPilot: 1990_British_Base
	{
		scope=2;
		displayName="Helicopter Pilot";
		backpack="TWC_Backpack_1990_Helicopter_Pilot";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch",
			"ItemGPS"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L91A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L91A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_30Rnd",
			"UK3CB_BAF_9_30Rnd",
			"UK3CB_BAF_9_30Rnd",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_30Rnd",
			"UK3CB_BAF_9_30Rnd",
			"UK3CB_BAF_9_30Rnd",
			"SmokeShell",
			"SmokeShell"

		};
	};
	class 1990_British_JetPilot: 1990_British_Base
	{
		displayName="Jet Pilot ";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack="TWC_Backpack_1990_Jet_Pilot";
		linkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS"
		};
		weapons[]=
		{
			"ukcw_hipower"
		};
		respawnweapons[]=
		{
			"ukcw_hipower"
		};
		magazines[]=
		{
			"ukcw_13rd_9x19",
			"ukcw_13rd_9x19",
			"ukcw_13rd_9x19",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_13rd_9x19",
			"ukcw_13rd_9x19",
			"ukcw_13rd_9x19",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 1990_British_MilanGunner: 1990_British_Base
	{
		scope=2;
		displayName="Milan Gunner";
		backpack="TWC_Backpack_1990_Milan";
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
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
	class 1990_British_MilanAssistant: 1990_British_MilanGunner
	{
		displayName="Milan Assistant";
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
			"ukcw_sterling_sub",
			"TWC_Milan_Launcher_Disassemabled"
		};
	};
	class 1990_British_MortarGunner: 1990_British_Rifleman
	{
		displayName="Mortar Gunner(90`s Woodland)";
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
	class 1990_British_CGG: 1990_British_Rifleman
	{
		displayName="Carl-Gustaf Gunner";
		backpack="TWC_Backpack_1990_CG";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukcw_l14a1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukcw_l14a1"
		};
	};
	class 1990_British_CGAss: 1990_British_Rifleman
	{
		displayName="Carl-Gustaf Assistant";
		backpack="TWC_Backpack_1990_CGAss";
	};
	class 1990_British_Engineer: 1990_British_Base
	{
		scope=2;
		displayName="Engineer";
		backpack="TWC_Backpack_1990_Engineer";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};	
	};
	class 1990_British_FAC: 1990_British_Platoon_Commander
	{
		displayName="FAC";
		backpack="TWC_Backpack_1990_FAC";
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer",
			"UK3CB_BAF_Soflam_Laserdesignator"
		};
		rrespawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A1_SUSAT3D_Lazer",
			"UK3CB_BAF_Soflam_Laserdesignator"
		};
	};
//////////////////////////////  Mounted  //////////////////////////////
	class 1990_British_Rifleman_Mounted: 1990_British_Rifleman
	{
		displayName="Rifleman";
		editorSubcategory = "Men_1990_Woodland_Mounted";
		vehicleClass="Men_1990_Woodland_Mounted";
		backpack="";
	};
	class 1990_British_Rifleman_AT_Mounted: 1990_British_Rifleman_AT
	{
		displayName="Rifleman AT";
		editorSubcategory = "Men_1990_Woodland_Mounted";
		vehicleClass="Men_1990_Woodland_Mounted";
		backpack="";
	};
	class 1990_British_Gunner_Mounted: 1990_British_Gunner
	{
		displayName="Gunner";
		editorSubcategory = "Men_1990_Woodland_Mounted";
		vehicleClass="Men_1990_Woodland_Mounted";
		backpack="";
	};
	class 1990_British_2IC_Mounted: 1990_British_2IC
	{
		displayName="2IC";
		editorSubcategory = "Men_1990_Woodland_Mounted";
		vehicleClass="Men_1990_Woodland_Mounted";
		backpack="TWC_Backpack_1990_2IC_Mounted";
	};
	class 1990_British_Vehicle_Commander: 1990_British_Base
	{
		displayName="Vehicle Commander";
		editorSubcategory = "Men_1990_Woodland_Mounted";
		vehicleClass="Men_1990_Woodland_Mounted";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
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
    class 1990_British_Vehicle_Crew: 1990_British_Vehicle_Commander
	{
		displayName="Vehicle Crew";
		editorSubcategory = "Men_1990_Woodland_Mounted";
		vehicleClass="Men_1990_Woodland_Mounted";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Pilot_DPMT",
			"UK3CB_BAF_H_CrewHelmet_DPMT_ESS_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
//////////////////////////////////////////////////////////////////
//                                                              //
//                    1990 Desert British                       //
//                                                              //
//////////////////////////////////////////////////////////////////

	class 1990_British_SectionCommander_Desert: 1990_British_SectionCommander
	{
		displayName="Section Leader";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_Rifleman_Desert: 1990_British_Rifleman
	{
		displayName="Rifleman";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
		uniformClass="TWC_Smock_Desert";
		backpack="";
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
	class 1990_British_Rifleman_AT_Desert: 1990_British_Rifleman
	{
		displayName="RifleMan AT";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
		uniformClass="TWC_Smock_Desert";
		backpack="";
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
	class 1990_British_Gunner_Desert: 1990_British_Gunner
	{
		displayName="Gunner";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_2IC_Desert: 1990_British_2IC
	{
		displayName="2IC";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_Platoon_Commander_Desert: 1990_British_Platoon_Commander
	{
		displayName="Platoon Commander";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_Platoon_Sergeant_Desert: 1990_British_Platoon_Sergeant
	{
		scope=2;
		displayName="Platoon Sergeant";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_Platoon_CSM_Desert: 1990_British_Platoon_Commander_Desert
	{
		displayName="Company Sergeant Major";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_isMolar"",true];";
		};
	};
	class 1990_British_Medic_Desert: 1990_British_Medic
	{
		displayName="Medic";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
			init = "init = (_this select 0) setVariable [""ace_medical_medicClass"",1];";
		};
	};
    class 1990_British_HeliPilot_Desert: 1990_British_HeliPilot
	{
		displayName="Helicopter Pilot";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_MilanGunner_Desert: 1990_British_MilanGunner
	{
		displayName="Milan Gunner";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_MilanAssistant_Desert: 1990_British_MilanAssistant
	{
		displayName="Milan Assistant";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_MortarGunner_Desert: 1990_British_MortarGunner
	{
		displayName="Mortar Gunner";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
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
	class 1990_British_CGG_Desert: 1990_British_CGG
	{
		displayName="Carl-Gustaf Gunner";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
		backpack="TWC_Backpack_1990_CG_Desert";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukcw_l14a1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A1_SUSAT3D",
			"ukcw_l14a1"
		};
	};
	class 1990_British_CGAss_Desert: 1990_British_CGAss
	{
		displayName="Carl-Gustaf Assistant";
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
		backpack="TWC_Backpack_1990_CGAss_Desert";
	};
	class 1990_British_FAC_Desert: 1990_British_FAC
	{
		editorSubcategory = "Men_1990_Desert_Dismounted";
		vehicleClass="Men_1990_Desert_Dismounted";
		uniformClass="TWC_Smock_Desert";
		backpack="TWC_Backpack_FAC_Desert";
	};
//////////////////////////////  Mounted  //////////////////////////////
	class 1990_British_Rifleman_Mounted_Desert: 1990_British_Rifleman_Desert
	{
		displayName="Rifleman";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
		backpack="";
	};
	class 1990_British_Rifleman_AT_Mounted_Desert: 1990_British_Rifleman_AT_Desert
	{
		displayName="Rifleman AT";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
		backpack="";
	};
	class 1990_British_Gunner_Mounted_Desert: 1990_British_Gunner_Desert
	{
		displayName="Gunner";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
		backpack="";
	};
	class 1990_British_2IC_Mounted_Desert: 1990_British_Gunner_Desert
	{
		displayName="2IC";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
		backpack="TWC_Backpack_1990_2IC_Desert_Mounted";
	};
    class 1990_British_Vehicle_Commander_Desert: 1990_British_Vehicle_Commander
	{
		displayName="Vehicle Commander";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
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
    class 1990_British_Vehicle_Crew_Desert: 1990_British_Vehicle_Crew
	{
		displayName="Vehicle Crew";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
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
	class 1990_British_Tank_Commander_Desert: B_Soldier_base_F
	{
		_generalMacro="1990_Desert_British_Tank Commander";
		scope=2;
		displayName="Vehicle Commander";
		faction="TWC_Millenial";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
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
		"UK3CB_BAF_L85A1"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"UK3CB_BAF_L85A1"
		};
		magazines[]=
		{
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd",
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
    class 1990_British_Tank_Crew_Desert: B_Soldier_base_F
	{
		scope=2;
		displayName="Vehicle Crew";
		faction="TWC_Millenial";
		editorSubcategory = "Men_1990_Desert_Mounted";
		vehicleClass="Men_1990_Desert_Mounted";
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
		"UK3CB_BAF_L85A1"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"UK3CB_BAF_L85A1"
		};
		magazines[]=
		{
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd",
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
// Winter Units
	class 1990_British_Platoon_Commander_Arctic: 1990_British_Platoon_Commander
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_Platoon_Sergeant_Arctic: 1990_British_Platoon_Sergeant
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_Medic_Arctic: 1990_British_Medic
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_Platoon_CSM_Arctic: 1990_British_Platoon_CSM
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_SectionCommander_Arctic: 1990_British_SectionCommander
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_Rifleman_Arctic: 1990_British_Rifleman
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_Rifleman_AT_Arctic: 1990_British_Rifleman_AT
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_Gunner_Arctic: 1990_British_Gunner
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_2IC_Arctic: 1990_British_2IC
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};
	class 1990_British_Engineer_Arctic: 1990_British_Engineer
	{
		uniformClass = "TWC_Smock_Arctic";
		editorSubcategory = "Men_1990_Arctic_Dismounted";
		vehicleClass="Men_1990_Arctic_Dismounted";
	};