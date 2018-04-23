params ["_heli", "_lengthOffset"];

if (!isServer) exitWith {};

if( _heli isKindOf "Helicopter" ) then {
	_cargoRopesDeployed = _heli getVariable ["twc_rope_cargo_ropes_deployed", false];

	if(_cargoRopesDeployed) then {
		{
			ropeUnwind [_x, 3, _lengthOffset, true];
		} forEach (_heli getVariable ["twc_rope_cargo_ropes", []]);
	};
};