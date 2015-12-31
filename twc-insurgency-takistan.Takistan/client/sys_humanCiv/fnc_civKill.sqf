params ["_civilianUnit", "_killer", "_intelCache"];

if (side group _killer == blufor) then {
	InsP_enemyMorale = InsP_enemyMorale - .75;
	publicVariable "InsP_enemyMorale";
};
