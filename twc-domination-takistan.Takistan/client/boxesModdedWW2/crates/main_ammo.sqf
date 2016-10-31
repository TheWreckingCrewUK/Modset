/*
        Different Ammobox v 1.0
        by Demonized.

        massively edited by [TWC] jayman. It keeps the general form of arrays
		But is loaded everytime the crates is opened as it now is worked by
		and event handler.
*/ 
params["_box"];

_weapons = [];
_magazines = [["SmokeShell",5], ["SmokeShellYellow",5], ["SmokeShellRed",5], ["SmokeShellGreen",5], ["SmokeShellPurple",5], ["SmokeShellBlue",5], ["SmokeShellOrange",5], ["Chemlight_green",5], ["Chemlight_yellow",5], ["Chemlight_red",5], ["Chemlight_blue",5]];
_items = [["ACE_EarPlugs",1],["ACE_MapTools",1],["ACE_Flashlight_XL50", 1],["ACRE_PRC343",1],["ACE_HandFlare_White",5],["ACE_HandFlare_Green",5],["ACE_fieldDressing",10],["ACE_morphine",10],["ACE_elasticBandage",10],["ACE_quikclot",10],["ACE_packingBandage",10], ["ACE_tourniquet", 2]];
_backpacks = [];

_tmp_weapons = [];
_tmp_magazines = [];
_tmp_items = [];
_tmp_backpacks = [];

// load available to Section Commander only.
if (g_class == "alpha_sl") then {
    _tmp_weapons =
    [
        ["LIB_MP40",1],
		["Binocular",1]
    ];

	_tmp_magazines =
    [
        ["LIB_32Rnd_9x19",50],
		["HandGrenade",5]
    ];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["ACRE_PRC148",1]
    ];
};

// load available to Rifleman only.
 if (g_class == "alpha_rf") then {
    _tmp_weapons =
    [
		["rhs_weap_kar98k",1],
		["LIB_M1A1_Bazooka",1]
    ];

    _tmp_magazines =
    [	
		["rhsgref_5Rnd_792x57_kar98k",50],
		["LIB_1Rnd_60mm_M6",5],
		["LIB_rpg6",5],
		["HandGrenade",5]
	];

	_tmp_items = 
	[
		["ACE_MapTools",1]
	];
};

// load available to Grenadier only.
 if (g_class == "alpha_grn") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_UGL",1],
        ["ACE_Vector",1],
		["UK3CB_BAF_L131A1",1],
		["UK3CB_BAF_AT4_CS_AT_Launcher",2],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["UK3CB_BAF_NLAW_Launcher",3],
		["rhs_weap_m72a7",2],
		["UK3CB_BAF_L16_Tripod",1],
		["UK3CB_BAF_Tripod",1],
		["UK3CB_BAF_L111A1",1],
		["UK3CB_BAF_L134A1",1],
		["UK3CB_BAF_L16",1]
	];

    _tmp_magazines =
    [           
		["UK3CB_BAF_30Rnd",50],
		["UK3CB_BAF_30Rnd_T",50],
		["UK3CB_BAF_17Rnd_9mm",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
		["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
		["1Rnd_SmokeBlue_Grenade_shell", 10],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
		["ACE_MapTools",1],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_LLM_IR_Black",1],
		["UK3CB_BAF_32Rnd_40mm_G_Box",5],
		["UK3CB_BAF_100Rnd_127x99_Box",5],
		["UK3CB_BAF_1Rnd_81mm_Mo_shells",5],
		["UK3CB_BAF_1Rnd_81mm_Mo_Flare_white",5],
		["UK3CB_BAF_1Rnd_81mm_Mo_Smoke_white",5]
	];
};

// load available to Automatic Rifleman only.
 if (g_class == "alpha_ar") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L110A2",1],
		["UK3CB_BAF_AT4_CS_AT_Launcher",2],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_m72a7",2]
	];

	_tmp_magazines =
   [            
		["UK3CB_BAF_200Rnd",20],
		["UK3CB_BAF_200Rnd_T",10],
        ["UK3CB_BAF_17Rnd_9mm",15],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

// load available to Rifleman only.
 if (g_class == "alpha_2ic") then {
    _tmp_weapons =
    [
		["LIB_G43",1],
		["Binocular",1]
    ];

    _tmp_magazines =
    [	
		["LIB_10Rnd_792x57",50],
		["HandGrenade",5]
	];

	_tmp_items = 
	[
		["ACE_MapTools",1]
	];
};

// load available to GPMG Gunner only.
 if (g_class == "alpha_mg") then {
    _tmp_weapons =
    [
        ["LIB_MG42",1]
	];
       
    _tmp_magazines =
    [
        ["LIB_50Rnd_792x57",20],
		["HandGrenade",5]
    ];
	
	_tmp_items = 
	[
		["ACE_MapTools",1]
	];
};
 
// load available to Marksman only.
 if (g_class == "alpha_mark") then {
    _tmp_weapons =
    [
        ["LIB_K98ZF39",1]
	];
       
    _tmp_magazines =
    [
        ["LIB_5Rnd_792x57",25],
		["HandGrenade",5]
    ];
		
	_tmp_items = 
	[
		["ACE_MapTools",1]
	];	
};

// load available to Section Medic

 if (g_class == "alpha_med") then {
    _tmp_weapons =
    [
		["rhs_weap_kar98k",1]
	];

    _tmp_magazines =
	[
		["rhsgref_5Rnd_792x57_kar98k",50],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_elasticBandage", 50],
		["ACE_quikclot", 50],
		["ACE_packingBandage", 50],
		["ACE_personalAidKit", 50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_atropine", 50],
		["ACE_salineIV_500",50],
		["ACE_bodyBag",10],
		["ACE_surgicalKit", 50],
		["ACE_tourniquet", 5]
	];
};
//class availible to Bravo Section Lead
if (g_class == "bravo_sl") then {
    _tmp_weapons =
    [
		["LIB_M1A1_Thompson",1],
		["Binocular",1],
		["rhsusf_weap_m1911a1",1]
    ];

    _tmp_magazines =
    [
        ["LIB_30Rnd_45ACP",50],
		["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];

    _tmp_items = 
	[
		["ACE_MapTools",1],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["ACRE_PRC148",1]
    ];
};

//class availible to Bravo Team Lead
if (g_class == "bravo_tl") then {
    _tmp_weapons =
    [
		["LIB_M1_Carbine",1],
		["Binocular",1],
		["rhsusf_weap_m1911a1",1]
    ];

    _tmp_magazines =
    [
        ["LIB_15Rnd_762x33",50],
		["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];

    _tmp_items = 
	[
		["ACE_MapTools",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1]
    ];
};

// load available to Automatic Rifleman only.
 if (g_class == "bravo_rf") then {
    _tmp_weapons =
    [
        ["LIB_M1_Garand",1],
		["LIB_M1A1_Bazooka",1]
	];

    _tmp_magazines =
    [
		["LIB_8Rnd_762x63",50],
		["rhsusf_mag_7x45acp_MHP",15],
		["LIB_1Rnd_60mm_M6",5],
		["LIB_rpg6",5],
		["HandGrenade",5]
		
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1]
	];
	
	_tmp_backpacks =
	[
		["RHS_M2_Gun_Bag",1],
		["RHS_M2_Tripod_Bag",1],
		["RHS_M2_MiniTripod_Bag",1],
		["B_Mortar_01_weapon_F",1],
		["B_Mortar_01_support_F",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "bravo_ar") then {
    _tmp_weapons =
    [
        ["LIB_M1918A2_BAR",1],
		["rhsusf_weap_m1911a1",1]
	];

    _tmp_magazines =
    [
		["LIB_20Rnd_762x63",50],
		["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1]
	];
};

// load available to GREN only.
 if (g_class == "bravo_grn") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4a1_carryhandle_m203",1],
		["ACE_Vector",1],
		["rhsusf_weap_m1911a1",1],
		["UK3CB_BAF_AT4_CS_AT_Launcher",2],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["rhs_weap_m72a7",2]
	];

    _tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
		["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["1Rnd_HE_Grenade_shell", 40],
	    ["1Rnd_Smoke_Grenade_shell", 10],
	    ["1Rnd_SmokeRed_Grenade_shell", 10],
	    ["1Rnd_SmokeGreen_Grenade_shell", 10],
	    ["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
        ["1Rnd_SmokeBlue_Grenade_shell", 10],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["UK3CB_BAF_G_Tactical_Black",1,
		["UK3CB_BAF_TA31F",1]],
		["rhsusf_assault_eagleaiii_ucp",1],
		["rhsusf_acc_compm4",1],
		["ACE_1Rnd_82mm_Mo_HE",5],
		["ACE_1Rnd_82mm_Mo_Smoke",5],
		["ACE_1Rnd_82mm_Mo_Illum",5]
	];
	
	_tmp_backpacks =
	[
		["RHS_M2_Gun_Bag",1],
		["RHS_M2_Tripod_Bag",1],
		["RHS_M2_MiniTripod_Bag",1],
		["B_Mortar_01_weapon_F",1],
		["B_Mortar_01_support_F",1],
		["RHS_Mk19_Gun_Bag",1],
		["RHS_Mk19_Tripod_Bag",1],
		["rhs_Tow_Gun_Bag",1],
		["rhs_TOW_Tripod_Bag",1]
	];
};
//load availible to US marksmen only
 if (g_class == "bravo_mark") then {
    _tmp_weapons =
    [
        ["LIB_M1903A4_Springfield",1],
		["rhsusf_weap_m1911a1",1]	
	];
       
    _tmp_magazines =
    [
        ["LIB_5Rnd_762x63",50],
		["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];
		
	_tmp_items = 
	[
		["ACE_MapTools",1]
	
	];
};
//class availible to bravo medic only
 if (g_class == "bravo_med") then {
    _tmp_weapons =
    [
		["LIB_M1_Garand",1],
	    ["rhsusf_weap_m1911a1", 1]
	];

    _tmp_magazines =
    [
        ["LIB_8Rnd_762x63",50],
		["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_elasticBandage", 50],
		["ACE_quikclot", 50],
		["ACE_packingBandage", 50],
		["ACE_personalAidKit", 50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_atropine", 50],
		["ACE_salineIV_500",50],
		["ACE_bodyBag",10],
		["ACE_surgicalKit", 50],
		["ACE_tourniquet", 5]
	];
};

//loadout availible to charlie section leader
 if (g_class == "charlie_sl") then {
    _tmp_weapons =
    [
        ["LIB_PPSh41_d",1],
		["Binocular",1],
		["LIB_TT33",1]
    ];

    _tmp_magazines =
    [
        ["LIB_71Rnd_762x25",50],
		["LIB_8Rnd_762x25",20],
		["HandGrenade",5]
	];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["ACRE_PRC148",1]
	];
};
//loadout availible to charlie Team leader
 if (g_class == "charlie_tl") then {
    _tmp_weapons =
    [
        ["LIB_SVT_40",1],
		["Binocular",1]
    ];

    _tmp_magazines =
    [
        ["LIB_10Rnd_762x54",50],
		["HandGrenade",5]
	];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1]
	];
};

// load available to Section Rifleman only.
 if (g_class == "charlie_rf") then {
    _tmp_weapons =
    [
        ["rhs_weap_m38",1],
		["LIB_M1A1_Bazooka",1]
	];

    _tmp_magazines =
    [
        ["rhsgref_5Rnd_762x54_m38",50],
		["LIB_1Rnd_60mm_M6",5],
		["LIB_rpg6",5],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["ACE_1Rnd_82mm_Mo_HE",5],
		["ACE_1Rnd_82mm_Mo_Smoke",5],
		["ACE_1Rnd_82mm_Mo_Illum",5]
	];
	
	_tmp_backpacks =
	[
		["RHS_M2_Gun_Bag",1],
		["RHS_M2_Tripod_Bag",1],
		["RHS_M2_MiniTripod_Bag",1],
		["B_Mortar_01_weapon_F",1],
		["B_Mortar_01_support_F",1]
	];
};

//usmc charlie ar
if (g_class == "charlie_ar") then {
    _tmp_weapons =
    [
        ["rhs_weap_m249_pip",1],
		["rhs_weap_m27iar",1],
		["UK3CB_BAF_AT4_CS_AT_Launcher",2],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["rhs_weap_m72a7",2],
		["rhsusf_weap_m1911a1",1]
	];

    _tmp_magazines =
    [
        ["rhsusf_100Rnd_556x45_soft_pouch",20],
		["rhs_200rnd_556x45_M_SAW",10],
		["rhsusf_200Rnd_556x45_soft_pouch",10],
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
        ["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["rhsusf_acc_ELCAN",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["bipod_01_F_blk",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_TA31F",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_acc_grip1",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "charlie_aar") then {
    _tmp_weapons =
    [
        ["LIB_PPSh41_d",1]
	];

    _tmp_magazines =
    [
        ["LIB_71Rnd_762x25",50],
		["LIB_rpg6",5],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["ACE_1Rnd_82mm_Mo_HE",5],
		["ACE_1Rnd_82mm_Mo_Smoke",5],
		["ACE_1Rnd_82mm_Mo_Illum",5]
	];
	
	_tmp_backpacks =
	[
		["RHS_M2_Gun_Bag",1],
		["RHS_M2_Tripod_Bag",1],
		["RHS_M2_MiniTripod_Bag",1],
		["B_Mortar_01_weapon_F",1],
		["B_Mortar_01_support_F",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "charlie_mg") then {
    _tmp_weapons =
    [
        ["LIB_DP28",1]
	];

    _tmp_magazines =
    [
		["LIB_47Rnd_762x54",20],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "charlie_mgass") then {
    _tmp_weapons =
    [
        ["rhs_weap_m38",1]
	];

    _tmp_magazines =
    [
        ["rhsgref_5Rnd_762x54_m38",50],
		["LIB_47Rnd_762x54",20],
		["LIB_rpg6",5],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1]
	];
};
 if (g_class == "charlie_med") then {
    _tmp_weapons =
    [
        ["rhs_weap_m38",1]
	];

    _tmp_magazines =
    [
        ["rhsgref_5Rnd_762x54_m38",50],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_elasticBandage", 50],
		["ACE_quikclot", 50],
		["ACE_packingBandage", 50],
		["ACE_personalAidKit", 50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_atropine", 50],
		["ACE_salineIV_500",50],
		["ACE_bodyBag",10],
		["ACE_surgicalKit", 50],
		["ACE_tourniquet", 5]
	];
};
 
 //load availible to pilots only
 if (g_class == "helo") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L22A2",1],
		["UK3CB_BAF_L131A1",1]
    ];

	_tmp_magazines =
    [
        ["UK3CB_BAF_30Rnd",50],
		["UK3CB_BAF_30Rnd_T",50],
        ["UK3CB_BAF_17Rnd_9mm",15],
		["HandGrenade",5]
    ];
	_tmp_items =
	[
		["ACE_DAGR",1],
        ["ACE_MapTools",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["ACRE_PRC343",1],
		["rhsusf_ANPVS_14",1]
	];
};
 //load availible to pilot Crew only
 if (g_class == "helo2") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle",1],
		["rhsusf_weap_m1911a1",1]
    ];

	_tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["HandGrenade",5]
    ];
	_tmp_items =
	[
		["ACE_DAGR",1],
        ["ACE_MapTools",1],
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1],
		["ACRE_PRC117F",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

 //load availible to pilot Crew only
 if (g_class == "helo3") then {
	_tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle",1],
		["rhsusf_weap_m1911a1",1]
    ];

	_tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["HandGrenade",5]
    ];
	_tmp_items =
	[
		["ACE_DAGR",1],
        ["ACE_MapTools",1],
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1],
		["ACRE_PRC117F",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

 //load availible to pilot Crew only
 if (g_class == "jet") then {
	_tmp_weapons =
    [
        ["rhsusf_weap_m1911a1",1]
    ];

	_tmp_magazines =
    [
        ["rhsusf_mag_7x45acp_MHP",5]
    ];
	_tmp_items =
	[
		["ACE_DAGR",1],
		["ItemGPS",1],
		["B_IR_Grenade",1],
        ["ACE_MapTools",1],
		["ACRE_PRC148",1]
		
	];
};

//load avaible to armour commander only
 if (g_class == "armour_co") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle",1],
		["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["rhsusf_weap_m1911a1",1]
    ];

	_tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["HandGrenade",5]
    ];
	_tmp_items =
	[
		["ACE_DAGR",1],
        ["ACE_MapTools",1],
		["ACRE_PRC148",1],
		["rhsusf_acc_anpeq15_bk",1],
		["rhsusf_acc_eotech_552",1],
		["rhsusf_ANPVS_14",1],
		["ACRE_PRC117F",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

//load avaible to armor crew only
 if (g_class == "armour_cr") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle",1],
		["rhsusf_weap_m1911a1",1]
    ];

	_tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["HandGrenade",5]
    ];
	_tmp_items =
	[
        ["ACE_MapTools",1],
		["rhsusf_acc_anpeq15_bk",1],
		["rhsusf_acc_eotech_552",1],
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1],
		["ACRE_PRC117F",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

 //load availible to MERT Lead only
 if (g_class == "mert_sl") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_RIS",1],
		["UK3CB_BAF_L131A1",1]
    ];

	_tmp_magazines =
    [
        ["UK3CB_BAF_30Rnd",50],
		["UK3CB_BAF_30Rnd_T",50],
        ["UK3CB_BAF_17Rnd_9mm",15]
    ];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["ACE_fieldDressing",50],
		["ACE_elasticBandage", 50],
		["ACE_quikclot", 50],
		["ACE_packingBandage", 50],
		["ACE_personalAidKit", 50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_atropine", 50],
		["ACE_salineIV_500",50],
		["ACE_bodyBag",10],
		["ACE_surgicalKit", 50],
		["ACE_tourniquet", 5],
		["ACE_epinephrine",5],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["ACE_DAGR",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC117F",1],
		["UK3CB_BAF_LLM_IR_Black",1]
    ];
};

 //load availible to MERT only
 if (g_class == "mert") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_RIS",1],
		["UK3CB_BAF_L131A1",1]
    ];

	_tmp_magazines =
    [
        ["UK3CB_BAF_30Rnd",50],
		["UK3CB_BAF_30Rnd_T",50],
        ["UK3CB_BAF_17Rnd_9mm",15]
    ];

    _tmp_items = 
	[
        ["ACE_fieldDressing",50],
		["ACE_elasticBandage", 50],
		["ACE_quikclot", 50],
		["ACE_packingBandage", 50],
		["ACE_personalAidKit", 50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_atropine", 50],
		["ACE_salineIV_500",50],
		["ACE_bodyBag",10],
		["ACE_surgicalKit", 50],
		["ACE_tourniquet", 5],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
	    ["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

{
        _weapons set [count _weapons, _x];
} forEach _tmp_weapons;

{
        _magazines set [count _magazines, _x];
} forEach _tmp_magazines;

{
        _items set [count _items, _x];
} forEach _tmp_items;

{
        _backpacks set [count _backpacks, _x];
} forEach _tmp_backpacks;

refill_box = false;
// empty it.
clearWeaponCargo _box;
clearMagazineCargo _box;
clearItemCargo _box;
clearbackPackCargo _box;

// add in all weapons.
{_box addWeaponCargo [(_x select 0),(_x select 1)]} foreach _weapons;

// add in all magazines.
{_box addMagazineCargo [(_x select 0),(_x select 1)]} foreach _magazines;

//add in all items
{_box addItemCargo [(_x select 0),(_x select 1)]} foreach _items;

//add in all backpacks
{_box addBackpackCargo [(_x select 0),(_x select 1)]} foreach _backpacks;