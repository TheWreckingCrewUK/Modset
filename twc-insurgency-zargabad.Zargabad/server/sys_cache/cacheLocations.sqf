/*
* Written by [TWC] jayman
*
* Uses Arma 3 locations to find the center point for the cache.
*/

townLocationArray = nearestLocations [getPosATL player, ["NameVillage","NameCity","NameCityCapital","nameLocal"], 80000];

_posArray = [];

//First one doesn't have to check if equal to others.
while{cacheBoxAPos = townLocationArray call BIS_fnc_selectRandom; ((text cacheBoxAPos) in badTownList) || (cacheBoxAPos in _posArray)}do{cacheBoxAPos = townLocationArray call BIS_fnc_selectRandom;};

_posArray = _posArray + [cacheBoxAPos];

while{cacheBoxBPos = townLocationArray call BIS_fnc_selectRandom; ((text cacheBoxBPos) in badTownList) || (cacheBoxBPos in _posArray)}do{cacheBoxBPos = townLocationArray call BIS_fnc_selectRandom;};

_posArray = _posArray + [cacheBoxBPos];

while{cacheBoxCPos = townLocationArray call BIS_fnc_selectRandom; ((text cacheBoxCPos) in badTownList) || (cacheBoxCPos in _posArray)}do{cacheBoxCPos = townLocationArray call BIS_fnc_selectRandom;};