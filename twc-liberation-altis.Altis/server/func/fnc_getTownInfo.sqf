params["_pos"];

_nearestCity = nearestLocation[_pos,""];
_nearestCity = text _nearestCity;
_itemFound = 0;
_place = 0;

while{_itemFound == 0}do{
	_town = ((townInfoArray select _place) select 0);
	if (_town == _nearestCity)then{
		_itemFound = 1;
	}else{
		_place = _place + 1;
	};
	_attempts = _attempts + 1;
};
_return = (townInfoArray select _place);

_return
