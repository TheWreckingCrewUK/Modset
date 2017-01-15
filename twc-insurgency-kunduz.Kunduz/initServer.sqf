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