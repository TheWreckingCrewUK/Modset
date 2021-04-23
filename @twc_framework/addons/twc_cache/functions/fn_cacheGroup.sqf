params ["_group", ["_cacheRange", -1]];

private _isDefending = _group getVariable ["TWC_Cache_Defending", false];

if (_isDefending) then {
	[
		{
			({unitReady _x} count units (_this select 1) == (count units (_this select 1)))
		}, {
			params ["_group", "_cacheRange"];

			{
				_x disableAI "path";
				_x enableSimulationGlobal false;
				_x hideObjectGlobal true;
			} forEach (units _group);

			[{ _this call TWC_Cache_fnc_infantryLoop; }, [_group, true, _cacheRange], 1] call CBA_fnc_waitAndExecute;
		}, 
		[_group, _cacheRange],
		60,
		{
			/* Code to run, if the timeout is reached (the same code) */
			params ["_group", "_cacheRange"];

			{
				_x disableAI "path";
				_x enableSimulationGlobal false;
				_x hideObjectGlobal true;
			} forEach (units _group);

			[{ _this call TWC_Cache_fnc_infantryLoop; }, [_group, true, _cacheRange], 1] call CBA_fnc_waitAndExecute;
		}
	] call CBA_fnc_waitUntilAndExecute;
} else {
	{
		if (leader _x != _x && !("Driver" in (assignedVehicleRole _x))) then {
			_x enableSimulationGlobal false;
			_x hideObjectGlobal true;
		};
	} forEach (units _group);

	[{ _this call TWC_Cache_fnc_infantryLoop; }, [_group, true, _cacheRange], 1] call CBA_fnc_waitAndExecute;
};