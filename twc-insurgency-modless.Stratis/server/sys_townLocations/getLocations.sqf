/*
* Gets all Locations including the added ones (Since they are just stored normally)
*
* Takes out all bad locations from the server variable "badTownArray".
*
* Creates a trigger to start the insurgent spawning
*/

townLocationArray = nearestLocations [[worldSize/2,worldSize/2], ["NameVillage","NameCity","NameCityCapital","nameLocal"], (sqrt 2 *(worldSize / 2))];
townLocationArray = townLocationArray - badTownArray;
{
	_marker = createMarker [str (random 10000),getPos _x];
	_marker setMarkerShape "ICON";
	_marker setMarkerType "mil_flag";
	_marker setMarkerColor "colorEAST";
	_marker setMarkerText "Hostile Town";
	
	[getPos _x, _marker, [6,[100,200]],[5,100]] call twc_fnc_spawnTownTrigger;
}forEach townLocationArray;