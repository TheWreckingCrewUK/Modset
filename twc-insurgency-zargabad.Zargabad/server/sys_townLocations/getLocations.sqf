townLocationArray = nearestLocations [getPosATL TWCServer, ["NameVillage","NameCity","NameCityCapital","nameLocal"], 80000];
{
	if(!((text _x) in badTownList))then{
		if((text _x) in specialTowns)then{
			if((text _x) == "Zargabad")then{
				_trg = createTrigger ["EmptyDetector", getPos _x];
				_trg setTriggerArea [400, 400, 0, false];
				_trg setTriggerActivation ["West", "PRESENT", False];
				_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),8,100,3,[300,400],thisList] call twc_townSetup",""];
			};
		
		}else{
			_trg = createTrigger ["EmptyDetector", getPos _x];
			_trg setTriggerArea [400, 400, 0, false];
			_trg setTriggerActivation ["West", "PRESENT", False];
			_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),8,100,3,[300,400],thisList] call twc_townSetup",""];
		};
	};
}forEach townLocationArray;

{
	_trg = createTrigger ["EmptyDetector", getMarkerPos _x];
	_trg setTriggerArea [400, 400, 0, false];
	_trg setTriggerActivation ["West", "PRESENT", False];
	_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),4,100,1,[300,400],thisList] call twc_townSetup",""];
}forEach ["locationA","locationB","locationC","locationD","locationE","locationF"];