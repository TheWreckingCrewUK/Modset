//made by hartzie edited by FakeMatty

_player1 = if(!isNil "helo1")then{if(!isPlayer helo1)then{"";}else{(name helo1);};}else{"";};
_player2 = if(!isNil "helo2")then{if(!isPlayer helo2)then{"";}else{(name helo2);};}else{"";};
_player3 = if(!isNil "helo3")then{if(!isPlayer helo3)then{"";}else{(name helo3);};}else{"";};
_player4 = if(!isNil "jtac1")then{if(!isPlayer jtac1)then{"";}else{(name jtac1);};}else{"";};
_player5 = if(!isNil "fac1")then{if(!isPlayer fac1)then{"";}else{(name fac1);};}else{"";};
_player6 = if(!isNil "jet1")then{if(!isPlayer jet1)then{"";}else{(name jet1);};}else{"";};

g_playerlist = [["Air Assets", [["Wildcat/Merlin", [_player1, "Pilot"]],["BlackHawk/Osprey", [_player2, "Pilot"]],["Venom/Super-Stallion", [_player3, "Pilot"]],["A/10",[_player4, "JTAC"],[_player5, "FAC"],[_player6, "Pilot"]]]]				
				
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