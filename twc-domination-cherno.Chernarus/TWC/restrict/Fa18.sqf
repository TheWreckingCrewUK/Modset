while {true} do{
	_Superhornets = nearestObjects [getmarkerpos "respawn_west", ["JS_JC_FA18F"], 1000];
	{
		if ((isNil "P56") or (isNil "P53")) then{
			if (((count (crew _x)) == 0)) then{
			_x lock True;
			};
		}else{
		_x lock False;
		}
	} forEach _Superhornets;
	sleep 1;
};