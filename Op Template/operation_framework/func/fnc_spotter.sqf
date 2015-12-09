 private ["_unit","_target","_radius","_radius","_mortarn","_marker","_radius2","rounds"
        ];
      hello = 0;   		 
    _unit = _this select 0;		
    _mortarn = _this select 1;
   	_players = [p1,p2,p3];
				 
    _counter = 0;
				 
	while {_counter == 0} do {
	_target = random 3;
	_targetc =  floor _target;
	_enemy = _target;
	_playerselect = _players select _target;
	_known = _unit knowsabout _playerselect;
	
	if (_known == 4) then {
for "_i" from 0 to 5 do {  //--- 5 = how many rounds you want fired

	_mortar = _mortarn;                //--- name of the mortar
	_center = getpos _enemy;  //--- central point around which the mortar rounds will hit
	_radius = 250;                       //--- random radius from the center

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
	_counter = _counter + 1;
	};		
	sleep 1;
	hello = hello + 1;
	
				
};				
      /*players = [p1,p2,p3];
	  target = random 3;
	  targetc =  floor target;   
	  playerselect = players select target;  
	  knowna = jj knowsabout playerselect;
	  