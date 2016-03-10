execVM "client\zeus\zeus.sqf";
execVM "client\zeus\zeus-Fakematty.sqf";
execVM "client\zeus\zeus-jayman.sqf";

[] execVM "client\slingLoading\sa_ropes.sqf";

waitUntil {!isNull player};
waitUntil {player == player};

execVM "SHK_pos\shk_pos_init.sqf";

russiancheck = 0;

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

cutText ["Receiving...", "BLACK", .001];

titleText ["The Wrecking Crew","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;

titleText ["Domination Plus","PLAIN DOWN"];
titleFadeOut 7;
sleep 5;

_memberIDArray = ["_SP_PLAYER_","76561197970591603","76561197981096983","76561198035369460","76561197981208292","76561197985821395","76561197988506092","76561197992669373","76561197996044352","76561198001649761","76561198005456546","76561198007975082","76561198010876571","76561198011283748","76561198013509033","76561198014078972","76561198016635135","76561198018609662","76561198018806047","76561198021236275","76561198027413658","76561198037881029","76561198039562456","76561198046761459","76561198049111014","76561198050180681","76561198050512686","76561198051847668","76561198054727971","76561198056177819","76561198056234590","76561198060979584","76561198061797079","76561198062338085","76561198063449316","76561198066275591","76561198067385164","76561198072029517","76561198072105856","76561198077371253","76561198078628958","76561198084557194","76561198095246437","76561198100339755","76561198105044351","76561198148511288","76561198161685880","76561198212968121","76561198269225193","76561198070630639","76561198010598279","76561198061214513"];
_UID = getPlayerUID player;

_pilots = ["p31", "p32"];
_numNeededForPilots = 0;
if(isPlayer p31) then{_numNeededForPilots = _numNeededForPilots +5};
if(isPlayer p32) then{_numNeededForPilots = _numNeededForPilots +5};

if((_UID) != "_SP_PLAYER_")then{
	if ((str player) in _pilots && (count playableUnits) < _numNeededForPilots) then {
		["end2", false, 0] call BIS_fnc_endMission;
	};
};

cutText ["", "BLACK IN", 2];

titleText ["Enjoy your stay", "PLAIN"];
titleFadeOut 4;