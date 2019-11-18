params ["_plane"];

_cargo = assignedCargo _plane;

{
	[{
		params ["_unit", "_plane"];
		moveOut _unit;
		unassignVehicle _unit;

		_chute = "NonSteerable_Parachute_F" createVehicle [0,0,0];
		_chute setPosASL (getPosASLVisual _unit);
		_chute setVectorDirAndUp [vectorDirVisual _unit, vectorUpVisual _unit];
		
		if (local _unit) then {
			_unit moveInDriver _chute;
		} else {
			[_x, _chute] remoteExecCall ["moveInDriver", _unit];
		};
		_unit assignAsDriver _chute;
	}, [_x, _plane], 0.2 * _forEachIndex] call CBA_fnc_waitAndExecute;
} forEach _cargo;