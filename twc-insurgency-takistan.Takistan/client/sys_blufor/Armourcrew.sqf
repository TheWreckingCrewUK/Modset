while {true} do{
	_Armourveh = nearestObjects [getmarkerpos "respawn_west", ["rhs_bmp3mera_msv"], 1000];
	{
		if ((isNil "P35") or (isNil "P36") or (isNil "p37")) then{
			if (((count (crew _x)) == 0)) then{
			_x lock True;
			};
		}else{
		_x lock False;
		}
	} forEach _Armourveh;
	sleep 1;
};