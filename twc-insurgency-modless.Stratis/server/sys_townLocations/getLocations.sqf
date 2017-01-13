townLocationArray = nearestLocations [[worldSize/2,worldSize/2], ["NameVillage","NameCity","NameCityCapital","nameLocal"], 80000];
{
	if(!((text _x) in badTownList))then{
		_mkr = createMarker [str (random 10000),getPos _x];
		_mkr setMarkerShape "ICON";
		_mkr setMarkerType "mil_flag";
		_mkr setMarkerColor "colorEAST";
		_mkr setMarkerText "Hostile Town";
		_trg = createTrigger ["EmptyDetector", getPos _x];
		_trg setTriggerArea [500, 500, 0, false];
		_trg setTriggerActivation ["West", "PRESENT", False];
		_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call bis_fnc_selectRandom)) select 2 < 25)",format["['%1',(getPos thisTrigger),5,100,1,[100,200],thisList] spawn twc_fnc_townSetup",_mkr],""];
	};
}forEach townLocationArray;