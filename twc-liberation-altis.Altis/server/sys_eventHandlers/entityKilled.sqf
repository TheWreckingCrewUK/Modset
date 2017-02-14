_handle = addMissionEventHandler ["EntityKilled"{
	if(side (_this select 0) == independent) then{
		systemChat "An Independent was killed";
		enemyManpower = enemyManpower -1;
		publicVariable "enemyManpower";
	};
	if(side (_this select 0) == west) then{
		systemChat "A Blufor was killed";
		friendlyManpower = friendlyManpower - 1;
		publicVariable "friendlyManpower";
	};
	if(side (_this select 0) == civilian) then{
		systemChat "A Civilian was killed";
	};
}];