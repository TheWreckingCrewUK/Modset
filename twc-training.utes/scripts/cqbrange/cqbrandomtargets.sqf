twc_fnc_randomCQB = {
	_PositionsIdentifyiers = nearestObjects [getmarkerpos "cqb", ["RoadCone_F"], 100];
	_OldTargets = nearestObjects [getmarkerpos "cqb", ["TargetP_Inf_F"], 100];
	{_x hideobjectglobal true}foreach _PositionsIdentifyiers;
	{DeleteVehicle _x}foreach _OldTargets;

	_TotalAmount = count _PositionsIdentifyiers;
	_HowManyTargets = round (random _TotalAmount);

	for "_i" from 3 to 30 do {
		_RandomPos = _PositionsIdentifyiers select (round(random(count _PositionsIdentifyiers)));
		 _Target = "TargetP_Inf_F" createvehicle [0,0,0];
		 _Getpos = getposatl _RandomPos;
		 _Target setpos _Getpos;
		 _GetDir = (getdir _RandomPos) + 180;
		 _Target setdir _GetDir;
	};
};
