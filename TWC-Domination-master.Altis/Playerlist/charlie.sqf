//made by hartzie edited by FakeMatty
g_playerlist = [["Charlie USMC", [["Charlie Squad Leader", [g_p17, "Squad Leader"]], ["Fire Team 1", [g_p18, "Fire Team Leader"], [g_p19, "Rifleman"], [g_p20, "Automatic Rifleman"], [g_p21, "Assistant Automatic Rifleman"]], ["Fire Team 2", [g_p22, "Fire Team Leader"], [g_p23, "Rifleman"], [g_p24, "Automatic Rifleman"], [g_p25, "Assistant Automatic Rifleman"]], ["Fire Team 3", [g_p26, "Fire Team Leader"], [g_p27, "Rifleman"], [g_p28, "Automatic Rifleman"], [g_p29, "Medic"]]]]					
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

