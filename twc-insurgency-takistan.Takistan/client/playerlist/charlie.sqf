//made by hartzie edited by FakeMatty
_player18 = if(isNil "p18")then{"No-One"}else{(name p18)};
_player19 = if(isNil "p19")then{"No-One"}else{(name p19)};
_player20 = if(isNil "p20")then{"No-One"}else{(name p20)};
_player21 = if(isNil "p21")then{"No-One"}else{(name p21)};
_player22 = if(isNil "p22")then{"No-One"}else{(name p22)};
_player23 = if(isNil "p23")then{"No-One"}else{(name p23)};
_player24 = if(isNil "p24")then{"No-One"}else{(name p24)};
_player25 = if(isNil "p25")then{"No-One"}else{(name p25)};
_player26 = if(isNil "p26")then{"No-One"}else{(name p26)};
_player27 = if(isNil "p27")then{"No-One"}else{(name p27)};
_player28 = if(isNil "p28")then{"No-One"}else{(name p28)};
_player29 = if(isNil "p29")then{"No-One"}else{(name p29)};
_player30 = if(isNil "p30")then{"No-One"}else{(name p30)};


g_playerlist = [["Charlie USMC", [["Charlie Squad Leader", [_player18, "Squad Leader"]], ["Fire Team 1", [_player19, "Fire Team Leader"], [_player20, "Rifleman"], [_player21, "Automatic Rifleman"], [_player22, "Assistant Automatic Rifleman"]], ["Fire Team 2", [_player23, "Fire Team Leader"], [_player24, "Rifleman"], [_player25, "Automatic Rifleman"], [_player26, "Assistant Automatic Rifleman"]], ["Fire Team 3", [_player27, "Fire Team Leader"], [_player28, "Machine Gunner"], [_player29, "Machine Gunner Assistant"], [_player30, "Medic"]]]]					
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

