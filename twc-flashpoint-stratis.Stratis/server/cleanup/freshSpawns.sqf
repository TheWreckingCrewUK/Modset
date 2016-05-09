while {true} do{
	_deadbodies = nearestObjects [getPos singlePlayerFlag, ["man"], 300];
	{if(isPlayer _x)then{_x setPos (getMarkerPos "respawn_West")};} forEach _deadbodies;
	sleep 5;
};