townLocationArray = nearestLocations [getPosATL TWCServer, ["NameVillage","NameCity","NameCityCapital","nameLocal"], 80000];
{
	if(!((text _x) in badTownList))then{
		if((text _x) in specialTowns)then{
			if((text _x) == "Bastam")then{
				_trg = createTrigger ["EmptyDetector", getMarkerPos "specialBastam"];
				_trg setTriggerArea [800, 800, 0, false];
				_trg setTriggerActivation ["West", "PRESENT", False];
				_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),8,300,4,[400,800],thisList] call twc_townSetup",""];
			};
			if((text _x) == "Feruz Abad")then{
				_trg = createTrigger ["EmptyDetector", getMarkerPos "specialFeruzAbad"];
				_trg setTriggerArea [1000, 1000, 0, false];
				_trg setTriggerActivation ["West", "PRESENT", False];
				_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),10,300,6,[400,800],thisList] call twc_townSetup",""];
			};
		
		
		
		}else{	
			_trg = createTrigger ["EmptyDetector", getPos _x];
			_trg setTriggerArea [800, 800, 0, false];
			_trg setTriggerActivation ["West", "PRESENT", False];
			_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),8,300,4,[400,800],thisList] call twc_townSetup",""];
		};
	};
}forEach townLocationArray;

{
	_trg = createTrigger ["EmptyDetector", getMarkerPos _x];
	_trg setTriggerArea [800, 800, 0, false];
	_trg setTriggerActivation ["West", "PRESENT", False];
	_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),8,300,4,[400,800],thisList] call twc_townSetup",""];
}forEach ["extraNorthBastam","extraSouthShamali","extraNorthKarachinar"];