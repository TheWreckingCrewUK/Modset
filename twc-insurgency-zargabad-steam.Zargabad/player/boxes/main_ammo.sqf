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

_marker = "crate";  // marker used to spawn.
_boxType = "I_supplyCrate_F";  // the type of ammobox used.
_timer = 240;  // time in seconds until box is refilled.
 
_weapons = [];
_magazines = [["SmokeShell",5], ["SmokeShellYellow",5], ["SmokeShellRed",5], ["SmokeShellGreen",5], ["SmokeShellPurple",5], ["SmokeShellBlue",5], ["SmokeShellOrange",5], ["HandGrenade",5], ["Chemlight_green",5], ["Chemlight_yellow",5], ["Chemlight_red",5], ["Chemlight_blue",5]];
_items = [["ACE_EarPlugs",1],["ACE_MapTools",1],["rhsusf_ANPVS_14",1],["ACE_Flashlight_XL50", 1],["ACE_IR_Strobe_Item",1],["ACE_HandFlare_White",5],["ACE_HandFlare_Green",5],["ACE_CableTie",2]];

_tmp_weapons = [];
_tmp_magazines = [];
_tmp_items = [];

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

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["ACE_epinephrine",5],
								["CUP_optic_ACOG",1],
								["SatchelCharge_Remote_Mag",1],
								["DemoCharge_Remote_Mag",1],
								["ACE_M26_Clacker",1],
								["CUP_optic_ACOG",1],
								["CUP_optic_HoloBlack",1],
								["ACE_DAGR",1],
								["ACRE_PRC343",1]

                ];
};

// load available to Rifleman only.
 if (g_class == "BAF_RF") then {
        _tmp_weapons =
        [
								["UK3CB_BAF_L85A2_RIS",1],
								["CUP_hgun_Glock17",1]
							
        ];

        _tmp_magazines =
        [
								
								["30Rnd_556x45_Stanag",50],
								["30Rnd_556x45_Stanag_Tracer_Red",50],
                                ["CUP_17Rnd_9x19_glock17",15]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["CUP_optic_ACOG",1],
								["CUP_optic_HoloBlack",1],
								["ACRE_PRC343",1]
		];




};

// load available to Grenadier only.
 if (g_class == "BAF_GRN") then {
        _tmp_weapons =
        [
            ["CUP_arifle_L85A2_GL",1],
            ["ACE_Vector",1],
			["CUP_hgun_Glock17",1]
			

		];

        _tmp_magazines =
        [
            
				["30Rnd_556x45_Stanag",50],
				["CUP_17Rnd_9x19_glock17",15],
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
			 ["CUP_optic_ACOG",1],
		     ["CUP_optic_HoloBlack",1],
			 ["ACRE_PRC343",1]
		];
};

// load available to Automatic Rifleman only.
 if (g_class == "BAF_AR") then {
        _tmp_weapons =
        [
            ["CUP_lmg_m249_para",1],
			["CUP_hgun_Glock17",1]
			 
		];

        _tmp_magazines =
        [
            
			["CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",20],
            ["CUP_17Rnd_9x19_glock17",15]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["CUP_optic_ACOG",1],
		     ["CUP_optic_HoloBlack",1],
			 ["STKR_Predator",1],
			 ["ACRE_PRC343",1]
		];
};

// load available to Section Medic

 if (g_class == "BAF_MED") then {
       _tmp_weapons =
        [
            ["UK3CB_BAF_L85A2_RIS",1],
			["CUP_hgun_Glock17",1]

		];

        _tmp_magazines =
        [
            ["30Rnd_556x45_Stanag",50],
             ["CUP_17Rnd_9x19_glock17",15]
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
			["ACRE_PRC343",1]
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
