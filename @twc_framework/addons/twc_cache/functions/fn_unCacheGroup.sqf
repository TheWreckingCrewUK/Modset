params ["_group", "_cacheRange"];

if (!_group getVariable ["TWC_Cache_Defending", false]) then {
	{
		_x enableSimulationGlobal true;
		_x hideObjectGlobal false;
	} forEach units _group;
} else {
	{
		if (leader _x != _x) then {
			_x enableSimulationGlobal true;
			_x hideObjectGlobal false;
			_x setPos (formationPosition _x);
			_x allowDamage false;
			
			[{ (_this select 0) allowDamage true; }, [_x], 3] call CBA_fnc_waitAndExecute;
		} else {
			_x enableSimulationGlobal true;
			_x hideObjectGlobal false;
		};
	} forEach (units _group);
};

[{ _this call TWC_Cache_fnc_infantryLoop; }, [_group, false, _cacheRange], 1] call CBA_fnc_waitAndExecute;