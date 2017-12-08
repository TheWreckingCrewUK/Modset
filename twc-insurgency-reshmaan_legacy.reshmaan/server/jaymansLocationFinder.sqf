/*
Written by [TWC] jayman.
This is a super awesome script that when run in the debug console marks the locations with a black square marker as well as copy them to your clipboard. It also creates a variable with the name of all of the locations. You can then copy paste them to create a locations, or bad locations array for the mission. This is obviously intended for editor use only.
*/

_string = "This Starts the List";
locationNameArray = [];
_br = toString[13,10];
townLocationArray = nearestLocations [getPosATL player, ["NameVillage","NameCity","NameCityCapital","nameLocal"], 80000];
{
	_markerstr = createMarker [str (random 10000), (getPos _x)];
	_markerstr setMarkerShape "RECTANGLE";
	_markerstr setMarkerSize [100,100];
	
	
	_string = _string + _br + (text _x);
	
	locationNameArray = locationNameArray + [(text _x)];
	
}forEach townLocationArray;
copyToClipBoard _string;
/*
Here is the return of Takistan:
*
*
This Starts the List
Landay
Chak Chak
Hazar Bagh
Ahmaday
Huzrutimam
Chardarakht
Chaman
Loy Manara oilfield
Jaza
airfield
Sultansafe
Loy Manara
Shukurkalay
Sar-e Sang pass
Darbang pass
Naran Darre pass
Sakhe
Jilavur
Khushab
Timurkalay
Garmsar
Kakaru
Karachinar
Ravanay
Bala pass
Anar
Garmarud
Mulladost
Feruz Abad
mine
Imarat
Zavarak
Falar
Nur
Naygul valley
Sagram
Gospandi
Nagara
Nar
Par-e Siah oilfield
Bastam
Lalezar
Nagara-1 oilfield
Shamali
Rasman
military base
*/


_position = position player; 
_radius = 5000; 
_options = "+trees +forest*10 -meadow"; 
_result = selectBestPlaces [_position, _radius, _options, (_radius / 10) min 500, 100]; 
_pos = _result select 0 select 0;  
player setPos _pos;