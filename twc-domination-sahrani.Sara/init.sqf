/*
* This mission should be set up to work on any map with different mod packs. All one would have to do is set up the initial spawn base and change the few settings here:
*
* Created by [TWC] jayman
*/

//Setting for whether or not to add Mods:
/* Options are:
* 0 for unmodded
* 1 for twc public modpack
*/
isModded = 1;
/* Setting for what map we are on:
* This is for the badAOs array. For example it avoids some altis objectives that are mostly water.
* Options are: You must include the quotation marks
* "Altis"
* "Sahrani"
*/
whatMap = "Sahrani";
//Setting for how many AO's to complete:
aosToComplete = 3;
// Setting for how far AO's should spawn Away
aoDistanceFromSpawn = 8000;

//End of map/mod settings

//ACRE Setting:
if(isModded == 1)then{
//See http://acre.idi-systems.com/api/api_general.html for info on these functions.
//Basic Settings:
	[false, false] call acre_api_fnc_setupMission;
	[true] call acre_api_fnc_setRevealToAI;
//Difficulty Settings:
	[0] call acre_api_fnc_setLossModelScale;
	[true] call acre_api_fnc_setFullDuplex;
	[false] call acre_api_fnc_setInterference;
};
//adds all units to zeus. (adminLogged):
execVM "client\zeus\zeus.sqf";
//check for enemies in the base:
if(hasInterface)then{
	Russiancheck = 0;
};
//Stuff to run only on the server
if(isServer)then{
	execVM "server\arsenal\arsenal.sqf";
	_script = execVM "SHK_pos\shk_pos_init.sqf";
	waitUntil {scriptDone _script};
	execVM "server\init.sqf";
	
};

//Below is the settings for restrictiong slots based on playercount.
_specialSlots = ["armour1","armour2","armour3","helo1","helo2","helo3","helo4","jet1"];

if ((str player) in _specialSlots)then{
	
	_UID = getPlayerUID player;

	if((_UID) != "_SP_PLAYER_") then{	
		_pilots = ["helo1", "helo2", "helo3","helo4"];
		_armour = ["armour1","armour2","armour3"];
		_jets = ["jet1"];
		_numPlayers = switch (str player) do{
			case "helo1": {4};
			case "helo2": {9};
			case "helo3": {9};
			case "helo4": {14};
			case "armour1": {17};
			case "armour2": {17};
			case "armour3": {17};
			case "jet1": {30};
			default {hint "Please send a message to [TWC] Jayman saying the FIRST init.sqf switch statement defaulted and what slot you are in."};
		};
		
		if ((str player) in _pilots && (count playableUnits) < _numPlayers) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
		
		if ((str player) in _armour && (count playableUnits) < _numPlayers) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
		
		if ((str player) in _jets && (count playableUnits) < _numPlayers) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
	};
};