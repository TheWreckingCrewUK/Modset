/*
* Gets all Locations including the added ones (Since they are just stored normally)
*
* Takes out all bad locations from the server variable "badTownList".
*
* Creates a trigger to start the insurgent spawning
*/

townLocationArray = nearestLocations [[worldSize/2,worldSize/2], ["NameVillage","NameCity","NameCityCapital","nameLocal"], (sqrt 2 *(worldSize / 2))];
townLocationArray = townLocationArray - badTownList;
{
	_mkr = createMarker [str (random 10000),getPos _x];
	_mkr setMarkerShape "ICON";
	_mkr setMarkerType "mil_flag";
	_mkr setMarkerColor "colorEAST";
	_mkr setMarkerText "Hostile Town";
	_trg = createTrigger ["EmptyDetector", getPos _x];
	_trg setTriggerArea [500, 500, 0, false];
	_trg setTriggerActivation ["West", "PRESENT", False];
	_trg setTriggerStatements ["(((objectParent (thisList call bis_fnc_selectRandom)) isKindOf 'air') || (getPosATL (thisList call 	bis_fnc_selectRandom)) select 2 < 25)",format["['%1',(getPos thisTrigger),5,100,1,[100,200],thisList] spawn twc_fnc_townSetup",_mkr],""];
}forEach townLocationArray;