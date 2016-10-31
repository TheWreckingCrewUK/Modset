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
_items = [["ACE_EarPlugs",1],["ACE_MapTools",1],["rhsusf_ANPVS_14",1],["ACE_Flashlight_XL50", 1],["ACE_IR_Strobe_Item",1],["ACE_HandFlare_White",5],["ACE_HandFlare_Green",5],["ACE_fieldDressing",10],["ACE_morphine",10],["ACE_elasticBandage",10],["ACE_quikclot",10],["ACE_packingBandage",10], ["ACE_tourniquet", 2]];
_backpacks = [];

_tmp_weapons = [];
_tmp_magazines = [];
_tmp_items = [];
_tmp_backpacks = [];

// load available to Section Commander only.
if (g_class == "alpha_sl") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_RIS",1],
        ["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["UK3CB_BAF_L131A1",1]
    ];

	_tmp_magazines =
    [
        ["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
        ["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5]
    ];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["ACE_epinephrine",5],
		["RKSL_optic_LDS",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_LLM_IR",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["ACE_DAGR",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC117F_ID_1",1],
		["itemCTAB",1],
		["UK3CB_BAF_LLM_IR_Black",1]
    ];
};

// load available to Rifleman only.
 if (g_class == "alpha_rf") then {
    _tmp_weapons =
    [
		["UK3CB_BAF_L85A2_RIS",1],
		["UK3CB_BAF_L128A1",1],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_m72a7",2],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["launch_NLAW_F",3],
		["UK3CB_BAF_Javelin_Slung_Tube",3],
		["UK3CB_BAF_M6",1],
		["UK3CB_BAF_Tripod",1],
		["UK3CB_BAF_L111A1",1],
		["UK3CB_BAF_L134A1",1]
    ];

    _tmp_magazines =
    [	
		["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
		["UK3CB_BAF_12G_Pellets",10],
		["UK3CB_BAF_12G_Slugs",10],
		["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5]
	];

	_tmp_items = 
	[
		["ACE_MapTools",1],
		["RKSL_optic_LDS",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_Javelin_CLU",1],
		["UK3CB_BAF_LLM_IR_Black",1],
		["UK3CB_BAF_32Rnd_40mm_G_Box",5],
		["UK3CB_BAF_100Rnd_127x99_Box",5],
		["UK3CB_BAF_1Rnd_60mm_Mo_Shells",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10]
	];
};

// load available to Grenadier only.
 if (g_class == "alpha_grn") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_UGL",1],
        ["ACE_Vector",1],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["launch_NLAW_F",3],
		["rhs_weap_m72a7",2],
		["UK3CB_BAF_M6",1],
		["UK3CB_BAF_Tripod",1],
		["UK3CB_BAF_L111A1",1],
		["UK3CB_BAF_L134A1",1]
	];

    _tmp_magazines =
    [           
		["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
		["UK3CB_BAF_9_17Rnd",15],
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
		["RKSL_optic_LDS",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_LLM_IR_Black",1],
		["UK3CB_BAF_32Rnd_40mm_G_Box",5],
		["UK3CB_BAF_100Rnd_127x99_Box",5],
		["UK3CB_BAF_1Rnd_60mm_Mo_Shells",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10]
	];
};

// load available to Automatic Rifleman only.
 if (g_class == "alpha_ar") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L110A2",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_m72a7",2]
	];

	_tmp_magazines =
   [            
		["UK3CB_BAF_556_200Rnd",20],
		["UK3CB_BAF_200Rnd_T",10],
        ["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["RKSL_optic_LDS",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

// load available to Rifleman only.
 if (g_class == "alpha_2ic") then {
    _tmp_weapons =
    [
		["UK3CB_BAF_L85A2_RIS",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_m72a7",2]
    ];

    _tmp_magazines =
    [	
		["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
		["UK3CB_BAF_762_100Rnd",5],
		["UK3CB_BAF_762_L42A1_20Rnd",10],
		["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5]
	];

	_tmp_items = 
	[
		["ACE_MapTools",1],
		["RKSL_optic_LDS",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

// load available to GPMG Gunner only.
 if (g_class == "alpha_mg") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L7A2",1],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_m72a7",4]
	];
       
    _tmp_magazines =
    [
        ["UK3CB_BAF_762_100Rnd",20],
		["UK3CB_BAF_762_100Rnd_T",10],
		["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5]
    ];
	
	_tmp_items = 
	[
		["ACE_MapTools",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC343",1]
	];
};
 
// load available to Marksman only.
 if (g_class == "alpha_mark") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L129A1_FGrip",1],
		["ACE_Vector",1],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_m72a7",2],
		["launch_NLAW_F",3],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["UK3CB_BAF_Javelin_Slung_Tube",3]
	];
       
    _tmp_magazines =
    [
        ["UK3CB_BAF_762_L42A1_20Rnd",25],
		["UK3CB_BAF_762_L42A1_20Rnd_T",10],			
		["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5]
    ];
		
	_tmp_items = 
	[
		["ACE_MapTools",1],
		["UK3CB_BAF_TA648_308",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_Javelin_CLU",1],
		["ACRE_PRC343",1]
	];	
};

// load available to Section Medic

 if (g_class == "alpha_med") then {
    _tmp_weapons =
    [
		["UK3CB_BAF_L85A2_RIS",1],
		["UK3CB_BAF_L131A1",1]
	];

    _tmp_magazines =
	[
		["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
        ["UK3CB_BAF_9_17Rnd",15],
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
		["ACE_tourniquet", 5],
		["RKSL_optic_LDS",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
	    ["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};
//class availible to Bravo Section Lead
if (g_class == "bravo_sl") then {
    _tmp_weapons =
    [
		["rhs_weap_m4a1_carryhandle_m203",1],
        ["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["rhsusf_weap_m9",1]
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
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_TA31F",1],
		["rhsusf_acc_anpeq15_bk",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_Eotech",1],
		["ACE_DAGR",1],
		["ACRE_PRC117F_ID_1",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["itemCTAB",1],
		["ACRE_PRC148",1]
    ];
};

//class availible to Bravo Team Lead
if (g_class == "bravo_tl") then {
    _tmp_weapons =
    [
		["rhs_weap_m4a1_carryhandle_m203",1],
        ["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["rhs_weap_m72a7",2],
		["rhsusf_weap_m9",1]
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
		["rhsusf_acc_anpeq15_bk",1],
		["UK3CB_BAF_TA31F",1],
		["UK3CB_BAF_Eotech",1],
		["ACE_DAGR",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_acc_compm4",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1]
    ];
};

// load available to Automatic Rifleman only.
 if (g_class == "bravo_rf") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4a1_carryhandle_grip",1],
		["rhs_weap_M590_8RD",1],
		["rhsusf_weap_m9",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["rhs_weap_m72a7",2],
		["CUP_launch_MAAWS",1],
		["UK3CB_BAF_M6",1]
	];

    _tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
        ["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["rhsusf_8Rnd_00Buck",10],
		["rhsusf_8Rnd_Slug",10],
		["CUP_MAAWS_HEDP_M",2],
		["CUP_MAAWS_HEAT_M",3],
		["HandGrenade",5]
		
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_TA31F",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["CUP_optic_MAAWS_Scope",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_1Rnd_60mm_Mo_Shells",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10]
	];
	
	_tmp_backpacks =
	[
		["RHS_M2_Gun_Bag",1],
		["RHS_M2_Tripod_Bag",1],
		["RHS_M2_MiniTripod_Bag",1],
		["RHS_Mk19_Gun_Bag",1],
		["RHS_Mk19_Tripod_Bag",1],
		["rhs_Tow_Gun_Bag",1],
		["rhs_TOW_Tripod_Bag",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "bravo_ar") then {
    _tmp_weapons =
    [
        ["rhs_weap_m249_pip",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["rhs_weap_m72a7",2],
		["rhsusf_weap_m9",1]
	];

    _tmp_magazines =
    [
		["rhsusf_100Rnd_556x45_soft_pouch",20],
		["rhsusf_200Rnd_556x45_soft_pouch",10],
		["rhs_200rnd_556x45_M_SAW",10],
		["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["rhsusf_acc_ELCAN",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACRE_PRC148",1]
	];
};

// load available to GREN only.
 if (g_class == "bravo_grn") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4a1_carryhandle_m203",1],
		["ACE_Vector",1],
		["rhsusf_weap_m9",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
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
		["ACRE_PRC148",1],
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
        ["rhs_weap_m14ebrri",1],
		["rhs_weap_m4a1_carryhandle_grip",1],
		["rhsusf_weap_m9",1],
		["ACE_Vector",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["rhs_weap_m72a7",2],
		["UK3CB_BAF_Javelin_Slung_Tube",3]		
	];
       
    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
		["rhsusf_20Rnd_762x51_m118_special_Mag",25],
        ["rhsusf_mag_15Rnd_9x19_FMJ",15],
		["HandGrenade",5]
    ];
		
	_tmp_items = 
	[
		["ACE_MapTools",1],
		["rhsusf_acc_compm4",1],
		["rhsusf_acc_LEUPOLDMK4",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["bipod_01_F_blk",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_TA31F",1],
		["UK3CB_BAF_Javelin_CLU",1],
		["rhsusf_acc_anpeq15_bkA",1]
	
	];
};
//class availible to bravo medic only
 if (g_class == "bravo_med") then {
    _tmp_weapons =
    [
		["rhs_weap_m4a1_carryhandle_grip",1],
	    ["rhsusf_weap_m9", 1]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
        ["rhsusf_mag_15Rnd_9x19_FMJ",15],
        ["CUP_15Rnd_9x19_M9",15],
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
		["ACE_tourniquet", 5],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_compm4",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACRE_PRC148",1]
	];
};

//loadout availible to charlie section leader
 if (g_class == "charlie_sl") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_carryhandle_M203",1],
        ["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["rhsusf_weap_m1911a1",1]
    ];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
		["1Rnd_Smoke_Grenade_shell", 10],
	    ["1Rnd_SmokeRed_Grenade_shell", 10],
	    ["1Rnd_SmokeGreen_Grenade_shell", 10],
	    ["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
        ["1Rnd_SmokeBlue_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
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
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bk",1],
		["rhsusf_acc_compm4",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["1Rnd_HE_Grenade_shell", 40],
		["ACE_DAGR",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC117F_ID_1",1],
		["UK3CB_BAF_TA31F",1],
		["itemCTAB",1],
		["ACRE_PRC148",1]
	];
};
//loadout availible to charlie Team leader
 if (g_class == "charlie_tl") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_carryhandle_M203",1],
        ["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["rhs_weap_m72a7",2],
		["rhsusf_weap_m1911a1",1]
    ];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
		["1Rnd_HE_Grenade_shell", 40],
	    ["1Rnd_Smoke_Grenade_shell", 10],
	    ["1Rnd_SmokeRed_Grenade_shell", 10],
	    ["1Rnd_SmokeGreen_Grenade_shell", 10],
	    ["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
        ["1Rnd_SmokeBlue_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
        ["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
	];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["UK3CB_BAF_TA31F_3D",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bk",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["UK3CB_BAF_TA31F",1],
		["ACE_M26_Clacker",1]
	];
};

// load available to Section Rifleman only.
 if (g_class == "charlie_rf") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_grip",1],
		["rhsusf_weap_m1911a1",1],
		["UK3CB_BAF_Javelin_Slung_Tube",3],
		["rhs_weap_smaw",1],
		["rhs_weap_M590_8RD",1],
		["rhs_weap_m32",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
        ["rhsusf_mag_7x45acp_MHP",15],
		["rhsusf_8Rnd_00Buck",10],
		["rhsusf_8Rnd_Slug",10],
		["rhsusf_8Rnd_HE",10],
		["rhsusf_8Rnd_FRAG",10],
		["rhsusf_mag_6Rnd_M441_HE",5],
		["rhsusf_mag_6Rnd_M433_HEDP",5],
		["rhsusf_mag_6Rnd_M576_Buckshot",5],
		["rhsusf_mag_6Rnd_m4009",5],
		["rhsusf_mag_6Rnd_M585_white",5],
		["rhsusf_mag_6Rnd_m661_green",5],
		["rhsusf_mag_6Rnd_M714_white",5],
		["rhsusf_mag_6Rnd_M715_green",5],
		["rhs_mag_smaw_HEAA",3],
		["rhs_mag_smaw_HEDP",3],
		["rhs_mag_smaw_SR",8],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_TA31F",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_Javelin_CLU",1],
		["rhs_weap_optic_smaw",1],
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

//usmc charlie ar
if (g_class == "charlie_ar") then {
    _tmp_weapons =
    [
        ["rhs_weap_m249_pip",1],
		["rhs_weap_m27iar",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
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
		["rhsusf_acc_grip1",1],
		["ACRE_PRC148",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "charlie_aar") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_grip",1],
		["rhsusf_weap_m1911a1",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["rhs_weap_m72a7",2],
		["UK3CB_BAF_M6",1]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
		["rhsusf_100Rnd_556x45_soft_pouch",10],
		["rhsusf_200Rnd_556x45_soft_pouch",10],
		["rhs_200rnd_556x45_M_SAW",5],
        ["rhsusf_mag_7x45acp_MHP",15],
		["rhs_mag_smaw_HEAA",5],
		["rhs_mag_smaw_HEDP",5],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_compm4",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_TA31F",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_1Rnd_60mm_Mo_Shells",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10],
		["UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10]
	];
	
	_tmp_backpacks =
	[
		["RHS_M2_Gun_Bag",1],
		["RHS_M2_Tripod_Bag",1],
		["RHS_M2_MiniTripod_Bag",1],
		["RHS_Mk19_Gun_Bag",1],
		["RHS_Mk19_Tripod_Bag",1],
		["rhs_Tow_Gun_Bag",1],
		["rhs_TOW_Tripod_Bag",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "charlie_mg") then {
    _tmp_weapons =
    [
        ["rhs_weap_m240B",1],
		["rhsusf_weap_m1911a1",1]
	];

    _tmp_magazines =
    [
		["rhsusf_100Rnd_762x51",20],
		["rhsusf_100Rnd_762x51_m62_tracer",10],
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
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC148",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "charlie_mgass") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_grip",1],
		["rhsusf_weap_m1911a1",1],
		["rhs_weap_M136_hp",2],
		["rhs_weap_M136_hedp",2],
		["rhs_weap_m72a7",2]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
		["rhsusf_100Rnd_762x51",10],
		["rhsusf_100Rnd_762x51_m62_tracer",10],
        ["rhsusf_mag_7x45acp_MHP",15],
		["HandGrenade",5]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["UK3CB_BAF_TA31F_3D",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_TA31F",1],
		["ACRE_PRC148",1]
	];
};
 if (g_class == "charlie_med") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_grip",1],
		["rhsusf_weap_m1911a1",1]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
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
		["ACE_tourniquet", 5],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15_bkA",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_TA31F",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["ACRE_PRC148",1]
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
        ["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
        ["UK3CB_BAF_9_17Rnd",15],
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
		["itemCTAB",1],
		["rhsusf_ANPVS_14",1]
	];
};
 //load availible to pilot Crew only
 if (g_class == "helo2") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle",1],
		["rhsusf_weap_m9",1]
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
		["itemCTAB",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

 //load availible to pilot Crew only
 if (g_class == "helo3") then {
	_tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle",1],
		["rhsusf_weap_m9",1]
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
		["itemCTAB",1],
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
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1],
		["ACRE_PRC117F",1],
		["itemCTAB",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

if (g_class == "jtac") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_RIS",1],
        ["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["UK3CB_BAF_Soflam_Laserdesignator",1],
		["UK3CB_BAF_L131A1",1]
    ];

	_tmp_magazines =
    [
        ["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
        ["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5]
    ];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["ACE_epinephrine",5],
		["UK3CB_BAF_SUSAT",1],
		["UK3CB_BAF_LLM_IR",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["ACE_DAGR",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC117F",1],
		["itemCTAB",1],
		["UK3CB_BAF_LLM_IR_Black",1]
    ];
};

if (g_class == "fac") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_UGL",1],
        ["ACE_Vector",1],
		["ACE_MX2A",1],
		["Binocular",1],
		["UK3CB_BAF_Soflam_Laserdesignator",1],
		["UK3CB_BAF_L131A1",1]
    ];

	_tmp_magazines =
    [
        ["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
        ["UK3CB_BAF_9_17Rnd",15],
		["HandGrenade",5],
		["UK3CB_BAF_1Rnd_HE_Grenade_Shell",10],
		["UGL_FlareCIR_F",10],
		["UGL_FlareWhite_F",10],
		["1Rnd_Smoke_Grenade_shell",10],
		["1Rnd_SmokeRed_Grenade_shell",10],
		["1Rnd_SmokeGreen_Grenade_shell",10],
		["1Rnd_SmokeBlue_Grenade_shell",10]
    ];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
		["ACE_epinephrine",5],
		["UK3CB_BAF_SUSAT",1],
		["UK3CB_BAF_LLM_IR",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["ACE_DAGR",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC117F",1],
		["itemCTAB",1],
		["UK3CB_BAF_LLM_IR_Black",1]
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
		["rhsusf_weap_m9",1]
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
		["itemCTAB",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

//load avaible to armor crew only
 if (g_class == "armour_cr") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle",1],
		["rhsusf_weap_m9",1]
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
        ["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
        ["UK3CB_BAF_9_17Rnd",15]
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
		["RKSL_optic_LDS",1],
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
        ["UK3CB_BAF_556_30Rnd",50],
		["UK3CB_BAF_556_30Rnd_T",50],
        ["UK3CB_BAF_9_17Rnd",15]
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
		["RKSL_optic_LDS",1],
		["UK3CB_BAF_SpecterLDS_Dot",1],
	    ["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["itemCTAB",1],
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