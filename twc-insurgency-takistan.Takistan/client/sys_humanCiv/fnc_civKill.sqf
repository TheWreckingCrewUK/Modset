params ["_civilianUnit", "_killer", "_intelCache"];

InsP_enemyMorale = InsP_enemyMorale - .1;
publicVariable "InsP_enemyMorale";
InsP_playersKilledAsCivs = InsP_playersKilledAsCivs + [getPlayerUID player];
publicVariable "InsP_playersKilledAsCivs";
["End2", false, 0] call BIS_fnc_endMission;
