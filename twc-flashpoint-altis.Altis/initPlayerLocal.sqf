if (!hasInterface) exitWith {};

memberIDArray = ["_SP_PLAYER_","76561197970591603","76561197981096983","76561198035369460","76561197981208292","76561197985821395","76561197988506092","76561197992669373","76561197996044352","76561198001649761","76561198005456546","76561198007975082","76561198010876571","76561198011283748","76561198013509033","76561198014078972","76561198016635135","76561198018609662","76561198018806047","76561198021236275","76561198027413658","76561198037881029","76561198039562456","76561198046761459","76561198049111014","76561198050180681","76561198050512686","76561198051847668","76561198054727971","76561198056177819","76561198056234590","76561198060979584","76561198061797079","76561198062338085","76561198063449316","76561198066275591","76561198067385164","76561198072029517","76561198072105856","76561198077371253","76561198078628958","76561198084557194","76561198095246437","76561198100339755","76561198105044351","76561198148511288","76561198161685880","76561198212968121","76561198269225193","76561198070630639","76561198010598279","76561198061214513","76561198022227167","76561198060151962","76561198035084739","76561198024831311",",76561198016794527","76561198007553017","76561198018708915","76561198032873825","76561198103286410","76561198053968644"];
_UID = getPlayerUID player;

_specialSlots = ["helo1","helo2","helo3","p31","p32","p33","p34","p35","jetPilot1"];

if ((str player) in _specialSlots)then{
	
	_UID = getPlayerUID player;

	if((_UID) != "_SP_PLAYER_") then{	
		_pilots = ["helo1", "helo2", "helo3"];
		_snipers = ["p31","p32"];
		_armour = ["armour1","armour2","armour3"];
		_jets = ["jetPilot1"];
		_numPlayers = switch (str player) do{
			case "helo1": {5};
			case "helo2": {5};
			case "helo3": {5};
			case "p31": {12};
			case "p32": {12};
			case "armour1": {10};
			case "armour2": {10};
			case "armour3": {10};
			case "jetPilot1": {15};
			default {hint "Please send a message to [TWC] Jayman saying the FIRST init.sqf switch statement defaulted and what slot you are in."};
		};
		
		_justPlayers = count(allPlayers - entities "HeadlessClient_F");
		
		_pilotMultiplier = 0;
		if(isPlayer helo1)then{_pilotMultiplier = _pilotMultiplier + 1};
		if(isPlayer helo2)then{_pilotMultiplier = _pilotMultiplier + 1};
		if(isPlayer helo3)then{_pilotMultiplier = _pilotMultiplier + 1};
		hint str (_justPlayers * _pilotMultiplier);
		
		//Checks for playercount
		if ((str player) in _pilots && (_justPlayers * _pilotMultiplier) < _numPlayers) then {
			["End2", false, 0] call BIS_fnc_endMission;
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

execVM "steam\acreCheck.sqf";

execVM "client\init.sqf";

null = execVM "client\sys_Member\init.sqf";

if(isMultiplayer)then{
	cutText ["Receiving...", "BLACK", .001];

	titleText ["The Wrecking Crew","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;

	titleText ["Flashpoint","PLAIN DOWN"];
	titleFadeOut 7;
	sleep 5;

	cutText ["", "BLACK IN", 2];

	titleText ["Enjoy your stay", "PLAIN"];
	titleFadeOut 4;
};