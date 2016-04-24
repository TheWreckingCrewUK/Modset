isColdwar = false;

{	
	if (typeof _x == "ColdWar_Rifleman") then{
		isColdwar = true;
	};
}foreach allunits;

sleep 3;

{
	if isColdwar then{
		if (!(side _x == WEST)) then{
			_x setskill ["aimingAccuracy",0.3];
			_x setskill ["aimingShake",0.3];
			_x setskill ["aimingSpeed",0.3];
		};
	};
}foreach allunits;