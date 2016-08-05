/*
* Written by [TWC] jayman
* Single Mission time keeping script
*/
//Removes tracking from non TWC members
if(!(getplayerUID player in memberIDArray))exitWith{hint "Not Tracking Time. Player is not a Member"};
//If you have played today it adds your previous time. Else you start with zero.
if((getplayerUID player) in timePlayedArray)then{
	//If the player has played before it finds the previous time. It then updats your start time for the server to know.
	timeStart = diag_tickTime;
	_arrayPos = timePlayedArray find (getplayerUID player);
	_arrayPos = _arrayPos + 1;
	previousTime = timePlayedArray select _arrayPos;
	timeStart = timeStart - (previousTime * 60);
	_arrayPos = _arrayPos + 1;
	timePlayedArray set [_arrayPos, timeStart];
	}else{
	//If you havn't it sets your previous time to zero and begins adding you to the array. Stores a third data for time start. This allows the server to know your start time should you disconnect without checking time.
	previousTime = 0;
	timeStart = diag_tickTime;
	timePlayedArray = timePlayedArray + [getplayerUID player];
	timePlayedArray = timePlayedArray + [previousTime];
	timePlayedArray = timePlayedArray + [timeStart];
	publicVariable "timePlayedArray";
};
//Ace action to check time. This also does the computations.
TWCMemberAction = ["thisStartsTheTimeList","TWC Member","", {},{true}] call ace_interact_menu_fnc_createAction;

timeSavingAction = ["TWC_TimePlayed", "Time Played", "", {
	//Calculates the time played.
	timePlayed = (diag_tickTime - timeStart);
	timePlayed = (floor (timePlayed / 60));
	hint format["You have played %1 Minutes", timePlayed];
	
	//Finds the players spot in array and adjust his time played which is always the number right after it.
	_arrayPos = timePlayedArray find (getplayerUID player);
	_arrayPos = _arrayPos + 1;
	timePlayedArray set [_arrayPos, timePlayed];
	publicVariable "timePlayedArray";
	
		
},{true}] call ace_interact_menu_fnc_createAction;


[player, 1, ["ACE_SelfActions"], TWCMemberAction] call ace_interact_menu_fnc_addActionToObject;

[player, 1, ["ACE_SelfActions", "thisStartsTheTimeList"], timeSavingAction] call ace_interact_menu_fnc_addActionToObject;