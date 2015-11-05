g_class = "";
g_group = "";
g_unit = "";
if (!isNil "P1" && {player == P1}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "000";
	g_name = "Alpha Section Leader";
};

if (!isNil "P2" && {player == P2}) then {
    g_class = "BAF_RF";
	g_group = "0";
	g_unit = "010";
	g_name = "Alpha Rifleman";
};

if (!isNil "P3" && {player == P3}) then {
    g_class = "BAF_G";
	g_group = "0";
	g_unit = "011";
	g_name = "Alpha Grenadier";
};

if (!isNil "P4" && {player == P4}) then {
    g_class = "BAF_AR";
	g_group = "0";
	g_unit = "012";
	g_name = "Alpha Automatic Rifleman";
};

if (!isNil "P5" && {player == P5}) then {
    g_class = "BAF_2";
	g_group = "0";
	g_unit = "013";
	g_name = "Alpha 2IC";
};
if (!isNil "P6" && {player == P6}) then {
    g_class = "BAF_MG";
	g_group = "0";
	g_unit = "020";
	g_name = "Alpha Machine Gunner";
};

if (!isNil "P7" && {player == P7}) then {
    g_class = "BAF_MARK";
	g_group = "0";
	g_unit = "021";
	g_name = "Alpha Marksman";
};

if (!isNil "P8" && {player == P8}) then {
    g_class = "BAF_MED";
	g_group = "0";
	g_unit = "022";
	g_name = "Alpha Medic";
};

if (!isNil "P9" && {player == P9}) then {
    g_class = "US_SL";
	g_group = "0";
	g_unit = "023";
	g_name = "Bravo Squad Leader";
};

if (!isNil "P10" && {player == P10}) then {
    g_class = "US_TL1";
	g_group = "9";
	g_unit = "800";
	g_name = "Bravo Fire Team Leader";
};

if (!isNil "P11" && {player == P11}) then {
    g_class = "US_R1";
	g_group = "9";
	g_unit = "801";
	g_name = "Bravo Rifleman";
};

if (!isNil "P12" && {player == P12}) then {
    g_class = "US_AR1";
	g_group = "9";
	g_unit = "802";
	g_name = "Bravo Automatic Rifleman";
};

if (!isNil "P13" && {player == P13}) then {
    g_class = "US_G";
	g_group = "1";
	g_unit = "100";
	g_name = "Bravo Grenadier";
};

if (!isNil "P14" && {player == P14}) then {
    g_class = "US_TL2";
	g_group = "1";
	g_unit = "110";
	g_name = "Bravo Fireteam Leader";
};

if (!isNil "P15" && {player == P15}) then {
    g_class = "US_AR2";
	g_group = "1";
	g_unit = "111";
	g_name = "Bravo Automatic Rifleman";
};

if (!isNil "P16" && {player == P16}) then {
    g_class = "US_MARK";
	g_group = "1";
	g_unit = "112";
	g_name = "Bravo Marksman";
};

if (!isNil "P17" && {player == P17}) then {
    g_class = "US_MED";
	g_group = "1";
	g_unit = "113";
	g_name = "Bravo Medic";
};

if (!isNil "P18" && {player == P18}) then {
    g_class = "USMC_SL";
	g_group = "1";
	g_unit = "120";
	g_name = "Charlie Squad Leader";
};

if (!isNil "P19" && {player == P19}) then {
    g_class = "USMC_TL1";
	g_group = "1";
	g_unit = "121";
	g_name = "Charlie Fire Team Leader";
};

if (!isNil "P20" && {player == P20}) then {
    g_class = "USMC_R1";
	g_group = "1";
	g_unit = "122";
	g_name = "Charlie Rifleman";
};

if (!isNil "P21" && {player == P21}) then {
    g_class = "USMC_AR1";
	g_group = "1";
	g_unit = "123";
	g_name = "Charlie Automatic Rifleman";
};

if (!isNil "P22" && {player == P22}) then {
    g_class = "USMC_A1";
	g_group = "1";
	g_unit = "130";
	g_name = "Charlie Assistant Automatic Rifleman";
};

if (!isNil "P23" && {player == P23}) then {
    g_class = "USMC_TL2";
	g_group = "1";
	g_unit = "131";
	g_name = "Charlie Fire Team Leader";
};

if (!isNil "P24" && {player == P24}) then {
    g_class = "USMC_R1";
	g_group = "1";
	g_unit = "132";
	g_name = "Charlie Rifleman";
};

if (!isNil "P25" && {player == P25}) then {
    g_class = "USMC_A2";
	g_group = "1";
	g_unit = "133";
	g_name = "Charlie Assistant Automatic Rifleman";
};
if (!isNil "P26" && {player == P26}) then {
    g_class = "USMC_AR2";
	g_group = "1";
	g_unit = "134";
	g_name = "Charlie Automatic Rifleman";
};
if (!isNil "P27" && {player == P27}) then {
    g_class = "USMC_TL3";
	g_group = "1";
	g_unit = "135";
	g_name = "Charlie Fire Team Lead";
};
if (!isNil "P28" && {player == P28}) then {
    g_class = "USMC_AR3";
	g_group = "1";
	g_unit = "136";
	g_name = "Charlie Automatic Rifleman";
};
if (!isNil "P29" && {player == P29}) then {
    g_class = "USMC_R1";
	g_group = "1";
	g_unit = "137";
	g_name = "Charlie Rifleman";
};
if (!isNil "P30" && {player == P30}) then {
    g_class = "USMC_MED";
	g_group = "1";
	g_unit = "138";
	g_name = "Charlie Medic";
};
if (!isNil "P31" && {player == P31}) then {
    g_class = "PILOT_BLACKHAWK";
	g_group = "1";
	g_unit = "139";
	g_name = "BlackHawk Pilot";
};
if (!isNil "P32" && {player == P32}) then {
    g_class = "PILOT_CHINNOK";
	g_group = "1";
	g_unit = "140";
	g_name = "Chinnok Pilot";
};
if (!isNil "P33" && {player == P33}) then {
    g_class = "PILOT_WILDCAT";
	g_group = "1";
	g_unit = "141";
	g_name = "WildCat Pilot";
};

if (!isNil "P34" && {player == P34}) then {
    g_class = "ARMOUR";
	g_group = "1";
	g_unit = "142";
	g_name = "Armour Commander";
};

if (!isNil "P35" && {player == P35}) then {
    g_class = "ARMOUR";
	g_group = "1";
	g_unit = "143";
	g_name = "Armour Crew";
};

if (!isNil "P36" && {player == P36}) then {
    g_class = "ARMOUR";
	g_group = "1";
	g_unit = "144";
	g_name = "Armour Crew";
};

if (!isNil "P37" && {player == P37}) then {
    g_class = "SWD_SL";
	g_group = "1";
	g_unit = "145";
	g_name = "Delta Squad Leader";
};
if (!isNil "P38" && {player == P38}) then {
    g_class = "SWD_GRN";
	g_group = "1";
	g_unit = "146";
	g_name = "Delta Grenadier";
};
if (!isNil "P39" && {player == P39}) then {
    g_class = "SWD_AR";
	g_group = "1";
	g_unit = "147";
	g_name = "Delta Automatic Rifleman";
};
if (!isNil "P40" && {player == P40}) then {
    g_class = "SWD_MED";
	g_group = "1";
	g_unit = "148";
	g_name = "Delta Medic";
};
if (!isNil "P41" && {player == P41}) then {
    g_class = "SWD_FTL";
	g_group = "1";
	g_unit = "149";
	g_name = "Delta Fire Team Leader";
};
if (!isNil "P42" && {player == P42}) then {
    g_class = "SWD_AT";
	g_group = "1";
	g_unit = "150";
	g_name = "Delta AT Rifleman";
};
if (!isNil "P43" && {player == P43}) then {
    g_class = "SWD_AAT";
	g_group = "1";
	g_unit = "151";
	g_name = "Delta Assiatant AT Rifleman";
};
if (!isNil "P44" && {player == P44}) then {
    g_class = "SWD_MG";
	g_group = "1";
	g_unit = "152";
	g_name = "Delta Machine Gunner";
};
if (!isNil "P45" && {player == P45}) then {
    g_class = "CRFL";
	g_group = "1";
	g_unit = "153";
};
if (!isNil "P46" && {player == P46}) then {
    g_class = "CAR";
	g_group = "1";
	g_unit = "154";
};
if (!isNil "P47" && {player == P47}) then {
    g_class = "CMD";
	g_group = "1";
	g_unit = "155";
};
if (!isNil "P48" && {player == P48}) then {
    g_class = "ACREW";
	g_group = "1";
	g_unit = "156";
};
if (!isNil "P49" && {player == P49}) then {
    g_class = "ACREW";
	g_group = "1";
	g_unit = "157";
};
if (!isNil "P50" && {player == P50}) then {
    g_class = "ACREW";
	g_group = "1";
	g_unit = "158";
};
//BEGINING OF IT MAKING SENSE BY JAYMAN COMPLETE REWRITE EMINENT!
if (!isNil "P51" && {player == P51}) then {
    g_class = "JTAC_SL";
	g_group = "1";
	g_unit = "159";
	g_name = "JTAC";
};
if (!isNil "P52" && {player == P52}) then {
    g_class = "JTAC_RF";
	g_group = "1";
	g_unit = "160";
	g_name = "Forward Air Controller";
};
if (!isNil "P53" && {player == P53}) then {
    g_class = "PILOT_A10";
	g_group = "1";
	g_unit = "161";
	g_name = "FA 18 Pilot";
};
if (!isNil "P54" && {player == P54}) then {
    g_class = "SNIPER";
	g_group = "1";
	g_unit = "162";
	g_name = "Sniper";
};
if (!isNil "P55" && {player == P55}) then {
    g_class = "SPOTTER";
	g_group = "1";
	g_unit = "163";
	g_name = "Spotter";
};
if (!isNil "P56" && {player == P56}) then {
    g_class = "PILOT_A10";
	g_group = "1";
	g_unit = "164";
	g_name = "FA 18 Weapons Expert";
};


g_p1 = "";
g_p2 = "";
g_p2 = "";
g_p3 = "";
g_p4 = "";
g_p5 = "";
g_p6 = "";
g_p7 = "";
g_p8 = "";
g_p9 = "";
g_p10 = "";
g_p11 = "";
g_p12 = "";
g_p13 = "";
g_p14 = "";
g_p15 = "";
g_p16 = "";
g_p17 = "";
g_p18 = "";
g_p19 = "";
g_p20 = "";
g_p21 = "";
g_p22 = "";
g_p23 = "";
g_p24 = "";
g_p25 = "";
g_p26 = "";
g_p27 = "";
g_p28 = "";
g_p29 = "";
g_p30 = "";
g_p31 = "";
g_p32 = "";
g_p33 = "";
g_p34 = "";
g_p35 = "";
g_p36 = "";
g_p37 = "";
g_p38 = "";
g_p39 = "";
g_p40 = "";
g_p41 = "";
g_p42 = "";
g_p43 = "";
g_p44 = "";
g_p45 = "";
g_p46 = "";
g_p47 = "";
g_p48 = "";
g_p49 = "";
g_p50 = "";
g_p51 = "";
g_p52 = "";
g_p53 = "";
g_p54 = "";
g_p55 = "";
g_p56 = "";

execVM "player\boxes\main_ammo.sqf";
execVM "player\boxes\secondary_ammo.sqf";
_test = format["hint '%1'",getPlayerUID player];
_test2 = format["hint '%1'",({side _x == WEST} count playableUnits)];

execVM "player\psync.sqf";

 TWC_fnc_getAlphaList = {
    execVM "Playerlist\alpha.sqf";
};

TWC_fnc_getBravoList = {
     execVM "Playerlist\bravo.sqf";
};

TWC_fnc_getCharlieList = {
   execVM "Playerlist\charlie.sqf";
};

TWC_fnc_getDeltaList = {
    execVM "Playerlist\delta.sqf";
};

TWC_fnc_getEchoList = {
    execVM "Playerlist\Echo.sqf";
};
TWC_fnc_getArmorCrewList = {
    execVM "Playerlist\armorcrew.sqf";
};
TWC_fnc_getSniperList = {
	execVM "Playerlist\Sniper.sqf";
};
TWC_fnc_getAirList = {
   execVM "Playerlist\air.sqf";
};

playerListAction = ["thisStartsTheList","Player List","", {},{true}] call ace_interact_menu_fnc_createAction;
alphaAction = ["AlphaList","Alpha List","", {call TWC_fnc_getAlphaList;},{true}] call ace_interact_menu_fnc_createAction;
bravoAction = ["BravoList","Bravo List","", {call TWC_fnc_getBravoList;},{true}] call ace_interact_menu_fnc_createAction;
charlieAction = ["CharlieList","Charlie List","", {call TWC_fnc_getCharlieList;},{true}] call ace_interact_menu_fnc_createAction;
deltaAction = ["DeltaList","Delta List","", {call TWC_fnc_getDeltaList;},{true}] call ace_interact_menu_fnc_createAction;
armorcrewAction = ["ArmorCrewList","ArmorCrew List","", {call TWC_fnc_getArmorCrewList;},{true}] call ace_interact_menu_fnc_createAction;
sniperAction = ["SniperList","Sniper List","", {call TWC_fnc_getSniperList;},{true}] call ace_interact_menu_fnc_createAction;
airAction = ["AirList","Air List","", {call TWC_fnc_getAirList;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], playerListAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], alphaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], bravoAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], charlieAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], deltaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], armorcrewAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], sniperAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], airAction] call ace_interact_menu_fnc_addActionToObject;


if(false)then{
	id_test_status = ["Debug", {true}, _test2, true] call AGM_Interaction_fnc_addInteractionSelf;
};

_name = name player;
TWCServer globalchat format["%1 joined in as %2",_name,g_name];

[] spawn {
	while{true} do {
		waitUntil {count units group player > 1};
		[player] join grpNull ;
	};
};

if (g_class != "") then {
	execVM format["player\loadout\%1.sqf", g_class];
};
//made by hartzie edited by FakeMatty