townLocationArray = nearestLocations [[worldSize/2,worldSize/2], ["NameVillage","NameCity","NameCityCapital","nameLocal"], 80000];
{
	if(!((text _x) in badTownList))then{
		_trg = createTrigger ["EmptyDetector", getPos _x];
		_trg setTriggerArea [500, 500, 0, false];
		_trg setTriggerActivation ["West", "PRESENT", False];
		_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)","[(getPos thisTrigger),5,100,1,[100,200],thisList] spawn twc_townSetup",""];
	};
}forEach townLocationArray;