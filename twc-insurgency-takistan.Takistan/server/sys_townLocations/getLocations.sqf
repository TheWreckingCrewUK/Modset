townLocationArray = nearestLocations [getPosATL TWCServer, ["NameVillage","NameCity","NameCityCapital","nameLocal"], 80000];
{
	if(!((text _x) in badTownList))then{
		if((text _x) in specialTowns)then{
			if((text _x) == "Bastam")then{
				_trg = createTrigger ["EmptyDetector", getMarkerPos "specialBastam"];
				_trg setTriggerArea [800, 800, 0, false, 35];
				_trg setTriggerActivation ["West", "PRESENT", False];
				_trg setTriggerStatements ["this","[(getPos thisTrigger),8,300,4,[400,800]] call twc_townSetup",""];
			};
			if((text _x) == "Feruz Abad")then{
				_trg = createTrigger ["EmptyDetector", getMarkerPos "specialFeruzAbad"];
				_trg setTriggerArea [800, 800, 0, false, 35];
				_trg setTriggerActivation ["West", "PRESENT", False];
				_trg setTriggerStatements ["this","[(getPos thisTrigger),10,300,6,[400,800]] call twc_townSetup",""];
			};
		
		
		
		}else{	
			_trg = createTrigger ["EmptyDetector", getPos _x];
			_trg setTriggerArea [800, 800, 0, false ,35];
			_trg setTriggerActivation ["West", "PRESENT", False];
			_trg setTriggerStatements ["this","[(getPos thisTrigger),8,300,4,[400,800]] call twc_townSetup",""];
		};
	};
	
}forEach townLocationArray;