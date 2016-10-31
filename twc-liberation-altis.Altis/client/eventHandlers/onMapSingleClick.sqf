openMap [true, false];
hint "Click on the town you wish to learn about";
onMapSingleClick {
	_return = [_pos] call twc_fnc_townClickInfo;
	if(typeName _return == "STRING")then{
		hint _return;
	};
	if(typeName _return == "ARRAY")then{
		_location = _return select 0;
		_pop = _return select 1;
		_money = _return select 2;
		hint format["Name = %1 \n Population = %2 \n Money = %3", _location, _pop, _money];
	};
};
waitUntil {!visibleMap};
hint "Map Closed.";
onMapSingleClick {};