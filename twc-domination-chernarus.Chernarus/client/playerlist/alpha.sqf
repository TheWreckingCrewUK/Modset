//made by hartzie edited by FakeMatty
_player1 = if(!isNil "p1")then{if(!isPlayer p1)then{"";}else{(name p1);};}else{"";};
_player2 = if(!isNil "p2")then{if(!isPlayer p2)then{"";}else{(name p2);};}else{"";};
_player3 = if(!isNil "p3")then{if(!isPlayer p3)then{"";}else{(name p3);};}else{"";};
_player4 = if(!isNil "p4")then{if(!isPlayer p4)then{"";}else{(name p4);};}else{"";};
_player5 = if(!isNil "p5")then{if(!isPlayer p5)then{"";}else{(name p5);};}else{"";};
_player6 = if(!isNil "p6")then{if(!isPlayer p6)then{"";}else{(name p6);};}else{"";};
_player7 = if(!isNil "p7")then{if(!isPlayer p7)then{"";}else{(name p7);};}else{"";};
_player8 = if(!isNil "p8")then{if(!isPlayer p8)then{"";}else{(name p8);};}else{"";};




g_playerlist = [["Alpha British Army", [["Alpha Section Leader", [_player1, "Section Leader"], [_player2, "Rifleman"], [_player3, "Grenadier"], [_player4, "Automatic Rifleman"]], ["Fire Team 2", [_player5, "2IC"], [_player6, "Machine Gunner"], [_player7, "Marksman"], [_player8, "Medic"]]]]					
				
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

