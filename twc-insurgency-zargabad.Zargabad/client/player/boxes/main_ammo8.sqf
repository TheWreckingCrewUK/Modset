/*
        Different Ammobox v 1.0
        by Demonized.

        1: place a marker named DMZ_DA anywhere you want the players to see their ammobox, all will see their box in same position.
        2: place this in init line of any unit.
                _null = this execVM "DMZ_DA.sqf";
        3: save this script as DMZ_DA.sqf and place it in your mission folder.

        For more classnames on ammoboxes or weapons and magazines go here:
                http://forums.bistudio.com/showthread.php?t=73241&page=2
				edited by FakeMatty
*/

_marker = "crate8";  // marker used to spawn.
_boxType = "CUP_BAF_VehicleBox";  // the type of ammobox used.
_timer = 240;  // time in seconds until box is refilled.
 
_weapons = [];
_magazines = [["SmokeShell",5], ["SmokeShellYellow",5], ["SmokeShellRed",5], ["SmokeShellGreen",5], ["SmokeShellPurple",5], ["SmokeShellBlue",5], ["SmokeShellOrange",5], ["Chemlight_green",5], ["Chemlight_yellow",5], ["Chemlight_red",5], ["Chemlight_blue",5]];
_items = [["ACE_EarPlugs",1],["ACE_MapTools",1],["rhsusf_ANPVS_14",1],["ACE_Flashlight_XL50", 1],["ACE_IR_Strobe_Item",1],["ACE_HandFlare_White",5],["ACE_HandFlare_Green",5],["ACE_CableTie",2],["ACE_fieldDressing",10],["ACE_morphine",10],["ACE_elasticBandage",10],["ACE_quikclot",10],["ACE_packingBandage",10], ["ACE_tourniquet", 2],["ACE_SpraypaintGreen",1]];

_tmp_weapons = [];
_tmp_magazines = [];
_tmp_items = [];

// load available to Section Commander only.
if (g_class == "BAF_SL") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_RIS",1],
        ["ACE_Vector",1],
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
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACE_epinephrine",5],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_LLM_IR",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["ACE_DAGR",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_MX2A",1],
		["ACRE_PRC117F_ID_1",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_LLM_IR_Black",1]
    ];
};

// load available to Rifleman only.
 if (g_class == "BAF_RF") then {
    _tmp_weapons =
    [
		["UK3CB_BAF_L85A2_RIS",1],
		["UK3CB_BAF_L128A1",1],
		["UK3CB_BAF_L131A1",1],
		["Binocular",1],
		["rhs_weap_m72a7",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["UK3CB_BAF_NLAW_Launcher",3],
		["UK3CB_BAF_Javelin_Slung_Tube",3]
    ];

    _tmp_magazines =
    [	
		["UK3CB_BAF_30Rnd",50],
		["UK3CB_BAF_30Rnd_T",50],
		["UK3CB_BAF_L128A1_Pellets",10],
		["UK3CB_BAF_L128A1_Slugs",10],
		["UK3CB_BAF_17Rnd_9mm",15]
	];

	_tmp_items = 
	[
		
		["ACE_fieldDressing",20],
		["ACE_morphine",10],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_Javelin_CLU",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

// load available to Grenadier only.
 if (g_class == "BAF_GRN") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L85A2_UGL",1],
        ["ACE_Vector",1],
		["UK3CB_BAF_L131A1",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["UK3CB_BAF_NLAW_Launcher",3]
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
		["1Rnd_SmokeBlue_Grenade_shell", 10]
    ];

	_tmp_items =
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

// load available to Automatic Rifleman only.
 if (g_class == "BAF_AR") then {
    _tmp_weapons =
    [
        ["UK3CB_BAF_L110A2",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["Binocular",1],
		["UK3CB_BAF_L131A1",1],
		["rhs_weap_m72a7",1]
	];

	_tmp_magazines =
   [            
		["UK3CB_BAF_200Rnd",20],
		["UK3CB_BAF_200Rnd_T",10],
        ["UK3CB_BAF_17Rnd_9mm",15]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

// load available to Section Medic

 if (g_class == "BAF_MED") then {
    _tmp_weapons =
    [
		["UK3CB_BAF_L85A2_RIS",1],
		["Binocular",1],
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
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["ACE_bodyBag",10],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
	    ["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_LLM_IR",1],
		["STKR_Predator",1],
		["ACRE_PRC343",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};

//class availible to Bravo Section Lead
if (g_class == "US_SL") then {
    _tmp_weapons =
    [
		["rhs_weap_m4a1_carryhandle_m203",1],
        ["ACE_Vector",1],
		["CUP_hgun_M9",1]
    ];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
        ["CUP_15Rnd_9x19_M9",15],
		["1Rnd_HE_Grenade_shell", 40],
	    ["1Rnd_Smoke_Grenade_shell", 10],
	    ["1Rnd_SmokeRed_Grenade_shell", 10],
	    ["1Rnd_SmokeGreen_Grenade_shell", 10],
	    ["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
        ["1Rnd_SmokeBlue_Grenade_shell", 10]
    ];

    _tmp_items = 
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_TA31F_3D",1],
		["rhsusf_acc_anpeq15",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_Eotech",1],
		["ACE_DAGR",1],
		["ACRE_PRC117F_ID_1",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACE_MX2A",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC148",1]
    ];
};

// load available to Automatic Rifleman only.
 if (g_class == "US_RF") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4a1_carryhandle_grip",1],
		["rhs_weap_M590_8RD",1],
		["Binocular",1],
		["CUP_hgun_M9",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",4],
		["CUP_launch_MAAWS",1]
	];

    _tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
        ["CUP_15Rnd_9x19_M9",15],
		["rhsusf_8Rnd_00Buck",10],
		["rhsusf_8Rnd_Slug",10],
		["CUP_MAAWS_HEDP_M",2],
		["CUP_MAAWS_HEAT_M",3]
		
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["rhsusf_acc_anpeq15A",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["CUP_optic_MAAWS_Scope",1],
		["rhsusf_acc_compm4",1]
	];
};

// load available to Section 2IC only.
 if (g_class == "US_AR") then {
    _tmp_weapons =
    [
        ["rhs_weap_m249_pip",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["Binocular",1],
		["CUP_hgun_M9",1],
		["rhsusf_weap_m1911a1",1]
	];

    _tmp_magazines =
    [
		["rhsusf_100Rnd_556x45_soft_pouch",20],
		["rhs_200rnd_556x45_M_SAW",10],
		["rhsusf_200Rnd_556x45_soft_pouch",10],
		["CUP_15Rnd_9x19_M9",15],
		["rhsusf_mag_7x45acp_MHP",15]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_acc_ELCAN",1],
		["rhsusf_acc_anpeq15A",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACRE_PRC148",1]
	];
};

// load available to GREN only.
 if (g_class == "US_GRN") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4a1_carryhandle_m203",1],
		["ACE_Vector",1],
		["CUP_hgun_M9",1],
		["CUP_hgun_M9",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2]
	];

    _tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
		["CUP_15Rnd_9x19_M9",15],
		["1Rnd_HE_Grenade_shell", 40],
	    ["1Rnd_Smoke_Grenade_shell", 10],
	    ["1Rnd_SmokeRed_Grenade_shell", 10],
	    ["1Rnd_SmokeGreen_Grenade_shell", 10],
	    ["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
        ["1Rnd_SmokeBlue_Grenade_shell", 10]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15A",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["rhsusf_acc_compm4",1],
		["ACRE_PRC148",1]
	];
};

//class availible to bravo medic only
 if (g_class == "US_MED") then {
    _tmp_weapons =
    [
		["rhs_weap_m4a1_carryhandle_grip",1],
		["Binocular",1],
	    ["rhsusf_weap_m1911a1", 1]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
        ["CUP_15Rnd_9x19_M9",15]
    ];

	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACE_bodyBag",10],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_compm4",1],
		["rhsusf_acc_anpeq15A",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["ACRE_PRC148",1]
	];
};

//loadout availible to charlie section leader
 if (g_class == "USMC_SL") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_carryhandle_M203",1],
        ["ACE_Vector",1],
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
        ["rhsusf_mag_7x45acp_MHP",15]
	];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15",1],
		["rhsusf_acc_compm4",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["1Rnd_HE_Grenade_shell", 40],
		["ACE_DAGR",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC117F_ID_1",1],
		["ACE_MX2A",1],
		["ACRE_PRC148",1]
	];
};

// load available to Section Rifleman only.
 if (g_class == "USMC_RF") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_grip",1],
		["rhsusf_weap_m1911a1",1],
		["UK3CB_BAF_Javelin_Slung_Tube",3],
		["CUP_launch_Mk153Mod0",1],
		["rhs_weap_M590_8RD",1],
		["Binocular",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
        ["rhsusf_mag_7x45acp_MHP",15],
		["rhsusf_8Rnd_00Buck",10],
		["rhsusf_8Rnd_Slug",10],
		["CUP_SMAW_HEAA_M",3],
		["CUP_SMAW_HEDP_M",3],
		["CUP_SMAW_Spotting",8]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["UK3CB_BAF_TA31F_3D",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15A",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["UK3CB_BAF_Javelin_CLU",1],
		["CUP_optic_SMAW_Scope",1]
	];
};

// load available to GREN only.
 if (g_class == "USMC_GRN") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_carryhandle_M203",1],
		["ACE_Vector",1],
		["CUP_hgun_M9",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2]
	];

    _tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
		["CUP_15Rnd_9x19_M9",15],
		["1Rnd_HE_Grenade_shell", 40],
	    ["1Rnd_Smoke_Grenade_shell", 10],
	    ["1Rnd_SmokeRed_Grenade_shell", 10],
	    ["1Rnd_SmokeGreen_Grenade_shell", 10],
	    ["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
        ["1Rnd_SmokeBlue_Grenade_shell", 10]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["UK3CB_BAF_TA31F_3D",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15A",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ucp",1],
		["rhsusf_acc_compm4",1],
		["ACRE_PRC148",1]
	];
};


//usmc charlie ar
if (g_class == "USMC_AR") then {
    _tmp_weapons =
    [
        ["rhs_weap_m249_pip",1],
		["rhs_weap_m27iar",1],
		["Binocular",1],
		["UK3CB_BAF_AT4_CS_AP_Launcher",2],
		["rhsusf_weap_m1911a1",1]
	];

    _tmp_magazines =
    [
        ["rhsusf_100Rnd_556x45_soft_pouch",20],
		["rhs_200rnd_556x45_M_SAW",10],
		["rhsusf_200Rnd_556x45_soft_pouch",10],
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
        ["rhsusf_mag_7x45acp_MHP",15]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
		["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_acc_ELCAN",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_acc_anpeq15A",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["bipod_01_F_blk",1],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACRE_PRC148",1]
	];
};

 if (g_class == "USMC_MED") then {
    _tmp_weapons =
    [
        ["rhs_weap_m16a4_grip",1],
		["Binocular",1],
		["rhsusf_weap_m1911a1",1]
	];

    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",20],
        ["rhsusf_mag_7x45acp_MHP",15]
    ];

	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["ACE_bodyBag",10],
		["UK3CB_BAF_TA31F_3D",1],
		["UK3CB_BAF_Eotech",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["rhsusf_acc_anpeq15A",1],
		["rhsusf_acc_compm4",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["rhsusf_assault_eagleaiii_ocp",1],
		["ACRE_PRC148",1]
	];
};

// load available to Section Commander only.
if (g_class == "ANA_SL") then {
    _tmp_weapons =
    [
        ["CUP_arifle_AK74",1],
		["binocular",1]
	];
	_tmp_magazines =
    [
        ["CUP_30Rnd_545x39_AK_M",50]
	];
	_tmp_items = 
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1]
	];
};

// load available to Rifleman only.
 if (g_class == "ANA_RF") then {
    _tmp_weapons =
    [
		["CUP_arifle_AK74",1]
    ];
	_tmp_magazines =
    [
		["CUP_30Rnd_545x39_AK_M",50]
	];
	_tmp_items = 
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10]
	];
};

// load available to Grenadier only.
 if (g_class == "ANA_AT") then {
    _tmp_weapons =
    [
        ["CUP_arifle_AK74",1],
		["rhs_weap_rpg7",1]
	];
	_tmp_magazines =
    [
		["CUP_30Rnd_545x39_AK_M",50],
		["rhs_rpg7_PG7VL_mag",3],
		["rhs_rpg7_OG7V_mag",3]
    ];
	_tmp_items =
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10]
	];
};

// load available to Automatic Rifleman only.
 if (g_class == "ANA_MG") then {
    _tmp_weapons =
    [
        ["rhs_weap_pkm",1]
	];
	_tmp_magazines =
    [
		["rhs_100Rnd_762x54mmR",20]
    ];
	_tmp_items =
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10]
	];
};

// load available to Section Medic
 if (g_class == "ANA_MED") then {
    _tmp_weapons =
    [
        ["CUP_arifle_AK74",1]
	];
	_tmp_magazines =
    [
        ["CUP_30Rnd_545x39_AK_M",50]
    ];
	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["ACE_bodyBag",10]
	];
};

// load available to Section Commander only.
if (g_class == "CZR_SL") then {
    _tmp_weapons =
    [
        ["CUP_arifle_CZ805_A1",1],
		["ACE_Vector",1]
	];
	_tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10]
	];
	_tmp_items = 
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["ACE_DAGR",1],
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_MX2A",1],
		["UK3CB_BAF_LLM_Flashlight_Black",1],
		["CUP_optic_ZDDot",1],
		["rhsusf_acc_ACOG",1],
		["ACRE_PRC117F_ID_1",1]
	];
};

// load available to Rifleman only.
 if (g_class == "CZR_RF") then {
    _tmp_weapons =
    [
		["CUP_arifle_CZ805_A1",1],
		["Binocular",1],
		["rhs_weap_rpg7",1],
		["UK3CB_BAF_Javelin_Slung_Tube",3]
    ];
	_tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
		["CUP_PG7V_M",15],
		["rhs_rpg7_PG7VL_mag",3],
		["rhs_rpg7_OG7V_mag",3]
	];
	_tmp_items = 
	[
		["ACE_MapTools",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
        ["ACE_fieldDressing",20],
		["ACRE_PRC148",1],
		["UK3CB_BAF_LLM_Flashlight_Black",1],
		["CUP_optic_ZDDot",1],
		["rhsusf_acc_ACOG",1],
		["UK3CB_BAF_Javelin_CLU",1],
		["rhs_acc_pgo7v",1],
        ["ACE_morphine",10]
	];
};

// load available to Grenadier only.
 if (g_class == "CZR_GRN") then {
    _tmp_weapons =
    [
        ["CUP_arifle_CZ805_GL",1],
		["ACE_Vector",1]
	];
	_tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
		["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
		["1Rnd_SmokeBlue_Grenade_shell", 10]
    ];
	_tmp_items =
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_LLM_Flashlight_Black",1],
		["CUP_optic_ZDDot",1],
		["rhsusf_acc_ACOG",1],
		["UK3CB_BAF_G_Tactical_Black",1],
        ["ACE_morphine",10]
	];
};

// load available to Automatic Rifleman only.
 if (g_class == "CZR_MG") then {
    _tmp_weapons =
    [
        ["CUP_lmg_M249_E2",1],
		["Binocular",1]
	];
	_tmp_magazines =
    [
		["rhsusf_100Rnd_556x45_soft_pouch",20],
		["rhs_200rnd_556x45_M_SAW",10],
		["rhsusf_200Rnd_556x45_soft_pouch",10]
    ];
	_tmp_items =
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_LLM_Flashlight_Black",1],
		["CUP_optic_ElcanM145",1],
		["UK3CB_BAF_Eotech",1],
		["UK3CB_BAF_G_Tactical_Black",1],
        ["ACE_morphine",10]
	];
};

// load available to Section Medic
 if (g_class == "CZR_MED") then {
    _tmp_weapons =
    [
        ["CUP_arifle_CZ805_A1",1],
		["Binocular",1]
	];
	_tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",10]
    ];
	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACE_bloodIV",50],
		["ACRE_PRC148",1],
		["UK3CB_BAF_LLM_Flashlight_Black",1],
		["CUP_optic_ZDDot",1],
		["rhsusf_acc_ACOG",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_bodyBag",10]
	];
};

// load available to Section Commander only.
if (g_class == "GER_SL") then {
    _tmp_weapons =
		[
		["CUP_arifle_G36A",1],
		["ACE_Vector",1],
		["CUP_hgun_Glock17",1]
    ];
    _tmp_magazines =
	[
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["CUP_17Rnd_9x19_glock17",15]
	];
	_tmp_items = 
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_DAGR",1],
		["ACE_MX2A",1],
		["ACRE_PRC148",1]
	];
};

// load available to Rifleman only.
 if (g_class == "GER_RF") then {
    _tmp_weapons =
    [
		["CUP_arifle_G36A",1],
		["CUP_sgun_M1014",1],
		["Binocular",1],
		["CUP_hgun_Glock17",1],
		["CUP_launch_MAAWS",1],
		["CUP_launch_M136",2]
	];
	_tmp_magazines =
    [								
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
		["CUP_8Rnd_B_Beneli_74Slug",10],
		["CUP_8Rnd_B_Beneli_74Pellets",10],
		["CUP_MAAWS_HEAT_M",5],
		["CUP_MAAWS_HEDP_M",5],
        ["CUP_17Rnd_9x19_glock17",15]
	];
	_tmp_items = 
	[
		["ACE_MapTools",1],
		["ACE_fieldDressing",20],
		["ACE_morphine",10],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["CUP_optic_MAAWS_Scope",1],
		["ACRE_PRC148",1]
	];
};

// load available to Grenadier only.
 if (g_class == "GER_ASS") then {
    _tmp_weapons =
    [
        ["CUP_arifle_G36A",1],
		["Binocular",1],
		["CUP_hgun_Glock17",1],
		["CUP_launch_M136",2]
	];
	_tmp_magazines =
    [            
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
		["CUP_100Rnd_556x45_BetaCMag",10],
		["CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",10],
		["CUP_17Rnd_9x19_glock17",15]
    ];
	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_ANPVS_14",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_IR_Strobe_Item",1],
		["ACRE_PRC148",1]
	];
};

// load available to Automatic Rifleman only.
 if (g_class == "GER_AR") then {
    _tmp_weapons =
    [
        ["CUP_arifle_MG36",1],
		["Binocular",1],
		["CUP_hgun_Glock17",1],
		["CUP_launch_M136",2]
	];
	_tmp_magazines =
    [            
		["CUP_100Rnd_556x45_BetaCMag",10],
		["CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag",10],
        ["CUP_17Rnd_9x19_glock17",15]
    ];
	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["CUP_optic_ACOG",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["CUP_optic_HoloBlack",1],
		["ACRE_PRC148",1],
		["UK3CB_BAF_Eotech",1]
		
	];
};

// load available to Section Medic
 if (g_class == "GER_MED") then {
    _tmp_weapons =
    [
		["CUP_arifle_G36A",1],
		["Binocular",1],
		["CUP_hgun_Glock17",1]
	];
	_tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["CUP_17Rnd_9x19_glock17",15]
    ];
	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["rhsusf_ANPVS_14",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_IR_Strobe_Item",1],
		["ACE_bodyBag",10],
		["ACRE_PRC148",1]
	];
};

// load available to SNIPER only.
 if (g_class == "BAF_SN") then {
    _tmp_weapons =
    [
		["UK3CB_BAF_L115A3_Desert",1],
		["ACE_Vector",1],
		["UK3CB_BAF_L131A1",1]
    ];

    _tmp_magazines =
    [	
		["UK3CB_BAF_L115A3_Mag",50],
		["UK3CB_BAF_17Rnd_9mm",15]
	];

	_tmp_items = 
	[
		
		["ACE_fieldDressing",20],
		["ACE_morphine",10],
		["STKR_Predator",1],
		["ACRE_PRC343",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_Kestrel4500",1],
		["ACE_RangeCard",1],
		["UK3CB_BAF_SB31250_Desert",1],
		["ACE_SpottingScope",1]
	];
};

// load available to SPOTTER only.
 if (g_class == "BAF_SP") then {
    _tmp_weapons =
    [
		["UK3CB_BAF_L85A2_RIS",1],
		["ACE_Vector",1],
		["UK3CB_BAF_L131A1",1]
    ];

    _tmp_magazines =
    [	
		["UK3CB_BAF_L115A3_Mag",10],
		["UK3CB_BAF_30Rnd",50],
		["UK3CB_BAF_30Rnd_T",50],
		["UK3CB_BAF_17Rnd_9mm",15]
	];

	_tmp_items = 
	[
		
		["ACE_fieldDressing",20],
		["ACE_morphine",10],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_LLM_IR",1],
		["UK3CB_BAF_Eotech",1],
		["STKR_Predator",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACRE_PRC343",1],
		["UK3CB_BAF_G_Tactical_Black",1],
		["ACE_Kestrel4500",1],
		["ACE_RangeCard",1],
		["ACE_SpottingScope",1],
		["ACE_MX2A",1],
		["ACRE_PRC117F_ID_1",1],
		["UK3CB_BAF_LLM_IR_Black",1]
	];
};
 
 //load availible to pilots only
 if (g_class == "PLT") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle_mstock",1],
		["rhsusf_weap_m9",1]
    ];

	_tmp_magazines =
    [
        ["rhs_mag_30Rnd_556x45_Mk318_Stanag",50],
		["rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",50],
        ["rhsusf_mag_15Rnd_9x19_JHP",15]
    ];
	_tmp_items =
	[
		["ACE_DAGR",1],
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1]
	];
};
 //load availible to pilot Crew only
 if (g_class == "PLT_CREW") then {
    _tmp_weapons =
    [
        ["rhs_weap_m4_carryhandle_mstock",1],
		["rhsusf_weap_m9",1]
    ];

	_tmp_magazines =
    [
        ["rhs_mag_30Rnd_556x45_Mk318_Stanag",50],
		["rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",50],
        ["rhsusf_mag_15Rnd_9x19_JHP",15]
    ];
	_tmp_items =
	[
		["ACE_DAGR",1],
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["rhsusf_ANPVS_14",1],
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1]
		
	];
};

//load avaible to armour commander only
 if (g_class == "ARMR_CO") then {
    _tmp_weapons =
	[
        ["UK3CB_BAF_L85A2_RIS",1],
        ["ACE_Vector",1],
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
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["ACRE_PRC343",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_LLM_IR",1],
		["rhsusf_ANPVS_14",1]
	];
};

//load avaible to armor crew only
 if (g_class == "ARMR_CREW") then {
    _tmp_weapons =
	[
        ["UK3CB_BAF_L85A2_RIS",1],
        ["ACE_Vector",1],
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
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACRE_PRC148",1],
		["rhsusf_ANPVS_14",1],
		["ACE_IR_Strobe_Item",1],
		["UK3CB_BAF_SpecterLDS_Dot_3D",1],
		["UK3CB_BAF_LLM_IR",1],
		["ACRE_PRC343",1],
		["rhsusf_ANPVS_14",1]
	];
};




// load available to Section Commander only.
if (g_class == "POL_SL") then {
    _tmp_weapons =
    [
        ["ACC_Beryl_08_des",1],
        ["ACE_Vector",1],
		["ACC_Wist_94",1]
    ];

	_tmp_magazines =
    [
        ["ACC_30Rnd_556x45_Beryl",50],
		["ACC_30Rnd_556x45_Beryl_T",50],
        ["ACC_16Rnd_9x19_Wist_Mag",15]
    ];

    _tmp_items = 
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACE_epinephrine",5],
		["FHQ_optic_ACOG_tan",1],
		["FHQ_acc_ANPEQ15",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["STKR_Predator",1],
		["ACE_DAGR",1],
		["ACRE_PRC148",1]
    ];
};

// load available to Rifleman only.
 if (g_class == "POL_RF") then {
    _tmp_weapons =
    [
		["ACC_Beryl_08_des",1],
		["UK3CB_BAF_L128A1",1],
		["ACC_Wist_94",1],
		["UK3CB_BAF_AT4_AP_Launcher",2]
    ];

    _tmp_magazines =
    [	
		["ACC_30Rnd_556x45_Beryl",50],
		["ACC_30Rnd_556x45_Beryl_T",50],
		["UK3CB_BAF_L128A1_Pellets",10],
		["UK3CB_BAF_L128A1_Slugs",10],
		["ACC_16Rnd_9x19_Wist_Mag",15]
	];

	_tmp_items = 
	[
		["ACE_MapTools",1],
		["ACE_fieldDressing",20],
		["ACE_morphine",10],
		["FHQ_optic_ACOG_tan",1],
		["FHQ_acc_ANPEQ15",1],
		["STKR_Predator",1],
		["ACRE_PRC148",1]
	];
};

// load available to Grenadier only.
 if (g_class == "POL_GRN") then {
    _tmp_weapons =
    [
        ["ACC_Beryl_08_des_GL",1],
        ["ACE_Vector",1],
		["ACC_Wist_94",1],
		["UK3CB_BAF_AT4_AP_Launcher",2]
	];

    _tmp_magazines =
    [           
		["ACC_30Rnd_556x45_Beryl",50],
		["ACC_30Rnd_556x45_Beryl_T",50],
		["ACC_16Rnd_9x19_Wist_Mag",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
		["1Rnd_SmokePurple_Grenade_shell", 10],
		["1Rnd_SmokeBlue_Grenade_shell", 10]
    ];

	_tmp_items =
	[
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["FHQ_optic_ACOG_tan",1],
		["FHQ_acc_ANPEQ15",1],
		["STKR_Predator",1],
		["ACRE_PRC148",1]
	];
};

// load available to Automatic Rifleman only.
 if (g_class == "POL_AR") then {
    _tmp_weapons =
    [
        ["ACC_ukm_2000p_des",1],
		["UK3CB_BAF_AT4_AP_Launcher",2],
		["ACC_Wist_94",1]	 
	];

	_tmp_magazines =
   [    
		["ACC_250Rnd_762x51_ukm",10],
		["ACC_250Rnd_762x51_ukm_T",10],
        ["ACC_16Rnd_9x19_Wist_Mag",15]
    ];

	_tmp_items =
	[
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["FHQ_optic_ACOG_tan",1],
		["STKR_Predator",1],
		["ACRE_PRC148",1]
	];
};

// load available to Section Medic

 if (g_class == "POL_MED") then {
    _tmp_weapons =
    [
		["ACC_Beryl_08_des",1],
		["ACC_Wist_94",1]
	];

    _tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["ACC_16Rnd_9x19_Wist_Mag",15]
    ];

	_tmp_items =
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["ACE_bodyBag",10],
		["FHQ_optic_ACOG_tan",1],
	    ["FHQ_acc_ANPEQ15",1],
		["STKR_Predator",1],
		["ACRE_PRC148",1]
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


// create and fill the box.
_box = _boxType createVehicleLocal (getMarkerPos _marker);
_box setPosATL (getMarkerPos _marker);
_box allowDamage false;
while {true} do {
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

        {_box addItemCargo [(_x select 0),(_x select 1)]} foreach _items;



        // wait x amount of seconds then refill box.
        sleep _timer;
};
