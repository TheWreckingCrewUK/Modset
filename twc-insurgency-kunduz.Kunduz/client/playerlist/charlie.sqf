//made by hartzie edited by Adam[TWC]
_player18 = if(!isNil "p301")then{if(!isPlayer p301)then{"";}else{(name p301);};}else{"";};
_player19 = if(!isNil "p302")then{if(!isPlayer p302)then{"";}else{(name p302);};}else{"";};
_player20 = if(!isNil "p303")then{if(!isPlayer p303)then{"";}else{(name p303);};}else{"";};
_player21 = if(!isNil "p304")then{if(!isPlayer p304)then{"";}else{(name p304);};}else{"";};
_player22 = if(!isNil "p305")then{if(!isPlayer p305)then{"";}else{(name p305);};}else{"";};
_player23 = if(!isNil "p306")then{if(!isPlayer p306)then{"";}else{(name p306);};}else{"";};
_player24 = if(!isNil "p307")then{if(!isPlayer p307)then{"";}else{(name p307);};}else{"";};
_player25 = if(!isNil "p308")then{if(!isPlayer p308)then{"";}else{(name p308);};}else{"";};
_player26 = if(!isNil "p309")then{if(!isPlayer p309)then{"";}else{(name p309);};}else{"";};
_player27 = if(!isNil "p310")then{if(!isPlayer p310)then{"";}else{(name p310);};}else{"";};
_player28 = if(!isNil "p311")then{if(!isPlayer p311)then{"";}else{(name p311);};}else{"";};
_player29 = if(!isNil "p312")then{if(!isPlayer p312)then{"";}else{(name p312);};}else{"";};
_player30 = if(!isNil "p313")then{if(!isPlayer p313)then{"";}else{(name p313);};}else{"";};


g_playerlist = [["Charlie USMC", 
	[["Charlie Squad Leader", 
		[_player18, "Squad Leader"]], 
	["Fire Team 1", 
		[_player19, "Fire Team Leader"], 
		[_player20, "Rifleman"], 
		[_player21, "Automatic Rifleman"], 
		[_player22, "Assistant Automatic Rifleman"]], 
	["Fire Team 2", 
		[_player23, "Fire Team Leader"],
		[_player24, "Rifleman"],
		[_player25, "Automatic Rifleman"], 
		[_player26, "Assistant Automatic Rifleman"]], 
	["Fire Team 3", 
		[_player27, "Fire Team Leader"], 
		[_player28, "Machine Gunner"], 
		[_player29, "Machine Gunner Assistant"], 
		[_player30, "Medic"]]
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

