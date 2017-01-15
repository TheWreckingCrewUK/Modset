//made by hartzie edited by Adam[TWC]
_player1 = if(!isNil "p101")then{if(!isPlayer p101)then{"";}else{(name p101);};}else{"";};
_player2 = if(!isNil "p102")then{if(!isPlayer p102)then{"";}else{(name p102);};}else{"";};
_player3 = if(!isNil "p103")then{if(!isPlayer p103)then{"";}else{(name p103);};}else{"";};
_player4 = if(!isNil "p104")then{if(!isPlayer p104)then{"";}else{(name p104);};}else{"";};
_player5 = if(!isNil "p105")then{if(!isPlayer p105)then{"";}else{(name p105);};}else{"";};
_player6 = if(!isNil "p106")then{if(!isPlayer p106)then{"";}else{(name p106);};}else{"";};
_player7 = if(!isNil "p107")then{if(!isPlayer p107)then{"";}else{(name p107);};}else{"";};
_player8 = if(!isNil "p108")then{if(!isPlayer p108)then{"";}else{(name p108);};}else{"";};

g_playerlist = [["Alpha British Army", 
	[["Charlie", 
		[_player1, "Section Leader"], 
		[_player2, "Rifleman"], 
		[_player3, "Grenadier"], 
		[_player4, "Automatic Rifleman"]],
	["Delta", 
		[_player5, "2IC"], 
		[_player6, "Machine Gunner"], 
		[_player7, "Marksman"], 
		[_player8, "Medic"]]
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

