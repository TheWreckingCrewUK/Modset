execVM "scripts\Zues\Zues1.sqf";
execVM "scripts\Zues\Zues2.sqf";
execVM "scripts\Zues\Zues3.sqf";
execVM "scripts\Zues\Zues4.sqf";
execVM "scripts\Zues\Zues5.sqf";
execVM "scripts\Zues\Zues6.sqf";
execVM "scripts\Zues\Zues7.sqf";

trainerIDArray = ["_SP_PLAYER_","76561198050512686","76561197981096983","76561198046761459","76561198051847668","76561198100339755","76561198105044351","76561198072105856"];

if (!(getPlayerUID player) in trainerIDArray && _Trainers then {
    ["end1", false, 0] call BIS_fnc_endMission;};
	
sleep 15;

Hint "Trainers are in charge of phase 1, listen to them and have a semi-serious attitude!";

sleep 3600;

Hint "Phase 1 has finished, Phase 2 will start in 5min";

sleep 300;

Hint "Phase 2 has started"

sleep 3600;

hint "Phase 2 has finished, Phase 3 will start in 5min";

sleep 300;

hint "Phase 3 has started"

sleep 3600;

hint "Phase 3 has finished, Training has finished. If you are required to stay more by the TRAINERS you are welcome to!";