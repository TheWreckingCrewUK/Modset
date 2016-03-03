params ["_civilianUnit", "_killer", "_intelCache"];

if (side group _killer == blufor) then {
	InsP_enemyMorale = InsP_enemyMorale - .1;
	publicVariable "InsP_enemyMorale";
	InsP_playersKilledAsCivs = InsP_playersKilledAsCivs + [name _civilianUnit];
	publicVariable "InsP_playersKilledAsCivs";
};
