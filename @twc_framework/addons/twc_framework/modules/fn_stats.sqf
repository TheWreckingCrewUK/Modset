params["_enabled"];

if!(_enabled)exitWith{};

if(isServer)exitWith{[] call twc_fnc_aiStats};

if(isNil "twc_statsArray")then{
	twc_statsArray = [[],[],[0]];
};

//Keeps track of what has hit the unit:
player addEventHandler ["Hit", {
	//Grabs array and adds new values
	_hitInfoArray = twc_statsArray select 0;
	_hitInfoArray = _hitInfoArray + [(_this select 3),(_this select 1),(_this select 2)];
	
	//Edits the twc_statsArray array
	twc_statsArray set [0,_hitInfoArray];
}];

//The killing is set on AI units not the player
twc_fnc_updatePlayerKills = {
	params["_unit"];
	_killsInfoArray = twc_statsArray select 1;
	_killsInfoArray = _killsInfoArray pushback _unit;
	twc_statsArray set [1,_killsInfoArray];
};

player addEventHandler ["Fired", {
	//Grabs array and adds new values
	_MiscellaneousInfoArray = twc_statsArray select 2;
	_roundsFired = (_MiscellaneousInfoArray select 0) + 1;
	_MiscellaneousInfoArray set [0,_roundsFired];
	//Edits the twc_statsArray array
	twc_statsArray set [2,_MiscellaneousInfoArray];
}];

//Currently Awaiting testing to see how I can paste this to the RPT
//diag_logg twc_statsArray;