
while {true} do {
	{
		if !(side _X == WEST) then{
			_x setskill ["aimingAccuracy",0.20];
			_x setskill ["aimingShake",0.20];
			_x setskill ["aimingSpeed",0.20];
		}
	}foreach allunits;
	_count = count allunits;
waituntil {(count allunits) !=_count};
};