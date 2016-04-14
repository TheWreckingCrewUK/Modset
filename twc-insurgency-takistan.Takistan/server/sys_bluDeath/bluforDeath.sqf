while {true} do {

	waitUntil {InsP_bluDeath == 25};
	
	InsP_enemyMorale = InsP_enemyMorale - .1;
	publicVariable "InsP_enemyMorale";
	InsP_bluDeath = 0;
	publicVariable "InsP_bluDeath";
};