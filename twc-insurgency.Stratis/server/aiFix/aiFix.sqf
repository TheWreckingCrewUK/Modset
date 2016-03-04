
while {true} do {
	{
		if !(side _X == WEST) then{
			_x setskill ["aimingAccuracy",0.30];
			_x setskill ["aimingShake",0.30];
			_x setskill ["aimingSpeed",0.30];
		}
	}foreach allunits;
waituntil {!((count allunits) ==_Count)};
};
