//made by hartzie edited by FakeMatty
_player1 = if(!isNil "helo1")then{if(!isPlayer helo1)then{"";}else{(name helo1);};}else{"";};
_player2 = if(!isNil "helo2")then{if(!isPlayer helo2)then{"";}else{(name helo2);};}else{"";};
_player3 = if(!isNil "helo3")then{if(!isPlayer helo3)then{"";}else{(name helo3);};}else{"";};
_player4 = if(!isNil "helo4")then{if(!isPlayer helo4)then{"";}else{(name helo4);};}else{"";};
_player5 = if(!isNil "apache1")then{if(!isPlayer apache1)then{"";}else{(name apache1);};}else{"";};
_player6 = if(!isNil "apache2")then{if(!isPlayer apache2)then{"";}else{(name apache2);};}else{"";};

g_playerlist = [["Air Assets", [["Wildcat/Chinook", [_player1, "Pilot"],[_player2, "Crew Cheif"]],["BlackHawk/Chinook", [_player3, "Pilot"],[_player4, "Crew Cheif"]],["Apache", [_player5, "Pilot"],[_player6, "Gunner"]]]]				
				
				];

_bigheadline = "<t color='#CCCC00' size='1.5' shadow='1' shadowColor='#000000' align='left'>%1</t><br />";
_headline = "<t color='#CCCC00' size='1.2' shadow='1' shadowColor='#000000' align='left'>%1</t><br />";
_smallheadline = "<t color='#99CCFF' size='1.1' shadow='1' shadowColor='#000000' align='left'>%1</t><br />";
_itemEmpty = "<t color='#99FFFF' size='1' shadow='1' shadowColor='#000000' align='left'>  Offline</t><br />";
_item = "<t color='#33CC00' size='1' shadow='1' shadowColor='#000000' align='left'>  %1</t><br />";
_text = "";


{
	//systemChat format["debug:%1", _x];
	_text = "";
	_text = _text + format[_bigheadline, _x select 0];
	{
		//systemChat format["debug:%1", _x];
		_text = _text + format[_headline, _x select 0];
		for "_i" from 1 to ((count _x) -1) do {
			_temp2 = _x select _i;
			_text = _text + format [_smallheadline, _temp2 select 1];
			if (_temp2 select 0 == "") then {
				_text = _text + _itemEmpty;
			} else {
				_text = _text + format [_item, _temp2 select 0];
			};
		};
	} forEach (_x select 1);
	hint parseText _text;
	sleep 7;
} forEach g_playerList;