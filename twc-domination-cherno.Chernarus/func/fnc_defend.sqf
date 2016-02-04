 private ["_group","_leader","_radius"];
         		 
    _leader = _this select 0;
    _radius = _this select 1;			 

	[_leader, _leader, _radius] call CBA_fnc_taskDefend;