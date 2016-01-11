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
_magazines = [["rhs_mag_nspd",5], ["rhs_mag_nspn_yellow",5], ["rhs_mag_nspn_red",5], ["rhs_mag_nspn_green",5], ["rhs_mag_rdg2_white",5], ["rhs_mag_rdg2_black",5], ["rhs_mag_rgd5",5], ["Chemlight_green",5], ["Chemlight_yellow",5], ["Chemlight_red",5], ["Chemlight_blue",5]];
_items = [["ACE_EarPlugs",1],["ACE_MapTools",1],["ACE_Flashlight_XL50", 1],["ACE_HandFlare_White",5],["ACE_HandFlare_Green",5],["ACE_CableTie",2],["TWC_Aidpack",5]];

_tmp_weapons = [];
_tmp_magazines = [];
_tmp_items = [];

// load available to Section Commander only.
if (g_class == "MFVDV_SL") then {
                _tmp_weapons =
                [
                                ["rhs_weap_ak74m_desert",1],
                                ["rhs_pdu4",1],
								["rhs_weap_makarov_pmm",1]

                ];

                _tmp_magazines =
                [
                                ["rhs_30Rnd_545x39_AK",50],
                                ["rhs_mag_9x18_12_57N181S",15]


                ];

                _tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["ACE_epinephrine",5],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
								["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["SatchelCharge_Remote_Mag",1],
								["DemoCharge_Remote_Mag",1],
								["ACE_M26_Clacker",1],
								["ACE_DAGR",1],
								["ACRE_PRC343",1]

                ];
};

// load available to Automatic Rifleman only.
 if (g_class == "MFVDV_MG") then {
        _tmp_weapons =
        [
            ["rhs_weap_pkm",1],
			["rhs_weap_rshg2",2],
			["rhs_weap_makarov_pmm",1]
			 
		];

        _tmp_magazines =
        [
            
			["rhs_100Rnd_762x54mmr",10],
			["rhs_mag_9x18_12_57N181S",10]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["ACRE_PRC343",1]
		];
};
// load available to Section Medic

 if (g_class == "MFVDV_MED") then {
       _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_30Rnd_545x39_AK",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_morphine",50],
			["ACE_epinephrine",50],
			["ACE_bloodIV",50],
			["ACE_bodyBag",10],
			["rhs_acc_1P29",1],
		    ["rhs_acc_2dpzenit",1],
			["rhs_acc_1p78",1],
			["rhs_acc_ekp1",1],
			["rhs_acc_dtk",1],
			["ACRE_PRC343",1]
		];
};
// load available to Senior Rifleman only.
 if (g_class == "MFVDV_SR") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1],
								["rhs_weap_rshg2",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC343",1]
		];




};
// load available to Rifleman only.
 if (g_class == "MFVDV_RF") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1],
								["rhs_weap_rshg2",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
		                    	["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC343",1]
		];




};

// load available to Grenadier only.
 if (g_class == "MFVDV_GRN") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_gp25",1],
            ["ACE_Vector",1],
			["rhs_weap_makarov_pmm",1],
			["rhs_weap_rshg2",2]

		];

        _tmp_magazines =
        [
            
				["rhs_30Rnd_545x39_AK",50],
				["rhs_mag_9x18_12_57N181S",15],
				["rhs_VOG25", 40],
				["rhs_VG40OP_white", 10],
				["rhs_VG40OP_green", 10],
				["rhs_VG40OP_red", 10]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
		     ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC343",1]
		];
};

if (g_class == "DMSV_SL") then {
                _tmp_weapons =
                [
                                ["rhs_weap_ak74m_desert",1],
                                ["rhs_pdu4",1],
								["rhs_weap_makarov_pmm",1]

                ];

                _tmp_magazines =
                [
                                ["rhs_30Rnd_545x39_AK",50],
                                ["rhs_mag_9x18_12_57N181S",15]


                ];

                _tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["ACE_epinephrine",5],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
		                     	["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["SatchelCharge_Remote_Mag",1],
								["DemoCharge_Remote_Mag",1],
								["ACE_M26_Clacker",1],
								["ACE_DAGR",1],
								["ACRE_PRC148",1]

                ];
};

// load available to rpg gunner only
 if (g_class == "DMSV_RPG") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert",1],
			["rhs_weap_rpg7",2],
			["rhs_weap_makarov_pmm",1]
			 
		];

        _tmp_magazines =
        [
            
			["rhs_30Rnd_545x39_AK",10],
			["rhs_mag_9x18_12_57N181S",10],
			["rhs_rpg7_PG7VL_mag",5]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
			 ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC148",1]
		];
};
// load available to Section Medic

 if (g_class == "DMSV_MG") then {
       _tmp_weapons =
        [
            ["rhs_weap_pkm",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_100Rnd_762x54mmr",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_MapTools",1],
			["ACE_morphine",50],
			["ACRE_PRC148",1]
		];
};
// load available to Senior Rifleman only.
 if (g_class == "DMSV_RPGA") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10],
								["rhs_rpg7_PG7VL_mag",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC148",1]
		];




};
// load available to Rifleman only.
 if (g_class == "DMSV_SR") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1],
								["rhs_weap_rshg2",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC148",1]
		];




};

// load available to Grenadier only.
 if (g_class == "DMSV_GRN") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_gp25",1],
            ["ACE_Vector",1],
			["rhs_weap_makarov_pmm",1],
			["rhs_weap_rshg2",2]

		];

        _tmp_magazines =
        [
            
				["rhs_30Rnd_545x39_AK",50],
				["rhs_mag_9x18_12_57N181S",15],
				["rhs_VOG25", 40],
				["rhs_VG40OP_white", 10],
				["rhs_VG40OP_green", 10],
				["rhs_VG40OP_red", 10]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
			 ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC148",1]
		];
};
// load available to Rifleman only.
 if (g_class == "DMSV_RF") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert",1],
			["rhs_weap_makarov_pmm",1],
			["rhs_weap_rshg2",2]

		];

        _tmp_magazines =
        [
            
				["rhs_30Rnd_545x39_AK",50],
				["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
			 ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC148",1]
		];
};
// load available to Section Medic

 if (g_class == "DMSV_MED") then {
       _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_30Rnd_545x39_AK",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_morphine",50],
			["ACE_epinephrine",50],
			["ACE_bloodIV",50],
			["ACE_bodyBag",10],
			["rhs_acc_1P29",1],
		    ["rhs_acc_2dpzenit",1],
			["rhs_acc_1p78",1],
			["rhs_acc_ekp1",1],
			["rhs_acc_dtk",1],
			["ACRE_PRC148",1]
		];
};
//loadout availible to section leader only
if (g_class == "DVDV_SL") then {
                _tmp_weapons =
                [
                                ["rhs_weap_ak74m_desert",1],
                                ["rhs_pdu4",1],
								["rhs_weap_makarov_pmm",1]

                ];

                _tmp_magazines =
                [
                                ["rhs_30Rnd_545x39_AK",50],
                                ["rhs_mag_9x18_12_57N181S",15]


                ];

                _tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["ACE_epinephrine",5],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["SatchelCharge_Remote_Mag",1],
								["DemoCharge_Remote_Mag",1],
								["ACE_M26_Clacker",1],
								["ACE_DAGR",1],
								["ACRE_PRC343",1]

                ];
};

// load available to Automatic Rifleman only.
 if (g_class == "DVDV_MG") then {
        _tmp_weapons =
        [
            ["rhs_weap_pkm",1],
			["rhs_weap_rshg2",2],
			["rhs_weap_makarov_pmm",1]
			 
		];

        _tmp_magazines =
        [
            
			["rhs_100Rnd_762x54mmr",10],
			["rhs_mag_9x18_12_57N181S",10]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["ACRE_PRC343",1]
		];
};
// load available to Section Medic

 if (g_class == "DVDV_MED") then {
       _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_30Rnd_545x39_AK",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_morphine",50],
			["ACE_epinephrine",50],
			["ACE_bloodIV",50],
			["ACE_bodyBag",10],
			["rhs_acc_1P29",1],
		    ["rhs_acc_2dpzenit",1],
			["rhs_acc_1p78",1],
			["rhs_acc_ekp1",1],
			["rhs_acc_dtk",1],
			["ACRE_PRC343",1]
		];
};
// load available to Senior Rifleman only.
 if (g_class == "DVDV_SR") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1],
								["rhs_weap_rshg2",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC343",1]
		];




};
// load available to Rifleman only.
 if (g_class == "DVDV_RF") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1],
								["rhs_weap_rshg2",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC343",1]
		];




};

// load available to Grenadier only.
 if (g_class == "DVDV_GRN") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_gp25",1],
            ["ACE_Vector",1],
			["rhs_weap_makarov_pmm",1],
			["rhs_weap_rshg2",2]

		];

        _tmp_magazines =
        [
            
				["rhs_30Rnd_545x39_AK",50],
				["rhs_mag_9x18_12_57N181S",15],
				["rhs_VOG25", 40],
				["rhs_VG40OP_white", 10],
				["rhs_VG40OP_green", 10],
				["rhs_VG40OP_red", 10]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
			 ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC343",1]
		];
};

if (g_class == "WMSV_SL") then {
                _tmp_weapons =
                [
                                ["rhs_weap_ak74m_desert",1],
                                ["rhs_pdu4",1],
								["rhs_weap_makarov_pmm",1]

                ];

                _tmp_magazines =
                [
                                ["rhs_30Rnd_545x39_AK",50],
                                ["rhs_mag_9x18_12_57N181S",15]


                ];

                _tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["ACE_epinephrine",5],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["SatchelCharge_Remote_Mag",1],
								["DemoCharge_Remote_Mag",1],
								["ACE_M26_Clacker",1],
								["ACE_DAGR",1],
								["ACRE_PRC148",1]

                ];
};

// load available to rpg gunner only
 if (g_class == "WMSV_RPG") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert",1],
			["rhs_weap_rpg7",2],
			["rhs_weap_makarov_pmm",1]
			 
		];

        _tmp_magazines =
        [
            
			["rhs_30Rnd_545x39_AK",10],
			["rhs_mag_9x18_12_57N181S",10],
			["rhs_rpg7_PG7VL_mag",5]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
			 ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC148",1]
		];
};
// load available to Section Medic

 if (g_class == "WMSV_MG") then {
       _tmp_weapons =
        [
            ["rhs_weap_pkm",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_100Rnd_762x54mmr",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_MapTools",1],
			["ACE_morphine",50],
			["ACRE_PRC148",1]
		];
};
// load available to Senior Rifleman only.
 if (g_class == "WMSV_RPGA") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10],
								["rhs_rpg7_PG7VL_mag",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC148",1]
		];




};
// load available to Rifleman only.
 if (g_class == "WMSV_SR") then {
        _tmp_weapons =
        [
								["rhs_weap_ak74m_desert",1],
								["rhs_weap_makarov_pmm",1],
								["rhs_weap_rshg2",1]
        ];

        _tmp_magazines =
        [
								
								["rhs_30Rnd_545x39_AK",50],
								["rhs_mag_9x18_12_57N181S",10]
			];

		_tmp_items = [

                                ["ACE_MapTools",1],
                                ["ACE_fieldDressing",20],
                                ["ACE_morphine",10],
								["rhs_acc_1P29",1],
								["rhs_acc_2dpzenit",1],
								["rhs_acc_1p78",1],
			                    ["rhs_acc_ekp1",1],
								["rhs_acc_dtk",1],
								["ACRE_PRC148",1]
		];




};

// load available to Grenadier only.
 if (g_class == "WMSV_GRN") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_gp25",1],
            ["ACE_Vector",1],
			["rhs_weap_makarov_pmm",1],
			["rhs_weap_rshg2",2]

		];

        _tmp_magazines =
        [
            
				["rhs_30Rnd_545x39_AK",50],
				["rhs_mag_9x18_12_57N181S",15],
				["rhs_VOG25", 40],
				["rhs_VG40OP_white", 10],
				["rhs_VG40OP_green", 10],
				["rhs_VG40OP_red", 10]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
			 ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC148",1]
		];
};
// load available to Grenadier only.
 if (g_class == "WMSV_RF") then {
        _tmp_weapons =
        [
            ["rhs_weap_ak74m_gp25",1],
			["rhs_weap_makarov_pmm",1],
			["rhs_weap_rshg2",2]

		];

        _tmp_magazines =
        [
            
				["rhs_30Rnd_545x39_AK",50],
				["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

             ["ACE_MapTools",1],
             ["ACE_fieldDressing",20],
             ["ACE_morphine",10],
			 ["rhs_acc_1P29",1],
			 ["rhs_acc_2dpzenit",1],
			 ["rhs_acc_1p78",1],
			 ["rhs_acc_ekp1",1],
			 ["rhs_acc_dtk",1],
			 ["ACRE_PRC148",1]
		];
};
// load available to Section Medic

 if (g_class == "WMSV_MED") then {
       _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_30Rnd_545x39_AK",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_morphine",50],
			["ACE_epinephrine",50],
			["ACE_bloodIV",50],
			["ACE_bodyBag",10],
			["rhs_acc_1P29",1],
		    ["rhs_acc_2dpzenit",1],
			["rhs_acc_1p78",1],
			["rhs_acc_ekp1",1],
			["rhs_acc_dtk",1],
			["ACRE_PRC148",1]
		];
};
// load available to PILOT ONly

 if (g_class == "PILOT") then {
       _tmp_weapons =
        [
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_morphine",50],
			["ACE_epinephrine",50],
			["ACRE_PRC148",1]
		];
};
// load available to Armour commander

 if (g_class == "ARMOUR") then {
       _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert_folded",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_30Rnd_545x39_AK",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_morphine",50],
			["ACE_epinephrine",50],
			["ACRE_PRC148",1]
		];
};
// load available to Section Medic

 if (g_class == "ARMOURCREW") then {
       _tmp_weapons =
        [
            ["rhs_weap_ak74m_desert_folded",1],
			["rhs_weap_makarov_pmm",1]

		];

        _tmp_magazines =
        [
            ["rhs_30Rnd_545x39_AK",50],
            ["rhs_mag_9x18_12_57N181S",15]
        ];

		_tmp_items =
		[

			["ACE_fieldDressing",50],
			["ACE_morphine",50],
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