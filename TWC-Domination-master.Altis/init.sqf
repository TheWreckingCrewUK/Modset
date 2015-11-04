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
if (isserver) then {
//calling init files
null = [] execVM "TWC\init.sqf";
};
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

execVM "Zues.sqf";


waitUntil {!isNull player};
waitUntil {player == player};

null = execVM "TWC\Members\Timeplayed.sqf";

if ((getplayerUID player)in memberIDArray) then {
	_Time = ['TWC_Timeplayed','Time Played','', {[] call TWC_fnc_timePlayed},{true}] call ace_interact_menu_fnc_createAction;
	player, 1, ["ACE_SelfActions"], _Time] call ace_interact_menu_fnc_addActionToObject;
};














