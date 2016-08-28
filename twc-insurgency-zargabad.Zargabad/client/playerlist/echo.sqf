//made by hartzie edited by FakeMatty
_player1 = if(!isPlayer p21)then{""}else{(name p21)};
_player2 = if(!isPlayer p22)then{""}else{(name p22)};
_player3 = if(!isPlayer p23)then{""}else{(name p23)};
_player4 = if(!isPlayer p24)then{""}else{(name p24)};
_player5 = if(!isPlayer p25)then{""}else{(name p25)};


g_playerlist = [["Echo British Army", [["Echo Section Leader", [_player1, "Section Leader"], [_player2, "Rifleman"], [_player3, "Grenadier"], [_player4, "Automatic Rifleman"], [_player5, "Medic"]]]]					
				
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

