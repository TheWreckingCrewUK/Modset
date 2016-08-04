if(!(getplayerUID player in memberIDArray))exitWith{hint "Not Tracking Time. Player is not a Member"};

timeStart = diag_tickTime;

TWCMemberAction = ["thisStartsTheTimeList","TWC Member","", {},{true}] call ace_interact_menu_fnc_createAction;

timeSavingAction = ["TWC_TimePlayed", "Time Played", "", {
	timePlayed = diag_tickTime - timeStart; timePlayed = (floor (timePlayed / 60));
	hint format["You have played %1 Minutes", timePlayed];
	if (timePlayed >= 5)then{
		if ((getplayerUID player) in timePlayedArray)exitWith{};
		timePlayedArray = timePlayedArray + [getplayerUID player];
		publicVariable "timePlayedArray";
	};	
},{true}] call ace_interact_menu_fnc_createAction;





[player, 1, ["ACE_SelfActions"], TWCMemberAction] call ace_interact_menu_fnc_addActionToObject;

[player, 1, ["ACE_SelfActions", "thisStartsTheTimeList"], timeSavingAction] call ace_interact_menu_fnc_addActionToObject;