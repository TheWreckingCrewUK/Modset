params["_unit","_pop","_wealth"];

_location = _unit getVariable "unitsHome";
_name = nearestLocation [_location,""];
_name = text _name;
_itemFound = 0;
_place = 0;

while{_itemFound == 0}do{
	_town = ((townInfoArray select _place) select 0);
	if (_town == _name)then{
		_itemFound = 1;
	}else{
		_place = _place + 1;
	};
	_attempts = _attempts + 1;
};

_oldPop = (townInfoArray select _place) select 1;
_oldWealth = (townInfoArray select _place) select 2;

_pop = (townInfoArray select _place) set [1,_oldPop + _pop];
_oldWealth = (townInfoArray select _place) set [2,_oldWealth + _wealth];
publicVariable "townInfoArray";