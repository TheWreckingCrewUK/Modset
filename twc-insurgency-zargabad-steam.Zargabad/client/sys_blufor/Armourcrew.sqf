while {true} do{
	_Armourveh = nearestObjects [getmarkerpos "respawn_west", ["RHS_M2A3_BUSKIII"], 1000];
	{
		if ((isNil "P36") or (isNil "P37") or (isNil "p38")) then{
			if (((count (crew _x)) == 0)) then{
			_x lock True;
			};
		}else{
		_x lock False;
		}
	} forEach _Armourveh;
	sleep 1;
};