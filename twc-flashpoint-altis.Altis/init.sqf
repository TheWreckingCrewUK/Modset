[] execVM "server\vehicles\sa_ropes.sqf";
[] execVM "server\vehicles\advancedTowing.sqf";

_crateBoatPos = (getMarkerPos "crateBoat");
crateBoatPos = [(_crateBoatPos select 0),(_crateBoatPos select 1), 2];

RussianCheck = 0;

if(isServer) then{
	_script = execVM "SHK_pos\shk_pos_init.sqf";
	waitUntil {scriptDone _script};
	cratePos = crateBoatPos;
	publicVariable "cratePos";
	["respawn_West", (getMarkerPos "boatSpawn")] remoteExec ["setMarkerPos", 0, "respawnMarker"]; 
	[]spawn{
		counterAttackCounter = 0;
		publicVariable "counterAttackCounter";
	};
	[] spawn{
		patrolCounter = 0;
		publicVariable "patrolCounter";
	};
	#include "server\init.sqf";
	twc_enemySupply = -3;
	publicVariable "twc_enemySupply";
	timePlayedArray = [];
	publicVariable "timePlayedArray";
	commanderBaseCount = 0;
	publicVariable "commanderBaseCount";
	enemyCommander = 0;
	publicVariable "enemyCommander";
};

execVM "client\zeus\zeus.sqf";
execVM "client\zeus\zeus-Fakematty.sqf";
execVM "client\zeus\zeus-jayman.sqf";
execVM "client\zeus\zeus-commander1.sqf";

// Werthles Headless Script Parameters v2.3
// 1. Repeating - true/Once - false,
// 2. Time between repeats (seconds),
// 3. Debug available for all - true/Just available for admin/host - false,
// 4. Advanced balancing - true/Simple balancing - false,
// 5. Delay before executing (seconds),
// 6. Additional syncing time between groups transferred to try to reduce bad unit transfer caused by desyncs (seconds)
// 7. Display an initial setup report after the first cycle, showing the number of units moved to HCs,
// 8. Addition phrases to look for when checking whether to ignore.
// Unit names, group names, unit's current transport vehicle, modules synced to units and unit class names will all be checked for these phrases
// Format:
// ["UnitName","GroupCallsignName","SupportProviderModule1","TypeOfUnit"]
// E.g. ["BLUE1","AlphaSquad","B_Heli_Transport_01_camo_F"] (including ""s)
// Specifying "B_Heli" would stop all units with that class type from transferring to HCs
// However, if you specify "BLUE1", "NAVYBLUE10" will also be ignored

//[true,30,false,true,30,5,true,[]] execVM "server\headlessClient\WerthlesHeadless.sqf";

waitUntil {!isNull player};
waitUntil {player == player};

if(isNil "counterAttackCounter")then{
	counterAttackCounter = 0;
	publicVariable "counterAttackCounter";
};

if(isNil "patrolCounter")then{
	patrolCounter = 0;
	publicVariable "patrolCounter";
};
null = execVM "client\sys_Member\init.sqf";

/*
cutText ["Receiving...", "BLACK", .001];

titleText ["The Wrecking Crew","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;

titleText ["Flashpoint","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;
*/
memberIDArray = ["_SP_PLAYER_","76561197970591603","76561197981096983","76561198035369460","76561197981208292","76561197985821395","76561197988506092","76561197992669373","76561197996044352","76561198001649761","76561198005456546","76561198007975082","76561198010876571","76561198011283748","76561198013509033","76561198014078972","76561198016635135","76561198018609662","76561198018806047","76561198021236275","76561198027413658","76561198037881029","76561198039562456","76561198046761459","76561198049111014","76561198050180681","76561198050512686","76561198051847668","76561198054727971","76561198056177819","76561198056234590","76561198060979584","76561198061797079","76561198062338085","76561198063449316","76561198066275591","76561198067385164","76561198072029517","76561198072105856","76561198077371253","76561198078628958","76561198084557194","76561198095246437","76561198100339755","76561198105044351","76561198148511288","76561198161685880","76561198212968121","76561198269225193","76561198070630639","76561198010598279","76561198061214513","76561198022227167","76561198060151962","76561198035084739","76561198024831311",",76561198016794527","76561198007553017","76561198018708915","76561198032873825","76561198103286410","76561198053968644"];
_UID = getPlayerUID player;

_specialSlots = ["helo1","helo2","helo3","p31","p32","p33","p34","p35","jetPilot1","enemy1","commander1"];

if ((str player) in _specialSlots)then{
	
	_UID = getPlayerUID player;

	if((_UID) != "_SP_PLAYER_") then{	
		_pilots = ["helo1", "helo2", "helo3"];
		_snipers = ["p31","p32"];
		_armour = ["p33","p34","p35"];
		_jets = ["jetPilot1"];
		_commanders = ["commander","enemy1"];
		_numPlayers = switch (str player) do{
			case "helo1": {5};
			case "helo2": {10};
			case "helo3": {15};
			case "p31": {12};
			case "p32": {12};
			case "p33": {10};
			case "p34": {10};
			case "p35": {10};
			case "jetPilot1": {15};
			case "commander1": {100};
			case "enemy1": {100};
			default {hint "Please send a message to [TWC] Jayman saying the FIRST init.sqf switch statement defaulted and what slot you are in."};
		};
		
		if ((str player) in _pilots && (count playableUnits) < _numPlayers) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
		
		if ((str player) in _snipers && (count playableUnits) < _numPlayers) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
		
		if ((str player) in _armour && (count playableUnits) < _numPlayers) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
		
		if ((str player) in _jets && (count playableUnits) < _numPlayers) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
		
		if ((str player) in _commanders && ((count playableUnits) < _numPlayers || !(_UID in memberIDArray))) then {
			["End1", false, 0] call BIS_fnc_endMission;
		};
	};
};
/*
cutText ["", "BLACK IN", 2];

titleText ["Enjoy your stay", "PLAIN"];
titleFadeOut 4;