params["_vehicle"];

_num = 0;
{
	if(_x == _vehicle)then{
		_num = _num + 1;
	};
}forEach playerGarage;

playerGarage = playerGarage - [_vehicle];
while{_num > 1}do{
	playerGarage pushBack _vehicle;
	_num = _num - 1;
};