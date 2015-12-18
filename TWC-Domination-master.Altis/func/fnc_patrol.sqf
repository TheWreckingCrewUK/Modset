 private ["_group","_marker","_radius"
        ];
         		 
    _group = _this select 0;
    _marker = _this select 1;
    _radius = _this select 2;			 

   [_group, getmarkerpos _marker, _radius, 7, "MOVE", "RELAXED", "YELLOW", "LIMITED", "COLUMN"] call CBA_fnc_taskPatrol;		 