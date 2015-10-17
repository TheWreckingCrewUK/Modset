params ["_civilianUnit", "_killer", "_intelCache"];

if (side group _killer == blufor) then {
	InsP_enemyMorale = InsP_enemyMorale - .5;
	publicVariable "InsP_enemyMorale";
};
