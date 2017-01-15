//made by hartzie edited by Adam[TWC]
_player9 = if(!isNil "p201")then{if(!isPlayer p201)then{"";}else{(name p201);};}else{"";};
_player10 = if(!isNil "p202")then{if(!isPlayer p202)then{"";}else{(name p202);};}else{"";};
_player11 = if(!isNil "p203")then{if(!isPlayer p203)then{"";}else{(name p203);};}else{"";};
_player12 = if(!isNil "p204")then{if(!isPlayer p204)then{"";}else{(name p204);};}else{"";};
_player13 = if(!isNil "p205")then{if(!isPlayer p205)then{"";}else{(name p205);};}else{"";};
_player14 = if(!isNil "p206")then{if(!isPlayer p206)then{"";}else{(name p206);};}else{"";};
_player15 = if(!isNil "p207")then{if(!isPlayer p207)then{"";}else{(name p207);};}else{"";};
_player16 = if(!isNil "p208")then{if(!isPlayer p208)then{"";}else{(name p208);};}else{"";};
_player17 = if(!isNil "p209")then{if(!isPlayer p209)then{"";}else{(name p209);};}else{"";};



g_playerlist = [ ["Bravo US Army",
	[["Bravo Squad Leader", 
		[_player9, "Squad Leader"]], 
	["Fire Team 1",
		[_player10, "Fire Team Leader"], 
		[_player11, "Rifleman"], 
		[_player12, "Grenadier"], 
		[_player13, "Automatic Rifleman"]], 
	["Fire Team 2", [_player14, "Fire Team Leader"], 
		[_player15, "Automatic Rifleman"], 
		[_player16, "Marksman"], 
		[_player17, "Medic"]]
		]
	]				
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

