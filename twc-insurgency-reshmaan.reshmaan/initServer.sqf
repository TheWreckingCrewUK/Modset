_script = execVM "SHK_pos\shk_pos_init.sqf";
waitUntil{scriptDone _script};

execVM "server\init.sqf";

"iedRestrictionZone" setMarkerAlpha 0;

nonQuestionableList = [];
publicVariable "nonQuestionableList";

execVM "server\sys_vehicles\cargoDeployed.sqf";

//Mission time randomizer.
//only is random between 4am-2pm.
_time = random 10;
_time = _time + 4;
skipTime (_time - dayTime + 24)%24;

InsP_playersKilledAsCivs = [];
publicVariable "InsP_playersKilledAsCivs";



addMissionEventHandler ["EntityKilled", 
{
    params ["_killed", "_killer"];
	_killer = _killed getVariable ["ace_medical_lastDamageSource", objNull];
    
    if (_killed isKindOf "CAManBase" && {side group _killed isEqualTo civilian} && {side group _killer == West}) then
    {
					InsP_civTrust = InsP_civTrust - 0.4;
	publicVariable "InsP_civTrust";
    };
}];

addMissionEventHandler ["EntityKilled", 
{
    params ["_killed1", "_killer1"];
	_killer1 = _killed1 getVariable ["ace_medical_lastDamageSource", objNull];
    
    if (_killed1 isKindOf "CAManBase" && {side group _killed1 isEqualTo east} && {side group _killer1 == West}) then
    {
					InsP_enemyMorale = InsP_enemyMorale - 0.05;
	publicVariable "InsP_enemyMorale";
    };
}];

addMissionEventHandler ["EntityKilled", 
{
    params ["_killed1", "_killer1"];
	_killer1 = _killed1 getVariable ["ace_medical_lastDamageSource", objNull];
    
    if (_killed1 isKindOf "CAManBase" && {side group _killed1 isEqualTo west} && {side group _killer1 == east}) then
    {
					InsP_enemyMorale = InsP_enemyMorale + 0.5;
	publicVariable "InsP_enemyMorale";
    };
}];



timeEventHandler = addMissionEventHandler ["PlayerDisconnected",{
	if(!((_this select 1) in memberIDArray))exitWith{};
	
	//Find the player in the array and the apropriate numbers. gets variables for ease.
	_arrayPos = timePlayedArray find (_this select 1);
	timePlayed = _arrayPos + 1;
	timeStart = _arrayPos + 2;
	
	//calculates the time
	timePlayed = (diag_tickTime - timeStart);
	timePlayed = (floor (timePlayed / 60));

	//Resets array position on player.
	_arrayPos = timePlayedArray find (_this select 1);
	
	_arrayPos = _arrayPos + 1;
	timePlayedArray set [_arrayPos, timePlayed];
	publicVariable "timePlayedArray";
}];