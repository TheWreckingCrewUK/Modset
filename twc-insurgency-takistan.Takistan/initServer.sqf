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

execVM "server\vehicles\cargoDeployed.sqf";