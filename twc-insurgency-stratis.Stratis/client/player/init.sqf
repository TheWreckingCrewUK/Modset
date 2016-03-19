g_class = "";
g_group = "";
g_unit = "";
if (!isNil "humanCiv1" && {player == humanCiv1}) then {
    g_class = "Civ";
	g_group = "0";
	g_unit = "200";
	g_name = "Civilian";
	g_radio = "";
};
if (!isNil "humanCiv2" && {player == humanCiv2}) then {
    g_class = "Civ";
	g_group = "0";
	g_unit = "201";
	g_name = "Civilian";
	g_radio = "";
};
if (!isNil "humanCiv3" && {player == humanCiv3}) then {
    g_class = "Civ";
	g_group = "0";
	g_unit = "202";
	g_name = "Civilian";
	g_radio = "";
};
if (!isNil "P1" && {player == P1}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "000";
	g_name = "Alpha Section Leader";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
};

if (!isNil "P2" && {player == P2}) then {
    g_class = "BAF_RF";
	g_group = "0";
	g_unit = "010";
	g_name = "Alpha Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
};

if (!isNil "P3" && {player == P3}) then {
    g_class = "BAF_GRN";
	g_group = "0";
	g_unit = "011";
	g_name = "Alpha Grenadier";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
};

if (!isNil "P4" && {player == P4}) then {
    g_class = "BAF_AR";
	g_group = "0";
	g_unit = "012";
	g_name = "Alpha Automatic Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
};

if (!isNil "P5" && {player == P5}) then {
    g_class = "BAF_MED";
	g_group = "0";
	g_unit = "013";
	g_name = "Alpha Medic";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
};
if (!isNil "P6" && {player == P6}) then {
    g_class = "US_SL";
	g_group = "0";
	g_unit = "020";
	g_name = "Bravo Squad Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P7" && {player == P7}) then {
    g_class = "US_RF";
	g_group = "0";
	g_unit = "021";
	g_name = "Bravo Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P8" && {player == P8}) then {
    g_class = "US_GRN";
	g_group = "0";
	g_unit = "022";
	g_name = "Bravo grenadier";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P9" && {player == P9}) then {
    g_class = "US_AR";
	g_group = "0";
	g_unit = "023";
	g_name = "Bravo Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P10" && {player == P10}) then {
    g_class = "US_MED";
	g_group = "9";
	g_unit = "800";
	g_name = "Bravo Medic";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P11" && {player == P11}) then {
    g_class = "USMC_SL";
	g_group = "9";
	g_unit = "801";
	g_name = "Charlie Squad Leader";
	g_radio_channel = 3;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P12" && {player == P12}) then {
    g_class = "USMC_RF";
	g_group = "9";
	g_unit = "802";
	g_name = "Charlie Rifleman";
	g_radio_channel = 3;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P13" && {player == P13}) then {
    g_class = "USMC_GRN";
	g_group = "1";
	g_unit = "100";
	g_name = "Charlie Grenadier";
	g_radio_channel = 3;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P14" && {player == P14}) then {
    g_class = "USMC_AR";
	g_group = "1";
	g_unit = "110";
	g_name = "Charlie Automatic Rifleman";
	g_radio_channel = 3;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P15" && {player == P15}) then {
    g_class = "USMC_MED";
	g_group = "1";
	g_unit = "111";
	g_name = "Charlie Medic";
	g_radio_channel = 3;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P16" && {player == P16}) then {
    g_class = "ANA_SL";
	g_group = "1";
	g_unit = "112";
	g_name = "Delta Squad Leader";
};

if (!isNil "P17" && {player == P17}) then {
    g_class = "ANA_RF";
	g_group = "1";
	g_unit = "113";
	g_name = "Delta Rifleman";
};

if (!isNil "P18" && {player == P18}) then {
    g_class = "ANA_GRN";
	g_group = "1";
	g_unit = "120";
	g_name = "Delta Grenadier";
};

if (!isNil "P19" && {player == P19}) then {
    g_class = "ANA_AR";
	g_group = "1";
	g_unit = "121";
	g_name = "Delta Automatic Rifleman";
};

if (!isNil "P20" && {player == P20}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "122";
	g_name = "Delta Medic";
};

if (!isNil "P21" && {player == P21}) then {
    g_class = "PLT";
	g_group = "1";
	g_unit = "123";
	g_radio = "";
	g_name = "Blackhawk Pilot";
};

if (!isNil "P22" && {player == P22}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "130";
	g_radio = "";
	g_name = "Crew Chief";
};

if (!isNil "P23" && {player == P23}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "131";
	g_radio = "";
	g_name = "Door Gunner";
};

if (!isNil "P24" && {player == P24}) then {
    g_class = "PLT_CREW";
	g_group = "1";
	g_unit = "132";
	g_radio = "";
	g_name = "Crew Chief";
};

if (!isNil "P25" && {player == P25}) then {
    g_class = "ARMR_CO";
	g_group = "1";
	g_unit = "133";
	g_name = "Armour Crew Commander";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P26" && {player == P26}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "134";
	g_name = "Armour Crew";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC148";
};

if (!isNil "P27" && {player == P27}) then {
    g_class = "ARMR_CREW";
	g_group = "1";
	g_unit = "135";
	g_name = "Armour Crew";
	g_radio_channel = 5;
	g_radio = "ACRE_PRC148";
};

/*
if (!isNil "P25" && {player == P25}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "133";
};
if (!isNil "P26" && {player == P26}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "134";
};
if (!isNil "P27" && {player == P27}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "135";
};
if (!isNil "P28" && {player == P28}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "136";
};
if (!isNil "P29" && {player == P29}) then {
    g_class = "ANA_MED";
	g_group = "1";
	g_unit = "137";
};
if (!isNil "P30" && {player == P30}) then {
    g_class = "USMC_MED";
	g_group = "1";
	g_unit = "138";
};

if (!isNil "P31" && {player == P31}) then {
    g_class = "PILOT_BLACKHAWK";
	g_group = "1";
	g_unit = "139";
};
if (!isNil "P32" && {player == P32}) then {
    g_class = "PILOT_CHINNOK";
	g_group = "1";
	g_unit = "140";
};
if (!isNil "P33" && {player == P33}) then {
    g_class = "PILOT_WILDCAT";
	g_group = "1";
	g_unit = "141";
};

if (!isNil "P34" && {player == P34}) then {
    g_class = "ARMOUR";
	g_group = "1";
	g_unit = "142";
};

if (!isNil "P35" && {player == P35}) then {
    g_class = "ARMOURCREW";
	g_group = "1";
	g_unit = "143";
};

if (!isNil "P36" && {player == P36}) then {
    g_class = "ARMOURCREW";
	g_group = "1";
	g_unit = "144";
};

if (!isNil "P37" && {player == P37}) then {
    g_class = "SPOTTER";
	g_group = "1";
	g_unit = "145";
};
if (!isNil "P38" && {player == P38}) then {
    g_class = "SNIPER";
	g_group = "1";
	g_unit = "146";
};
*/
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
g_humanCiv1 = "";
g_humanCiv2 = "";
g_humanCiv3 = "";


execVM "client\player\boxes\main_ammo.sqf";
_test = format["hint '%1'",getPlayerUID player];
_test2 = format["hint '%1'",({side _x == WEST} count playableUnits)];

execVM "client\player\psync.sqf";

 
 TWC_fnc_getAlphaList = {
    execVM "client\playerlist\alpha.sqf";
};

TWC_fnc_getBravoList = {
     execVM "client\playerlist\bravo.sqf";
};

TWC_fnc_getCharlieList = {
   execVM "client\playerlist\charlie.sqf";
};

TWC_fnc_getDeltaList = {
    execVM "client\playerlist\delta.sqf";
};

TWC_fnc_getAirList = {
   execVM "client\playerlist\air.sqf";
};

playerListAction = ["thisStartsTheList","Player List","", {},{true}] call ace_interact_menu_fnc_createAction;
alphaAction = ["AlphaList","Alpha List","", {call TWC_fnc_getAlphaList;},{true}] call ace_interact_menu_fnc_createAction;
bravoAction = ["BravoList","Bravo List","", {call TWC_fnc_getBravoList;},{true}] call ace_interact_menu_fnc_createAction;
charlieAction = ["CharlieList","Charlie List","", {call TWC_fnc_getCharlieList;},{true}] call ace_interact_menu_fnc_createAction;
deltaAction = ["DeltaList","Delta List","", {call TWC_fnc_getDeltaList;},{true}] call ace_interact_menu_fnc_createAction;
airAction = ["AirList","Air List","", {call TWC_fnc_getAirList;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], playerListAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], alphaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], bravoAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], charlieAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], deltaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], airAction] call ace_interact_menu_fnc_addActionToObject;


[] spawn {
	while{true} do {
		waitUntil {count units group player > 1};
		[player] join grpNull ;
	};
};


_name = name player;
_text = format["%1 joined in as %2",_name,g_name];
[TWCServer,_text] remoteExec ["TWC_fnc_GlobalChat", 2]; 

if (g_class != "") then {
	execVM format["client\player\loadout\%1.sqf", g_class];
};

sleep 2;
if (g_radio != "") then {
	_radioID = [g_radio] call acre_api_fnc_getRadioByType;
	_switchChannel = [_radioID, g_radio_channel] call acre_api_fnc_setRadioChannel;
	Hint parseText format ["<t color='#d0dd00' size='1.2' shadow='1' shadowColor='#000000' align='center'>Radio Set</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Radio:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%1</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Channel:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%2</t>",g_radio,g_radio_channel];
};