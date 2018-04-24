params ["_heli", "_lengthOffset"];

if (local _heli) then {
	if( _heli isKindOf "Helicopter" ) then {
		_cargoRopesDeployed = _heli getVariable ["twc_rope_cargo_ropes_deployed", false];
		if(_cargoRopesDeployed) then {
			{
				scopeName "ropeloop";
				if (ropeLength _x <= 2) then {
					[_heli] call TWC_Ropes_fnc_releaseCargo;
					breakOut "ropeloop";
				} else {
					ropeUnwind [_x, 3, _lengthOffset, true];
				};
			} forEach (_heli getVariable ["twc_rope_cargo_ropes",[]]);
		};
	};
} else {
	_this call remoteExecCall [TWC_Ropes_fnc_shortenRopes, _heli];
};