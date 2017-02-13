params["_location"];

_name = text _location;

_itemFound = 0;
_place = 0;
_attempts = 0;

while{_itemFound == 0}do{
	_town = ((townInfoArray select _place) select 1);
	if (_town == _name)then{
		_itemFound = 1;
	}else{
		_place = _place + 1;
	};
	_attempts = _attempts + 1;
	if(_attempts > 100)exitWith{hint "Failure on getTowonInfo. Exiting"};
};
_return = (townInfoArray select _place);

_return
