call compile preprocessfilelinenumbers "shk_pos\shk_pos_init.sqf";




if (isServer) then
{
	// Task Force Radio Settings
	#include "\task_force_radio\functions\common.sqf";

	tf_no_auto_long_range_radio = true;
	publicVariable "tf_no_auto_long_range_radio";
	tf_same_sw_frequencies_for_side = true;
	publicVariable "tf_same_sw_frequencies_for_side";
	tf_same_lr_frequencies_for_side = true;
	publicVariable "tf_same_lr_frequencies_for_side";
	TF_give_microdagr_to_soldier = false;


	_settingsSwWest = false call TFAR_fnc_generateSwSettings;
	_settingsSwWest set [2, ["200","120","130","140","150"]];
	tf_freq_west = _settingsSwWest;

	_settingsLrWest = false call TFAR_fnc_generateLrSettings;
	_settingsLrWest set [2, ["50"]];
	tf_freq_west_lr = _settingsLrWest;

};
//AO Setup and SideMission

TaskArray=["Pygros","Charkia","Rodopoli","Paros","Frini","Galati","Syrta","Agios Dionysios","Poliakko","Neochori"];
null = [] execVM "ao\RandomArray.sqf";

SideMissionsMarkerArray = ["SideMission1","SideMission2","SideMission3"];
null = [] execVM "ao\RandomSideMission.sqf";

//calling init files
null = [] execVM "TWC\init.sqf";

// russian check set
russiancheck = 0;
TaskIncrease = 0;
SideMissonIncrease = 0;
DebugCheck = False;

//hc and playerlist start
if(isDedicated || isServer) then{
   execVM "hc\init.sqf";
   HeadlessClientCheck = false;
};

if(!hasInterface && !isDedicated) then {
   execVM "hc\init.sqf";
   HeadlessClientCheck = True;
};

/*insurgency
if(isServer) then
{
	_serverID = str(round((random(100000)) + random 10000));
	profileNameSpace setVariable ["TWC_ServerID",_serverID];
	TWCserverID = profileNameSpace getVariable "TWC_ServerID";
	publicVariable "TWCserverID";
};
*/


if(isServer) then
{
	TWCserverID = profileNameSpace getVariable "TWC_ServerID";
	publicVariable "TWCserverID";
};



waitUntil {!isNull player};
waitUntil {player == player};

_playerID = getPlayerUID player;
memberIDArray = ["76561198078628958", "76561198010598279", "76561198061214513", "76561198051847668","76561198050512686", "76561198050180681", "76561198039562456", "76561198018609662", "76561198013509033", "76561198010876571", "76561198007975082", "76561198001649761", "76561197985821395", "76561197981096983", "76561197970591603", "76561198100339755", "76561198084557194", "76561198077371253", "76561198076461963", "76561198072105856", "76561198067385164", "76561198062338085", "76561198061797079", "76561198054727971","76561198070630639","76561198018806047","76561197981208292","_SP_PLAYER_"];

null = execVM "TWC\Members\Timeplayed.sqf";

if ((getplayerUID player)in memberIDArray) then {

_Time = ['TWC_Timeplayed','Time Played','', {[] call TWC_fnc_timePlayed},{true}] call ace_interact_menu_fnc_createAction;
 [player, 1, ["ACE_SelfActions"], _Time] call ace_interact_menu_fnc_addActionToObject;

};

