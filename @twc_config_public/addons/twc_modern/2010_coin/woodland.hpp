//COIN, WOODLAND
//Section
	class Modern_British_Pointman: Modern_British_Rifleman
	{
		displayName="Pointman";
		backpack = "TWC_Backpack_Modern_Pointman";
		linkedItems[]= {
			"twc_warriorvest_dcs",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"twc_warriorvest_dcs",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		weapons[]= {
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};

		respawnweapons[]= {
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};
	};

	class Modern_British_Grenadier_COIN: Modern_British_Grenadier {
		displayName="Grenadier";
		backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
		weapons[]= {
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};

		respawnweapons[]= {
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};
	};

	class Modern_British_Autorifleman_COIN: Modern_British_Autorifleman {
		displayName="Automatic Rifleman";
		linkedItems[]= {
			"CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]= {
			"Throw",
			"Put",
			"UK3CB_BAF_L110A2_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};

		respawnweapons[]= {
			"Throw",
			"Put",
			"UK3CB_BAF_L110A2_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};
	};

	class Modern_British_2IC_COIN: Modern_British_Pointman {
		displayName="2IC";
		backpack="TWC_Backpack_Modern_2IC";
		linkedItems[]= {
			"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};

		respawnLinkedItems[]= {
			"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};

		weapons[]= {
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D_TAN",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};

		respawnweapons[]= {
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D_TAN",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};
	};

	class Modern_British_Marksman_COIN: Modern_British_Marksman {
		displayName="Marksman";
		backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
		weapons[]= {
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};

		respawnweapons[]= {
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"CUP_launch_M72A6",
			"UK3CB_BAF_L131A1"
		};
	};
	
	class Modern_British_Squadleader_Light: Modern_British_Squadleader
	{
		editorSubcategory = "Men_Modern_Light";
		displayName="Section Leader @BAF Mechanised";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_SL_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_SL_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_British_Pointman_Light: Modern_British_Pointman
	{
		editorSubcategory = "Men_Modern_Light";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_D",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_D",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_British_Grenadier_COIN_Light: Modern_British_Grenadier_COIN
	{
		editorSubcategory = "Men_Modern_Light";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_E",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_E",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_British_Autorifleman_COIN_Light: Modern_British_Autorifleman_COIN
	{
		editorSubcategory = "Men_Modern_Light";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_MG_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_MG_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_British_2IC_COIN_Light: Modern_British_2IC_COIN
	{
		editorSubcategory = "Men_Modern_Light";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_British_Machinegunner_Light: Modern_British_Machinegunner
	{
		editorSubcategory = "Men_Modern_Light";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_MG_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_MG_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_British_Marksman_COIN_Light: Modern_British_Marksman_COIN
	{
		editorSubcategory = "Men_Modern_Light";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class Modern_British_Medic_Light: Modern_British_Medic
	{
		editorSubcategory = "Men_Modern_Light";
		backpack="twc_mtp_belt";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_Medic_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_Medic_B",
			"UK3CB_BAF_H_Mk7_Camo_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};

	class Modern_British_Sniper_coin: Modern_British_Base {
		scope=2;
		displayName="Sniper";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
		icon="iconManLeader";
		twc_radioType = "ACRE_PRC343";
		twc_radioChannel = 4;
		backpack="TWC_Backpack_Modern_Sniper";
		twc_nobackpack = 1;
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_A",
			"UK3CB_BAF_H_Mk7_Scrim_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_Rifleman_A",
			"UK3CB_BAF_H_Mk7_Scrim_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

		weapons[]= {
			"Throw",
			"Put",
			"twc_l115a3_wd_covered",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_l115a3_wd_covered",
			"UK3CB_BAF_L131A1"
		};
	};

	class Modern_British_Spotter_coin: Modern_British_Base {
		scope=2;
		displayName="Spotter @Sniper Team";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve";
		icon="iconManLeader";
		twc_radioType = "ACRE_PRC343";
		twc_radioChannel = 4;
		backpack="TWC_Backpack_Modern_Spotter_coin";
		linkedItems[]= {
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ACE_Vector",
			"ItemWatch"
		};

		respawnLinkedItems[]= {
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ACE_Vector",
			"ItemWatch"
		};
	};
