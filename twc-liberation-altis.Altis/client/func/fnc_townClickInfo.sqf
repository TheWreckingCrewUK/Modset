params["_pos"];
_nearestCity = nearestLocation[_pos,""];
_nearestCity = text _nearestCity;
_itemFound = 0;
_place = 0;
_maxAttempts = 100;
_attempts = 1;
while{_itemFound == 0 && _attempts < _maxAttempts}do{
	_town = ((townInfoArray select _place) select 1);
	if (_town == _nearestCity)then{
		_itemFound = 1;
	}else{
		_place = _place + 1;
	};
	_attempts = _attempts + 1;
};
_return = if(_itemFound == 1)then{
	(townInfoArray select _place);
}else{
	"Click on an apropriate City";
};
_return
