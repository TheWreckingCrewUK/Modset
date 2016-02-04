params ["_patrolmarker"];
_Check = 1;
while {_Check == 1} do {
	_Armour = nearestObjects [getmarkerpos _patrolmarker, ["JS_JC_FA18F"], 1200];  
	_ArmourCount = Count _Armour;
		if (_ArmourCount == 1) then {
			if (RadioTowerCheck == 0) then {
			_crew1 = createGroup EAST;
			_helicopter = [getMarkerPos "EnemyBase", 180, "RHS_T50_vvs_blueonblue",_crew1] call BIS_fnc_spawnVehicle;
			[_crew1, getMarkerPos _patrolmarker, _radius] call CBA_fnc_taskPatrol;
			_Check = 0;
		};
	sleep 2;
	};
};