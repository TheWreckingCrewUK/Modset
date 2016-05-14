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
 
//_marker = "crate";  // marker used to spawn.
_boxType = "I_supplyCrate_F";  // the type of ammobox used.
_timer = 240;  // time in seconds until box is refilled.
 
_weapons = [];
_magazines = [["SmokeShell",5], ["SmokeShellYellow",5], ["SmokeShellRed",5], ["SmokeShellGreen",5], ["SmokeShellPurple",5], ["SmokeShellBlue",5], ["SmokeShellOrange",5], ["HandGrenade",5], ["Chemlight_green",5], ["Chemlight_yellow",5], ["Chemlight_red",5], ["Chemlight_blue",5]];
_items = [["ACE_EarPlugs",1],["CUP_NVG_PVS7",1],["ACE_Flashlight_XL50", 1],["ACE_IR_Strobe_Item",1],["ACE_HandFlare_White",5],["ACE_HandFlare_Green",5],["ACE_MapTools",1],["ACE_FieldDressing",20],["ACE_morphine",10]];
_backpacks = [];
 
_tmp_weapons = [];
_tmp_magazines = [];
_tmp_items = [];
_tmp_backpacks = [];
 
// load available to Section Commander only.
if (g_class == "BAF_SL") then {
    _tmp_weapons =
    [
        ["CUP_arifle_L85A2",1],
        ["ACE_Vector",1],
		["CUP_hgun_Glock17",1]
								
    ];
     _tmp_magazines =
        [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",50],
        ["CUP_17Rnd_9x19_glock17",15]
								
                               
    ];
    _tmp_items = [
		["CUP_optic_Elcan_reflex",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["ACE_wirecutter",1],
		["ACRE_PRC343",1],
		["ACRE_PRC117F",1]
    ];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1]
	];
}; 
// load available to Rifleman only.
 if (g_class == "BAF_RF") then {
    _tmp_weapons =
    [
		["CUP_arifle_L85A2",1],
		["CUP_hgun_Glock17",1],
		["launch_NLAW_F",2],
		["CUP_launch_Javelin",1],
		["CUP_launch_M136",2],
		["CUP_launch_FIM92Stinger",1]
    ];       
    _tmp_magazines =
    [
		["30Rnd_556x45_Stanag",25],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
        ["CUP_17Rnd_9x19_glock17",15],
		["CUP_Javelin_M",2],
		["CUP_Stinger_M",2]
	];
	_tmp_items = [
		["CUP_optic_Elcan_reflex",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC343",1]
	];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1],
		["CUP_B_M2_Gun_Bag",1],
		["CUP_B_M2_Tripod_Bag",1],
		["CUP_B_M2_MiniTripod_Bag",1]
	];
}; 
// load available to Grenadier only.
 if (g_class == "BAF_G") then {
    _tmp_weapons =
    [
		["CUP_arifle_L85A2_GL",1],
		["ACE_Vector",1],
		["CUP_hgun_Glock17",1],
		["CUP_launch_FIM92Stinger",1],
		["launch_NLAW_F",2],
		["CUP_launch_M136",2]
	];
    _tmp_magazines =
    [
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["CUP_17Rnd_9x19_glock17",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
	    ["1Rnd_SmokeBlue_Grenade_shell", 10],
		["CUP_Stinger_M",2]
        ];
	_tmp_items = 
	[
		["CUP_optic_Elcan_reflex",1],
		["CUP_acc_ANPEQ_2",1],
		["CUP_optic_HoloBlack",1],
		["ACRE_PRC343",1]
	];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1]
	];
};
 
// load available to Automatic Rifleman only.
 if (g_class == "BAF_AR") then {
    _tmp_weapons =
    [
		["CUP_lmg_L110A1",1],
		["CUP_launch_M136",2],
		["CUP_hgun_Glock17",1]
	];
    _tmp_magazines =
    [
		["CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",15],
        ["CUP_17Rnd_9x19_glock17",15]
    ];
	_tmp_items = 
	[
		["CUP_optic_Elcan_reflex",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC343",1]
	];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1]
	];
};
 
// load available to Section 2IC only.
 if (g_class == "BAF_2") then {
    _tmp_weapons =
    [
        ["CUP_arifle_L85A2",1],
		["CUP_launch_M136",2],
		["ACE_Vector",1],
		["CUP_hgun_Glock17",1]  
	];
       
    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
        ["CUP_17Rnd_9x19_glock17",15]
    ];
	_tmp_items = 
	[
		["CUP_optic_Elcan_reflex",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC343",1]
	];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1]
	];
}; 
// load available to GPMG Gunner only.
 if (g_class == "BAF_MG") then {
    _tmp_weapons =
    [
        ["CUP_lmg_L7A2",1],
		["CUP_launch_M136",2],
		["CUP_hgun_Glock17",1]  
	];
    _tmp_magazines =
    [
        ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",20],
		["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",10],
		["CUP_17Rnd_9x19_glock17",15]
    ];
	_tmp_items = 
	[
		["ACRE_PRC343",1]
	];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1]
	];
}; 
// load available to Marksman only.
 if (g_class == "BAF_MARK") then {
    _tmp_weapons =
    [
        ["CUP_srifle_L129A1_HG",1],
		["ACE_Vector",1],
		["CUP_hgun_Glock17",1],
		["launch_NLAW_F",3],
		["CUP_launch_M136",2],
		["CUP_launch_FIM92Stinger",2],
		["CUP_launch_Javelin",2]
	];       
    _tmp_magazines =
    [
        ["CUP_20Rnd_762x51_L129_M",50],	
		["CUP_17Rnd_9x19_glock17",15],
		["CUP_Stinger_M",2],
		["CUP_Javelin_M",2]
    ];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC343",1]
	];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1]
	];
};
// load availible to Medic Only
 if (g_class == "BAF_MED") then {
    _tmp_weapons =
    [
        ["CUP_arifle_L85A2",1],
		["CUP_hgun_Glock17",1]
	];
    _tmp_magazines =
    [
        ["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
        ["CUP_17Rnd_9x19_glock17",15]
    ];
	_tmp_items = 
	[
			
		["ACE_fieldDressing",30],
		["ACE_morphine",20],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["ACE_bodyBag",10],
		["CUP_optic_Elcan_reflex",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC343",1]
	];
	_tmp_backpacks = [
		["CUP_B_Bergen_BAF",1]
	];
};
//load availible to Bravo Section Lead
if (g_class == "US_SL") then{
	_tmp_weapons =
	[
		["CUP_arifle_M4A1_BUIS_GL",1],
		["ACE_Vector",1],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
	    ["1Rnd_SmokeBlue_Grenade_shell", 10],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACE_DAGR",1],
		["ACE_wirecutter",1],
		["ACRE_PRC148",1],
		["ACRE_PRC117F",1]
	];
	_tmp_backpacks = [
		["CUP_B_AssaultPack_ACU",1]
	];
};
//load availible to US Fire team lead only
if (g_class == "US_FTL") then{
	_tmp_weapons =
	[
		["CUP_arifle_M4A1_BUIS_GL",1],
		["ACE_Vector",1],
		["CUP_launch_M136",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
	    ["1Rnd_SmokeBlue_Grenade_shell", 10],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_AssaultPack_ACU",1]
	];
};
//load availible to US Rifleman only
if (g_class == "US_RF") then{
	_tmp_weapons =
	[
		["CUP_arifle_M4A1_black",1],
		["CUP_launch_M136",2],
		["CUP_launch_FIM92Stinger",2],
		["CUP_launch_Javelin",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["CUP_Javelin_M",2],
		["CUP_Stinger_M",2],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_AssaultPack_ACU",1],
		["CUP_B_M2_Gun_Bag",1],
		["CUP_B_M2_Tripod_Bag",1],
		["CUP_B_M2_MiniTripod_Bag",1]
	];
};
//load availible to US Grenadier only
if (g_class == "US_GRN") then{
	_tmp_weapons =
	[
		["CUP_arifle_M4A1_BUIS_GL",1],
		["ACE_Vector",1],
		["CUP_launch_FIM92Stinger",2],
		["CUP_launch_M136",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
	    ["1Rnd_SmokeBlue_Grenade_shell", 10],
		["CUP_Stinger_M",2],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_AssaultPack_ACU",1]
	];
};
//load available to US automatic Rifleman only
if (g_class == "US_AR") then{
	_tmp_weapons =
	[
		["CUP_lmg_M249_E2",1],
		["CUP_launch_M136",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",20],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ElcanM145",1],
		["CUP_optic_HoloBlack",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_AssaultPack_ACU",1]
	];
};
//load availible to US Marksman only
if (g_class == "US_MARK") then{
	_tmp_weapons =
	[
		["CUP_srifle_M14_DMR",1],
		["CUP_arifle_M16A4_Base",1],
		["CUP_launch_M136",2],
		["ACE_Vector",1],
		["CUP_launch_FIM92Stinger",2],
		["CUP_launch_Javelin",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["20Rnd_762x51_Mag",50],
		["30Rnd_556x45_Stanag",15],
		["CUP_Javelin_M",2],
		["CUP_Stinger_M",2],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_optic_LeupoldM3LR",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_AssaultPack_ACU",1]
	];
};
//load availible to US Medic only
if (g_class == "US_MED") then{
	_tmp_weapons =
	[
		["CUP_arifle_M4A1_black",1],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["ACE_bodyBag",10],
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_2",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_MedicPack_ACU",1]
	];
};
//load availible to Charlie Section Lead
if (g_class == "USMC_SL") then{
	_tmp_weapons =
	[
		["CUP_arifle_M16A4_GL",1],
		["ACE_Vector",1],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
	    ["1Rnd_SmokeBlue_Grenade_shell", 10],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["ACE_epinephrine",5],
		["SatchelCharge_Remote_Mag",1],
		["DemoCharge_Remote_Mag",1],
		["ACE_M26_Clacker",1],
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_15",1],
		["ACE_DAGR",1],
		["ACE_wirecutter",1],
		["ACRE_PRC148",1],
		["ACRE_PRC117F",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1]
	];
};
//load availible to Charlie Fireteam Lead
if (g_class == "USMC_FTL") then{
	_tmp_weapons =
	[
		["CUP_arifle_M16A4_GL",1],
		["ACE_Vector",1],
		["CUP_launch_M136",1],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["1Rnd_HE_Grenade_shell", 40],
		["1Rnd_Smoke_Grenade_shell", 10],
		["1Rnd_SmokeRed_Grenade_shell", 10],
		["1Rnd_SmokeGreen_Grenade_shell", 10],
		["1Rnd_SmokeYellow_Grenade_shell", 10],
	    ["1Rnd_SmokePurple_Grenade_shell", 10],
		["UGL_FlareWhite_F", 10],
	    ["1Rnd_SmokeBlue_Grenade_shell", 10],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_15",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1]
	];
};
//load availible to Charlie Section Lead
if (g_class == "USMC_RF") then{
	_tmp_weapons =
	[
		["CUP_arifle_M16A4_Base",1],
		["CUP_launch_M136",1],
		["CUP_launch_Mk153Mod0",1],
		["CUP_launch_Javelin",1],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",25],
		["30Rnd_556x45_Stanag_Tracer_Red",10],
		["CUP_Javelin_M",2],
		["CUP_SMAW_Spotting",4],
		["CUP_SMAW_HEAA_M",4],
		["CUP_SMAW_HEDP_M",4],
        ["CUP_7Rnd_45ACP_1911",5]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_15",1],
		["CUP_optic_SMAW_Scope",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1],
		["CUP_B_M2_Gun_Bag",1],
		["CUP_B_M2_Tripod_Bag",1],
		["CUP_B_M2_MiniTripod_Bag",1]
	];
};
//load available to USMC automatic Rifleman only
if (g_class == "USMC_AR") then{
	_tmp_weapons =
	[
		["CUP_lmg_M249_E2",1],
		["CUP_launch_M136",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",20],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ElcanM145",1],
		["CUP_optic_HoloBlack",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1]
	];
};
//load available to USMC assistant automatic Rifleman only
if (g_class == "USMC_AAR") then{
	_tmp_weapons =
	[
		["CUP_arifle_M16A4_Base",1],
		["CUP_launch_M136",2],
		["CUP_launch_FIM92Stinger",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",20],
		["CUP_Stinger_M",2],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_15",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1]
	];
};
//load available to USMC Machine Gunner only
if (g_class == "USMC_MG") then{
	_tmp_weapons =
	[
		["CUP_lmg_M240",1],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",20],
		["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",20],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ElcanM145",1],
		["CUP_optic_HoloBlack",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1]
	];
};
//load availible to usmc MG assistant only
if (g_class == "USMC_MGASS") then{
	_tmp_weapons =
	[
		["CUP_arifle_M16A4_Base",1],
		["CUP_launch_M136",2],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
		["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",20],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_15",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1]
	];
};
//load availible for USMC Medic only
if (g_class == "USMC_MED") then{
	_tmp_weapons =
	[
		["CUP_arifle_M16A4_Base",1],
		["CUP_hgun_Colt1911",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",50],
		["30Rnd_556x45_Stanag_Tracer_Red",15],
        ["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["ACE_fieldDressing",50],
		["ACE_morphine",50],
		["ACE_epinephrine",50],
		["ACE_bloodIV",50],
		["ACE_bodyBag",10],
		["CUP_optic_ACOG",1],
		["CUP_optic_HoloBlack",1],
		["CUP_acc_ANPEQ_15",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["CUP_B_USPack_Coyote",1]
	];
};
//load availible to sniper only
if (g_class == "SNIPER") then{
	_tmp_weapons =
	[
		["CUP_srifle_AWM_des",1],
		["CUP_hgun_Colt1911",1],
		["CUP_arifle_L85A2",1]
	];
	_tmp_magazines =
	[
		["CUP_5Rnd_86x70_L115A1",20],
        ["CUP_7Rnd_45ACP_1911",15],
		["ACE_1Rnd_82mm_Mo_HE",20],
		["ACE_1Rnd_82mm_Mo_Smoke", 10],
		["ACE_1Rnd_82mm_Mo_Illum",5],
		["30Rnd_556x45_Stanag",10]
	];
	_tmp_items = 
	[
		["ACE_Kestrel4500",1],
		["ACE_RangeCard",1],
		["ACE_ATragMX",1],
		["ACE_DAGR",1],
		["CUP_optic_LeupoldMk4_10x40_LRT_Desert",1],
		["CUP_muzzle_snds_AWM",1],
		["bipod_01_F_snd",1],
		["ACE_RangeTable_82mm",1],
		["CUP_U_B_BAF_DDPM_Tshirt",1],
		["CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2",1],
		["CUP_H_BAF_Helmet_2_DDPM",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["B_Kitbag_mcamo",1],
		["B_Mortar_01_support_F",1]
	];
};
//load availible to Spotter only
if (g_class == "SPOTTER") then{
	_tmp_weapons =
	[
		["CUP_srifle_M110",1],
		["CUP_hgun_Colt1911",1],
		["CUP_arifle_L85A2",1]
	];
	_tmp_magazines =
	[
		["CUP_20Rnd_762x51_B_M110",15],
		["CUP_20Rnd_TE1_Red_Tracer_762x51_M110",5],
        ["CUP_7Rnd_45ACP_1911",5],
		["ACE_1Rnd_82mm_Mo_HE",20],
		["ACE_1Rnd_82mm_Mo_Smoke", 10],
		["ACE_1Rnd_82mm_Mo_Illum",5],
		["30Rnd_556x45_Stanag",10]
	];
	_tmp_items = 
	[
		["ACE_Kestrel4500",1],
		["ACE_RangeCard",1],
		["ACE_ATragMX",1],
		["ACE_DAGR",1],
		["ACE_SpottingScope",1],
		["CUP_optic_LeupoldMk4_10x40_LRT_Desert",1],
		["bipod_01_F_snd",1],
		["ACE_RangeTable_82mm",1],
		["ACRE_PRC117F",1],
		["CUP_U_B_BAF_DDPM_Tshirt",1],
		["CUP_V_BAF_Osprey_Mk2_DDPM_Soldier2",1],
		["CUP_H_BAF_Helmet_2_DDPM",1],
		["ACRE_PRC148",1]
	];
	_tmp_backpacks = [
		["B_Kitbag_mcamo",1],
		["B_Mortar_01_weapon_F",1]
	];
};
//load avaible to armour commander only
 if (g_class == "ARMOUR") then {
    _tmp_weapons =
    [
		["CUP_arifle_M16A4_Base",1],
		["ACE_Vector",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",15],
		["30Rnd_556x45_Stanag_Tracer_Red",5]
    ];
	_tmp_items =
	[
		["CUP_acc_ANPEQ_15",1],
        ["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACRE_PRC148",1]
	];
};

//load avaible to armor crew only
 if (g_class == "ARMOURCREW") then {
    _tmp_weapons =
    [
		["CUP_arifle_M16A4_Base",1],
		["CUP_launch_M136",2]
	];
	_tmp_magazines =
    [
		["30Rnd_556x45_Stanag",15]
    ];
	_tmp_items =
	[
		["CUP_acc_ANPEQ_15",1],
		["ACE_MapTools",1],
        ["ACE_fieldDressing",20],
        ["ACE_morphine",10],
		["ACRE_PRC148",1]
	];
};
//load availible for Wildcat Pilot only
if (g_class == "WLD_PLT") then{
	_tmp_weapons =
	[
	
	];
	_tmp_magazines =
	[

	];
	_tmp_items = 
	[

	];
};
//load availible for Blackhawk Pilot only
if (g_class == "BLK_PLT") then{
	_tmp_weapons =
	[
	
	];
	_tmp_magazines =
	[

	];
	_tmp_items = 
	[

	];
};
//load availible for Jet Pilot only
if (g_class == "JET_PLT") then{
	_tmp_weapons =
	[
	
	];
	_tmp_magazines =
	[

	];
	_tmp_items = 
	[

	];
};
if (g_class == "CMDR") then{
	_tmp_weapons =
	[
		["CUP_arifle_M16A4_Base",1],
		["CUP_hgun_Colt1911",1],
		["Binocular",1]
	];
	_tmp_magazines =
	[
		["30Rnd_556x45_Stanag",15],
		["CUP_7Rnd_45ACP_1911",15]
	];
	_tmp_items = 
	[
		["ACRE_PRC117F",1]
	];
	_tmp_backpacks = [
		["B_AssaultPack_cbr",1]
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
 
// create and fill the box.
mainAmmoBox = _boxType createVehicleLocal cratePos;
mainAmmoBox allowDamage false;
mainAmmoBox setPos cratePos;
mainAmmoBox addAction [ "Default Loadout", {execVM format["client\loadout\%1.sqf", g_class];}];
while {true} do {
        refill_box = false;
        // empty it.
        clearWeaponCargo mainAmmoBox;
        clearMagazineCargo mainAmmoBox;
        clearItemCargo mainAmmoBox;
		clearBackpackCargo mainAmmoBox;
       
        // add in all weapons.
        {mainAmmoBox addWeaponCargo [(_x select 0),(_x select 1)]} foreach _weapons;
       
        // add in all magazines.
        {mainAmmoBox addMagazineCargo [(_x select 0),(_x select 1)]} foreach _magazines;
       
        {mainAmmoBox addItemCargo [(_x select 0),(_x select 1)]} foreach _items;
		
		{mainAmmoBox addBackpackCargo [(_x select 0),(_x select 1)]} foreach _backpacks;
		
	
       
        // wait x amount of seconds then refill box.
        sleep _timer;
};