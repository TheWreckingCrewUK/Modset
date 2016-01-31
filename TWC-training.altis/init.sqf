execVM "scripts\Zues\Zues1.sqf";
execVM "scripts\Zues\Zues2.sqf";
execVM "scripts\Zues\Zues3.sqf";
execVM "scripts\Zues\Zues4.sqf";
execVM "scripts\Zues\Zues5.sqf";
execVM "scripts\Zues\Zues6.sqf";
execVM "scripts\Zues\Zues7.sqf";

trainerIDarray = ["_SP_PLAYER_","76561198050512686","76561197981096983","76561198046761459","76561198051847668","76561198100339755","76561198105044351","76561198072105856"];

if (!(getPlayerUID player) in trainerIDArray && in _Trainers then {
    ["end1", false, 0] call BIS_fnc_endMission;};
	

	
