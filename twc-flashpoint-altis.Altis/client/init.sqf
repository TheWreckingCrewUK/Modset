hint "If you're naked you can get a default loadout from an Ammo Box Action. Sorry about his bug.";
#include "playerFunctions.sqf";

InsP_MissionStatus = ["MissionStatus","Mission Status","",{execVM "client\diary\missionStatus.sqf"},{true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], InsP_MissionStatus] call ace_interact_menu_fnc_addActionToObject;

player addEventHandler ["RESPAWN",{
	hint "Respawn Event Handler Active";
	counterAttackCounter = counterAttackCounter + 1;
	publicVariable "counterAttackCounter";
	if(counterAttackCounter > 15)then {
		remoteExecCall ["twc_redforSiteRecapAttempt",2,False];
	};
	patrolCounter = patrolCounter + 1;
	publicVariable "patrolCounter";
	if(patrolCounter > 10) then{
		remoteExecCall ["twc_patrols",2,False];
	};
}];

execVM "client\restrict\init.sqf";
execVM "client\cleanup\gear.sqf";
execVM "client\diary\init.sqf";
execVM "client\vehicleSpawning\supportVehicles.sqf";
g_class = "";
g_group = "";
g_unit = "";
if (!isNil "commander1" && {player == commander1}) then {
    g_class = "CMDR";
	g_group = "0";
	g_unit = "000";
	g_name = "Commander";
	g_radio_channel = 10;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landCommander.sqf";
	execVM "client\commander\init.sqf";
};
if (!isNil "p1" && {player == p1}) then {
    g_class = "BAF_SL";
	g_group = "0";
	g_unit = "001";
	g_name = "Alpha Section Leader";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritish.sqf";
};
if (!isNil "p2" && {player == p2}) then {
    g_class = "BAF_RF";
	g_group = "0";
	g_unit = "002";
	g_name = "Alpha Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritishGrunts.sqf";
};
if (!isNil "p3" && {player == p3}) then {
    g_class = "BAF_G";
	g_group = "0";
	g_unit = "003";
	g_name = "Alpha Grenadier";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritishGrunts.sqf";
};
if (!isNil "p4" && {player == p4}) then {
    g_class = "BAF_AR";
	g_group = "0";
	g_unit = "004";
	g_name = "Alpha Automatic Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritishGrunts.sqf";
};
if (!isNil "p5" && {player == p5}) then {
    g_class = "BAF_2";
	g_group = "0";
	g_unit = "005";
	g_name = "Alpha 2IC";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritishGrunts.sqf";
};
if (!isNil "p6" && {player == p6}) then {
    g_class = "BAF_MG";
	g_group = "0";
	g_unit = "006";
	g_name = "Alpha Machine Gunner";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritishGrunts.sqf";
};
if (!isNil "p7" && {player == p7}) then {
    g_class = "BAF_MARK";
	g_group = "0";
	g_unit = "007";
	g_name = "Alpha Marksman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritishGrunts.sqf";
};
if (!isNil "p8" && {player == p8}) then {
    g_class = "BAF_MED";
	g_group = "0";
	g_unit = "008";
	g_name = "Alpha Medic";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC343";
	execVM "client\vehicleSpawning\landBritishGrunts.sqf";
};
if (!isNil "p9" && {player == p9}) then {
    g_class = "US_SL";
	g_group = "0";
	g_unit = "009";
	g_name = "Bravo Section Leader";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p10" && {player == p10}) then {
    g_class = "US_FTL";
	g_group = "0";
	g_unit = "010";
	g_name = "Bravo Fireteam Leader";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p11" && {player == p11}) then {
    g_class = "US_RF";
	g_group = "0";
	g_unit = "011";
	g_name = "Bravo Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p12" && {player == p12}) then {
    g_class = "US_GRN";
	g_group = "0";
	g_unit = "012";
	g_name = "Bravo Grenadier";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p13" && {player == p13}) then {
    g_class = "US_AR";
	g_group = "0";
	g_unit = "013";
	g_name = "Bravo Automatic Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p14" && {player == p14}) then {
    g_class = "US_FTL";
	g_group = "0";
	g_unit = "014";
	g_name = "Bravo Fireteam Leader";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p15" && {player == p15}) then {
    g_class = "US_AR";
	g_group = "0";
	g_unit = "015";
	g_name = "Bravo Automatic Rifleman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p16" && {player == p16}) then {
    g_class = "US_MARK";
	g_group = "0";
	g_unit = "016";
	g_name = "Bravo Marksman";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p17" && {player == p17}) then {
    g_class = "US_MED";
	g_group = "0";
	g_unit = "017";
	g_name = "Bravo Medic";
	g_radio_channel = 1;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSArmyGrunts.sqf";
};
if (!isNil "p18" && {player == p18}) then {
    g_class = "USMC_SL";
	g_group = "0";
	g_unit = "018";
	g_name = "Charlie Section Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p19" && {player == p19}) then {
    g_class = "USMC_FTL";
	g_group = "0";
	g_unit = "019";
	g_name = "Charlie Fireteam Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p20" && {player == p20}) then {
    g_class = "USMC_RF";
	g_group = "0";
	g_unit = "020";
	g_name = "Charlie Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p21" && {player == p21}) then {
    g_class = "USMC_AR";
	g_group = "0";
	g_unit = "022";
	g_name = "Charlie Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p22" && {player == p22}) then {
    g_class = "USMC_AAR";
	g_group = "0";
	g_unit = "022";
	g_name = "Charlie Assistant Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p23" && {player == p23}) then {
    g_class = "USMC_FTL";
	g_group = "0";
	g_unit = "023";
	g_name = "Charlie Fireteam Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p24" && {player == p24}) then {
    g_class = "USMC_RF";
	g_group = "0";
	g_unit = "024";
	g_name = "Charlie Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p25" && {player == p25}) then {
    g_class = "USMC_AR";
	g_group = "0";
	g_unit = "025";
	g_name = "Charlie Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p26" && {player == p26}) then {
    g_class = "USMC_AAR";
	g_group = "0";
	g_unit = "026";
	g_name = "Charlie Assistant Automatic Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p27" && {player == p27}) then {
    g_class = "USMC_FTL";
	g_group = "0";
	g_unit = "027";
	g_name = "Charlie Fireteam Leader";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p28" && {player == p28}) then {
    g_class = "USMC_RF";
	g_group = "0";
	g_unit = "028";
	g_name = "Charlie Rifleman";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p29" && {player == p29}) then {
    g_class = "USMC_MG";
	g_group = "0";
	g_unit = "029";
	g_name = "Charlie Machine Gunner";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p30" && {player == p30}) then {
    g_class = "USMC_MED";
	g_group = "0";
	g_unit = "030";
	g_name = "Medic";
	g_radio_channel = 2;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landUSMCGrunts.sqf";
};
if (!isNil "p31" && {player == p31}) then {
    g_class = "SNIPER";
	g_group = "0";
	g_unit = "031";
	g_name = "Sniper";
	g_radio_channel = 6;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landAttachments.sqf";
};
if (!isNil "p32" && {player == p32}) then {
    g_class = "SPOTTER";
	g_group = "0";
	g_unit = "032";
	g_name = "Spotter";
	g_radio_channel = 6;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landAttachments.sqf";
};
if (!isNil "p33" && {player == p33}) then {
    g_class = "ARMOUR";
	g_group = "0";
	g_unit = "033";
	g_name = "Armour Crew commander";
	g_radio_channel = 7;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\armourCommander.sqf";
	player addEventHandler ["RESPAWN",{armourSpawned = 0}];
};
if (!isNil "p34" && {player == p34}) then {
    g_class = "ARMOURCREW";
	g_group = "0";
	g_unit = "034";
	g_name = "Armour Crewman";
	g_radio_channel = 7;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landAttachments.sqf";
};
if (!isNil "p35" && {player == p35}) then {
    g_class = "ARMOURCREW";
	g_group = "0";
	g_unit = "035";
	g_name = "Armour Crewman";
	g_radio_channel = 7;
	g_radio = "ACRE_PRC148";
	execVM "client\vehicleSpawning\landAttachments.sqf";
};
if (!isNil "helo1" && {player == helo1}) then {
    g_class = "WLD_PLT";
	g_group = "0";
	g_unit = "100";
	g_name = "Wildcat Pilot";
	g_radio = "";
	SpawnAW19Action = ["SpawnAW159","AW19 Wildcat","",{_veh = "CUP_B_AW159_Cannon_GB" createVehicle (position armourSpawnPad);_veh setDir 120;[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
	["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnAW19Action] call ace_interact_menu_fnc_addActionToClass;	
	execVM "client\radar\helicopterRadar.sqf";
		if(isNil "jetSpawned") then{
		jetSpawned = 0;
		publicVariable "jetSpawned";
	};
	player addEventHandler ["RESPAWN",{jetSpawned = 0}];
};
if (!isNil "helo2" && {player == helo2}) then {
    g_class = "BLK_PLT";
	g_group = "0";
	g_unit = "101";
	g_name = "BlackHawk Pilot";
	g_radio = "";
	SpawnUH60MAction = ["SpawnUH60M","UH60M Blackhawk","",{_veh = "CUP_B_UH60M_US" createVehicle (position armourSpawnPad);_veh setDir 120;[_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
	["Land_InfoStand_V2_F", 0, ["ACE_MainActions"], SpawnUH60MAction] call ace_interact_menu_fnc_addActionToClass;
	execVM "client\radar\helicopterRadar.sqf";
	prepAction = player addAction ["<t color='#FF0000'>Prep Osprey For Paradrop</t>", "_vehicle = cursorObject; hint str cursorObject; [_vehicle] call twc_paradropSetup"];
	if(isNil "jetSpawned") then{
		jetSpawned = 0;
		publicVariable "jetSpawned";
	};
	player addEventHandler ["RESPAWN",{jetSpawned = 0}];
};
if (!isNil "jetpilot1" && {player == jetpilot1}) then {
    g_class = "JET_PLT";
	g_group = "0";
	g_unit = "100";
	g_name = "Jet Pilot";
	g_radio = "";
	execVM "client\vehicleSpawning\jetPilot.sqf";
	execVM "client\radar\helicopterRadar.sqf";
	if(isNil "jetSpawned") then{
		jetSpawned = 0;
		publicVariable "jetSpawned";
	};
	player addEventHandler ["RESPAWN",{jetSpawned = 0}];
	fjetSpawned = 0;
	player addEventHandler ["RESPAWN",{fjetSpawned = 0}];
	
};
g_commander1 = "";
g_p1 = "";
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
g_P26 = "";
g_p27 = "";
g_p28 = "";
g_p29 = "";
g_p30 = "";
g_p31 = "";
g_p32 = "";
g_p33 = "";
g_p34 = "";
g_p35 = "";
g_helo1 = "";
g_helo2 = "";


execVM "client\boxes\main_ammo.sqf";
execVM "client\boxes\boat_ammo.sqf";
execVM "client\boxes\secondary_ammo.sqf";
_test = format["hint '%1'",getPlayerUID player];
_test2 = format["hint '%1'",({side _x == WEST} count playableUnits)];

execVM "client\psync.sqf";

TWC_fnc_getAlphaList = {
    execVM "client\playerlist\alpha.sqf";
};

TWC_fnc_getBravoList = {
     execVM "client\playerlist\bravo.sqf";
};

TWC_fnc_getCharlieList = {
   execVM "client\playerlist\charlie.sqf";
};
TWC_fnc_getSupportList = {
   execVM "client\playerlist\Support.sqf";
};
TWC_fnc_getAirList = {
   execVM "client\playerlist\air.sqf";
};

playerListAction = ["thisStartsTheList","Player List","", {},{true}] call ace_interact_menu_fnc_createAction;
alphaAction = ["AlphaList","Alpha List","", {call TWC_fnc_getAlphaList;},{true}] call ace_interact_menu_fnc_createAction;
bravoAction = ["BravoList","Bravo List","", {call TWC_fnc_getBravoList;},{true}] call ace_interact_menu_fnc_createAction;
charlieAction = ["CharlieList","Charlie List","", {call TWC_fnc_getCharlieList;},{true}] call ace_interact_menu_fnc_createAction;
supportAction = ["SupportList","Support List","", {call TWC_fnc_getSupportList;},{true}] call ace_interact_menu_fnc_createAction;
airAction = ["AirList","Air List","", {call TWC_fnc_getAirList;},{true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], playerListAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], alphaAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], bravoAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], charlieAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], supportAction] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "thisStartsTheList"], airAction] call ace_interact_menu_fnc_addActionToObject;


if(false)then{
	id_test_status = ["Debug", {true}, _test2, true] call AGM_Interaction_fnc_addInteractionSelf;
};

_name = name player;
_text = format["%1 joined in as %2",_name,g_name];
[TWCServer,_text] remoteExec ["TWC_fnc_GlobalChat", 2]; 

[] spawn {
	while{true} do {
		waitUntil {count units group player > 1};
		[player] join grpNull ;
	};
};
sleep 2;
if (g_class != "") then {
	execVM format["client\loadout\%1.sqf", g_class];
};
sleep 2;
if (g_radio != "") then {
	_radioID = [g_radio] call acre_api_fnc_getRadioByType;
	_switchChannel = [_radioID, g_radio_channel] call acre_api_fnc_setRadioChannel;
	Hint parseText format ["<t color='#d0dd00' size='1.2' shadow='1' shadowColor='#000000' align='center'>Radio Set</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Radio:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%1</t><br/><t color='#d0dd00' size='0.8' shadow='1' shadowColor='#565656' align='left'>Channel:</t><t color='##013bb6' size='0.8' shadow='1' shadowColor='#565656' align='right'>%2</t>",g_radio,g_radio_channel];
};

//made by hartzie edited by FakeMatty

