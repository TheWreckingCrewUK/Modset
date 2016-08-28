//made by hartzie edited by FakeMatty
_player1 = if(!isPlayer p6)then{""}else{(name p6)};
_player2 = if(!isPlayer p7)then{""}else{(name p7)};
_player3 = if(!isPlayer p8)then{""}else{(name p8)};
_player4 = if(!isPlayer p9)then{""}else{(name p9)};
_player5 = if(!isPlayer p10)then{""}else{(name p10)};


g_playerlist = [["Bravo US Army",      [["Bravo Squad Leader", [_player1, "Squad Leader"], [_player2, "Rifleman"], [_player3, "Grenadier"], [_player4, "Automatic Rifleman"], [_player5, "Medic"]]]]		
				
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
			_temp7 = _x select _i;
			_text = _text + format [_smallheadline, _temp7 select 1];
			if (_temp7 select 0 == "") then {
				_text = _text + _itemEmpty;
			} else {
				_text = _text + format [_item, _temp7 select 0];
			};
		};
	} forEach (_x select 1);
	hint parseText _text;
	sleep 7;
} forEach g_playerList;

