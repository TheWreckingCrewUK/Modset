params ["_patrolmarker"];
_Check = 1;
while {_Check == 1} do {
	_Armour = nearestObjects [getmarkerpos _patrolmarker, ["RHS_M2A3_BUSKIII_wd"], 1200];  
	_ArmourCount = Count _Armour;
		if (_ArmourCount == 1) then {
			_crew1 = createGroup EAST;
			_helicopter = [getMarkerPos "EnemyBase", 180, "RHS_Mi24V_AT_vdv",_crew1] call BIS_fnc_spawnVehicle;
			[_crew1, getMarkerPos _patrolmarker, _radius] call CBA_fnc_taskPatrol;
			_Check = 0;
		};
	sleep 10;
	};