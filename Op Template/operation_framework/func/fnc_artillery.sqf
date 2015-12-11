 private ["_mortarn","_marker","_radius2","rounds"
        ];
         		 
    _mortarn = _this select 0;
    _marker = _this select 1;
    _radius2 = _this select 2;	
    _rounds = _this select 3;	
				 
  
				 
				 
				 
for "_i" from 0 to _rounds do {  //--- 5 = how many rounds you want fired

	_mortar = _mortarn;                //--- name of the mortar
	_center = markerPos _marker;  //--- central point around which the mortar rounds will hit
	_radius = _radius2;                       //--- random radius from the center

_pos = [
	(_center select 0) - _radius + (2 * random _radius),
	(_center select 1) - _radius + (2 * random _radius),
	0
	];

_mortar commandArtilleryFire [
					_pos,
					getArtilleryAmmo [_mortar] select 0,
					1
				];

sleep 20; //--- delay between rounds

};	 