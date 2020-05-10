class O_Soldier_Base_F;
	class TWC_Modern_rus_Base: O_Soldier_Base_F
	{
		scope=2;
		displayName="Rifleman";
		faction="rus_units";
		editorSubcategory = "Men_twc_woodland";
		vehicleClass="Men_twc_woodland";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="CUP_U_O_RUS_EMR_1_VDV";
		twc_radioType = "ACRE_PRC343";
		backpack="";
		twc_radioChannel = 3;
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m"
		};
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC343",
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
			"ACE_MapTools"
		};
		respawnitems[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			
			"ACE_EarPlugs",
			"ACRE_PRC343",
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
			"ACE_tourniquet"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};

	class TWC_Modern_rus_Base_d: TWC_Modern_rus_Base
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	
	class TWC_Modern_rus_rifleman_at: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Rifleman (AT)";
		backpack="pol_backpack_rpg";
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_rpg_pol",
			"rhs_weap_ak74m"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_rpg_pol",
			"rhs_weap_ak74m"
		};
	};
	
	class TWC_Modern_rus_rifleman_at_d: TWC_Modern_rus_rifleman_at
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_at_assistant: TWC_Modern_rus_Base
	{
		backpack="pol_backpack_rpg";
		displayName="AT Assistant";
	};
	
	class TWC_Modern_rus_at_assistant_d: TWC_Modern_rus_Base
	{
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
	};
	
	class TWC_Modern_rus_grenadier: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Grenadier";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25"
		};
	};
	
	class TWC_Modern_rus_grenadier_d: TWC_Modern_rus_grenadier
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class TWC_Modern_rus_mg: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Machinegunner";
		backpack="pol_backpack_mg";
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_pkm"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_pkm"
		};
		magazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
		Respawnmagazines[]=
		{
			"rhs_100Rnd_762x54mmR_green",
			"rhs_100Rnd_762x54mmR_green",
			"rhs_mag_rgo",
			"rhs_mag_rgo",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white",
			"rhs_mag_rdg2_white"
		};
	};
	
	class TWC_Modern_rus_mg_d: TWC_Modern_rus_mg
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_mg_assistant: TWC_Modern_rus_Base
	{
		backpack="pol_backpack_mg";
		displayName="MG Assistant";
	};
	
	class TWC_Modern_rus_mg_assistant_d: TWC_Modern_rus_mg_assistant
	{
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class TWC_Modern_rus_commander: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Section Commander @VDV";
		backpack="pol_backpack_leader";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"rhs_weap_ak74m_pkas"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_pdu4",
			"rhs_weap_ak74m_pkas"
		};
	};
	
	class TWC_Modern_rus_commander_d: TWC_Modern_rus_commander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"itemCTAB",
			"ItemWatch"
		};
	};
	
	
	class TWC_Modern_rus_subcommander: TWC_Modern_rus_commander
	{
		scope=2;
		displayName="2ic";
		backpack="rus_backpack_2ic";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_ak74m_fullplum_gp25"
		};
	};
	
	class TWC_Modern_rus_subcommander_d: TWC_Modern_rus_subcommander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class TWC_Modern_rus_medic: TWC_Modern_rus_base
	{
		scope=2;
		displayName="Medic";
		attendant = 1;
		backpack="rus_backpack_medic";
	};
	
	
	class TWC_Modern_rus_medic_d: TWC_Modern_rus_medic
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_6B45_3",
			"CUP_H_RUS_6B27_cover_headset_goggles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	
	class TWC_Modern_rus_vehcommander: TWC_Modern_rus_base
	{
		scope=2;
		displayName="Vehicle Commander";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_aks74u_folded"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"rhs_weap_aks74u_folded"
		};
		magazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rdg2_white"
		};
		Respawnmagazines[]=
		{
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_30Rnd_545x39_7N6M_plum_AK",
			"rhs_mag_rdg2_white"
		};
	};
	
	
	class TWC_Modern_rus_vehcommander_d: TWC_Modern_rus_vehcommander
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
	};
	
	class TWC_Modern_rus_vehcrewman: TWC_Modern_rus_vehcommander
	{
		scope=2;
		displayName="Vehicle Crewman";
		linkedItems[]=
		{
			"CUP_V_O_SLA_M23_1_OD",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_O_SLA_M23_1_OD",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_vehcrewman_d: TWC_Modern_rus_vehcrewman
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="CUP_U_O_RUS_BeigeDigital_VDV_rolled_up";
	};
	
	class TWC_Modern_rus_helipilot: TWC_Modern_rus_vehcrewman
	{
		scope=2;
		displayName="Helicopter Pilot";
		uniformClass="rhs_uniform_df15_tan";
		linkedItems[]=
		{
			"rhs_6b23_engineer",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"rhs_6b23_engineer",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_crewchief: TWC_Modern_rus_helipilot
	{
		scope=2;
		displayName="Helicopter Crew Chief";
		linkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"rhs_6sh92_digi",
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class TWC_Modern_rus_sniper: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Sniper";
		uniformClass="CUP_U_O_RUS_Ghillie";
		backpack="rus_backpack_sniper";
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_rus_svd"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_rus_svd"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag",
			"ACE_10Rnd_762x54_Tracer_mag"
		};
	};
	
	class TWC_Modern_rus_sniper_d: TWC_Modern_rus_sniper
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="U_I_FullGhillie_ard";
	};
	
	class TWC_Modern_rus_spotter: TWC_Modern_rus_Base
	{
		scope=2;
		displayName="Spotter";
		uniformClass="CUP_U_O_RUS_Ghillie";
		backpack="rus_backpack_spotter";
		linkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_I_RACS_Carrier_Rig_wdl_3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_weap_ak105_spotter"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_weap_ak105_spotter"
		};
		magazines[]=
		{
			"rhs_mag_rdg2_white",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M"
		};
		Respawnmagazines[]=
		{
			"rhs_mag_rdg2_white",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M"
		};
		Items[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC152",
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
			"ACE_MapTools"
		};
		respawnitems[]=
		{
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_EarPlugs",
			"ACRE_PRC343",
			"ACRE_PRC152",
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
			"ACE_tourniquet"
		};
	};
	
	class TWC_Modern_rus_spotter_d: TWC_Modern_rus_spotter
	{
		scope=2;
		editorSubcategory = "Men_twc_desert";
		vehicleClass="Men_twc_desert";
		uniformClass="U_I_FullGhillie_ard";
	};
	
	